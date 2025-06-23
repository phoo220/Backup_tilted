import os
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from ecl.summary import EclSum
from datetime import date, datetime, timedelta


## excel_file = 'WIND_POWER2.xlsx'
## df = pd.read_excel(excel_file)
## Days = np.array(df['Day'])
## power = np.array(df['Power'])
## Ch_wind = 60
## Dch_wind = 40
## store_wind = []
## for i in range(len(Days)):
##     if (power[i] >= Ch_wind):
##         store_wind.append((power[i]-Ch_wind))
##     else:
##         store_wind.append(0)
## store_wind = np.array(store_wind)

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
            Pw_ch.append(4.37*WPR_TOP[i]*10**5/(24*3600)*10**(-3))
            Pw_dch.append(0)
        else:
            Pw_ch.append(DeltaP[i-1]*WPR_TOP[i]*10**5/(24*3600)*10**(-3))
            Pw_dch.append((DeltaP[i-1]-4.37)*WPR_BOTTOM[i]*10**5/(24*3600)*10**(-3))
    Pw_ch=np.array(Pw_ch)
    Pw_dch=np.array(Pw_dch)
    
    #Efficiency
    Efficiency = 100 * np.sum(Pw_dch)/np.sum(Pw_ch)
    return afTime, PR_TOP, PR_BOTTOM, DeltaP, Pw_ch, Pw_dch, GasCapsize, Efficiency

SummaryData1 = EclSum('./5YEARS_NOGAS_MIDBHP' + '.UNSMRY')
SummaryData2 = EclSum('./5YEARS_GAS_MIDBHP' + '.UNSMRY')
#SummaryData3 = EclSum('./2LEAKS_NOGAS' + '.UNSMRY')
#SummaryData4 = EclSum('./2LEAKS_GAS' + '.UNSMRY')
SummaryData5 = EclSum('./AQUIFER_NOGAS' + '.UNSMRY')
SummaryData6 = EclSum('./AQUIFER_GAS' + '.UNSMRY')
#SummaryData7 = EclSum('./1LEAK_NOGAS' + '.UNSMRY')
#SummaryData8 = EclSum('./1LEAK_GAS' + '.UNSMRY')

afTime1, PR_TOP1, PR_BOTTOM1,  DeltaP1, Pw_ch1, Pw_dch1, GasCapsize1, Efficiency1 = calculate_power(SummaryData1)
afTime2, PR_TOP2, PR_BOTTOM2,  DeltaP2, Pw_ch2, Pw_dch2, GasCapsize2, Efficiency2 = calculate_power(SummaryData2)
#afTime3, PR_TOP3, PR_BOTTOM3,  DeltaP3, Pw_ch3, Pw_dch3, GasCapsize3, Efficiency3 = calculate_power(SummaryData3)
#afTime4, PR_TOP4, PR_BOTTOM4,  DeltaP4, Pw_ch4, Pw_dch4, GasCapsize4, Efficiency4 = calculate_power(SummaryData4)
afTime5, PR_TOP5, PR_BOTTOM5,  DeltaP5, Pw_ch5, Pw_dch5, GasCapsize5, Efficiency5 = calculate_power(SummaryData5)
afTime6, PR_TOP6, PR_BOTTOM6,  DeltaP6, Pw_ch6, Pw_dch6, GasCapsize6, Efficiency6 = calculate_power(SummaryData6)
#afTime7, PR_TOP7, PR_BOTTOM7,  DeltaP7, Pw_ch7, Pw_dch7, GasCapsize7, Efficiency7 = calculate_power(SummaryData7)
#afTime8, PR_TOP8, PR_BOTTOM8,  DeltaP8, Pw_ch8, Pw_dch8, GasCapsize8, Efficiency8 = calculate_power(SummaryData8)
#Power Waste
#Waste1, Waste2 = np.cumsum(store_wind-Pw_ch1), np.cumsum(store_wind-Pw_ch2)
#Waste3, Waste4 = np.cumsum(store_wind-Pw_ch3), np.cumsum(store_wind-Pw_ch4)
#Waste5, Waste6 = np.cumsum(store_wind-Pw_ch5), np.cumsum(store_wind-Pw_ch6)
#Waste7, Waste8 = np.cumsum(store_wind-Pw_ch7), np.cumsum(store_wind-Pw_ch8)

