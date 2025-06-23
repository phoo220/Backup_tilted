import sys
import os
from datetime import date, datetime, timedelta
from ecl.summary import EclSum
from ecl.eclfile import EclFile
from ecl.grid import EclGrid
import matplotlib.pyplot as plt
import math
import numpy as np
import pandas as pd
from scipy.integrate import trapezoid

# Excel with wind energy rates
excel_file = 'WIND_POWER2.xlsx'
df = pd.read_excel(excel_file)
day = df['Day']
day = np.array(day)
power = df['Power']
power = np.array(power)
Days = 2000#1836
wind_days = []
pw_wind = []
store_wind = []
#Av_wind = 50
Ch_wind = 60
Dch_wind = 40

for i in range(len(day)):
    if i == 0:
        wind_days.append(0)
        if (power[i] >= Ch_wind):
            pw_wind.append(Ch_wind)
            store_wind.append(-(power[i]-Ch_wind))
        else:
            pw_wind.append(power[i])
            store_wind.append(0)
    else:
        wind_days.append(wind_days[i-1]+1)
        if (power[i] >= Ch_wind):
            pw_wind.append(Ch_wind)
            store_wind.append(-(power[i]-Ch_wind))
        else:
            pw_wind.append(power[i])
            store_wind.append(0)

green =np.array(store_wind)
    
wind_time=[]
pw_windDEF = []
store_windDEF = []
wind_time.append(0)
pw_windDEF.append(0)
store_windDEF.append(0)

for i in range(len(wind_days)):
    wind_time.append(wind_days[i]+0)
    pw_windDEF.append(pw_wind[i])
    store_windDEF.append(store_wind[i])
wind_time.append(wind_time[-1])
pw_windDEF.append(0)
store_windDEF.append(0)
wind_time=np.array(wind_time)
pw_windDEF=np.array(pw_windDEF)
store_windDEF=np.array(store_windDEF)


SummaryData1=EclSum('./5YEARS_NOGAS'+'.UNSMRY')
SummaryData2=EclSum('./5YEARS_GAS'+'.UNSMRY')

year = '2023'
strt_date = date(int(year),1,1)
afTime1=SummaryData1.numpy_vector("TIME")
afTime2=SummaryData2.numpy_vector("TIME")

def step_function(x, points, values):
    if len(points) != len(values):
        raise ValueError("The number of points must match the number of values.")
    
    conditions = [(x > points[i-1]) & (x <= points[i]) for i in range(len(points) - 1)]
    conditions.append(x >= points[-1])
    
    return np.piecewise(x, conditions, values)

def step_function2(x, points, values):
    if len(points) != len(values):
        raise ValueError("The number of points must match the number of values.")
    
    # Create the piecewise function
    conditions = [(x > points[i]) & (x <= points[i+1]) for i in range(len(points) - 1)]
    conditions.append(x >= points[-1])
    
    return np.piecewise(x, conditions, values)

#CHARGE PERIOD IS THE SAME FOR ALL CASES
WPR_TOP1 = SummaryData1.numpy_vector("WWPR:TOP")
WPR_TOP2 = SummaryData2.numpy_vector("WWPR:TOP")

#DISCHARGE RATES 
# different way of discharging!
WPR_BOTTOM1 = SummaryData1.numpy_vector("WWPR:BOTTOM")
WPR_BOTTOM2 = SummaryData2.numpy_vector("WWPR:BOTTOM")

PR_TOP1=SummaryData1.numpy_vector("RPR:1")
PR_BOTTOM1=SummaryData1.numpy_vector("RPR:2")
PR_TOP2=SummaryData2.numpy_vector("RPR:1")
PR_BOTTOM2=SummaryData2.numpy_vector("RPR:2")


# Pressures in reservoirs
plt.figure(figsize=(10,6))
plt.plot(afTime1, PR_TOP1, drawstyle='steps-pre', color='blue', label='5year_nogas')
plt.plot(afTime1, PR_BOTTOM1, drawstyle='steps-pre', color='blue')
plt.plot(afTime2, PR_TOP2, drawstyle='steps-pre', color='red', label='5year_gas')
plt.plot(afTime2, PR_BOTTOM2, drawstyle='steps-pre', color='red')
plt.title('Average reservoir pressures')
plt.xlabel('Days')
plt.ylabel('Press [bar]')
plt.grid(True)
plt.legend()
plt.savefig('Pressures_5year_60-40.pdf')


