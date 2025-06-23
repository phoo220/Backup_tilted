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

SummaryData1=EclSum('./GAS_0'+'.UNSMRY')
SummaryData2=EclSum('./GAS_20'+'.UNSMRY')
SummaryData3=EclSum('./NOGAS_LEAK'+'.UNSMRY')
SummaryData4=EclSum('./GAS_LEAK'+'.UNSMRY')
#SummaryData5=EclSum('./GAS_80'+'.UNSMRY')
#SummaryData6=EclSum('./GAS_100'+'.UNSMRY')
Days = 2030

year = '2023'
strt_date = date(int(year),1,1)
afTime1=SummaryData1.numpy_vector("TIME")
afTime2=SummaryData2.numpy_vector("TIME")
afTime3=SummaryData3.numpy_vector("TIME")
afTime4=SummaryData4.numpy_vector("TIME")
#afTime5=SummaryData5.numpy_vector("TIME")
#afTime6=SummaryData6.numpy_vector("TIME")


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
WPR_TOP3 = -SummaryData3.numpy_vector("WWPR:TOP")
WPR_TOP4 = -SummaryData4.numpy_vector("WWPR:TOP")
#WPR_TOP5 = -SummaryData5.numpy_vector("WWPR:TOP")
#WPR_TOP6 = -SummaryData6.numpy_vector("WWPR:TOP")

#DISCHARGE RATES 
# different way of discharging!
WPR_BOTTOM1 = SummaryData1.numpy_vector("WWPR:BOTTOM")
WPR_BOTTOM2 = SummaryData2.numpy_vector("WWPR:BOTTOM")
WPR_BOTTOM3 = SummaryData3.numpy_vector("WWPR:BOTTOM")
WPR_BOTTOM4 = SummaryData4.numpy_vector("WWPR:BOTTOM")
#WPR_BOTTOM5 = SummaryData5.numpy_vector("WWPR:BOTTOM")
#WPR_BOTTOM6 = SummaryData6.numpy_vector("WWPR:BOTTOM")


## plt.figure(figsize=(10,6))
## plt.plot(afTime1, WPR_TOP1, drawstyle='steps-pre', color='black', label='Charge')
## plt.plot(afTime1, WPR_BOTTOM1, drawstyle='steps-pre', color='green', label='Discharge')
## plt.title('Storage with Gas Cap', fontsize=15)
## plt.xlim(0, Days)
## plt.xlabel('Days', fontsize=12)
## plt.ylabel('Water rate [m3/day]',fontsize=12)
## plt.grid(True)
## plt.legend()
#plt.savefig('Rates_Gas_50.pdf')

## plt.figure(figsize=(10,6))
## plt.plot(afTime2, WPR_TOP2, drawstyle='steps-pre', color='black', label='Charge')
## plt.plot(afTime2, WPR_BOTTOM2, drawstyle='steps-pre', color='green', label='Discharge')
## plt.title('Storage without Gas Cap', fontsize=15)
## plt.xlim(0, 100)
## plt.xlabel('Days', fontsize=12)
## plt.ylabel('Water rate [m3/day]',fontsize=12)
## plt.grid(True)
## plt.legend()
#plt.savefig('Rates_NoGas_50.pdf')


PR_TOP1=SummaryData1.numpy_vector("RPR:1")
PR_BOTTOM1=SummaryData1.numpy_vector("RPR:2")
PR_TOP2=SummaryData2.numpy_vector("RPR:1")
PR_BOTTOM2=SummaryData2.numpy_vector("RPR:2")
PR_TOP3=SummaryData3.numpy_vector("RPR:1")
PR_BOTTOM3=SummaryData3.numpy_vector("RPR:2")
PR_TOP4=SummaryData4.numpy_vector("RPR:1")
PR_BOTTOM4=SummaryData4.numpy_vector("RPR:2")
## PR_TOP5=SummaryData5.numpy_vector("RPR:1")
## PR_BOTTOM5=SummaryData5.numpy_vector("RPR:2")
## PR_TOP6=SummaryData6.numpy_vector("RPR:1")
## PR_BOTTOM6=SummaryData6.numpy_vector("RPR:2")

# Pressures in reservoirs
## plt.figure(figsize=(10,6))
## plt.plot(afTime1, PR_TOP1, drawstyle='steps-pre', color='blue', label='With Gas Cap')
## plt.plot(afTime1, PR_BOTTOM1, drawstyle='steps-pre', color='blue')
## plt.plot(afTime2, PR_TOP2, drawstyle='steps-pre', color='green', label='Without Gas Cap')
## plt.plot(afTime2, PR_BOTTOM2, drawstyle='steps-pre', color='green')
## plt.title('Average reservoir pressures', fontsize=15)
## plt.xlabel('Days', fontsize=12)
## plt.ylabel('Press [bar]',fontsize=12)
## plt.xlim(0, Days)
## plt.grid(True)
## plt.legend()
#plt.show()
#plt.savefig('Pressures_50.pdf')


