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
print(np.cumsum(store_wind)[-1])

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

SummaryData1 = EclSum('./GAS0' + '.UNSMRY')
SummaryData2 = EclSum('./GAS0_3' + '.UNSMRY')
SummaryData3 = EclSum('./GAS0_8' + '.UNSMRY')
SummaryData4 = EclSum('./GAS1' + '.UNSMRY')
SummaryData5 = EclSum('./GAS2' + '.UNSMRY')
SummaryData6 = EclSum('./GAS3' + '.UNSMRY')
SummaryData7 = EclSum('./GAS4' + '.UNSMRY')
SummaryData8 = EclSum('./GAS5' + '.UNSMRY')

afTime1, PR_TOP1, PR_BOTTOM1,  DeltaP1, Pw_ch1, Pw_dch1, GasCapsize1, Efficiency1 = calculate_power(SummaryData1)
afTime2, PR_TOP2, PR_BOTTOM2,  DeltaP2, Pw_ch2, Pw_dch2, GasCapsize2, Efficiency2 = calculate_power(SummaryData2)
afTime3, PR_TOP3, PR_BOTTOM3,  DeltaP3, Pw_ch3, Pw_dch3, GasCapsize3, Efficiency3 = calculate_power(SummaryData3)
afTime4, PR_TOP4, PR_BOTTOM4,  DeltaP4, Pw_ch4, Pw_dch4, GasCapsize4, Efficiency4 = calculate_power(SummaryData4)
afTime5, PR_TOP5, PR_BOTTOM5,  DeltaP5, Pw_ch5, Pw_dch5, GasCapsize5, Efficiency5 = calculate_power(SummaryData5)
afTime6, PR_TOP6, PR_BOTTOM6,  DeltaP6, Pw_ch6, Pw_dch6, GasCapsize6, Efficiency6 = calculate_power(SummaryData6)
afTime7, PR_TOP7, PR_BOTTOM7,  DeltaP7, Pw_ch7, Pw_dch7, GasCapsize7, Efficiency7 = calculate_power(SummaryData7)
afTime8, PR_TOP8, PR_BOTTOM8,  DeltaP8, Pw_ch8, Pw_dch8, GasCapsize8, Efficiency8 = calculate_power(SummaryData8)
#Power Waste
Waste1, Waste2 = np.cumsum(store_wind-Pw_ch1)*356*5/1000000, np.cumsum(store_wind-Pw_ch2)*356*5/1000000
Waste3, Waste4 = np.cumsum(store_wind-Pw_ch3)*356*5/1000000, np.cumsum(store_wind-Pw_ch4)*356*5/1000000
Waste5, Waste6 = np.cumsum(store_wind-Pw_ch5)*356*5/1000000, np.cumsum(store_wind-Pw_ch6)*356*5/1000000
Waste7, Waste8 = np.cumsum(store_wind-Pw_ch7)*356*5/1000000, np.cumsum(store_wind-Pw_ch8)*356*5/1000000

print(GasCapsize1)
print(GasCapsize2)
print(GasCapsize3)
print(GasCapsize4)
print(GasCapsize5)
print(GasCapsize6)
print(GasCapsize7)
print(GasCapsize8)


#Power Plots
def plot_power(Days, store_wind, afTime, Pw_ch, Pw_dch, filename):
    plt.figure(figsize=(6,4))
    plt.fill_between(Days, -store_wind, color='green', label='Storage target')
    plt.fill_between(afTime, -Pw_ch, color='red', label='Charge')
    plt.fill_between(afTime, Pw_dch, color='blue', label='Discharge')
    #plt.title(f"Power used and produced (Gas Cap Size: {GasCapsize:.2f}%)")
    plt.xlim(0, 1900)
    plt.xlabel('Days')
    plt.ylabel('Power [MW]')
    plt.legend()
    #plt.show()
    if filename:
        plt.savefig(os.path.join('./Figures', filename))
        plt.close()

plot_power(
    Days=Days, 
    store_wind=store_wind, 
    afTime=afTime1, 
    Pw_ch=Pw_ch1, 
    Pw_dch=Pw_dch1,  
    #GasCapsize=GasCapsize1,
    filename='Total_Gas0.pdf'
)

