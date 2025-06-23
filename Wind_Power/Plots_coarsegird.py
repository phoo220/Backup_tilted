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
    FGIPR = 0 #SummaryData.numpy_vector("FGIPR")[0]
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
SummaryData2 = EclSum('./5YEARS_NOGAS' + '.UNSMRY')


afTime1, PR_TOP1, PR_BOTTOM1,  DeltaP1, Pw_ch1, Pw_dch1, GasCapsize1, Efficiency1 = calculate_power(SummaryData1)
afTime2, PR_TOP2, PR_BOTTOM2,  DeltaP2, Pw_ch2, Pw_dch2, GasCapsize2, Efficiency2 = calculate_power(SummaryData2)

#Power Waste
Waste1, Waste2 = np.cumsum(store_wind-Pw_ch1), np.cumsum(store_wind-Pw_ch2)


#print(GasCapsize4)

#Power Plots
def plot_power(Days, store_wind, afTime, Pw_ch, Pw_dch, filename):
    plt.figure(figsize=(6,4))
    plt.fill_between(Days, -store_wind, color='green', label='Extra energy')
    plt.fill_between(afTime, -Pw_ch, color='red', label='Charge')
    plt.fill_between(afTime, Pw_dch, color='blue', label='Discharge')
    #plt.title(title)
    plt.xlim(0, 1900)
    plt.xlabel('Days')
    plt.ylabel('Power [MW]')
    plt.legend()
    #plt.show()
    if filename:
        #plt.savefig(os.path.join('./Figures_BHP', filename))
        plt.close()

plot_power(
    Days=Days, 
    store_wind=store_wind, 
    afTime=afTime1, 
    Pw_ch=Pw_ch1, 
    Pw_dch=Pw_dch1, 
    #title='Power used and produced with fine Grids', 
    filename='Power used and produced with fine Grids.pdf'
)

plot_power(
    Days=Days, 
    store_wind=store_wind, 
    afTime=afTime2, 
    Pw_ch=Pw_ch2, 
    Pw_dch=Pw_dch2, 
    #title='Power used and produced with coarse grids', 
    filename='Power used and produced with coarse Grids.pdf'
)


# Pressure Plots
def plot_pressure(afTime_nogas, afTime_gas, PR_TOP_ng, PR_BOTTOM_ng, PR_TOP_g, PR_BOTTOM_g, filename):
    # Convert pressure from bar to pascal
    PR_TOP_ng = [p * 100000 for p in PR_TOP_ng]
    PR_BOTTOM_ng = [p * 100000 for p in PR_BOTTOM_ng]
    PR_TOP_g = [p * 100000 for p in PR_TOP_g]
    PR_BOTTOM_g = [p * 100000 for p in PR_BOTTOM_g]

    plt.figure(figsize=(6, 4))
    plt.plot(afTime_nogas, PR_TOP_ng, linestyle='solid', color='blue', label=r'$P_{w,\alpha}$ fine grid')
    plt.plot(afTime_nogas, PR_BOTTOM_ng, linestyle='dashed', color='blue', label=r'$P_{w, \beta}$ fine grid')
    plt.plot(afTime_gas, PR_TOP_g, linestyle='solid', color='red', label=r'$P_{w, \alpha}$ coarse grid')
    plt.plot(afTime_gas, PR_BOTTOM_g, linestyle='dashed', color='red', label=r'$P_{w, \beta}$ coarse grid')
    plt.xlim(0, 1900)
    plt.xlabel('Days')
    plt.ylabel('Pressure [Pa]')
    plt.legend(loc='lower center', bbox_to_anchor=(0.5, 0.96), ncol=2, framealpha=0)
    if filename:
        plt.savefig(os.path.join('./Figures_BHP', filename))
    plt.show()

plot_pressure(
    afTime_nogas = afTime1, 
    afTime_gas = afTime2,
    PR_TOP_ng = PR_TOP1, 
    PR_BOTTOM_ng = PR_BOTTOM1, 
    PR_TOP_g = PR_TOP2, 
    PR_BOTTOM_g = PR_BOTTOM2,
    #title='Pressures in reservoirs ', 
    filename='Pressures in reservoirs_coarse grids.pdf'
)


#Wasted Power plot
plt.figure(figsize=(6,4))
plt.plot(afTime1, Waste1, linestyle = 'solid', color='blue', label='Fine Grid')
plt.plot(afTime2, Waste2, linestyle = 'solid', color='red', label='Coarse Grid')
#plt.title('Unstorable energy based on grid resolution')
plt.xlabel('Days')
plt.ylabel('Power [MW]')
#plt.grid(True)
plt.legend()
#plt.show()
plt.savefig(os.path.join('./Figures_BHP','Wasted Energy_coarse grids.pdf'))
plt.close()

print(f"Fin!!!!")
## 