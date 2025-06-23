import numpy as np
import pandas as pd
from ecl.summary import EclSum
import matplotlib.pyplot as plt
from scipy.integrate import trapezoid
from openpyxl import Workbook

# Load wind energy rates from Excel
excel_file = 'WIND_POWER2.xlsx'
df = pd.read_excel(excel_file)
day = np.array(df['Day'])
power = np.array(df['Power'])

# Interpolate the wind power data to match the simulation time steps (0.5-day intervals)
simulation_days = np.arange(0, 2000, 0.5)
interpolated_power = np.interp(simulation_days, day, power)

# Define wind charge and discharge thresholds
Ch_wind, Dch_wind = 60, 40

# Process wind power data into chargeable and storable components
def process_wind_power(interpolated_power, Ch_wind):
    pw_windDEF = []
    store_windDEF = []
    
    for power in interpolated_power:
        if power >= Ch_wind:
            pw_windDEF.append(Ch_wind)
            store_windDEF.append(-(power - Ch_wind))
        else:
            pw_windDEF.append(power)
            store_windDEF.append(0)
    
    return np.array(pw_windDEF), np.array(store_windDEF)

# Calculate wind power usage
pw_windDEF, store_windDEF = process_wind_power(interpolated_power, Ch_wind)
wind_time = np.array([0] + list(range(len(interpolated_power))))

# Load ECL summary data
summary_cases = {
    '5YEARS_NOGAS': ('./5YEARS_NOGAS.UNSMRY', 'blue'),
    '5YEARS_GAS': ('./5YEARS_GAS.UNSMRY', 'red'),
    '5YEARS_NOGAS_HIGHBHP': ('./5YEARS_NOGAS_HIGHBHP.UNSMRY', 'green'),
    '5YEARS_GAS_HIGHBHP': ('./5YEARS_GAS_HIGHBHP.UNSMRY', 'orange'),
    '5YEARS_NOGAS_LOWBHP': ('./5YEARS_NOGAS_LOWBHP.UNSMRY', 'purple'),
    '5YEARS_GAS_LOWBHP': ('./5YEARS_GAS_LOWBHP.UNSMRY', 'brown')
}

# Load summary data into a dictionary
summary_data = {label: EclSum(file) for label, (file, _) in summary_cases.items()}

# Function to calculate charging and discharging power
def calculate_power(summary_data, label, color):
    afTime = summary_data.numpy_vector("TIME")
    PR_TOP = summary_data.numpy_vector("RPR:1")
    PR_BOTTOM = summary_data.numpy_vector("RPR:2")
    WPR_TOP = summary_data.numpy_vector("WWPR:TOP")
    WPR_BOTTOM = summary_data.numpy_vector("WWPR:BOTTOM")

    DeltaP = PR_BOTTOM - PR_TOP
    Pw_ch, Pw_dch = [], []
    
    # Calculate charging and discharging power
    for i in range(len(afTime)):
        if i == 0:
            Pw_ch.append(4.37 * WPR_TOP[i] * 10**5 / (24 * 3600) * 10**(-3))
            Pw_dch.append(0)
        else:
            Pw_ch.append(DeltaP[i - 1] * WPR_TOP[i] * 10**5 / (24 * 3600) * 10**(-3))
            Pw_dch.append((DeltaP[i - 1] - 4.37) * WPR_BOTTOM[i] * 10**5 / (24 * 3600) * 10**(-3))

    Pw_ch = np.array(Pw_ch)
    Pw_dch = np.array(Pw_dch)

    # Plot reservoir pressures
    plt.plot(afTime, PR_TOP, drawstyle='steps-pre', color=color, label=f'{label} TOP')
    plt.plot(afTime, PR_BOTTOM, drawstyle='steps-pre', color=color, linestyle='--', label=f'{label} BOTTOM')

    return afTime, Pw_ch, Pw_dch

# Plot reservoir pressures across all cases
plt.figure(figsize=(12, 8))
results = {}
for label, (_, color) in summary_cases.items():
    afTime, Pw_ch, Pw_dch = calculate_power(summary_data[label], label, color)
    results[label] = {'time': afTime, 'charge_power': Pw_ch, 'discharge_power': Pw_dch}

plt.title('Average Reservoir Pressures Across Different Scenarios')
plt.xlabel('Days')
plt.ylabel('Pressure [bar]')
plt.legend()
plt.grid(True)
plt.savefig('Reservoir_Pressures_All_Scenarios.pdf')
plt.show()

# Plot charging and discharging power
plt.figure(figsize=(12, 8))
for label, result in results.items():
    afTime = result['time']
    Pw_ch = result['charge_power']
    Pw_dch = result['discharge_power']
    
    plt.plot(afTime, Pw_ch, label=f'{label} Charge', linestyle='-', color=summary_cases[label][1])
    plt.plot(afTime, Pw_dch, label=f'{label} Discharge', linestyle='--', color=summary_cases[label][1])

plt.title('Charging and Discharging Power Across Scenarios')
plt.xlabel('Days')
plt.ylabel('Power [kW]')
plt.legend()
plt.grid(True)
plt.savefig('Charging_Discharging_All_Scenarios.pdf')
plt.show()

# Function to integrate stored and wasted power using trapezoidal method
def integrate_power(ch1, dch1, x):
    area_ch = trapezoid(ch1, x)
    area_dch = trapezoid(dch1, x)
    return area_ch * 24, area_dch * 24, area_dch / area_ch * 100

# Calculate and print efficiency for each case
x = np.linspace(0, 2000, 5000)
for label, result in results.items():
    ch1 = np.interp(x, result['time'], -result['charge_power'])
    dch1 = np.interp(x, result['time'], result['discharge_power'])
    
    area_ch, area_dch, efficiency = integrate_power(ch1, dch1, x)
    print(f"{label}:")
    print(f"  Power used to charge the reservoirs: {area_ch} kWh")
    print(f"  Power recovered during discharge: {area_dch} kWh")
    print(f"  Efficiency: {efficiency:.2f}%\n")

# Export charge and discharge power data to an Excel file
excel_data = pd.DataFrame({'Days': simulation_days})
for label, result in results.items():
    charge_col_name = f'{label}_Charge'
    discharge_col_name = f'{label}_Discharge'
    
    charge_power_interp = np.interp(simulation_days, result['time'], result['charge_power'])
    discharge_power_interp = np.interp(simulation_days, result['time'], result['discharge_power'])
    
    excel_data[charge_col_name] = charge_power_interp
    excel_data[discharge_col_name] = discharge_power_interp

# Save to Excel file
output_file = 'Charge_Discharge_Power_Scenarios.xlsx'
excel_data.to_excel(output_file, index=False)
print(f'Data successfully saved to {output_file}')