DeltaP1=PR_BOTTOM1-PR_TOP1
DeltaP2=PR_BOTTOM2-PR_TOP2
DeltaP3=PR_BOTTOM3-PR_TOP3
DeltaP4=PR_BOTTOM4-PR_TOP4
## DeltaP5=PR_BOTTOM5-PR_TOP5
## DeltaP6=PR_BOTTOM6-PR_TOP6

Pw_ch1=[]
Pw_ch2=[]
Pw_ch3=[]
Pw_ch4=[]
## Pw_ch5=[]
## Pw_ch6=[]

Pw_dch1=[]
Pw_dch2=[]
Pw_dch3=[]
Pw_dch4=[]
## Pw_dch5=[]
## Pw_dch6=[]

time1 = []
time2 = []
time3 = []
time4 = []
## time5 = []
## time6 = []

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
## time5.append(0)
## Pw_ch5.append(0)
## Pw_dch5.append(0)
## time6.append(0)
## Pw_ch6.append(0)
## Pw_dch6.append(0)

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

## for i in range(len(afTime5)):
##     if i == 0:
##         time5.append(afTime5[i])
##         Pw_ch5.append(4.37*WPR_TOP5[i]*10**5/(24*3600)*10**(-3))
##         Pw_dch5.append(0)
##     else:
##         Pw_ch5.append((DeltaP5[i-1])*WPR_TOP5[i]*10**5/(24*3600)*10**(-3))
##         Pw_dch5.append((DeltaP5[i-1]-4.37)*WPR_BOTTOM5[i]*10**5/(24*3600)*10**(-3))
##         time5.append(afTime5[i])
## time5.append(time5[-1]+0.2)
## Pw_ch5.append(0)
## Pw_dch5.append(0)
## Pw_ch5=np.array(Pw_ch5)
## Pw_dch5=np.array(Pw_dch5)
## time5=np.array(time5)
## 
## for i in range(len(afTime6)):
##     if i == 0:
##         time6.append(afTime6[i])
##         Pw_ch6.append(4.37*WPR_TOP6[i]*10**5/(24*3600)*10**(-3))
##         Pw_dch6.append(0)
##     else:
##         Pw_ch6.append((DeltaP6[i-1])*WPR_TOP6[i]*10**5/(24*3600)*10**(-3))
##         Pw_dch6.append((DeltaP6[i-1]-4.37)*WPR_BOTTOM6[i]*10**5/(24*3600)*10**(-3))
##         time6.append(afTime6[i])
## time6.append(time6[-1]+0.2)
## Pw_ch6.append(0)
## Pw_dch6.append(0)
## Pw_ch6=np.array(Pw_ch6)
## Pw_dch6=np.array(Pw_dch6)
## time6=np.array(time6)

x = np.linspace(0, Days, 5000)
ch1 = step_function(x, time1, Pw_ch1)
dch1 = step_function(x, time1, Pw_dch1)
ch2 = step_function(x, time2, Pw_ch2)
dch2 = step_function(x, time2, Pw_dch2)
ch3 = step_function(x, time3, Pw_ch3)
dch3 = step_function(x, time3, Pw_dch3)
ch4 = step_function(x, time4, Pw_ch4)
dch4 = step_function(x, time4, Pw_dch4)
## ch5 = step_function(x, time5, Pw_ch5)
## dch5 = step_function(x, time5, Pw_dch5)
## ch6 = step_function(x, time6, Pw_ch6)
## dch6 = step_function(x, time6, Pw_dch6)


## plt.figure(figsize=(10,6))
## plt.plot(x, ch1, color='black', label='Charge')
## plt.plot(x, dch1, color='green', label='Discharge')
## plt.title('Power used and produced of storage with gas cap', fontsize=15)
## plt.xlim(0, Days)
## plt.xlabel('Days',fontsize=12)
## plt.ylabel('Power [kW]',fontsize=12)
## plt.grid(True)
## plt.legend()
## plt.savefig('Power_gas_50.pdf')
## 
## plt.figure(figsize=(10,6))
## plt.plot(x, ch2, color='black', label='Charge')
## plt.plot(x, dch2, color='green', label='Discharge')
## plt.title('Power used and produced of storage without gas cap', fontsize=15)
## plt.xlim(0, Days)
## plt.xlabel('Days',fontsize=12)
## plt.ylabel('Power [kW]',fontsize=12)
## plt.grid(True)
## plt.legend()
## #plt.show()
## plt.savefig('Power_nogas_50.pdf')


