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

SummaryData1=EclSum('./5YEARS_GAS_MIDBHP'+'.UNSMRY')
SummaryData2=EclSum('./5YEARS_NOGAS_MIDBHP'+'.UNSMRY')
SumaaryData3=EclSum('./AQUIFER_GAS'+'.UNSMRY')
SumaaryData4=EclSum('./AQUIFER_NOGAS'+'.UNSMRY')
Days = 1000

year = '2023'
strt_date = date(int(year),1,1)
afTime1=SummaryData1.numpy_vector("TIME")
afTime2=SummaryData2.numpy_vector("TIME")
afTime3=SumaaryData3.numpy_vector("TIME")
afTime4=SumaaryData4.numpy_vector("TIME")


def step_function(x, points, values):
    if len(points) != len(values):
        raise ValueError("The number of points must match the number of values.")
    
    # Create the piecewise function
    conditions = [(x > points[i-1]) & (x <= points[i]) for i in range(len(points) - 1)]
    conditions.append(x >= points[-1])
    
    return np.piecewise(x, conditions, values)

#CHARGE PERIOD IS THE SAME FOR ALL CASES except case 5
WPR_TOP1 = -SummaryData1.numpy_vector("WWPR:TOP")
WPR_TOP2 = -SummaryData2.numpy_vector("WWPR:TOP")
WPR_TOP3 = -SumaaryData3.numpy_vector("WWPR:TOP")
WPR_TOP4 = -SumaaryData4.numpy_vector("WWPR:TOP")

#DISCHARGE RATES 
# different way of discharging!
WPR_BOTTOM1 = SummaryData1.numpy_vector("WWPR:BOTTOM")
WPR_BOTTOM2 = SummaryData2.numpy_vector("WWPR:BOTTOM")
WPR_BOTTOM3 = SumaaryData3.numpy_vector("WWPR:BOTTOM")
WPR_BOTTOM4 = SumaaryData4.numpy_vector("WWPR:BOTTOM")


plt.figure(figsize=(10,6))
plt.plot(afTime1, WPR_TOP1, drawstyle='steps-pre', color='black', label='Charge')
plt.plot(afTime1, WPR_BOTTOM1, drawstyle='steps-pre', color='green', label='Discharge')
plt.title('Base Case with Gas Cap', fontsize=15)
plt.xlim(0, Days)
plt.xlabel('Days', fontsize=12)
plt.ylabel('Water rate [m3/day]',fontsize=12)
plt.grid(True)
plt.legend()
plt.savefig('BaseCase_Gas.pdf')

plt.figure(figsize=(10,6))
plt.plot(afTime2, WPR_TOP2, drawstyle='steps-pre', color='black', label='Charge')
plt.plot(afTime2, WPR_BOTTOM2, drawstyle='steps-pre', color='green', label='Discharge')
plt.title('Base Case without Gas Cap', fontsize=15)
plt.xlim(0, Days)
plt.xlabel('Days', fontsize=12)
plt.ylabel('Water rate [m3/day]',fontsize=12)
plt.grid(True)
plt.legend()
plt.savefig('BaseCase_NoGas.pdf')

plt.figure(figsize=(10,6))
plt.plot(afTime3, WPR_TOP3, drawstyle='steps-pre', color='black', label='Charge')
plt.plot(afTime3, WPR_BOTTOM3, drawstyle='steps-pre', color='green', label='Discharge')
plt.title('Aquifer with Gas Cap', fontsize=15)
plt.xlim(0, Days)
plt.xlabel('Days', fontsize=12)
plt.ylabel('Water rate [m3/day]',fontsize=12)
plt.grid(True)
plt.legend()
plt.savefig('Aquifer_Gas.pdf')

plt.figure(figsize=(10,6))
plt.plot(afTime4, WPR_TOP4, drawstyle='steps-pre', color='black', label='Charge')
plt.plot(afTime4, WPR_BOTTOM4, drawstyle='steps-pre', color='green', label='Discharge')
plt.title('Aquifer without Gas Cap', fontsize=15)
plt.xlim(0, Days)
plt.xlabel('Days', fontsize=12)
plt.ylabel('Water rate [m3/day]',fontsize=12)
plt.grid(True)
plt.legend()
plt.savefig('Aquifer_NoGas.pdf')