#print(GasCapsize4)

#Power Plots
def plot_power(Days, store_wind, afTime, Pw_ch, Pw_dch, filename):
    plt.figure(figsize=(6,4 ))
    plt.fill_between(Days, -store_wind, color='green', label='Storage target')
    plt.fill_between(afTime, -Pw_ch, color='red', label='Charge')
    plt.fill_between(afTime, Pw_dch, color='blue', label='Discharge')
    #plt.title(title)
    plt.xlim(0, 1900)
    plt.xlabel('Days')
    plt.ylabel('Power [MW]')
    plt.legend()
    #plt.show()
    if filename:
        plt.savefig(os.path.join('./Figures_cycles', filename))
        plt.close()

plot_power(
    Days=Days, 
    store_wind=store_wind, 
    afTime=afTime1, 
    Pw_ch=Pw_ch1, 
    Pw_dch=Pw_dch1, 
    #title='Power used and produced (without gas cap, no leak)', 
    filename='Total_NoGas_noleaks.pdf'
)

plot_power(
    Days=Days, 
    store_wind=store_wind, 
    afTime=afTime2, 
    Pw_ch=Pw_ch2, 
    Pw_dch=Pw_dch2, 
    #title='Power used and produced (with gas cap, no leak)', 
    filename='Total_Gas_noleaks.pdf'
)

## plot_power(
##     Days=Days, 
##     store_wind=store_wind, 
##     afTime=afTime7, 
##     Pw_ch=Pw_ch7, 
##     Pw_dch=Pw_dch7, 
##     #title='Power used and produced (without gas cap, 1 leak)', 
##     filename='Total_5year_NoGas_1leak.pdf'
## )

## plot_power(
##     Days=Days, 
##     store_wind=store_wind, 
##     afTime=afTime8, 
##     Pw_ch=Pw_ch8, 
##     Pw_dch=Pw_dch8, 
##     #title='Power used and produced (with gas cap, 1 leak)', 
##     filename='Total_5year_Gas_1leak.pdf'
## )

## plot_power(
##     Days=Days, 
##     store_wind=store_wind, 
##     afTime=afTime3, 
##     Pw_ch=Pw_ch3, 
##     Pw_dch=Pw_dch3, 
##     #title='Power used and produced (without gas cap, 2 leaks)', 
##     filename='Total_5year_NoGas_2leaks.pdf'
## )

## plot_power(
##     Days=Days, 
##     store_wind=store_wind, 
##     afTime=afTime4, 
##     Pw_ch=Pw_ch4, 
##     Pw_dch=Pw_dch4, 
##     #title='Power used and produced (with gas cap, 2 leaks)', 
##     filename='Total_5year_Gas_2leaks.pdf'
## )

plot_power(
    Days=Days, 
    store_wind=store_wind, 
    afTime=afTime5, 
    Pw_ch=Pw_ch5, 
    Pw_dch=Pw_dch5, 
    #title='Power used and produced (without gas cap, aquifer)', 
    filename='Total_NoGas_aquifer.pdf'
)

plot_power(
    Days=Days, 
    store_wind=store_wind, 
    afTime=afTime6, 
    Pw_ch=Pw_ch6, 
    Pw_dch=Pw_dch6, 
    #title='Power used and produced (with gas cap, aquifer)', 
    filename='Total_Gas_aquifer.pdf'
)