DeltaP1=PR_BOTTOM1-PR_TOP1
DeltaP2=PR_BOTTOM2-PR_TOP2

Pw_ch1=[]
Pw_ch2=[]
Pw_dch1=[]
Pw_dch2=[]

time1 = []
time2 = []

time1.append(0)
Pw_ch1.append(0)
Pw_dch1.append(0)
time2.append(0)
Pw_ch2.append(0)
Pw_dch2.append(0)

for i in range(len(afTime1)):
    if i == 0:
        time1.append(afTime1[i])
        Pw_ch1.append(4.37*WPR_TOP1[i]*10**5/(24*3600)*10**(-3))
        Pw_dch1.append(0)
    else:
        Pw_ch1.append(DeltaP1[i-1]*WPR_TOP1[i]*10**5/(24*3600)*10**(-3))
        Pw_dch1.append((DeltaP1[i-1]-4.37)*WPR_BOTTOM1[i]*10**5/(24*3600)*10**(-3))
        time1.append(afTime1[i])
time1.append(time1[-1]+0.2)
Pw_ch1.append(0)
Pw_dch1.append(0)
Pw_ch1=np.array(Pw_ch1)
Pw_dch1=np.array(Pw_dch1)
time1=np.array(time1)

for i in range(len(afTime2)):
    if i == 0:
        time2.append(afTime2[i])
        Pw_ch2.append(4.37*WPR_TOP2[i]*10**5/(24*3600)*10**(-3))
        Pw_dch2.append(0)
    else:
        Pw_ch2.append(DeltaP2[i]*WPR_TOP2[i]*10**5/(24*3600)*10**(-3))
        Pw_dch2.append((DeltaP2[i]-4.37)*WPR_BOTTOM2[i]*10**5/(24*3600)*10**(-3))
        time2.append(afTime2[i])
time2.append(time2[-1]+0.2)
Pw_ch2.append(0)
Pw_dch2.append(0)
Pw_ch2=np.array(Pw_ch2)
Pw_dch2=np.array(Pw_dch2)
time2=np.array(time2)

x = np.linspace(0, 2000, 5000)
ch1 = step_function(x, time1, -Pw_ch1)
dch1 = step_function(x, time1, Pw_dch1)
ch2 = step_function(x, time2, -Pw_ch2)
dch2 = step_function(x, time2, Pw_dch2)

plt.figure(figsize=(10,6))
plt.plot(time2, Pw_ch2, color='blue', marker='x', label='Charge')
plt.plot(time2, Pw_dch2, color='red', marker='o', label='Discharge')
plt.title('Power used and produced for 5 year (without gas cap)')
plt.xlim(-1, Days)
plt.xlabel('Days')
plt.ylabel('Power [W]')
plt.grid(True)
plt.show()
plt.legend()
plt.savefig('Power_5year_NoGas_60-40.pdf')

plt.figure(figsize=(10,6))
plt.plot(x, ch2, color='blue', label='Charge')
plt.plot(x, dch2, color='red', label='Discharge')
plt.title('Power used and produced for 5 year (with gas cap)')
plt.xlim(-1, Days)
plt.xlabel('Days')
plt.ylabel('Power [W]')
plt.grid(True)
plt.legend()
plt.savefig('Power_5year_Gas_60-40.pdf')

# plt.figure(figsize=(10,6))
# plt.plot(x, ch3, color='blue', label='Charge')
# plt.plot(x, dch3, color='red', label='Discharge')
# plt.title('Power used and produced for 1 year (without gas cap)')
# plt.xlim(-1, 735)
# plt.xlabel('Days')
# plt.ylabel('Power [W]')
# plt.grid(True)
# plt.legend()
# plt.savefig('Power_2year_NoGas.pdf')
# 
# plt.figure(figsize=(10,6))
# plt.plot(x, ch4, color='blue', label='Charge')
# plt.plot(x, dch4, color='red', label='Discharge')
# plt.title('Power used and produced for 1 year (with gas cap)')
# plt.xlim(-1, 735)
# plt.xlabel('Days')
# plt.ylabel('Power [W]')
# plt.grid(True)
# plt.legend()
# plt.savefig('Power_2year_Gas.pdf')



