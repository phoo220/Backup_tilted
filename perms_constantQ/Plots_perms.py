import os
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from ecl.summary import EclSum
from datetime import date, datetime, timedelta

def calculate_power(SummaryData):
    afTime = SummaryData.numpy_vector("TIME")
    interger_mask =(afTime % 1 == 0)
    afTime = afTime[interger_mask]
    WPR_TOP = SummaryData.numpy_vector("WWPR:TOP")[interger_mask]
    WPR_BOTTOM = SummaryData.numpy_vector("WWPR:BOTTOM")[interger_mask]
    PR_TOP = SummaryData.numpy_vector("RPR:1")[interger_mask]
    PR_BOTTOM = SummaryData.numpy_vector("RPR:2")[interger_mask]
    DeltaP = PR_BOTTOM - PR_TOP
    #Gas Cap Size
    FGIPR = SummaryData.numpy_vector("FGIPR")[0]
    PV_storage = 1100*1100*80*0.3*0.99243
    GasCapsize = (FGIPR/PV_storage)*100
    #Charge and Discharge Power
    Pw_ch = []
    Pw_dch = []
    for i in range(len(afTime)):
        if i == 0:
            Pw_ch.append(4.37*WPR_TOP[i]*10**5/(24*3600)*10**(-3)) ## kW
            Pw_dch.append(0)
        else:
            Pw_ch.append(DeltaP[i-1]*WPR_TOP[i]*10**5/(24*3600)*10**(-3))
            Pw_dch.append((DeltaP[i-1]-4.37)*WPR_BOTTOM[i]*10**5/(24*3600)*10**(-3))  ##kW
    Pw_ch=np.array(Pw_ch)
    Pw_dch=np.array(Pw_dch)
    
    #Efficiency
    Efficiency = 100 * np.sum(Pw_dch)/np.sum(Pw_ch)
    Capacity = (np.sum(Pw_ch)/1000000)*365*5
    Discharge = (np.sum(Pw_dch)/1000000)*365*5
    return afTime, PR_TOP, PR_BOTTOM, DeltaP, Pw_ch, Pw_dch, GasCapsize, Efficiency, Capacity, Discharge

SummaryData1 = EclSum('./PERM0_NOGAS_20DAYS' + '.UNSMRY')
SummaryData2 = EclSum('./PERM0_GAS_20DAYS' + '.UNSMRY')
SummaryData3 = EclSum('./PERM1_NOGAS_20DAYS' + '.UNSMRY')
SummaryData4 = EclSum('./PERM1_GAS_20DAYS' + '.UNSMRY')
SummaryData5 = EclSum('./PERM2_NOGAS_20DAYS' + '.UNSMRY')
SummaryData6 = EclSum('./PERM2_GAS_20DAYS' + '.UNSMRY')
SummaryData7 = EclSum('./5YEARS_NOGAS_MIDBHP_20DAYS' + '.UNSMRY')
SummaryData8 = EclSum('./5YEARS_GAS_MIDBHP_20DAYS' + '.UNSMRY')
SummaryData9 = EclSum('./PERM3_NOGAS_20DAYS' + '.UNSMRY')
SummaryData10 = EclSum('./PERM3_GAS_20DAYS' + '.UNSMRY')

SummaryData11 = EclSum('./PERM0_NOGAS' + '.UNSMRY')
SummaryData12 = EclSum('./PERM0_GAS' + '.UNSMRY')
SummaryData13 = EclSum('./PERM1_NOGAS' + '.UNSMRY')
SummaryData14 = EclSum('./PERM1_GAS' + '.UNSMRY')
SummaryData15 = EclSum('./PERM2_NOGAS' + '.UNSMRY')
SummaryData16 = EclSum('./PERM2_GAS' + '.UNSMRY')
SummaryData17 = EclSum('./5YEARS_NOGAS_MIDBHP' + '.UNSMRY')
SummaryData18 = EclSum('./5YEARS_GAS_MIDBHP' + '.UNSMRY')
SummaryData19 = EclSum('./PERM3_NOGAS' + '.UNSMRY')
SummaryData20 = EclSum('./PERM3_GAS' + '.UNSMRY')