PR_TOP1=SummaryData1.numpy_vector("RPR:1")
PR_BOTTOM1=SummaryData1.numpy_vector("RPR:2")
PR_TOP2=SummaryData2.numpy_vector("RPR:1")
PR_BOTTOM2=SummaryData2.numpy_vector("RPR:2")
PR_BOTTOM3=SumaaryData3.numpy_vector("RPR:2")
PR_TOP3=SumaaryData3.numpy_vector("RPR:1")
PR_BOTTOM4=SumaaryData4.numpy_vector("RPR:2")
PR_TOP4=SumaaryData4.numpy_vector("RPR:1")

# Pressures in reservoirs
plt.figure(figsize=(10,6))
plt.plot(afTime1, PR_TOP1, drawstyle='steps-pre', color='blue', label='With Gas Cap')
plt.plot(afTime1, PR_BOTTOM1, drawstyle='steps-pre', color='blue')
plt.plot(afTime2, PR_TOP2, drawstyle='steps-pre', color='green', label='Without Gas Cap')
plt.plot(afTime2, PR_BOTTOM2, drawstyle='steps-pre', color='green')
plt.plot(afTime3, PR_TOP3, drawstyle='steps-pre', color='red', label='Aquifer with Gas Cap')
plt.plot(afTime3, PR_BOTTOM3, drawstyle='steps-pre', color='red')
plt.plot(afTime4, PR_TOP4, drawstyle='steps-pre', color='orange', label='Aquifer without Gas Cap')
plt.plot(afTime4, PR_BOTTOM4, drawstyle='steps-pre', color='orange')
plt.title('Average reservoir pressures', fontsize=15)
plt.xlabel('Days', fontsize=12)
plt.ylabel('Press [bar]',fontsize=12)
plt.xlim(0, Days)
plt.grid(True)
plt.legend()
#plt.show()
plt.savefig('Pressures_cycles.pdf')


DeltaP1=PR_BOTTOM1-PR_TOP1
DeltaP2=PR_BOTTOM2-PR_TOP2
DeltaP3=PR_BOTTOM3-PR_TOP3
DeltaP4=PR_BOTTOM4-PR_TOP4

Pw_ch1=[]
Pw_ch2=[]
Pw_dch1=[]
Pw_dch2=[]
Pw_ch3=[]
Pw_ch4=[]
Pw_dch3=[]
Pw_dch4=[]

time1 = []
time2 = []
time3 = []
time4 = []

time1.append(0)
Pw_ch1.append(0)
Pw_dch1.append(0)
time2.append(0)
Pw_ch2.append(0)
Pw_dch2.append(0)
time3.append(0)
Pw_ch3.append(0)
Pw_dch3.append(0)
time4.append(0)
Pw_ch4.append(0)
Pw_dch4.append(0)

for i in range(len(afTime1)):
    if i == 0:
        time1.append(afTime1[i])
        Pw_ch1.append(4.37*WPR_TOP1[i]*10**5/(24*3600)*10**(-3))
        Pw_dch1.append(0)
    else:
        Pw_ch1.append((DeltaP1[i-1])*WPR_TOP1[i]*10**5/(24*3600)*10**(-3))
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
        Pw_ch2.append((DeltaP2[i-1])*WPR_TOP2[i]*10**5/(24*3600)*10**(-3))
        Pw_dch2.append((DeltaP2[i-1]-4.37)*WPR_BOTTOM2[i]*10**5/(24*3600)*10**(-3))
        time2.append(afTime2[i])
time2.append(time2[-1]+0.2)
Pw_ch2.append(0)
Pw_dch2.append(0)
Pw_ch2=np.array(Pw_ch2)
Pw_dch2=np.array(Pw_dch2)
time2=np.array(time2)

for i in range(len(afTime3)):
    if i == 0:
        time3.append(afTime3[i])
        Pw_ch3.append(4.37*WPR_TOP3[i]*10**5/(24*3600)*10**(-3))
        Pw_dch3.append(0)
    else:
        Pw_ch3.append((DeltaP3[i-1])*WPR_TOP3[i]*10**5/(24*3600)*10**(-3))
        Pw_dch3.append((DeltaP3[i-1]-4.37)*WPR_BOTTOM3[i]*10**5/(24*3600)*10**(-3))
        time3.append(afTime3[i])
time3.append(time3[-1]+0.2)
Pw_ch3.append(0)
Pw_dch3.append(0)
Pw_ch3=np.array(Pw_ch3)
Pw_dch3=np.array(Pw_dch3)
time3=np.array(time3)