area_ch1 = trapezoid(ch1, x)
area_dch1 = trapezoid(dch1, x)
print(f"The power used to charge the reservoirs: {area_ch1*24} kW h")
print(f"The power recovered during discharge is: {area_dch1*24} kW h")
print(f"Gas 0% -> We recover a {area_dch1/area_ch1*100} %")

area_ch2 = trapezoid(ch2, x)
area_dch2 = trapezoid(dch2, x)
print(f"The power used to charge the reservoirs: {area_ch2*24} kW h")
print(f"The power recovered during discharge is: {area_dch2*24} kW h")
print(f"Gas 20% -> We recover a {area_dch2/area_ch2*100} %")

area_ch3 = trapezoid(ch3, x)
area_dch3 = trapezoid(dch3, x)
print(f"The power used to charge the reservoirs: {area_ch3*24} kW h")
print(f"The power recovered during discharge is: {area_dch3*24} kW h")
print(f"Gas 40% -> We recover a {area_dch3/area_ch3*100} %")

area_ch4 = trapezoid(ch4, x)
area_dch4 = trapezoid(dch4, x)
print(f"The power used to charge the reservoirs: {area_ch4*24} kW h")
print(f"The power recovered during discharge is: {area_dch4*24} kW h")
print(f"Gas 60% -> We recover a {area_dch4/area_ch4*100} %")

## area_ch5 = trapezoid(ch5, x)
## area_dch5 = trapezoid(dch5, x)
## print(f"The power used to charge the reservoirs: {area_ch5*24} kW h")
## print(f"The power recovered during discharge is: {area_dch5*24} kW h")
## print(f"Gas 80% -> We recover a {area_dch5/area_ch5*100} %")
## 
## area_ch6 = trapezoid(ch6, x)
## area_dch6 = trapezoid(dch6, x)
## print(f"The power used to charge the reservoirs: {area_ch6*24} kW h")
## print(f"The power recovered during discharge is: {area_dch6*24} kW h")
## print(f"Gas 100% -> We recover a {area_dch6/area_ch6*100} %")

V = (1000*1000*40)*0.3
p_eq_top = 201.95
p_eq_bot = 206.32

E_bot1 = (PR_BOTTOM1[-1]**2-p_eq_bot**2)*(V/2)*(4.67E-5+4.84E-5)/36
E_bot2 = (PR_BOTTOM2[-1]**2-p_eq_bot**2)*(V/2)*(4.67E-5+4.84E-5)/36


print(f"Internal energy left in the bottom layer:")
print(f"With GasCap: {E_bot1} kW h")
print(f"Without GasCap: {E_bot2} kW h")

Capacity_1 = -area_ch1*24/1000000
Capacity_2 = -area_ch2*24/1000000
Capacity_3 = -area_ch3*24/1000000
Capacity_4 = -area_ch4*24/1000000

Effi_1 = -area_dch1/area_ch1*100
Effi_2 = -area_dch2/area_ch2*100
Effi_3 = -area_dch3/area_ch3*100
Effi_4 = -area_dch4/area_ch4*100

#efficiency vs deltat
GasCapsize = [0, 20]
Efficiency = [Effi_1, Effi_2]
Efficiency_leak = [Effi_3, Effi_4 ]
Capacity = [Capacity_1, Capacity_2]
Capacity_leak = [Capacity_3, Capacity_4]

fig, ax1 = plt.subplots(figsize=(10, 6))
ax1.plot(GasCapsize, Efficiency, color='red', label='Efficiency')
ax1.plot(GasCapsize, Efficiency_leak, color='red', linestyle='dashed', label='Efficiency with leak')
ax1.set_xlabel(r'Gas Cap size (%)', fontsize=12)
ax1.set_ylabel(r'Efficiency (%)', color='black', fontsize=12)
ax1.tick_params(axis='y', labelcolor='black')
ax1.grid(True)
ax1.legend(loc='upper left')

ax1.set_xlim(0,20)
ax2 = ax1.twinx()
ax2.plot(GasCapsize, Capacity, color='blue', label='Capacity')
ax2.plot(GasCapsize, Capacity_leak, color='blue', linestyle='dashed', label='Capacity with leak')
ax2.set_ylabel('Capacity (GWh)', color='black', fontsize=12)
ax2.tick_params(axis='y', labelcolor='black')
ax2.legend(loc='upper right')
plt.savefig('Efficiency_leak.pdf')
plt.show()