afTime1, PR_TOP1, PR_BOTTOM1,  DeltaP1, Pw_ch1, Pw_dch1, GasCapsize1, Efficiency1, Capacity1, Discharge1 = calculate_power(SummaryData1)
afTime2, PR_TOP2, PR_BOTTOM2,  DeltaP2, Pw_ch2, Pw_dch2, GasCapsize2, Efficiency2, Capacity2, Discharge2 = calculate_power(SummaryData2)
afTime3, PR_TOP3, PR_BOTTOM3,  DeltaP3, Pw_ch3, Pw_dch3, GasCapsize3, Efficiency3, Capacity3, Discharge3 = calculate_power(SummaryData3)
afTime4, PR_TOP4, PR_BOTTOM4,  DeltaP4, Pw_ch4, Pw_dch4, GasCapsize4, Efficiency4, Capacity4, Discharge4 = calculate_power(SummaryData4)
afTime5, PR_TOP5, PR_BOTTOM5,  DeltaP5, Pw_ch5, Pw_dch5, GasCapsize5, Efficiency5, Capacity5, Discharge5 = calculate_power(SummaryData5)
afTime6, PR_TOP6, PR_BOTTOM6,  DeltaP6, Pw_ch6, Pw_dch6, GasCapsize6, Efficiency6, Capacity6, Discharge6 = calculate_power(SummaryData6)
afTime7, PR_TOP7, PR_BOTTOM7,  DeltaP7, Pw_ch7, Pw_dch7, GasCapsize7, Efficiency7, Capacity7, Discharge7 = calculate_power(SummaryData7)
afTime8, PR_TOP8, PR_BOTTOM8,  DeltaP8, Pw_ch8, Pw_dch8, GasCapsize8, Efficiency8, Capacity8, Discharge8 = calculate_power(SummaryData8)
afTime9, PR_TOP9, PR_BOTTOM9,  DeltaP9, Pw_ch9, Pw_dch9, GasCapsize9, Efficiency9, Capacity9, Discharge9 = calculate_power(SummaryData9)
afTime10, PR_TOP10, PR_BOTTOM10,  DeltaP10, Pw_ch10, Pw_dch10, GasCapsize10, Efficiency10, Capacity10, Discharge10 = calculate_power(SummaryData10)
afTime11, PR_TOP11, PR_BOTTOM11,  DeltaP11, Pw_ch11, Pw_dch11, GasCapsize11, Efficiency11, Capacity11, Discharge11 = calculate_power(SummaryData11)
afTime12, PR_TOP12, PR_BOTTOM12,  DeltaP12, Pw_ch12, Pw_dch12, GasCapsize12, Efficiency12, Capacity12, Discharge12 = calculate_power(SummaryData12)
afTime13, PR_TOP13, PR_BOTTOM13,  DeltaP13, Pw_ch13, Pw_dch13, GasCapsize13, Efficiency13, Capacity13, Discharge13 = calculate_power(SummaryData13)
afTime14, PR_TOP14, PR_BOTTOM14,  DeltaP14, Pw_ch14, Pw_dch14, GasCapsize14, Efficiency14, Capacity14, Discharge14 = calculate_power(SummaryData14)
afTime15, PR_TOP15, PR_BOTTOM15,  DeltaP15, Pw_ch15, Pw_dch15, GasCapsize15, Efficiency15, Capacity15, Discharge15 = calculate_power(SummaryData15)
afTime16, PR_TOP16, PR_BOTTOM16,  DeltaP16, Pw_ch16, Pw_dch16, GasCapsize16, Efficiency16, Capacity16, Discharge16 = calculate_power(SummaryData16)
afTime17, PR_TOP17, PR_BOTTOM17,  DeltaP17, Pw_ch17, Pw_dch17, GasCapsize17, Efficiency17, Capacity17, Discharge17 = calculate_power(SummaryData17)
afTime18, PR_TOP18, PR_BOTTOM18,  DeltaP18, Pw_ch18, Pw_dch18, GasCapsize18, Efficiency18, Capacity18, Discharge18 = calculate_power(SummaryData18)
afTime19, PR_TOP19, PR_BOTTOM19,  DeltaP19, Pw_ch19, Pw_dch19, GasCapsize19, Efficiency19, Capacity19, Discharge19 = calculate_power(SummaryData19)
afTime20, PR_TOP20, PR_BOTTOM20,  DeltaP20, Pw_ch20, Pw_dch20, GasCapsize20, Efficiency20, Capacity20, Discharge20 = calculate_power(SummaryData20)


