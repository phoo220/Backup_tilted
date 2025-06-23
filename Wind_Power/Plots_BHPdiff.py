import os
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from ecl.summary import EclSum
from datetime import date, datetime, timedelta


excel_file = 'WIND_POWER2.xlsx'
df = pd.read_excel(excel_file)
Days = np.array(df['Day'])
power = np.array(df['Power'])

Ch_wind = 60
Dch_wind = 40
store_wind = []
for i in range(len(Days)):
    if (power[i] >= Ch_wind):
        store_wind.append((power[i]-Ch_wind))
    else:
        store_wind.append(0)
store_wind = np.array(store_wind)

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
    return afTime, PR_TOP, PR_BOTTOM, DeltaP, Pw_ch, Pw_dch, GasCapsize, Efficiency

SummaryData1 = EclSum('./5YEARS_NOGAS_LOWBHP' + '.UNSMRY')
SummaryData2 = EclSum('./5YEARS_GAS_LOWBHP' + '.UNSMRY')
SummaryData3 = EclSum('./5YEARS_NOGAS_MIDBHP' + '.UNSMRY')
SummaryData4 = EclSum('./5YEARS_GAS_MIDBHP' + '.UNSMRY')
SummaryData5 = EclSum('./5YEARS_NOGAS_HIGHBHP' + '.UNSMRY')
SummaryData6 = EclSum('./5YEARS_GAS_HIGHBHP' + '.UNSMRY')

afTime1, PR_TOP1, PR_BOTTOM1,  DeltaP1, Pw_ch1, Pw_dch1, GasCapsize1, Efficiency1 = calculate_power(SummaryData1)
afTime2, PR_TOP2, PR_BOTTOM2,  DeltaP2, Pw_ch2, Pw_dch2, GasCapsize2, Efficiency2 = calculate_power(SummaryData2)
afTime3, PR_TOP3, PR_BOTTOM3,  DeltaP3, Pw_ch3, Pw_dch3, GasCapsize3, Efficiency3 = calculate_power(SummaryData3)
afTime4, PR_TOP4, PR_BOTTOM4,  DeltaP4, Pw_ch4, Pw_dch4, GasCapsize4, Efficiency4 = calculate_power(SummaryData4)
afTime5, PR_TOP5, PR_BOTTOM5,  DeltaP5, Pw_ch5, Pw_dch5, GasCapsize5, Efficiency5 = calculate_power(SummaryData5)
afTime6, PR_TOP6, PR_BOTTOM6,  DeltaP6, Pw_ch6, Pw_dch6, GasCapsize6, Efficiency6 = calculate_power(SummaryData6)
#Power Waste
Waste1, Waste2 = np.cumsum(store_wind-Pw_ch1), np.cumsum(store_wind-Pw_ch2)
Waste3, Waste4 = np.cumsum(store_wind-Pw_ch3), np.cumsum(store_wind-Pw_ch4)
Waste5, Waste6 = np.cumsum(store_wind-Pw_ch5), np.cumsum(store_wind-Pw_ch6)

#print(GasCapsize4)

#Power Plots
def plot_power(Days, store_wind, afTime, Pw_ch, Pw_dch, filename):
    plt.figure(figsize=(6,4))
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
        plt.savefig(os.path.join('./Figures_BHP', filename))
        plt.close()

plot_power(
    Days=Days, 
    store_wind=store_wind, 
    afTime=afTime1, 
    Pw_ch=Pw_ch1, 
    Pw_dch=Pw_dch1, 
    #title='Power used and produced with Narrow BHP ranges (without gas cap)', 
    filename='Total_5year_NoGas_LOWBHP.pdf'
)

plot_power(
    Days=Days, 
    store_wind=store_wind, 
    afTime=afTime2, 
    Pw_ch=Pw_ch2, 
    Pw_dch=Pw_dch2, 
    #title='Power used and produced with Narrow BHP ranges (with gas cap)', 
    filename='Total_5year_Gas_LOWBHP.pdf'
)

