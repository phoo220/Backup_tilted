import pandas as pd
import os
import numpy as np
 
# Parameters
PBHP = 140
IBHP = 260
GCRL = 2
TSTEP = 1.0
limit = 1500
DCH_Days = 300
CH_Days = 200
#num_cycles = total_days // (2 * deltat)

# Start from equilibrium
power = 20
IN_DAYS = 10
delta_eq = 4.37 # in bar
IN_RATE = power*10**3*10**(-5)*3600*24/(delta_eq) #in m3/day

output_file = 'Profile_1.INC'
if os.path.exists(output_file):
    os.remove(output_file)

output_file2 = f"./pyaction/PYACTION_CHIN.py"
if os.path.exists(output_file2):
    os.remove(output_file2)

with open(output_file2, 'w') as file:
    file.write(f"import datetime \n\n\n\n")
    file.write(f"def run(ecl_state, schedule, report_step, summary_state, actionx_callback):\n\n")
    file.write(f"\tPR1 = summary_state[\"RPR:1\"]\n\tPR2 = summary_state[\"RPR:2\"]\n\tdelta = PR2-PR1\n\n")
    file.write(f"\tpower = {power}\n\trate = power*10**3*10**(-5)*3600*24/(delta)\n\n")
    file.write(f"\tkw_charge = f\"\"\"\n\tWCONPROD\n\t'TOP'\t'OPEN'\t'WRAT'\t1*\t{{rate}}\t1*\t1*\t1*\t{PBHP}/\n\t/\n\t")
    file.write(f"WCONINJE\n\t'BOTTOM'\tWAT\t'OPEN'\tRATE\t{{rate}}\t1*\t{IBHP}/\n\t/ \"\"\"\n\n")
    file.write(f"\tschedule.insert_keywords(kw_charge, report_step)\n\tprint('Charging')\n\n")

with open(output_file, 'w') as file:
    file.write(f"-- Initial charge period -- \n\n")
    file.write(f"WCONINJE\n\t'BOTTOM'\tWAT\t'OPEN'\tRATE\t{IN_RATE}\t1*\t{IBHP}/\n/\nWCONPROD\n\t'TOP'\t'OPEN'\t'WRAT'\t1*\t{IN_RATE}\t1*\t1*\t1*\t{PBHP}/\n/\n")
    file.write(f"PYACTION\n\t'CHIN1'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_CHIN.py'\t/\n\n")
    file.write(f"TSTEP\n  1.0 /\n\n")
    for i in range(IN_DAYS*1-1):
        file.write(f"PYACTION\n\t'CHIN{i+2}'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_CHIN.py'\t/\n\n")
        file.write(f"TSTEP\n  1.0 /\n\n")
    for cycle in range(CH_Days):
        #Charging days
        file.write(f"WCONINJE\n\t'BOTTOM'\tWAT\t'OPEN'\tRATE\t{IN_RATE}\t1*\t{IBHP}/\n/\n")
        file.write(f"WCONPROD\n\t'TOP'\t'OPEN'\t'WRAT'\t1*\t{IN_RATE}\t1*\t1*\t1*\t{PBHP}/\n/\n")
        file.write(f"-- Charge day {CH_Days}:\n\n")
        file.write(f"PYACTION\n\t'{CH_Days}CH0B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_CH.py'\t/\n\n")
        file.write(f"TSTEP\n  1.0 /\n\n")
        for i in range(deltat):
            day_number = cycle * 2 * deltat + i + 1
            file.write(f"-- Charge day {day_number}:\n\n")
            file.write(f"PYACTION\n\t'{day_number}CH0B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_CH.py'\t/\n\n")
            file.write(f"TSTEP\n  1.0 /\n\n")
            #file.write(f"PYACTION\n\t'{day_number}CH1B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_CH.py'\t/\n\n")
            #file.write(f"TSTEP\n  1.0 /\n\n")
            #for j in range(0):
            #    file.write(f"PYACTION\n\t'{day_number}CH{j+2}B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_CH.py'\t/\n\n")
            #    file.write(f"TSTEP\n  1.0 /\n\n")
    
        #Discharging days
        file.write(f"PYACTION\n\t'{day_number}DCH0B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_DCH.py'\t/\n\n")
        file.write(f"WCONPROD\n\t'BOTTOM'\t'OPEN'\t'WRAT'\t1*\t0\t1*\t1*\t1*\t{PBHP+5}/\n/\n")
        file.write(f"WCONINJE\n\t'TOP'\tWAT\t'OPEN'\tRATE\t0\t1*\t{IBHP-5}/\n/\n")
        for i in range(deltat):
            day_number = cycle * 2 * deltat + deltat + i + 1
            file.write(f"-- Discharge day {day_number}:\n\n")
            file.write(f"WCONINJE\n\t'TOP'\tWAT\t'OPEN'\tRATE\t0\t1*\t{IBHP-5}/\n/\n")
            file.write(f"TSTEP\n  1.0 /\n\n")
            #file.write(f"PYACTION\n\t'{day_number}DCH1B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_DCH.py'\t/\n\n")
            #file.write(f"TSTEP\n  1.0 /\n\n")
            #for j in range(0):
            #    file.write(f"PYACTION\n\t'{day_number}DCH{j+2}B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_DCH.py'\t/\n\n")
            #    file.write(f"TSTEP\n  1.0 /\n\n")
                
    remaining_days = total_days % (2 * deltat)
    if remaining_days > 0:
        remaining_charging = min(remaining_days, deltat)
        file.write(f"WCONINJE\n\t'BOTTOM'\tWAT\t'OPEN'\tRATE\t0\t1*\t{IBHP}/\n/\n")
        file.write(f"WCONPROD\n\t'TOP'\t'OPEN'\t'WRAT'\t1*\t0\t1*\t1*\t1*\t{PBHP}/\n/\n")
        for i in range(remaining_charging):
            day_number = num_cycles * 2 * deltat + i + 1
            file.write(f"-- Charge day {day_number}:\n\n")
            file.write(f"PYACTION\n\t'{day_number}CH0B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_CH.py'\t/\n\n")
            file.write(f"TSTEP\n  1.0 /\n\n")
    
        remaining_discharging = remaining_days - remaining_charging
        file.write(f"WCONPROD\n\t'BOTTOM'\t'OPEN'\t'WRAT'\t1*\t0\t1*\t1*\t1*\t{PBHP+5}/\n/\n")
        file.write(f"WCONINJE\n\t'TOP'\tWAT\t'OPEN'\tRATE\t0\t1*\t{IBHP-5}/\n/\n")
        for i in range(remaining_discharging):
            day_number = num_cycles * 2 * deltat + deltat + i + 1
            file.write(f"-- Discharge day {day_number}:\n\n")
            file.write(f"PYACTION\n\t'{day_number}DCH0B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_DCH.py'\t/\n\n")
            file.write(f"TSTEP\n  1.0 /\n\n")