# Pressure Plots
def plot_pressure(afTime_nogas, afTime_gas, PR_TOP_ng, PR_BOTTOM_ng, PR_TOP_g, PR_BOTTOM_g, filename):
    plt.figure(figsize=(6,4))
    plt.plot(afTime_nogas, PR_TOP_ng, drawstyle='steps-pre', color='blue', label='Without gas cap')
    plt.plot(afTime_nogas, PR_BOTTOM_ng, drawstyle='steps-pre', color='blue')
    plt.plot(afTime_gas, PR_TOP_g, drawstyle='steps-pre', color='red', label='With gas cap')
    plt.plot(afTime_gas, PR_BOTTOM_g, drawstyle='steps-pre', color='red')
    #plt.title(title)
    plt.xlim(0, 1900)
    plt.xlabel(r'Days')
    plt.ylabel(r'Press [bar]')
    plt.legend()
    #plt.show()
    if filename:
        #plt.savefig(os.path.join('./Figures_BHP', filename))
        plt.close()

plot_pressure(
    afTime_nogas = afTime1, 
    afTime_gas = afTime2,
    PR_TOP_ng = PR_TOP1, 
    PR_BOTTOM_ng = PR_BOTTOM1, 
    PR_TOP_g = PR_TOP2, 
    PR_BOTTOM_g = PR_BOTTOM2,
    #title='Pressures in reservoirs with low BHP range', 
    filename='Pressure_LOWBHP.pdf'
)

plot_pressure(
    afTime_nogas = afTime3, 
    afTime_gas = afTime4,
    PR_TOP_ng = PR_TOP3, 
    PR_BOTTOM_ng = PR_BOTTOM3, 
    PR_TOP_g = PR_TOP4, 
    PR_BOTTOM_g = PR_BOTTOM4,
    #title='Pressures in reservoirs with Mid BHP range range', 
    filename='Pressure_MIDBHP.pdf'
)

plot_pressure(
    afTime_nogas = afTime5, 
    afTime_gas = afTime6,
    PR_TOP_ng = PR_TOP5, 
    PR_BOTTOM_ng = PR_BOTTOM5, 
    PR_TOP_g = PR_TOP6, 
    PR_BOTTOM_g = PR_BOTTOM6,
    #title='Pressures in reservoirs with high BHP range', 
    filename='Pressure_HIGHBHP.pdf'
)


# Extract capacities for each scenario
capacities_nogas = [Capacity1, Capacity3, Capacity5]
capacities_gas = [Capacity2, Capacity4, Capacity6]
Discharge_nogas = [Discharge1, Discharge3, Discharge5]
Discharge_gas = [Discharge2, Discharge4, Discharge6]

labels = [r'100 md', r'300 md', r'500 md']

# Create combined bar chart
x = np.arange(len(labels))  # the label locations
width = 0.2  # the width of the bars

fig, ax = plt.subplots(figsize=(10, 6))
bars1 = ax.bar(x - width*1.5, capacities_nogas, width, label='No Gas', color='teal')
bars2 = ax.bar(x + width*0.5, capacities_gas, width, label='Gas', color='maroon')
bars3 = ax.bar(x - width*0.5, Discharge_nogas, width, label='No Gas', color='teal', alpha=0.5, hatch='//')
bars4 = ax.bar(x + width*1.5, Discharge_gas, width, label='Gas', color='maroon', alpha=0.5, hatch='//')

# Add some text for labels, title and custom x-axis tick labels, etc.
ax.set_xlabel(r'Different permeabilities [md]')
ax.set_ylabel(r'Capacity [GWh]')
ax.set_xticks(x)
ax.set_xticklabels(labels)
ax.legend()
#plt.savefig(os.path.join('./Figures','perms.pdf'))

# efficiency plot
# Extract capacities for each scenario
efficiencies_nogas_20days = [Efficiency1, Efficiency3, Efficiency5, Efficiency7, Efficiency9]    
efficiencies_gas_20days = [Efficiency2, Efficiency4, Efficiency6, Efficiency8, Efficiency10]
efficiencies_nogas_10days = [Efficiency11, Efficiency13, Efficiency15, Efficiency17, Efficiency19]
efficiencies_gas_10days = [Efficiency12, Efficiency14, Efficiency16, Efficiency18, Efficiency20]
#print(efficiencies_nogas)