# Pressure Plots
def plot_pressure(afTime_noleak, afTime_1leak, afTime_2leaks, afTime_aquifer, PR_TOP_nl, PR_BOTTOM_nl, PR_TOP_1l, PR_BOTTOM_1l, PR_TOP_2l, PR_BOTTOM_2l,  PR_TOP_A, PR_BOTTOM_A, filename):
    plt.figure(figsize=(6,4 ))
    plt.plot(afTime_noleak, PR_TOP_nl, linestyle ='solid', drawstyle='steps-pre', color='black', label='No leak')
    plt.plot(afTime_noleak, PR_BOTTOM_nl,linestyle ='solid', drawstyle='steps-pre', color='black')
    plt.plot(afTime_1leak, PR_TOP_1l, linestyle ='dashed', drawstyle='steps-pre', color='green', label='1 leaks')
    plt.plot(afTime_1leak, PR_BOTTOM_1l,linestyle ='dashed', drawstyle='steps-pre', color='green')
    #plt.plot(afTime_2leaks, PR_TOP_2l, linestyle ='dashed', drawstyle='steps-pre', color='red', label='2 leaks')
    #plt.plot(afTime_2leaks, PR_BOTTOM_2l,linestyle ='dashed', drawstyle='steps-pre', color='red')
    plt.plot(afTime_aquifer, PR_TOP_A,linestyle ='dotted', drawstyle='steps-pre', color='blue', label='with aquifer')
    plt.plot(afTime_aquifer, PR_BOTTOM_A, linestyle ='dotted',drawstyle='steps-pre', color='blue')
    #plt.title(title)
    plt.xlim(0, 1900)
    plt.xlabel('Days')
    plt.ylabel('Press [bar]')
    plt.legend()
    #plt.show()
    if filename:
        #plt.savefig(os.path.join('./Figures', filename))
        plt.close()

plot_pressure(
    afTime_noleak = afTime1, 
    #afTime_2leaks = afTime3,
    afTime_aquifer = afTime5,
    #afTime_1leak = afTime7, 
    PR_TOP_nl = PR_TOP1, 
    PR_BOTTOM_nl = PR_BOTTOM1, 
    #PR_TOP_2l = PR_TOP3, 
    #PR_BOTTOM_2l = PR_BOTTOM3,
    PR_TOP_A = PR_TOP5, 
    PR_BOTTOM_A = PR_BOTTOM5,
    #PR_TOP_1l = PR_TOP7, 
    #PR_BOTTOM_1l = PR_BOTTOM7,
    #title='Pressures in reservoirs without gas cap', 
    filename='Pressure_nogas.pdf'
)

plot_pressure(
    afTime_noleak = afTime2, 
    #afTime_2leaks = afTime4,
    afTime_aquifer = afTime6,
    #afTime_1leak = afTime8, 
    PR_TOP_nl = PR_TOP2, 
    PR_BOTTOM_nl = PR_BOTTOM2, 
    #PR_TOP_2l = PR_TOP4, 
    #PR_BOTTOM_2l = PR_BOTTOM4,
    PR_TOP_A = PR_TOP6, 
    PR_BOTTOM_A = PR_BOTTOM6,
    #PR_TOP_1l = PR_TOP8, 
    #PR_BOTTOM_1l = PR_BOTTOM8,
    #title='Pressures in reservoirs with gas cap', 
    filename='Pressure_gas.pdf'
)

#Wasted Power plot
plt.figure(figsize=(6,4))
plt.plot(afTime1, Waste1, linestyle = 'solid', color='blue', label='no leak')
#plt.plot(afTime3, Waste3, linestyle = 'dashdot', color='blue', label='2 leaks')
#plt.plot(afTime7, Waste7, linestyle = 'dashed', color='blue', label='1 leak')
#plt.plot(afTime5, Waste5, linestyle = 'dotted', color='blue', label='aquifer'  )
#plt.plot(afTime2, Waste2, linestyle = 'solid', color='red', label='no leak')
#plt.plot(afTime4, Waste4, linestyle = 'dashdot', color='red', label='2 leaks')
#plt.plot(afTime8, Waste8, linestyle = 'dashed', color='red', label='1 leak')
#plt.plot(afTime6, Waste6, linestyle = 'dotted', color='red', label='aquifer'  )
#plt.title('Unstorable energy with different leakage scenarios')
plt.xlabel('Days')
plt.ylabel('Power [MW]')
#plt.grid(True)
plt.legend()
#plt.show()
#plt.savefig(os.path.join('./Figures','Wasted Energy.pdf'))
plt.close()