x2=np.linspace(0,2000,5000)
wind_prod=step_function2(x2,wind_time,pw_windDEF)
wind_store=step_function2(x2,wind_time,store_windDEF)
ch_1 = step_function(x2, time1, -Pw_ch1)
dch_1 = step_function(x2, time1, Pw_dch1)
ch_2 = step_function(x2, time2, -Pw_ch2)
dch_2 = step_function(x2, time2, Pw_dch2)


wPW_1 = np.cumsum(-wind_store + ch_1)/1000
wPW_2 = np.cumsum(-wind_store + ch_2)/1000

total_store = np.cumsum(-wind_store)/1000
total_ch1 = np.cumsum(-ch_1)/1000
total_ch2 = np.cumsum(-ch_2)/1000

plt.figure(figsize=(10,6))
#plt.bar(x2, wind_prod, width=0.3, color='blue')
#plt.bar(x2, wind_store, width=0.3, color='green',label='extra energy')
plt.plot(x, wPW_1, color='blue', label='Wasted energy without using gas cap')
plt.plot(x, wPW_2, color='red', label='Wasted energy using gas cap')
plt.plot(x,total_store, color='green' )
plt.plot(x,total_ch1, color='purple' )
plt.plot(x,total_ch2, color='pink' )
plt.title('Unstorable Power')
plt.xlim(-1, Days)
plt.xlabel('Simulation days')
plt.ylabel('Power [MW]')
plt.legend()
#plt.show()
plt.savefig('Wasted_Energy_60-40.pdf')

#plt.figure(figsize=(10,6))
#plt.bar(x2, wind_prod, width=0.3, color='blue')
## plt.bar(x2, wind_store, width=0.3, color='green',label='extra energy')
#plt.plot(x, total_store, color='blue', label='Cumulative stored energy without using gas cap')
#plt.plot(x, wPW_2, color='red', label='Wasted energy using gas cap')
#plt.title('cum stored Power')
#plt.xlim(-1, Days)
#plt.xlabel('Simulation days')
#plt.ylabel('Power [MW]')
#plt.legend()
#plt.savefig('cumulativestored_Energy_60-40.pdf')


plt.figure(figsize=(10,6))
#plt.bar(x2, wind_prod, width=0.3, color='blue')
plt.fill_between(x2, wind_store, color='green',label='extra energy')
plt.fill_between(x, dch_1, color='purple', label='Discharge')
plt.fill_between(x, ch_1, color='red', label='Charge')
plt.title('Power used and produced for 5 year (without gas cap)')
plt.xlim(-1, Days)
plt.xlabel('Simulation days')
plt.ylabel('Power [kW]')
plt.legend()
plt.savefig('Total_5year_NoGas_60-40.pdf')

plt.figure(figsize=(10,6))
#plt.bar(x2, wind_prod, width=0.3, color='blue')
#plt.bar(day, green, color='green',label='extra energy')
plt.fill_between(x2, wind_store, color='green',label='extra energy')
plt.fill_between(x, dch_2, color='purple', label='Discharge')
plt.fill_between(x, ch_2, color='red', label='Charge')
plt.title('Power used and produced for 5 year (with gas cap)')
plt.xlim(-1, Days)
plt.xlabel('Simulation days')
plt.ylabel('Power [kW]')
plt.legend()
plt.show()
plt.savefig('Total_5year_Gas_60-40.pdf')


area_ch1 = trapezoid(ch1, x)
area_dch1 = trapezoid(dch1, x)
print(f"The power used to charge the reservoirs: {area_ch1*24} kW h")
print(f"The power recovered during discharge is: {area_dch1*24} kW h")
print(f"5 year w/o gas -> We recover a {area_dch1/area_ch1*100} %")

area_ch2 = trapezoid(ch2, x)
area_dch2 = trapezoid(dch2, x)
print(f"The power used to charge the reservoirs: {area_ch2*24} kW h")
print(f"The power recovered during discharge is: {area_dch2*24} kW h")
print(f"5 year w gas -> We recover a {area_dch2/area_ch2*100} %")