plot_power(
    Days=Days, 
    store_wind=store_wind, 
    afTime=afTime3, 
    Pw_ch=Pw_ch3, 
    Pw_dch=Pw_dch3, 
    #title='Power used and produced with Mid BHP ranges (without gas cap)', 
    filename='Total_5year_NoGas_MIDBHP.pdf'
)

plot_power(
    Days=Days, 
    store_wind=store_wind, 
    afTime=afTime4, 
    Pw_ch=Pw_ch4, 
    Pw_dch=Pw_dch4, 
    #title='Power used and produced with Mid BHP ranges (with gas cap)', 
    filename='Total_5year_Gas_MIDBHP.pdf'
)

plot_power(
    Days=Days, 
    store_wind=store_wind, 
    afTime=afTime5, 
    Pw_ch=Pw_ch5, 
    Pw_dch=Pw_dch5, 
    #title='Power used and produced with Wide BHP ranges (without gas cap)', 
    filename='Total_5year_NoGas_HIGHBHP.pdf'
)

plot_power(
    Days=Days, 
    store_wind=store_wind, 
    afTime=afTime6, 
    Pw_ch=Pw_ch6, 
    Pw_dch=Pw_dch6, 
    #title='Power used and produced with Wide BHP ranges (with gas cap)', 
    filename='Total_5year_Gas_HIGHBHP.pdf'
)

# Pressure Plots
def plot_pressure(afTime_nogas, afTime_gas, PR_TOP_ng, PR_BOTTOM_ng, PR_TOP_g, PR_BOTTOM_g, filename):
    plt.figure(figsize=(6,4))
    plt.plot(afTime_nogas, PR_TOP_ng, drawstyle='steps-pre', color='blue', label='Without gas cap')
    plt.plot(afTime_nogas, PR_BOTTOM_ng, drawstyle='steps-pre', color='blue')
    plt.plot(afTime_gas, PR_TOP_g, drawstyle='steps-pre', color='red', label='With gas cap')
    plt.plot(afTime_gas, PR_BOTTOM_g, drawstyle='steps-pre', color='red')
    #plt.title(title)
    plt.xlim(0, 1900)
    plt.xlabel('Days')
    plt.ylabel('Press [bar]')
    plt.legend()
    #plt.show()
    if filename:
        plt.savefig(os.path.join('./Figures_BHP', filename))
        plt.close()

plot_pressure(
    afTime_nogas = afTime1, 
    afTime_gas = afTime2,
    PR_TOP_ng = PR_TOP1, 
    PR_BOTTOM_ng = PR_BOTTOM1, 
    PR_TOP_g = PR_TOP2, 
    PR_BOTTOM_g = PR_BOTTOM2,
    #title='Pressures in reservoirs with Narrow BHP range range', 
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
    #title='Pressures in reservoirs with Wide BHP range range', 
    filename='Pressure_HIGHBHP.pdf'
)

#Wasted Power plot
plt.figure(figsize=(6,4))
plt.plot(afTime1, Waste1, linestyle = 'solid', color='blue', label='Narrow BHP range')
plt.plot(afTime3, Waste3, linestyle = 'dashdot', color='blue', label='Mid BHP range')
plt.plot(afTime5, Waste5, linestyle = 'dotted', color='blue', label='Wide BHP range'  )
plt.plot(afTime2, Waste2, linestyle = 'solid', color='red', label='Narrow BHP range')
plt.plot(afTime4, Waste4, linestyle = 'dashdot', color='red', label='Mid BHP range')
plt.plot(afTime6, Waste6, linestyle = 'dotted', color='red', label='Wide BHP range'  )
#plt.title('Unstorable energy based on different BHP range')
plt.xlabel('Days')
plt.ylabel('Power [MW]')
#plt.grid(True)
plt.legend()
#plt.show()
plt.savefig(os.path.join('./Figures_BHP','Wasted Energy.pdf'))
plt.close()