plot_power(
    Days=Days, 
    store_wind=store_wind, 
    afTime=afTime2, 
    Pw_ch=Pw_ch2, 
    Pw_dch=Pw_dch2, 
    #GasCapsize=GasCapsize2,
    filename='Total_Gas1.pdf'
)

plot_power(
    Days=Days, 
    store_wind=store_wind, 
    afTime=afTime3, 
    Pw_ch=Pw_ch3, 
    Pw_dch=Pw_dch3, 
    #GasCapsize=GasCapsize3, 
    filename='Total_Gas2.pdf'
)

plot_power(
    Days=Days, 
    store_wind=store_wind, 
    afTime=afTime4, 
    Pw_ch=Pw_ch4, 
    Pw_dch=Pw_dch4, 
    #GasCapsize=GasCapsize4,
    filename='Total_Gas3.pdf'
)

plot_power(
    Days=Days, 
    store_wind=store_wind, 
    afTime=afTime5, 
    Pw_ch=Pw_ch5, 
    Pw_dch=Pw_dch5, 
    #GasCapsize=GasCapsize5,
    filename='Total_Gas4.pdf'
)

plot_power(
    Days=Days, 
    store_wind=store_wind, 
    afTime=afTime6, 
    Pw_ch=Pw_ch6, 
    Pw_dch=Pw_dch6, 
    #GasCapsize=GasCapsize6,
    filename='Total_Gas5.pdf'
)

## # Pressure Plots
## def plot_pressure(afTime_nogas, afTime_gas, PR_TOP_ng, PR_BOTTOM_ng, PR_TOP_g, PR_BOTTOM_g, title, filename):
##     plt.figure(figsize=(6,4))
##     plt.plot(afTime_nogas, PR_TOP_ng, drawstyle='steps-pre', color='blue', label='Without gas cap')
##     plt.plot(afTime_nogas, PR_BOTTOM_ng, drawstyle='steps-pre', color='blue')
##     plt.plot(afTime_gas, PR_TOP_g, drawstyle='steps-pre', color='red', label='With gas cap')
##     plt.plot(afTime_gas, PR_BOTTOM_g, drawstyle='steps-pre', color='red')
##     plt.title(title)
##     plt.xlim(0, 1900)
##     plt.xlabel('Days')
##     plt.ylabel('Press [bar]')
##     plt.legend()
##     #plt.show()
##     if filename:
##         plt.savefig(os.path.join('./Figures_BHP', filename))
##         #plt.close()
## 
## plot_pressure(
##     afTime_nogas = afTime1, 
##     afTime_gas = afTime2,
##     PR_TOP_ng = PR_TOP1, 
##     PR_BOTTOM_ng = PR_BOTTOM1, 
##     PR_TOP_g = PR_TOP2, 
##     PR_BOTTOM_g = PR_BOTTOM2,
##     title='Pressures in reservoirs with low BHP range', 
##     filename='Pressure_LOWBHP.pdf'
## )
## 
## plot_pressure(
##     afTime_nogas = afTime3, 
##     afTime_gas = afTime4,
##     PR_TOP_ng = PR_TOP3, 
##     PR_BOTTOM_ng = PR_BOTTOM3, 
##     PR_TOP_g = PR_TOP4, 
##     PR_BOTTOM_g = PR_BOTTOM4,
##     title='Pressures in reservoirs with mid BHP range', 
##     filename='Pressure_MIDBHP.pdf'
## )
## 
## plot_pressure(
##     afTime_nogas = afTime5, 
##     afTime_gas = afTime6,
##     PR_TOP_ng = PR_TOP5, 
##     PR_BOTTOM_ng = PR_BOTTOM5, 
##     PR_TOP_g = PR_TOP6, 
##     PR_BOTTOM_g = PR_BOTTOM6,
##     title='Pressures in reservoirs with high BHP range', 
##     filename='Pressure_HIGHBHP.pdf'
## )

