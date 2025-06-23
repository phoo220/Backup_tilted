import datetime

# Average rate is 1000 

def run(ecl_state, schedule, report_step, summary_state, actionx_callback):
    Pro_total = summary_state["WWPT:BOTTOM"]
    In_total = summary_state["WWIT:BOTTOM"]
    Diff = Pro_total - In_total
    PR1 = summary_state["RPR:1"]
    PR2 = summary_state["RPR:2"]
    delta = PR2-PR1
    deltaLIM = 4.37
    rate = 1000
    kw_open = f"""
	WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	{rate}	1*	1*	1*	153/
	/
	WCONINJE
	'TOP'	WAT	'OPEN'	RATE	{rate}	1*	255/
	/ """
    
    kw_close = f"""
	WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
	/
	WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
	/ """
    
    if (delta > deltaLIM):
        schedule.insert_keywords(kw_open, report_step)
        print('Discharging')
        print(delta)
    
    if (not Pro_total < In_total):
        schedule.insert_keywords(kw_close, report_step)
        print('No discharge possible')
        print(delta)
    
    if (not delta > deltaLIM):
        schedule.insert_keywords(kw_close, report_step)
        print('No discharge possible')
        print(delta)
        
    
        
		

	#if (delta <= deltaLIM):
	#	schedule.insert_keywords(kw_close, report_step)
	#	print('No discharge possible')
	#	print(delta)
  
	