# Table for cumulative values and efficiency for each case
cases = [
    {"name": "No Gas, Narrow BHP range", "store": f"{np.cumsum(store_wind)[-1]*356*5/1000000:.2f}", "charge": f"{np.cumsum(Pw_ch1)[-1]*356*5/1000000:.2f}", "discharge": f"{np.cumsum(Pw_dch1)[-1]*356*5/1000000:.2f}", "efficiency": f"{Efficiency1:.2f}"},
    {"name": "Gas, Narrow BHP range", "store": f"{np.cumsum(store_wind)[-1]*356*5/1000000:.2f}", "charge": f"{np.cumsum(Pw_ch2)[-1]*356*5/1000000:.2f}", "discharge": f"{np.cumsum(Pw_dch2)[-1]*356*5/1000000:.2f}", "efficiency": f"{Efficiency2:.2f}"},
    {"name": "No Gas, Mid BHP range", "store": f"{np.cumsum(store_wind)[-1]*356*5/1000000:.2f}", "charge": f"{np.cumsum(Pw_ch3)[-1]*356*5/1000000:.2f}", "discharge": f"{np.cumsum(Pw_dch3)[-1]*356*5/1000000:.2f}", "efficiency": f"{Efficiency3:.2f}"},
    {"name": "Gas, Mid BHP range", "store": f"{np.cumsum(store_wind)[-1]*356*5/1000000:.2f}", "charge": f"{np.cumsum(Pw_ch4)[-1]*356*5/1000000:.2f}", "discharge": f"{np.cumsum(Pw_dch4)[-1]*356*5/1000000:.2f}", "efficiency": f"{Efficiency4:.2f}"},
    {"name": "No Gas, Wide BHP range", "store": f"{np.cumsum(store_wind)[-1]*356*5/1000000:.2f}", "charge": f"{np.cumsum(Pw_ch5)[-1]*356*5/1000000:.2f}", "discharge": f"{np.cumsum(Pw_dch5)[-1]*356*5/1000000:.2f}", "efficiency": f"{Efficiency5:.2f}"},
    {"name": "Gas, Wide BHP range", "store": f"{np.cumsum(store_wind)[-1]*356*5/1000000:.2f}", "charge": f"{np.cumsum(Pw_ch6)[-1]*356*5/1000000:.2f}", "discharge": f"{np.cumsum(Pw_dch6)[-1]*356*5/1000000:.2f}", "efficiency": f"{Efficiency6:.2f}"}
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
fig.text(0.6, 0.3, "Desired Discharge = 53.58 [GWh]", ha="center", fontsize=14)
#fig.text(0.5, 0.7, "Summary of Cumulative Power and Efficiency for Each Case", ha="center", fontsize=14)
#plt.show()
plt.savefig(os.path.join('./Figures_BHP','Summary.pdf'))



# Excel file for the details, not important, can delete later
data = {
    'Days': [str(x) if i < len(Days) else '' for i, x in enumerate(Days)],
    'Store Wind': [str(x) if i < len(store_wind) else '' for i, x in enumerate(store_wind)],
    'afTime1': [str(x) if i < len(afTime1) else '' for i, x in enumerate(afTime1)],
    'Charge Power 1': [str(x) if i < len(Pw_ch1) else '' for i, x in enumerate(Pw_ch1)],
    'Discharge Power 1': [str(x) if i < len(Pw_dch1) else '' for i, x in enumerate(Pw_dch1)],
    'afTime2': [str(x) if i < len(afTime2) else '' for i, x in enumerate(afTime2)],
    'Charge Power 2': [str(x) if i < len(Pw_ch2) else '' for i, x in enumerate(Pw_ch2)],
    'Discharge Power 2': [str(x) if i < len(Pw_dch2) else '' for i, x in enumerate(Pw_dch2)],
}
max_length = max(len(Days), len(afTime1), len(afTime2))

for key in data:
    if len(data[key]) < max_length:
        data[key].extend([''] * (max_length - len(data[key])))

# Convert to DataFrame
df_export = pd.DataFrame(data)

output_file = './Figures_BHP/Energy_Storage_Analysis.xlsx'
with pd.ExcelWriter(output_file) as writer:
    df_export.to_excel(writer, index=False, sheet_name='Energy Data')

print(f"Fin!!!!")