#Wasted Power plot
plt.figure(figsize=(6,4))
plt.plot(afTime1, Waste1, linestyle = 'solid', color='blue', label=f'({GasCapsize1:.2f}%) Gas Cap')
plt.plot(afTime2, Waste2, linestyle = 'solid', color='lightcoral', label=f'({GasCapsize2:.2f}%) Gas Cap')
plt.plot(afTime3, Waste3, linestyle = 'solid', color='indianred', label=f'({GasCapsize3:.2f}%) Gas Cap'  )
plt.plot(afTime4, Waste4, linestyle = 'solid', color='brown', label=f'({GasCapsize4:.2f}%) Gas Cap')
plt.plot(afTime5, Waste5, linestyle = 'solid', color='firebrick', label=f'({GasCapsize5:.2f}%) Gas Cap')
plt.plot(afTime6, Waste6, linestyle = 'solid', color='maroon', label=f'({GasCapsize6:.2f}%) Gas Cap'  )
plt.plot(afTime7, Waste7, linestyle = 'solid', color='red', label=f'({GasCapsize7:.2f}%) Gas Cap')
plt.plot(afTime8, Waste8, linestyle = 'solid', color='darkred', label=f'({GasCapsize8:.2f}%) Gas Cap'  )
#plt.title('Unstorable energy based on different BHP range')
plt.xlabel('Days')
plt.ylabel('Power [MW]')
#plt.grid(True)
plt.legend()
#plt.show()
plt.savefig(os.path.join('./Figures','Wasted Energy.pdf'))
plt.close()


cases = [
    {
        "name": f"({GasCapsize1:.2f}%) Gas Cap",
        "store": f"{np.cumsum(store_wind)[-1]*356*5/1000000:.2f}",
        "charge": f"{np.cumsum(Pw_ch1)[-1]*356*5/1000000:.2f}",
        "discharge": f"{np.cumsum(Pw_dch1)[-1]*356*5/1000000:.2f}",
        "efficiency": f"{Efficiency1:.2f}"
    },
    {
        "name": f"({GasCapsize2:.2f}%) Gas Cap",
        "store": f"{np.cumsum(store_wind)[-1]*356*5/1000000:.2f}",
        "charge": f"{np.cumsum(Pw_ch2)[-1]*356*5/1000000:.2f}",
        "discharge": f"{np.cumsum(Pw_dch2)[-1]*356*5/1000000:.2f}",
        "efficiency": f"{Efficiency2:.2f}"
    },
    {
        "name": f"({GasCapsize3:.2f}%) Gas Cap",
        "store": f"{np.cumsum(store_wind)[-1]*356*5/1000000:.2f}",
        "charge": f"{np.cumsum(Pw_ch3)[-1]*356*5/1000000:.2f}",
        "discharge": f"{np.cumsum(Pw_dch3)[-1]*356*5/1000000:.2f}",
        "efficiency": f"{Efficiency3:.2f}"
    },
    {
        "name": f"({GasCapsize4:.2f}%) Gas Cap",
        "store": f"{np.cumsum(store_wind)[-1]*356*5/1000000:.2f}",
        "charge": f"{np.cumsum(Pw_ch4)[-1]*356*5/1000000:.2f}",
        "discharge": f"{np.cumsum(Pw_dch4)[-1]*356*5/1000000:.2f}",
        "efficiency": f"{Efficiency4:.2f}"
    },
    {
        "name": f"({GasCapsize5:.2f}%) Gas Cap",
        "store": f"{np.cumsum(store_wind)[-1]*356*5/1000000:.2f}",
        "charge": f"{np.cumsum(Pw_ch5)[-1]*356*5/1000000:.2f}",
        "discharge": f"{np.cumsum(Pw_dch5)[-1]*356*5/1000000:.2f}",
        "efficiency": f"{Efficiency5:.2f}"
    },
    {
        "name": f"({GasCapsize6:.2f}%) Gas Cap",
        "store": f"{np.cumsum(store_wind)[-1]*356*5/1000000:.2f}",
        "charge": f"{np.cumsum(Pw_ch6)[-1]*356*5/1000000:.2f}",
        "discharge": f"{np.cumsum(Pw_dch6)[-1]*356*5/1000000:.2f}",
        "efficiency": f"{Efficiency6:.2f}"
    }
]