# Table for cumulative values and efficiency for each case
cases = [
    {"name": "No Gas, no leak", "store": f"{np.cumsum(store_wind)[-1]*356*5/1000000:.2f}", "charge": f"{np.cumsum(Pw_ch1)[-1]*356*5/1000000:.2f}", "discharge": f"{np.cumsum(Pw_dch1)[-1]*356*5/1000000:.2f}", "efficiency": f"{Efficiency1:.2f}"},
    #{"name": "No Gas, 1 leak", "store": f"{np.cumsum(store_wind)[-1]*356*5/1000000:.2f}", "charge": f"{np.cumsum(Pw_ch7)[-1]*356*5/1000000:.2f}", "discharge": f"{np.cumsum(Pw_dch7)[-1]*356*5/1000000:.2f}", "efficiency": f"{Efficiency7:.2f}"},
    #{"name": "No Gas, 2 leaks", "store": f"{np.cumsum(store_wind)[-1]*356*5/1000000:.2f}", "charge": f"{np.cumsum(Pw_ch3)[-1]*356*5/1000000:.2f}", "discharge": f"{np.cumsum(Pw_dch3)[-1]*356*5/1000000:.2f}", "efficiency": f"{Efficiency3:.2f}"},
    {"name": "No Gas, aquifer", "store": f"{np.cumsum(store_wind)[-1]*356*5/1000000:.2f}", "charge": f"{np.cumsum(Pw_ch5)[-1]*356*5/1000000:.2f}", "discharge": f"{np.cumsum(Pw_dch5)[-1]*356*5/1000000:.2f}", "efficiency": f"{Efficiency5:.2f}"},
    {"name": "Gas, no leak", "store": f"{np.cumsum(store_wind)[-1]*356*5/1000000:.2f}", "charge": f"{np.cumsum(Pw_ch2)[-1]*356*5/1000000:.2f}", "discharge": f"{np.cumsum(Pw_dch2)[-1]*356*5/1000000:.2f}", "efficiency": f"{Efficiency2:.2f}"},
    #{"name": "Gas, 1 leak", "store": f"{np.cumsum(store_wind)[-1]*356*5/1000000:.2f}", "charge": f"{np.cumsum(Pw_ch8)[-1]*356*5/1000000:.2f}", "discharge": f"{np.cumsum(Pw_dch8)[-1]*356*5/1000000:.2f}", "efficiency": f"{Efficiency8:.2f}"},
    #{"name": "Gas, 2 leaks", "store": f"{np.cumsum(store_wind)[-1]*356*5/1000000:.2f}", "charge": f"{np.cumsum(Pw_ch4)[-1]*356*5/1000000:.2f}", "discharge": f"{np.cumsum(Pw_dch4)[-1]*356*5/1000000:.2f}", "efficiency": f"{Efficiency4:.2f}"},
    {"name": "Gas, aquifer", "store": f"{np.cumsum(store_wind)[-1]*356*5/1000000:.2f}", "charge": f"{np.cumsum(Pw_ch6)[-1]*356*5/1000000:.2f}", "discharge": f"{np.cumsum(Pw_dch6)[-1]*356*5/1000000:.2f}", "efficiency": f"{Efficiency6:.2f}"}
]

column_labels = ["Storage target [GWh]", "Stored [GWh]", "Discharged [GWh]", "Efficiency [%]"]
table_data = [
    [case["store"], case["charge"], case["discharge"], case["efficiency"]] for case in cases
]
row_labels = [case["name"] for case in cases]

fig, ax = plt.subplots(figsize=(12, 8))
ax.axis("tight")
ax.axis("off")
table = ax.table(cellText=table_data, colLabels=column_labels, rowLabels=row_labels, loc="center")
table.auto_set_font_size(False)
table.set_fontsize(14) 
table.scale(1.5, 2) 
for col_idx in range(len(column_labels)):
    table.auto_set_column_width([col_idx]) 
plt.subplots_adjust(top=0.8, bottom=0.2) 
#fig.text(0.6, 0.3, "Desired Discharge = 53.58 [GWh]", ha="center", fontsize=14)
fig.text(0.5, 0.7, "Summary of Cumulative Power and Efficiency for Each Case", ha="center", fontsize=14)
#plt.show()
plt.savefig(os.path.join('./Figures_cycles','Summary.pdf'))



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
## df_export = pd.DataFrame(data)
## 
## output_file = './Figures/Energy_Storage_Analysis.xlsx'
## with pd.ExcelWriter(output_file) as writer:
##     df_export.to_excel(writer, index=False, sheet_name='Energy Data')

print(f"Fin!!!!")
