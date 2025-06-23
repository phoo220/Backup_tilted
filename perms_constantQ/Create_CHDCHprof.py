import pandas as pd
import os
import numpy as np
 
# Parameters
PBHP = 160
IBHP = 240

output_file = 'Profile_wind.INC'
if os.path.exists(output_file):
    os.remove(output_file)

# Initial charging period is three days at average wind value of 5 kW
Ch_PW = 60 # in KW
Dch_PW = 40
IN_DAYS = 0
# Start from equilibrium
delta_eq = 4.37 # in bar
IN_RATE = Ch_PW*10**3*10**(-5)*3600*24/(delta_eq) #in m3/day

# Read Excel file with wind power
excel_file = 'WIND_POWER2.xlsx'
df = pd.read_excel(excel_file)
day = df['Day']
day = np.array(day)
power = df['Power'] 
power = np.array(power) # in W

# How many days the simulation runs
DAYS = 1826


with open(output_file, 'w') as file:
    
    for i in range(DAYS):
        if (power[i] <= Dch_PW):
            file.write(f"-- Discharge day {day[i]}: \n\n")
            file.write(f"WCONPROD\n\t'BOTTOM'\t'OPEN'\t'WRAT'\t1*\t0\t1*\t1*\t1*\t{PBHP+5}/\n/\n")
            file.write(f"WCONINJE\n\t'TOP'\tWAT\t'OPEN'\tRATE\t0\t1*\t{IBHP-5}/\n/\n")
            file.write(f"PYACTION\n\t'{i+1}DCH0B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_DCH{i+1}.py'\t/\n\n")
            file.write(f"TSTEP\n  0.01 /\n\n")
            file.write(f"PYACTION\n\t'{i+1}DCH1B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_DCH{i+1}.py'\t/\n\n")
            file.write(f"TSTEP\n  0.99 /\n\n")
        
        if (power[i] >= Ch_PW):
            file.write(f"-- Charge day {day[i]}:\n\n")
            file.write(f"WCONINJE\n\t'BOTTOM'\tWAT\t'OPEN'\tRATE\t0\t1*\t{IBHP}/\n/\nWCONPROD\n\t'TOP'\t'OPEN'\t'WRAT'\t1*\t0\t1*\t1*\t1*\t{PBHP}/\n/\n")
            file.write(f"PYACTION\n\t'{i+1}CH0B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_CH{i+1}.py'\t/\n\n")
            file.write(f"TSTEP\n  0.01 /\n\n")
            file.write(f"PYACTION\n\t'{i+1}CH1B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_CH{i+1}.py'\t/\n\n")
            file.write(f"TSTEP\n  0.99 /\n\n")
        
        if (Ch_PW > power[i]> Dch_PW):
            file.write(f"-- Closed day {day[i]}:\n\n")
            file.write(f"WCONINJE\n\t'BOTTOM'\tWAT\t'OPEN'\tRATE\t0\t1*\t{IBHP}/\n/\nWCONPROD\n\t'TOP'\t'OPEN'\t'WRAT'\t1*\t0\t1*\t1*\t1*\t{PBHP}/\n/\n")
            file.write(f"TSTEP\n  1.0 /\n\n")

for i in range(DAYS):
    if(power[i] < Dch_PW):
        output_file3 = f"./pyaction/PYACTION_DCH{i+1}.py"
        if os.path.exists(output_file3):
            os.remove(output_file3)
        with open(output_file3, 'w') as file:
            file.write(f"import datetime \n\n\n\n")
            file.write(f"def run(ecl_state, schedule, report_step, summary_state, actionx_callback):\n\n")
            file.write(f"\tPR1 = summary_state[\"RPR:1\"]\n\tPR2 = summary_state[\"RPR:2\"]\n\tdelta = PR2-PR1\n\n")
            file.write(f"\tpower = {Dch_PW - power[i]}\n\trate = power*10**3*10**(-5)*3600*24/(delta-{delta_eq})\n\tdeltaLIM=(rate + 724.99)/165.645\n\n")
            file.write(f"\tkw_open = f\"\"\"\n\tWCONPROD\n\t'BOTTOM'\t'OPEN'\t'WRAT'\t1*\t{{rate}}\t1*\t1*\t1*\t{PBHP+5}/\n\t/\n\t")
            file.write(f"WCONINJE\n\t'TOP'\tWAT\t'OPEN'\tRATE\t{{rate}}\t1*\t{IBHP-5}/\n\t/ \"\"\"\n\n")
            file.write(f"\tkw_close = f\"\"\"\n\tWCONPROD\n\t'BOTTOM'\t'OPEN'\t'WRAT'\t1*\t0\t1*\t1*\t1*\t{PBHP+5}/\n\t/\n\t")
            file.write(f"WCONINJE\n\t'TOP'\tWAT\t'OPEN'\tRATE\t0\t1*\t{IBHP-5}/\n\t/ \"\"\"\n\n")
            file.write(f"\tif(delta > deltaLIM):\n\t\tschedule.insert_keywords(kw_open, report_step)\n\t\tprint(f\'Discharging at rate {{rate}}\')\n\n")
            file.write(f"\tif (not delta > deltaLIM):\n\t\tschedule.insert_keywords(kw_close, report_step)\n\t\tprint(\'No discharge possible\')\n\n")
    if (power[i] > Ch_PW):
        output_file4 = f"./pyaction/PYACTION_CH{i+1}.py"
        if os.path.exists(output_file4):
            os.remove(output_file4)
        with open(output_file4, 'w') as file:
            file.write(f"import datetime \n\n\n\n")
            file.write(f"def run(ecl_state, schedule, report_step, summary_state, actionx_callback):\n\n")
            file.write(f"\tPR1 = summary_state[\"RPR:1\"]\n\tPR2 = summary_state[\"RPR:2\"]\n\tdelta = PR2-PR1\n\n")
            file.write(f"\tpower = {power[i]-Ch_PW}\n\trate = power*10**3*10**(-5)*3600*24/(delta)\n\n")
            file.write(f"\tkw_charge = f\"\"\"\n\tWCONPROD\n\t'TOP'\t'OPEN'\t'WRAT'\t1*\t{{rate}}\t1*\t1*\t1*\t{PBHP}/\n\t/\n\t")
            file.write(f"WCONINJE\n\t'BOTTOM'\tWAT\t'OPEN'\tRATE\t{{rate}}\t1*\t{IBHP}/\n\t/ \"\"\"\n\n")
            file.write(f"\tschedule.insert_keywords(kw_charge, report_step)\n\tprint('Charging')\n\n")