column_labels = ["Storage Target [GWh]", "Stored [GWh]", "Discharged [GWh]", "Efficiency [%]"]
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
fig.text(0.6, 0.3, "Desired Discharge = 107.16 [GWh]", ha="center", fontsize=14)
fig.text(0.5, 0.7, "Summary of Cumulative Power and Efficiency for Each Case", ha="center", fontsize=14)
plt.savefig(os.path.join('./Figures', 'Summary.pdf'), bbox_inches="tight")
#plt.show()
plt.close()


plt.figure(figsize=(6,4))
plt.scatter(np.cumsum(Pw_ch1)[-1]*356*5/1000000,Efficiency1, s = 100,  marker='o', color='blue',       label=f'({GasCapsize1:.1f}%) Gas Cap')
plt.scatter(np.cumsum(Pw_ch2)[-1]*356*5/1000000,Efficiency2, s = 100,  marker='^', color='green', label=f'({GasCapsize2:.1f}%) Gas Cap')
plt.scatter(np.cumsum(Pw_ch3)[-1]*356*5/1000000,Efficiency3, s = 100,  marker='s', color='indianred',  label=f'({GasCapsize3:.1f}%) Gas Cap')
plt.scatter(np.cumsum(Pw_ch4)[-1]*356*5/1000000,Efficiency4, s = 100,  marker='d', color='brown',      label=f'({GasCapsize4:.1f}%) Gas Cap')
plt.scatter(np.cumsum(Pw_ch5)[-1]*356*5/1000000,Efficiency5, s = 100,  marker='v', color='orange',   label=f'({GasCapsize5:.1f}%) Gas Cap')
plt.scatter(np.cumsum(Pw_ch6)[-1]*356*5/1000000,Efficiency6, s = 100,  marker='p', color='red',     label=f'({GasCapsize6:.1f}%) Gas Cap')
#plt.title('Stored Vs Efficiencies based on different gas caps', fontsize=14)
plt.xlabel('Stored Energy [GWh]',fontsize=14)
plt.ylabel('Efficiencies',fontsize=14)
#plt.grid(True)
plt.legend()
#plt.show()
plt.savefig(os.path.join('./Figures','Stored Power Vs Efficiency.pdf'))
plt.close()

plt.figure(figsize=(6,4.5))
plt.scatter(Waste1[-1], Efficiency1, s = 100,  marker='o', color='blue',       label=f'({GasCapsize1:.1f}%) Gas Cap')
plt.scatter(Waste2[-1], Efficiency2, s = 100,  marker='^', color='green', label=f'({GasCapsize2:.1f}%) Gas Cap')
plt.scatter(Waste3[-1], Efficiency3, s = 100,  marker='s', color='indianred',  label=f'({GasCapsize3:.1f}%) Gas Cap')
plt.scatter(Waste4[-1], Efficiency4, s = 100,  marker='d', color='brown',      label=f'({GasCapsize4:.1f}%) Gas Cap')
plt.scatter(Waste5[-1], Efficiency5, s = 100,  marker='v', color='orange',   label=f'({GasCapsize5:.1f}%) Gas Cap')
plt.scatter(Waste6[-1], Efficiency6, s = 100,  marker='p', color='red',     label=f'({GasCapsize6:.1f}%) Gas Cap')
plt.scatter(Waste7[-1], Efficiency7, s = 100,  marker='*', color='black',     label=f'({GasCapsize7:.1f}%) Gas Cap')
plt.scatter(Waste8[-1], Efficiency8, s = 100,  marker='x', color='purple',     label=f'({GasCapsize8:.1f}%) Gas Cap')
#plt.title('Stored Vs Efficiencies based on different gas caps', fontsize=14)
plt.xlabel(r'Wasted Energy [GWh]',fontsize=14)
plt.ylabel(r'Efficiencies [%]',fontsize=14)
#plt.grid(True)
plt.legend()
plt.savefig(os.path.join('./Figures','Waste Vs Efficiency.pdf'))
plt.show()
plt.close()

