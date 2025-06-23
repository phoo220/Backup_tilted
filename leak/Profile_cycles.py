import pandas as pd
import os
import numpy as np
 
# Parameters
PBHP = 148
IBHP = 260
GCRL = 2
TSTEP = 0.5
limit = 1500
total_days = 1000
deltat = 20
num_cycles = total_days // (2 * deltat)

# Initial charging period is three days at average wind value of 5 kW
Av_wind = 50 # in KW
#IN_DAYS = 20 # DAYS
# Start from equilibrium
delta_eq = 4.37 # in bar
#IN_RATE = Av_wind*10**3*10**(-5)*3600*24/(delta_eq) #in m3/day

output_file = 'Profile_cycles.INC'
if os.path.exists(output_file):
    os.remove(output_file)

with open(output_file, 'w') as file:
    for cycle in range(num_cycles):
        #Charging days
        file.write(f"WCONINJE\n\t'BOTTOM'\tWAT\t'OPEN'\tRATE\t0\t1*\t{IBHP}/\n/\n")
        file.write(f"WCONPROD\n\t'TOP'\t'OPEN'\t'WRAT'\t1*\t0\t1*\t1*\t1*\t{PBHP}/\n/\n")
        for i in range(deltat):
            day_number = cycle * 2 * deltat + i + 1
            file.write(f"-- Charge day {day_number}:\n\n")
            file.write(f"PYACTION\n\t'{day_number}CH0B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_CH.py'\t/\n\n")
            file.write(f"TSTEP\n  0.5 /\n\n")
            file.write(f"PYACTION\n\t'{day_number}CH1B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_CH.py'\t/\n\n")
            file.write(f"TSTEP\n  0.5 /\n\n")
            for j in range(0):
                file.write(f"PYACTION\n\t'{day_number}CH{j+2}B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_CH.py'\t/\n\n")
                file.write(f"TSTEP\n  0.5 /\n\n")
    
        #Discharging days
        file.write(f"WCONPROD\n\t'BOTTOM'\t'OPEN'\t'WRAT'\t1*\t0\t1*\t1*\t1*\t{PBHP+5}/\n/\n")
        file.write(f"WCONINJE\n\t'TOP'\tWAT\t'OPEN'\tRATE\t0\t1*\t{IBHP-5}/\n/\n")
        for i in range(deltat):
            day_number = cycle * 2 * deltat + deltat + i + 1
            file.write(f"-- Discharge day {day_number}:\n\n")
            file.write(f"PYACTION\n\t'{day_number}DCH1B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_DCH.py'\t/\n\n")
            file.write(f"TSTEP\n  0.5 /\n\n")
            file.write(f"PYACTION\n\t'{day_number}DCH1B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_DCH.py'\t/\n\n")
            file.write(f"TSTEP\n  0.5 /\n\n")
            for j in range(0):
                file.write(f"PYACTION\n\t'{day_number}DCH{j+2}B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_DCH.py'\t/\n\n")
                file.write(f"TSTEP\n  0.5 /\n\n")
                
    remaining_days = total_days % (2 * deltat)
    if remaining_days > 0:
        remaining_charging = min(remaining_days, deltat)
        file.write(f"WCONINJE\n\t'BOTTOM'\tWAT\t'OPEN'\tRATE\t0\t1*\t{IBHP}/\n/\n")
        file.write(f"WCONPROD\n\t'TOP'\t'OPEN'\t'WRAT'\t1*\t0\t1*\t1*\t1*\t{PBHP}/\n/\n")
        for i in range(remaining_charging):
            day_number = num_cycles * 2 * deltat + i + 1
            file.write(f"-- Charge day {day_number}:\n\n")
            file.write(f"PYACTION\n\t'{day_number}CH0B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_CH.py'\t/\n\n")
            file.write(f"TSTEP\n  0.5 /\n\n")
    
        remaining_discharging = remaining_days - remaining_charging
        file.write(f"WCONPROD\n\t'BOTTOM'\t'OPEN'\t'WRAT'\t1*\t0\t1*\t1*\t1*\t{PBHP+5}/\n/\n")
        file.write(f"WCONINJE\n\t'TOP'\tWAT\t'OPEN'\tRATE\t0\t1*\t{IBHP-5}/\n/\n")
        for i in range(remaining_discharging):
            day_number = num_cycles * 2 * deltat + deltat + i + 1
            file.write(f"-- Discharge day {day_number}:\n\n")
            file.write(f"PYACTION\n\t'{day_number}DCH0B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_DCH.py'\t/\n\n")
            file.write(f"TSTEP\n  0.5 /\n\n")