labels = [r'1e-14',r'1e-13', r'3e-13', r'5e-13',r'1e-12']
x = np.arange(len(labels))  # the label locations
width = 0.2  # the width of the bars

fig, ax = plt.subplots(figsize=(6, 4))
bars1 = ax.bar(x - width*1.3, efficiencies_nogas_20days, width, label='No Gas', color='teal')
bars2 = ax.bar(x + width*0.3, efficiencies_gas_20days, width, label='Gas', color='maroon')
#bars1 = ax.bar(x - width*1.5, capacities_nogas, width, label='No Gas', color='teal')
#bars2 = ax.bar(x + width*0.5, capacities_gas, width, label='Gas', color='maroon')
#bars3 = ax.bar(x - width*0.5, Discharge_nogas, width, label='No Gas', color='teal', alpha=0.5, hatch='//')
#bars4 = ax.bar(x + width*1.5, Discharge_gas, width, label='Gas', color='maroon', alpha=0.5, hatch='//')


ax.set_xlabel(r'Different permeabilities [m²]')
ax.set_ylabel(r'Efficiency [%]')
ax.set_xticks(x)
ax.set_xticklabels(labels)
ax.legend(loc='lower center', bbox_to_anchor=(0.5, 0.96), ncol=2, framealpha=0)
#plt.savefig(os.path.join('./Figures','perms.pdf'))
plt.close()
## # Excel file for the details, not important, can delete later
## data = {
##     'Days': [str(x) if i < len(Days) else '' for i, x in enumerate(Days)],
##     'Store Wind': [str(x) if i < len(store_wind) else '' for i, x in enumerate(store_wind)],
##     'afTime1': [str(x) if i < len(afTime1) else '' for i, x in enumerate(afTime1)],
##     'Charge Power 1': [str(x) if i < len(Pw_ch1) else '' for i, x in enumerate(Pw_ch1)],
##     'Discharge Power 1': [str(x) if i < len(Pw_dch1) else '' for i, x in enumerate(Pw_dch1)],
##     'afTime2': [str(x) if i < len(afTime2) else '' for i, x in enumerate(afTime2)],
##     'Charge Power 2': [str(x) if i < len(Pw_ch2) else '' for i, x in enumerate(Pw_ch2)],
##     'Discharge Power 2': [str(x) if i < len(Pw_dch2) else '' for i, x in enumerate(Pw_dch2)],
## }
## max_length = max(len(Days), len(afTime1), len(afTime2))
## 
## for key in data:
##     if len(data[key]) < max_length:
##         data[key].extend([''] * (max_length - len(data[key])))
## 
## # Convert to DataFrame
## ## df_export = pd.DataFrame(data)
## ## 
## ## output_file = './Figures_BHP/Energy_Storage_Analysis.xlsx'
## ## with pd.ExcelWriter(output_file) as writer:
## ##     df_export.to_excel(writer, index=False, sheet_name='Energy Data')

print(f"Fin!!!!")



fig, ax = plt.subplots(figsize=(6, 4))
ax.plot(labels, efficiencies_nogas_20days, marker='o', color='blue', label='No Gas (20 days interval)', linestyle='-', linewidth=1.5, markersize=6)
ax.plot(labels, efficiencies_gas_20days, marker='o', color='orange', label='Gas (20 days interval)', linestyle='-', linewidth=1.5, markersize=6)
ax.plot(labels, efficiencies_nogas_10days, marker='o', color='blue', label='No Gas (10 days interval)', linestyle='--', linewidth=1.5, markersize=6)
ax.plot(labels, efficiencies_gas_10days, marker='o', color='orange', label='Gas (10 days interval)', linestyle='--', linewidth=1.5, markersize=6)

# Add labels and legend
ax.set_xlabel(r'Permeability [m²]')
ax.set_ylabel(r'Efficiency [%]')
ax.set_xticks(x)
ax.set_xticklabels(labels)
ax.legend()
#ax.legend(loc='lower center', bbox_to_anchor=(0.5, 0.96), ncol=2, framealpha=0)
plt.savefig(os.path.join('./Figures', 'perms_2intervals_rev1.pdf'))
plt.show()

#print(efficiencies_nogas)