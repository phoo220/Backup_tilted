import os
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from ecl.summary import EclSum
from datetime import date, datetime, timedelta


def calculate_power(SummaryData):
    afTime = SummaryData.numpy_vector("TIME")
    #interger_mask =(afTime % 1 == 0)
    #afTime = afTime[interger_mask]
    WPR_TOP = SummaryData.numpy_vector("WWIR:BOTTOM")#[interger_mask]
    WPR_BOTTOM = SummaryData.numpy_vector("WWPR:BOTTOM")#[interger_mask]
    PR_TOP = SummaryData.numpy_vector("RPR:1")#[interger_mask]
    PR_BOTTOM = SummaryData.numpy_vector("RPR:2")#[interger_mask]
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
    Capacity = (np.sum(Pw_ch)/1000000)*365*5
    return afTime, PR_TOP, PR_BOTTOM, DeltaP, Pw_ch, Pw_dch, GasCapsize, Efficiency, Capacity

SummaryData1 = EclSum('./Z0' + '.UNSMRY')
SummaryData2 = EclSum('./Z0_3' + '.UNSMRY')
SummaryData3 = EclSum('./Z0_8' + '.UNSMRY')
SummaryData4 = EclSum('./Z1' + '.UNSMRY')
SummaryData5 = EclSum('./Z2' + '.UNSMRY')
SummaryData6 = EclSum('./Z3' + '.UNSMRY')
SummaryData7 = EclSum('./Z4' + '.UNSMRY')
SummaryData8 = EclSum('./Z5' + '.UNSMRY')

afTime1, PR_TOP1, PR_BOTTOM1,  DeltaP1, Pw_ch1, Pw_dch1, GasCapsize1, Efficiency1, Capacity1 = calculate_power(SummaryData1)
afTime2, PR_TOP2, PR_BOTTOM2,  DeltaP2, Pw_ch2, Pw_dch2, GasCapsize2, Efficiency2, Capacity2 = calculate_power(SummaryData2)
afTime3, PR_TOP3, PR_BOTTOM3,  DeltaP3, Pw_ch3, Pw_dch3, GasCapsize3, Efficiency3, Capacity3 = calculate_power(SummaryData3)
afTime4, PR_TOP4, PR_BOTTOM4,  DeltaP4, Pw_ch4, Pw_dch4, GasCapsize4, Efficiency4, Capacity4 = calculate_power(SummaryData4)
afTime5, PR_TOP5, PR_BOTTOM5,  DeltaP5, Pw_ch5, Pw_dch5, GasCapsize5, Efficiency5, Capacity5 = calculate_power(SummaryData5)
afTime6, PR_TOP6, PR_BOTTOM6,  DeltaP6, Pw_ch6, Pw_dch6, GasCapsize6, Efficiency6, Capacity6 = calculate_power(SummaryData6)
afTime7, PR_TOP7, PR_BOTTOM7,  DeltaP7, Pw_ch7, Pw_dch7, GasCapsize7, Efficiency7, Capacity7 = calculate_power(SummaryData7)
afTime8, PR_TOP8, PR_BOTTOM8,  DeltaP8, Pw_ch8, Pw_dch8, GasCapsize8, Efficiency8, Capacity8 = calculate_power(SummaryData8)
print
GasCapSizes = [GasCapsize1, GasCapsize2, GasCapsize3, GasCapsize4, GasCapsize5, GasCapsize6, GasCapsize7, GasCapsize8]
Efficiencies = [Efficiency1, Efficiency2, Efficiency3, Efficiency4, Efficiency5, Efficiency6, Efficiency7, Efficiency8]
Capacities = [Capacity1/Capacity1, Capacity2/Capacity1, Capacity3/Capacity1, Capacity4/Capacity1, Capacity5/Capacity1, Capacity6/Capacity1, Capacity7/Capacity1, Capacity8/Capacity1] 
Time1, Time2, Time3, Time4, Time5, Time6 = 48.75, 130.5, 194, 238.25, 306.5, 365.5
TimeFraction = [Time1/Time1, Time2/Time1, Time3/Time1, Time4/Time1, Time5/Time1, Time6/Time1]
print(Capacities)

plt.figure(figsize=(5, 4))
plt.plot(GasCapSizes, Capacities, marker= 'o', ms=10, color= 'black') #, label= 'Capacities of different gas cap sizes')
#plt.bar(GasCapSizes, TimeFraction, width = 0.5, color = "#4CAF50", label = 'average time taken to fully charge and discharge' )
#plt.title(f"Capacity vs gas cap size")
plt.xlabel('Percentage of Gas Cap in storage layers [%]')
plt.ylabel('Capacity Fraction')
#plt.legend()
#plt.savefig(os.path.join('./Figures','Capacities.pdf'))
plt.show()
plt.close()

## Trend line
coeffs = np.polyfit(GasCapSizes, Capacities, 1)
linear_eq = np.poly1d(coeffs)
x_fit = np.linspace(min(GasCapSizes), max(GasCapSizes), 100)
y_fit = linear_eq(x_fit)

plt.figure(figsize=(5, 4))
plt.plot(GasCapSizes, Capacities, marker='o', ms=10, color='black', linestyle='None', label='Data')
plt.plot(x_fit, y_fit, color='black', linestyle='--', label='Linear Fit')
equation_text = f"y = {coeffs[0]:.2e}x + {coeffs[1]:.2e}"
plt.text(0.1 * max(GasCapSizes), 0.8 * max(Capacities), equation_text, fontsize=10, color="black")
plt.xlabel('Gas fraction in storage layer [%]')
plt.ylabel('Capacity fraction')
#plt.legend()
plt.savefig(os.path.join('./Figures', 'Capacities.pdf'))
plt.show()