for i in range(len(afTime4)):
    if i == 0:
        time4.append(afTime4[i])
        Pw_ch4.append(4.37*WPR_TOP4[i]*10**5/(24*3600)*10**(-3))
        Pw_dch4.append(0)
    else:
        Pw_ch4.append((DeltaP4[i-1])*WPR_TOP4[i]*10**5/(24*3600)*10**(-3))
        Pw_dch4.append((DeltaP4[i-1]-4.37)*WPR_BOTTOM4[i]*10**5/(24*3600)*10**(-3))
        time4.append(afTime4[i])
time4.append(time4[-1]+0.2)
Pw_ch4.append(0)
Pw_dch4.append(0)
Pw_ch4=np.array(Pw_ch4)
Pw_dch4=np.array(Pw_dch4)
time4=np.array(time4)

x = np.linspace(0, 1000, 5000)
ch1 = step_function(x, time1, Pw_ch1)
dch1 = step_function(x, time1, Pw_dch1)
ch2 = step_function(x, time2, Pw_ch2)
dch2 = step_function(x, time2, Pw_dch2)
ch3 = step_function(x, time3, Pw_ch3)
dch3 = step_function(x, time3, Pw_dch3)
ch4 = step_function(x, time4, Pw_ch4)
dch4 = step_function(x, time4, Pw_dch4)


plt.figure(figsize=(10,6))
plt.plot(x, ch1, color='black', label='Charge')
plt.plot(x, dch1, color='green', label='Discharge')
plt.title('Power used and produced of base case with gas cap', fontsize=15)
plt.xlim(0, Days)
plt.xlabel('Days',fontsize=12)
plt.ylabel('Power [kW]',fontsize=12)
plt.grid(True)
plt.legend()
plt.savefig('Power_base_gas.pdf')

plt.figure(figsize=(10,6))
plt.plot(x, ch2, color='black', label='Charge')
plt.plot(x, dch2, color='green', label='Discharge')
plt.title('Power used and produced of base case without gas cap', fontsize=15)
plt.xlim(0, Days)
plt.xlabel('Days',fontsize=12)
plt.ylabel('Power [kW]',fontsize=12)
plt.grid(True)
plt.legend()
#plt.show()
plt.savefig('Power_base_nogas.pdf')

plt.figure(figsize=(10,6))
plt.plot(x, ch3, color='black', label='Charge')
plt.plot(x, dch3, color='green', label='Discharge')
plt.title('Power used and produced of aquifer with gas cap', fontsize=15)
plt.xlim(0, Days)
plt.xlabel('Days',fontsize=12)
plt.ylabel('Power [kW]',fontsize=12)
plt.grid(True)
plt.legend()
#plt.show()
plt.savefig('Power_aquifer_gas.pdf')

plt.figure(figsize=(10,6))
plt.plot(x, ch4, color='black', label='Charge')
plt.plot(x, dch4, color='green', label='Discharge')
plt.title('Power used and produced of aquifer without gas cap', fontsize=15)
plt.xlim(0, Days)
plt.xlabel('Days',fontsize=12)
plt.ylabel('Power [kW]',fontsize=12)
plt.grid(True)
plt.legend()
#plt.show()
plt.savefig('Power_aquifer_nogas.pdf')

area_ch1 = trapezoid(ch1, x)
area_dch1 = trapezoid(dch1, x)
print(f"The power used to charge the reservoirs: {area_ch1*24} kW h")
print(f"The power recovered during discharge is: {area_dch1*24} kW h")
print(f"With GasCap -> We recover a {area_dch1/area_ch1*100} %")

area_ch2 = trapezoid(ch2, x)
area_dch2 = trapezoid(dch2, x)
print(f"The power used to charge the reservoirs: {area_ch2*24} kW h")
print(f"The power recovered during discharge is: {area_dch2*24} kW h")
print(f"Without GasCap -> We recover a {area_dch2/area_ch2*100} %")

area_ch3 = trapezoid(ch3, x)
area_dch3 = trapezoid(dch3, x)
print(f"The power used to charge the reservoirs: {area_ch3*24} kW h")
print(f"The power recovered during discharge is: {area_dch3*24} kW h")
print(f"With GasCap -> We recover a {area_dch3/area_ch3*100} %")

area_ch4 = trapezoid(ch4, x)
area_dch4 = trapezoid(dch4, x)
print(f"The power used to charge the reservoirs: {area_ch4*24} kW h")
print(f"The power recovered during discharge is: {area_dch4*24} kW h")
print(f"Without GasCap -> We recover a {area_dch4/area_ch4*100} %")