# Assuming Waste1, Waste2, ..., Waste8 are numpy arrays or lists
wastes = [Waste1[-1], Waste2[-1], Waste3[-1], Waste4[-1], Waste5[-1], Waste6[-1], Waste7[-1], Waste8[-1]]
efficiencies = [Efficiency1, Efficiency2, Efficiency3, Efficiency4, Efficiency5, Efficiency6, Efficiency7, Efficiency8]
gas_capsizes = [GasCapsize1, GasCapsize2, GasCapsize3, GasCapsize4, GasCapsize5, GasCapsize6, GasCapsize7, GasCapsize8]

plt.figure(figsize=(6, 4.5))
sc = plt.scatter(wastes, efficiencies, s=100, c=gas_capsizes, cmap='viridis', marker='o')
plt.xlabel(r'Unstored surplus energy [GWh]', fontsize=14)
plt.ylabel(r'Efficiency [%]', fontsize=14)
plt.colorbar(sc, label='Gas fraction [%]')
#plt.legend()
plt.savefig(os.path.join('./Figures', 'Waste Vs Efficiency with Colorbar.pdf'))
plt.show()
plt.close()

# Excel file for the details, not important, can delete later
data = {
    'Days': [str(x) if i < len(Days) else '' for i, x in enumerate(Days)],
    'Store Wind': [str(x) if i < len(store_wind) else '' for i, x in enumerate(store_wind)],
    #'afTime1': [str(x) if i < len(afTime1) else '' for i, x in enumerate(afTime1)],
    'Charge Power 1': [str(x) if i < len(Pw_ch1) else '' for i, x in enumerate(Pw_ch1)],
    'Discharge Power 1': [str(x) if i < len(Pw_dch1) else '' for i, x in enumerate(Pw_dch1)],
    #'afTime2': [str(x) if i < len(afTime2) else '' for i, x in enumerate(afTime2)],
    'Charge Power 2': [str(x) if i < len(Pw_ch2) else '' for i, x in enumerate(Pw_ch2)],
    'Discharge Power 2': [str(x) if i < len(Pw_dch2) else '' for i, x in enumerate(Pw_dch2)],
    #'afTime3': [str(x) if i < len(afTime3) else '' for i, x in enumerate(afTime3)],
    'Charge Power 3': [str(x) if i < len(Pw_ch3) else '' for i, x in enumerate(Pw_ch3)],
    'Discharge Power 3': [str(x) if i < len(Pw_dch3) else '' for i, x in enumerate(Pw_dch3)],
    #'afTime4': [str(x) if i < len(afTime4) else '' for i, x in enumerate(afTime4)],
    'Charge Power 4': [str(x) if i < len(Pw_ch4) else '' for i, x in enumerate(Pw_ch4)],
    'Discharge Power 4': [str(x) if i < len(Pw_dch4) else '' for i, x in enumerate(Pw_dch4)],
    #'afTime5': [str(x) if i < len(afTime5) else '' for i, x in enumerate(afTime5)],
    'Charge Power 5': [str(x) if i < len(Pw_ch5) else '' for i, x in enumerate(Pw_ch5)],
    'Discharge Power 5': [str(x) if i < len(Pw_dch5) else '' for i, x in enumerate(Pw_dch5)],
    #'afTime6': [str(x) if i < len(afTime6) else '' for i, x in enumerate(afTime6)],
    'Charge Power 6': [str(x) if i < len(Pw_ch6) else '' for i, x in enumerate(Pw_ch6)],
    'Discharge Power 6': [str(x) if i < len(Pw_dch6) else '' for i, x in enumerate(Pw_dch6)],
}
max_length = max(len(Days), len(afTime1), len(afTime2))

for key in data:
    if len(data[key]) < max_length:
        data[key].extend([''] * (max_length - len(data[key])))

# Convert to DataFrame
df_export = pd.DataFrame(data)

output_file = './Figures/Energy_Storage_Analysis.xlsx'
with pd.ExcelWriter(output_file) as writer:
    df_export.to_excel(writer, index=False, sheet_name='Energy Data')

print(f"Fin!!!!")
