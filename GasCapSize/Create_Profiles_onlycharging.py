import pandas as pd
import os
import numpy as np
 
# Parameters
PBHP = 148
IBHP = 260
GCRL = 2
TSTEP = 0.2
limit = 1500
total_days = 100
deltat = 20
num_cycles = total_days // (2 * deltat)

output_file = 'Profile_2.INC'
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
            file.write(f"TSTEP\n  0.2 /\n\n")
            file.write(f"PYACTION\n\t'{day_number}CH1B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_CH.py'\t/\n\n")
            file.write(f"TSTEP\n  0.2 /\n\n")
            for j in range(3):
                file.write(f"PYACTION\n\t'{day_number}CH{j+2}B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_CH.py'\t/\n\n")
                file.write(f"TSTEP\n  0.2 /\n\n")
    
        #Charging days
        file.write(f"WCONINJE\n\t'BOTTOM'\tWAT\t'OPEN'\tRATE\t0\t1*\t{IBHP}/\n/\n")
        file.write(f"WCONPROD\n\t'TOP'\t'OPEN'\t'WRAT'\t1*\t0\t1*\t1*\t1*\t{PBHP}/\n/\n")
        for i in range(deltat):
            day_number = cycle * 2 * deltat + deltat + i + 1
            file.write(f"-- Charge day {day_number}:\n\n")
            file.write(f"PYACTION\n\t'{day_number}CH0B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_CH.py'\t/\n\n")
            file.write(f"TSTEP\n  0.2 /\n\n")
            file.write(f"PYACTION\n\t'{day_number}CH1B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_CH.py'\t/\n\n")
            file.write(f"TSTEP\n  0.2 /\n\n")
            for j in range(3):
                file.write(f"PYACTION\n\t'{day_number}CH{j+2}B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_CH.py'\t/\n\n")
                file.write(f"TSTEP\n  0.2 /\n\n")
                
    remaining_days = total_days % (2 * deltat)
    if remaining_days > 0:
        remaining_charging = min(remaining_days, deltat)
        file.write(f"WCONINJE\n\t'BOTTOM'\tWAT\t'OPEN'\tRATE\t0\t1*\t{IBHP}/\n/\n")
        file.write(f"WCONPROD\n\t'TOP'\t'OPEN'\t'WRAT'\t1*\t0\t1*\t1*\t1*\t{PBHP}/\n/\n")
        for i in range(remaining_charging):
            day_number = num_cycles * 2 * deltat + i + 1
            file.write(f"-- Charge day {day_number}:\n\n")
            file.write(f"PYACTION\n\t'{day_number}CH0B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_CH.py'\t/\n\n")
            file.write(f"TSTEP\n  0.2 /\n\n")
    
        remaining_discharging = remaining_days - remaining_charging
        file.write(f"WCONINJE\n\t'BOTTOM'\tWAT\t'OPEN'\tRATE\t0\t1*\t{IBHP}/\n/\n")
        file.write(f"WCONPROD\n\t'TOP'\t'OPEN'\t'WRAT'\t1*\t0\t1*\t1*\t1*\t{PBHP}/\n/\n")
        for i in range(remaining_charging):
            day_number = num_cycles * 2 * deltat + deltat + i + 1
            file.write(f"-- Charge day {day_number}:\n\n")
            file.write(f"PYACTION\n\t'{day_number}CH0B'\t'SINGLE'\t/\n\t'./pyaction/PYACTION_CH.py'\t/\n\n")
            file.write(f"TSTEP\n  0.2 /\n\n")