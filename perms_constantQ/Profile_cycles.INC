WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 1:

PYACTION
	'1CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'1CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 2:

PYACTION
	'2CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'2CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 3:

PYACTION
	'3CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'3CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 4:

PYACTION
	'4CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'4CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 5:

PYACTION
	'5CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'5CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 6:

PYACTION
	'6CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'6CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 7:

PYACTION
	'7CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'7CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 8:

PYACTION
	'8CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'8CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 9:

PYACTION
	'9CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'9CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 10:

PYACTION
	'10CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'10CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 11:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 12:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 13:

PYACTION
	'13DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'13DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 14:

PYACTION
	'14DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'14DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 15:

PYACTION
	'15DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'15DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 16:

PYACTION
	'16DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'16DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 17:

PYACTION
	'17DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'17DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 18:

PYACTION
	'18DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'18DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 19:

PYACTION
	'19DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'19DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 20:

PYACTION
	'20DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'20DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 21:

PYACTION
	'21DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'21DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 22:

PYACTION
	'22DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'22DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 21:

PYACTION
	'21CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'21CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 22:

PYACTION
	'22CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'22CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 23:

PYACTION
	'23CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'23CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 24:

PYACTION
	'24CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'24CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 25:

PYACTION
	'25CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'25CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 26:

PYACTION
	'26CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'26CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 27:

PYACTION
	'27CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'27CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 28:

PYACTION
	'28CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'28CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 29:

PYACTION
	'29CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'29CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 30:

PYACTION
	'30CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'30CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 33:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 34:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 35:

PYACTION
	'35DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'35DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 36:

PYACTION
	'36DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'36DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 37:

PYACTION
	'37DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'37DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 38:

PYACTION
	'38DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'38DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 39:

PYACTION
	'39DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'39DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 40:

PYACTION
	'40DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'40DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 41:

PYACTION
	'41DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'41DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 42:

PYACTION
	'42DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'42DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 43:

PYACTION
	'43DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'43DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 44:

PYACTION
	'44DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'44DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 41:

PYACTION
	'41CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'41CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 42:

PYACTION
	'42CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'42CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 43:

PYACTION
	'43CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'43CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 44:

PYACTION
	'44CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'44CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 45:

PYACTION
	'45CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'45CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 46:

PYACTION
	'46CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'46CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 47:

PYACTION
	'47CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'47CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 48:

PYACTION
	'48CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'48CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 49:

PYACTION
	'49CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'49CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 50:

PYACTION
	'50CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'50CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 55:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 56:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 57:

PYACTION
	'57DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'57DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 58:

PYACTION
	'58DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'58DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 59:

PYACTION
	'59DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'59DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 60:

PYACTION
	'60DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'60DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 61:

PYACTION
	'61DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'61DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 62:

PYACTION
	'62DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'62DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 63:

PYACTION
	'63DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'63DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 64:

PYACTION
	'64DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'64DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 65:

PYACTION
	'65DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'65DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 66:

PYACTION
	'66DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'66DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 61:

PYACTION
	'61CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'61CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 62:

PYACTION
	'62CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'62CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 63:

PYACTION
	'63CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'63CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 64:

PYACTION
	'64CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'64CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 65:

PYACTION
	'65CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'65CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 66:

PYACTION
	'66CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'66CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 67:

PYACTION
	'67CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'67CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 68:

PYACTION
	'68CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'68CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 69:

PYACTION
	'69CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'69CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 70:

PYACTION
	'70CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'70CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 77:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 78:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 79:

PYACTION
	'79DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'79DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 80:

PYACTION
	'80DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'80DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 81:

PYACTION
	'81DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'81DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 82:

PYACTION
	'82DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'82DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 83:

PYACTION
	'83DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'83DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 84:

PYACTION
	'84DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'84DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 85:

PYACTION
	'85DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'85DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 86:

PYACTION
	'86DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'86DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 87:

PYACTION
	'87DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'87DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 88:

PYACTION
	'88DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'88DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 81:

PYACTION
	'81CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'81CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 82:

PYACTION
	'82CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'82CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 83:

PYACTION
	'83CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'83CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 84:

PYACTION
	'84CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'84CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 85:

PYACTION
	'85CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'85CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 86:

PYACTION
	'86CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'86CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 87:

PYACTION
	'87CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'87CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 88:

PYACTION
	'88CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'88CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 89:

PYACTION
	'89CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'89CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 90:

PYACTION
	'90CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'90CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 99:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 100:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 101:

PYACTION
	'101DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'101DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 102:

PYACTION
	'102DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'102DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 103:

PYACTION
	'103DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'103DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 104:

PYACTION
	'104DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'104DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 105:

PYACTION
	'105DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'105DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 106:

PYACTION
	'106DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'106DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 107:

PYACTION
	'107DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'107DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 108:

PYACTION
	'108DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'108DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 109:

PYACTION
	'109DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'109DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 110:

PYACTION
	'110DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'110DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 101:

PYACTION
	'101CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'101CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 102:

PYACTION
	'102CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'102CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 103:

PYACTION
	'103CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'103CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 104:

PYACTION
	'104CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'104CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 105:

PYACTION
	'105CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'105CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 106:

PYACTION
	'106CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'106CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 107:

PYACTION
	'107CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'107CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 108:

PYACTION
	'108CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'108CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 109:

PYACTION
	'109CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'109CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 110:

PYACTION
	'110CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'110CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 121:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 122:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 123:

PYACTION
	'123DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'123DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 124:

PYACTION
	'124DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'124DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 125:

PYACTION
	'125DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'125DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 126:

PYACTION
	'126DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'126DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 127:

PYACTION
	'127DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'127DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 128:

PYACTION
	'128DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'128DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 129:

PYACTION
	'129DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'129DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 130:

PYACTION
	'130DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'130DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 131:

PYACTION
	'131DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'131DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 132:

PYACTION
	'132DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'132DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 121:

PYACTION
	'121CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'121CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 122:

PYACTION
	'122CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'122CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 123:

PYACTION
	'123CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'123CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 124:

PYACTION
	'124CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'124CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 125:

PYACTION
	'125CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'125CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 126:

PYACTION
	'126CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'126CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 127:

PYACTION
	'127CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'127CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 128:

PYACTION
	'128CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'128CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 129:

PYACTION
	'129CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'129CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 130:

PYACTION
	'130CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'130CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 143:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 144:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 145:

PYACTION
	'145DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'145DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 146:

PYACTION
	'146DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'146DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 147:

PYACTION
	'147DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'147DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 148:

PYACTION
	'148DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'148DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 149:

PYACTION
	'149DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'149DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 150:

PYACTION
	'150DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'150DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 151:

PYACTION
	'151DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'151DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 152:

PYACTION
	'152DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'152DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 153:

PYACTION
	'153DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'153DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 154:

PYACTION
	'154DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'154DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 141:

PYACTION
	'141CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'141CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 142:

PYACTION
	'142CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'142CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 143:

PYACTION
	'143CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'143CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 144:

PYACTION
	'144CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'144CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 145:

PYACTION
	'145CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'145CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 146:

PYACTION
	'146CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'146CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 147:

PYACTION
	'147CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'147CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 148:

PYACTION
	'148CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'148CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 149:

PYACTION
	'149CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'149CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 150:

PYACTION
	'150CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'150CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 165:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 166:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 167:

PYACTION
	'167DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'167DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 168:

PYACTION
	'168DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'168DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 169:

PYACTION
	'169DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'169DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 170:

PYACTION
	'170DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'170DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 171:

PYACTION
	'171DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'171DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 172:

PYACTION
	'172DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'172DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 173:

PYACTION
	'173DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'173DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 174:

PYACTION
	'174DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'174DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 175:

PYACTION
	'175DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'175DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 176:

PYACTION
	'176DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'176DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 161:

PYACTION
	'161CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'161CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 162:

PYACTION
	'162CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'162CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 163:

PYACTION
	'163CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'163CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 164:

PYACTION
	'164CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'164CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 165:

PYACTION
	'165CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'165CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 166:

PYACTION
	'166CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'166CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 167:

PYACTION
	'167CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'167CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 168:

PYACTION
	'168CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'168CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 169:

PYACTION
	'169CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'169CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 170:

PYACTION
	'170CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'170CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 187:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 188:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 189:

PYACTION
	'189DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'189DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 190:

PYACTION
	'190DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'190DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 191:

PYACTION
	'191DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'191DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 192:

PYACTION
	'192DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'192DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 193:

PYACTION
	'193DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'193DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 194:

PYACTION
	'194DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'194DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 195:

PYACTION
	'195DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'195DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 196:

PYACTION
	'196DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'196DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 197:

PYACTION
	'197DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'197DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 198:

PYACTION
	'198DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'198DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 181:

PYACTION
	'181CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'181CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 182:

PYACTION
	'182CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'182CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 183:

PYACTION
	'183CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'183CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 184:

PYACTION
	'184CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'184CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 185:

PYACTION
	'185CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'185CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 186:

PYACTION
	'186CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'186CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 187:

PYACTION
	'187CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'187CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 188:

PYACTION
	'188CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'188CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 189:

PYACTION
	'189CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'189CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 190:

PYACTION
	'190CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'190CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 209:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 210:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 211:

PYACTION
	'211DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'211DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 212:

PYACTION
	'212DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'212DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 213:

PYACTION
	'213DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'213DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 214:

PYACTION
	'214DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'214DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 215:

PYACTION
	'215DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'215DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 216:

PYACTION
	'216DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'216DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 217:

PYACTION
	'217DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'217DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 218:

PYACTION
	'218DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'218DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 219:

PYACTION
	'219DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'219DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 220:

PYACTION
	'220DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'220DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 201:

PYACTION
	'201CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'201CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 202:

PYACTION
	'202CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'202CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 203:

PYACTION
	'203CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'203CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 204:

PYACTION
	'204CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'204CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 205:

PYACTION
	'205CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'205CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 206:

PYACTION
	'206CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'206CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 207:

PYACTION
	'207CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'207CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 208:

PYACTION
	'208CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'208CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 209:

PYACTION
	'209CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'209CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 210:

PYACTION
	'210CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'210CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 231:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 232:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 233:

PYACTION
	'233DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'233DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 234:

PYACTION
	'234DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'234DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 235:

PYACTION
	'235DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'235DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 236:

PYACTION
	'236DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'236DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 237:

PYACTION
	'237DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'237DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 238:

PYACTION
	'238DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'238DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 239:

PYACTION
	'239DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'239DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 240:

PYACTION
	'240DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'240DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 241:

PYACTION
	'241DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'241DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 242:

PYACTION
	'242DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'242DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 221:

PYACTION
	'221CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'221CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 222:

PYACTION
	'222CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'222CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 223:

PYACTION
	'223CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'223CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 224:

PYACTION
	'224CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'224CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 225:

PYACTION
	'225CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'225CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 226:

PYACTION
	'226CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'226CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 227:

PYACTION
	'227CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'227CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 228:

PYACTION
	'228CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'228CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 229:

PYACTION
	'229CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'229CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 230:

PYACTION
	'230CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'230CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 253:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 254:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 255:

PYACTION
	'255DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'255DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 256:

PYACTION
	'256DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'256DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 257:

PYACTION
	'257DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'257DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 258:

PYACTION
	'258DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'258DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 259:

PYACTION
	'259DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'259DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 260:

PYACTION
	'260DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'260DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 261:

PYACTION
	'261DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'261DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 262:

PYACTION
	'262DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'262DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 263:

PYACTION
	'263DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'263DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 264:

PYACTION
	'264DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'264DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 241:

PYACTION
	'241CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'241CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 242:

PYACTION
	'242CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'242CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 243:

PYACTION
	'243CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'243CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 244:

PYACTION
	'244CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'244CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 245:

PYACTION
	'245CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'245CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 246:

PYACTION
	'246CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'246CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 247:

PYACTION
	'247CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'247CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 248:

PYACTION
	'248CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'248CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 249:

PYACTION
	'249CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'249CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 250:

PYACTION
	'250CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'250CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 275:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 276:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 277:

PYACTION
	'277DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'277DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 278:

PYACTION
	'278DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'278DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 279:

PYACTION
	'279DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'279DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 280:

PYACTION
	'280DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'280DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 281:

PYACTION
	'281DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'281DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 282:

PYACTION
	'282DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'282DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 283:

PYACTION
	'283DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'283DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 284:

PYACTION
	'284DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'284DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 285:

PYACTION
	'285DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'285DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 286:

PYACTION
	'286DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'286DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 261:

PYACTION
	'261CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'261CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 262:

PYACTION
	'262CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'262CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 263:

PYACTION
	'263CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'263CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 264:

PYACTION
	'264CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'264CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 265:

PYACTION
	'265CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'265CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 266:

PYACTION
	'266CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'266CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 267:

PYACTION
	'267CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'267CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 268:

PYACTION
	'268CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'268CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 269:

PYACTION
	'269CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'269CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 270:

PYACTION
	'270CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'270CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 297:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 298:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 299:

PYACTION
	'299DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'299DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 300:

PYACTION
	'300DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'300DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 301:

PYACTION
	'301DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'301DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 302:

PYACTION
	'302DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'302DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 303:

PYACTION
	'303DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'303DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 304:

PYACTION
	'304DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'304DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 305:

PYACTION
	'305DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'305DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 306:

PYACTION
	'306DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'306DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 307:

PYACTION
	'307DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'307DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 308:

PYACTION
	'308DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'308DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 281:

PYACTION
	'281CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'281CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 282:

PYACTION
	'282CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'282CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 283:

PYACTION
	'283CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'283CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 284:

PYACTION
	'284CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'284CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 285:

PYACTION
	'285CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'285CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 286:

PYACTION
	'286CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'286CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 287:

PYACTION
	'287CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'287CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 288:

PYACTION
	'288CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'288CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 289:

PYACTION
	'289CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'289CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 290:

PYACTION
	'290CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'290CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 319:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 320:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 321:

PYACTION
	'321DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'321DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 322:

PYACTION
	'322DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'322DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 323:

PYACTION
	'323DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'323DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 324:

PYACTION
	'324DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'324DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 325:

PYACTION
	'325DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'325DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 326:

PYACTION
	'326DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'326DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 327:

PYACTION
	'327DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'327DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 328:

PYACTION
	'328DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'328DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 329:

PYACTION
	'329DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'329DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 330:

PYACTION
	'330DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'330DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 301:

PYACTION
	'301CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'301CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 302:

PYACTION
	'302CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'302CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 303:

PYACTION
	'303CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'303CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 304:

PYACTION
	'304CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'304CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 305:

PYACTION
	'305CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'305CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 306:

PYACTION
	'306CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'306CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 307:

PYACTION
	'307CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'307CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 308:

PYACTION
	'308CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'308CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 309:

PYACTION
	'309CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'309CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 310:

PYACTION
	'310CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'310CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 341:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 342:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 343:

PYACTION
	'343DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'343DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 344:

PYACTION
	'344DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'344DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 345:

PYACTION
	'345DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'345DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 346:

PYACTION
	'346DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'346DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 347:

PYACTION
	'347DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'347DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 348:

PYACTION
	'348DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'348DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 349:

PYACTION
	'349DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'349DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 350:

PYACTION
	'350DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'350DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 351:

PYACTION
	'351DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'351DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 352:

PYACTION
	'352DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'352DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 321:

PYACTION
	'321CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'321CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 322:

PYACTION
	'322CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'322CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 323:

PYACTION
	'323CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'323CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 324:

PYACTION
	'324CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'324CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 325:

PYACTION
	'325CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'325CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 326:

PYACTION
	'326CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'326CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 327:

PYACTION
	'327CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'327CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 328:

PYACTION
	'328CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'328CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 329:

PYACTION
	'329CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'329CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 330:

PYACTION
	'330CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'330CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 363:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 364:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 365:

PYACTION
	'365DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'365DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 366:

PYACTION
	'366DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'366DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 367:

PYACTION
	'367DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'367DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 368:

PYACTION
	'368DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'368DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 369:

PYACTION
	'369DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'369DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 370:

PYACTION
	'370DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'370DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 371:

PYACTION
	'371DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'371DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 372:

PYACTION
	'372DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'372DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 373:

PYACTION
	'373DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'373DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 374:

PYACTION
	'374DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'374DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 341:

PYACTION
	'341CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'341CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 342:

PYACTION
	'342CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'342CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 343:

PYACTION
	'343CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'343CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 344:

PYACTION
	'344CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'344CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 345:

PYACTION
	'345CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'345CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 346:

PYACTION
	'346CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'346CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 347:

PYACTION
	'347CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'347CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 348:

PYACTION
	'348CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'348CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 349:

PYACTION
	'349CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'349CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 350:

PYACTION
	'350CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'350CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 385:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 386:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 387:

PYACTION
	'387DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'387DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 388:

PYACTION
	'388DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'388DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 389:

PYACTION
	'389DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'389DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 390:

PYACTION
	'390DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'390DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 391:

PYACTION
	'391DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'391DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 392:

PYACTION
	'392DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'392DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 393:

PYACTION
	'393DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'393DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 394:

PYACTION
	'394DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'394DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 395:

PYACTION
	'395DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'395DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 396:

PYACTION
	'396DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'396DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 361:

PYACTION
	'361CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'361CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 362:

PYACTION
	'362CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'362CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 363:

PYACTION
	'363CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'363CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 364:

PYACTION
	'364CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'364CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 365:

PYACTION
	'365CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'365CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 366:

PYACTION
	'366CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'366CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 367:

PYACTION
	'367CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'367CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 368:

PYACTION
	'368CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'368CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 369:

PYACTION
	'369CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'369CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 370:

PYACTION
	'370CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'370CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 407:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 408:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 409:

PYACTION
	'409DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'409DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 410:

PYACTION
	'410DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'410DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 411:

PYACTION
	'411DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'411DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 412:

PYACTION
	'412DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'412DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 413:

PYACTION
	'413DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'413DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 414:

PYACTION
	'414DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'414DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 415:

PYACTION
	'415DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'415DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 416:

PYACTION
	'416DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'416DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 417:

PYACTION
	'417DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'417DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 418:

PYACTION
	'418DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'418DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 381:

PYACTION
	'381CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'381CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 382:

PYACTION
	'382CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'382CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 383:

PYACTION
	'383CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'383CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 384:

PYACTION
	'384CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'384CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 385:

PYACTION
	'385CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'385CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 386:

PYACTION
	'386CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'386CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 387:

PYACTION
	'387CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'387CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 388:

PYACTION
	'388CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'388CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 389:

PYACTION
	'389CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'389CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 390:

PYACTION
	'390CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'390CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 429:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 430:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 431:

PYACTION
	'431DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'431DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 432:

PYACTION
	'432DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'432DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 433:

PYACTION
	'433DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'433DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 434:

PYACTION
	'434DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'434DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 435:

PYACTION
	'435DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'435DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 436:

PYACTION
	'436DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'436DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 437:

PYACTION
	'437DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'437DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 438:

PYACTION
	'438DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'438DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 439:

PYACTION
	'439DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'439DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 440:

PYACTION
	'440DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'440DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 401:

PYACTION
	'401CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'401CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 402:

PYACTION
	'402CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'402CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 403:

PYACTION
	'403CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'403CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 404:

PYACTION
	'404CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'404CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 405:

PYACTION
	'405CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'405CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 406:

PYACTION
	'406CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'406CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 407:

PYACTION
	'407CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'407CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 408:

PYACTION
	'408CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'408CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 409:

PYACTION
	'409CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'409CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 410:

PYACTION
	'410CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'410CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 451:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 452:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 453:

PYACTION
	'453DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'453DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 454:

PYACTION
	'454DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'454DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 455:

PYACTION
	'455DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'455DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 456:

PYACTION
	'456DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'456DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 457:

PYACTION
	'457DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'457DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 458:

PYACTION
	'458DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'458DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 459:

PYACTION
	'459DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'459DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 460:

PYACTION
	'460DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'460DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 461:

PYACTION
	'461DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'461DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 462:

PYACTION
	'462DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'462DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 421:

PYACTION
	'421CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'421CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 422:

PYACTION
	'422CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'422CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 423:

PYACTION
	'423CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'423CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 424:

PYACTION
	'424CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'424CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 425:

PYACTION
	'425CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'425CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 426:

PYACTION
	'426CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'426CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 427:

PYACTION
	'427CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'427CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 428:

PYACTION
	'428CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'428CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 429:

PYACTION
	'429CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'429CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 430:

PYACTION
	'430CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'430CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 473:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 474:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 475:

PYACTION
	'475DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'475DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 476:

PYACTION
	'476DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'476DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 477:

PYACTION
	'477DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'477DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 478:

PYACTION
	'478DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'478DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 479:

PYACTION
	'479DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'479DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 480:

PYACTION
	'480DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'480DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 481:

PYACTION
	'481DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'481DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 482:

PYACTION
	'482DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'482DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 483:

PYACTION
	'483DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'483DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 484:

PYACTION
	'484DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'484DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 441:

PYACTION
	'441CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'441CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 442:

PYACTION
	'442CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'442CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 443:

PYACTION
	'443CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'443CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 444:

PYACTION
	'444CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'444CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 445:

PYACTION
	'445CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'445CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 446:

PYACTION
	'446CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'446CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 447:

PYACTION
	'447CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'447CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 448:

PYACTION
	'448CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'448CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 449:

PYACTION
	'449CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'449CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 450:

PYACTION
	'450CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'450CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 495:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 496:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 497:

PYACTION
	'497DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'497DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 498:

PYACTION
	'498DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'498DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 499:

PYACTION
	'499DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'499DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 500:

PYACTION
	'500DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'500DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 501:

PYACTION
	'501DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'501DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 502:

PYACTION
	'502DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'502DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 503:

PYACTION
	'503DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'503DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 504:

PYACTION
	'504DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'504DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 505:

PYACTION
	'505DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'505DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 506:

PYACTION
	'506DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'506DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 461:

PYACTION
	'461CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'461CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 462:

PYACTION
	'462CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'462CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 463:

PYACTION
	'463CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'463CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 464:

PYACTION
	'464CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'464CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 465:

PYACTION
	'465CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'465CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 466:

PYACTION
	'466CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'466CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 467:

PYACTION
	'467CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'467CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 468:

PYACTION
	'468CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'468CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 469:

PYACTION
	'469CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'469CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 470:

PYACTION
	'470CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'470CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 517:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 518:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 519:

PYACTION
	'519DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'519DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 520:

PYACTION
	'520DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'520DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 521:

PYACTION
	'521DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'521DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 522:

PYACTION
	'522DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'522DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 523:

PYACTION
	'523DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'523DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 524:

PYACTION
	'524DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'524DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 525:

PYACTION
	'525DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'525DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 526:

PYACTION
	'526DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'526DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 527:

PYACTION
	'527DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'527DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 528:

PYACTION
	'528DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'528DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 481:

PYACTION
	'481CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'481CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 482:

PYACTION
	'482CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'482CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 483:

PYACTION
	'483CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'483CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 484:

PYACTION
	'484CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'484CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 485:

PYACTION
	'485CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'485CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 486:

PYACTION
	'486CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'486CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 487:

PYACTION
	'487CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'487CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 488:

PYACTION
	'488CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'488CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 489:

PYACTION
	'489CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'489CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 490:

PYACTION
	'490CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'490CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 539:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 540:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 541:

PYACTION
	'541DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'541DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 542:

PYACTION
	'542DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'542DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 543:

PYACTION
	'543DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'543DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 544:

PYACTION
	'544DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'544DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 545:

PYACTION
	'545DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'545DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 546:

PYACTION
	'546DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'546DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 547:

PYACTION
	'547DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'547DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 548:

PYACTION
	'548DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'548DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 549:

PYACTION
	'549DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'549DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 550:

PYACTION
	'550DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'550DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 501:

PYACTION
	'501CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'501CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 502:

PYACTION
	'502CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'502CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 503:

PYACTION
	'503CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'503CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 504:

PYACTION
	'504CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'504CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 505:

PYACTION
	'505CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'505CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 506:

PYACTION
	'506CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'506CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 507:

PYACTION
	'507CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'507CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 508:

PYACTION
	'508CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'508CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 509:

PYACTION
	'509CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'509CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 510:

PYACTION
	'510CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'510CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 561:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 562:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 563:

PYACTION
	'563DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'563DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 564:

PYACTION
	'564DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'564DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 565:

PYACTION
	'565DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'565DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 566:

PYACTION
	'566DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'566DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 567:

PYACTION
	'567DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'567DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 568:

PYACTION
	'568DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'568DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 569:

PYACTION
	'569DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'569DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 570:

PYACTION
	'570DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'570DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 571:

PYACTION
	'571DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'571DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 572:

PYACTION
	'572DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'572DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 521:

PYACTION
	'521CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'521CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 522:

PYACTION
	'522CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'522CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 523:

PYACTION
	'523CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'523CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 524:

PYACTION
	'524CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'524CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 525:

PYACTION
	'525CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'525CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 526:

PYACTION
	'526CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'526CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 527:

PYACTION
	'527CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'527CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 528:

PYACTION
	'528CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'528CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 529:

PYACTION
	'529CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'529CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 530:

PYACTION
	'530CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'530CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 583:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 584:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 585:

PYACTION
	'585DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'585DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 586:

PYACTION
	'586DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'586DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 587:

PYACTION
	'587DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'587DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 588:

PYACTION
	'588DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'588DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 589:

PYACTION
	'589DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'589DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 590:

PYACTION
	'590DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'590DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 591:

PYACTION
	'591DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'591DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 592:

PYACTION
	'592DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'592DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 593:

PYACTION
	'593DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'593DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 594:

PYACTION
	'594DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'594DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 541:

PYACTION
	'541CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'541CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 542:

PYACTION
	'542CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'542CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 543:

PYACTION
	'543CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'543CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 544:

PYACTION
	'544CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'544CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 545:

PYACTION
	'545CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'545CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 546:

PYACTION
	'546CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'546CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 547:

PYACTION
	'547CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'547CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 548:

PYACTION
	'548CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'548CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 549:

PYACTION
	'549CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'549CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 550:

PYACTION
	'550CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'550CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 605:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 606:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 607:

PYACTION
	'607DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'607DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 608:

PYACTION
	'608DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'608DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 609:

PYACTION
	'609DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'609DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 610:

PYACTION
	'610DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'610DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 611:

PYACTION
	'611DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'611DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 612:

PYACTION
	'612DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'612DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 613:

PYACTION
	'613DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'613DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 614:

PYACTION
	'614DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'614DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 615:

PYACTION
	'615DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'615DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 616:

PYACTION
	'616DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'616DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 561:

PYACTION
	'561CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'561CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 562:

PYACTION
	'562CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'562CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 563:

PYACTION
	'563CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'563CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 564:

PYACTION
	'564CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'564CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 565:

PYACTION
	'565CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'565CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 566:

PYACTION
	'566CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'566CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 567:

PYACTION
	'567CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'567CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 568:

PYACTION
	'568CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'568CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 569:

PYACTION
	'569CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'569CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 570:

PYACTION
	'570CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'570CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 627:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 628:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 629:

PYACTION
	'629DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'629DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 630:

PYACTION
	'630DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'630DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 631:

PYACTION
	'631DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'631DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 632:

PYACTION
	'632DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'632DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 633:

PYACTION
	'633DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'633DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 634:

PYACTION
	'634DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'634DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 635:

PYACTION
	'635DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'635DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 636:

PYACTION
	'636DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'636DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 637:

PYACTION
	'637DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'637DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 638:

PYACTION
	'638DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'638DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 581:

PYACTION
	'581CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'581CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 582:

PYACTION
	'582CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'582CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 583:

PYACTION
	'583CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'583CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 584:

PYACTION
	'584CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'584CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 585:

PYACTION
	'585CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'585CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 586:

PYACTION
	'586CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'586CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 587:

PYACTION
	'587CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'587CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 588:

PYACTION
	'588CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'588CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 589:

PYACTION
	'589CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'589CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 590:

PYACTION
	'590CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'590CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 649:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 650:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 651:

PYACTION
	'651DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'651DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 652:

PYACTION
	'652DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'652DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 653:

PYACTION
	'653DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'653DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 654:

PYACTION
	'654DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'654DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 655:

PYACTION
	'655DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'655DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 656:

PYACTION
	'656DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'656DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 657:

PYACTION
	'657DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'657DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 658:

PYACTION
	'658DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'658DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 659:

PYACTION
	'659DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'659DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 660:

PYACTION
	'660DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'660DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 601:

PYACTION
	'601CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'601CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 602:

PYACTION
	'602CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'602CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 603:

PYACTION
	'603CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'603CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 604:

PYACTION
	'604CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'604CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 605:

PYACTION
	'605CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'605CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 606:

PYACTION
	'606CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'606CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 607:

PYACTION
	'607CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'607CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 608:

PYACTION
	'608CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'608CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 609:

PYACTION
	'609CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'609CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 610:

PYACTION
	'610CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'610CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 671:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 672:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 673:

PYACTION
	'673DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'673DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 674:

PYACTION
	'674DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'674DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 675:

PYACTION
	'675DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'675DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 676:

PYACTION
	'676DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'676DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 677:

PYACTION
	'677DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'677DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 678:

PYACTION
	'678DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'678DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 679:

PYACTION
	'679DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'679DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 680:

PYACTION
	'680DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'680DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 681:

PYACTION
	'681DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'681DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 682:

PYACTION
	'682DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'682DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 621:

PYACTION
	'621CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'621CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 622:

PYACTION
	'622CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'622CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 623:

PYACTION
	'623CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'623CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 624:

PYACTION
	'624CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'624CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 625:

PYACTION
	'625CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'625CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 626:

PYACTION
	'626CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'626CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 627:

PYACTION
	'627CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'627CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 628:

PYACTION
	'628CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'628CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 629:

PYACTION
	'629CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'629CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 630:

PYACTION
	'630CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'630CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 693:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 694:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 695:

PYACTION
	'695DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'695DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 696:

PYACTION
	'696DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'696DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 697:

PYACTION
	'697DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'697DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 698:

PYACTION
	'698DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'698DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 699:

PYACTION
	'699DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'699DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 700:

PYACTION
	'700DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'700DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 701:

PYACTION
	'701DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'701DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 702:

PYACTION
	'702DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'702DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 703:

PYACTION
	'703DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'703DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 704:

PYACTION
	'704DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'704DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 641:

PYACTION
	'641CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'641CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 642:

PYACTION
	'642CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'642CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 643:

PYACTION
	'643CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'643CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 644:

PYACTION
	'644CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'644CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 645:

PYACTION
	'645CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'645CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 646:

PYACTION
	'646CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'646CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 647:

PYACTION
	'647CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'647CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 648:

PYACTION
	'648CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'648CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 649:

PYACTION
	'649CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'649CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 650:

PYACTION
	'650CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'650CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 715:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 716:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 717:

PYACTION
	'717DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'717DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 718:

PYACTION
	'718DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'718DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 719:

PYACTION
	'719DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'719DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 720:

PYACTION
	'720DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'720DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 721:

PYACTION
	'721DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'721DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 722:

PYACTION
	'722DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'722DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 723:

PYACTION
	'723DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'723DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 724:

PYACTION
	'724DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'724DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 725:

PYACTION
	'725DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'725DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 726:

PYACTION
	'726DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'726DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 661:

PYACTION
	'661CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'661CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 662:

PYACTION
	'662CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'662CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 663:

PYACTION
	'663CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'663CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 664:

PYACTION
	'664CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'664CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 665:

PYACTION
	'665CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'665CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 666:

PYACTION
	'666CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'666CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 667:

PYACTION
	'667CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'667CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 668:

PYACTION
	'668CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'668CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 669:

PYACTION
	'669CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'669CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 670:

PYACTION
	'670CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'670CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 737:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 738:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 739:

PYACTION
	'739DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'739DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 740:

PYACTION
	'740DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'740DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 741:

PYACTION
	'741DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'741DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 742:

PYACTION
	'742DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'742DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 743:

PYACTION
	'743DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'743DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 744:

PYACTION
	'744DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'744DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 745:

PYACTION
	'745DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'745DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 746:

PYACTION
	'746DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'746DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 747:

PYACTION
	'747DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'747DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 748:

PYACTION
	'748DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'748DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 681:

PYACTION
	'681CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'681CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 682:

PYACTION
	'682CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'682CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 683:

PYACTION
	'683CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'683CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 684:

PYACTION
	'684CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'684CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 685:

PYACTION
	'685CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'685CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 686:

PYACTION
	'686CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'686CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 687:

PYACTION
	'687CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'687CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 688:

PYACTION
	'688CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'688CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 689:

PYACTION
	'689CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'689CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 690:

PYACTION
	'690CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'690CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 759:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 760:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 761:

PYACTION
	'761DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'761DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 762:

PYACTION
	'762DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'762DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 763:

PYACTION
	'763DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'763DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 764:

PYACTION
	'764DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'764DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 765:

PYACTION
	'765DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'765DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 766:

PYACTION
	'766DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'766DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 767:

PYACTION
	'767DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'767DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 768:

PYACTION
	'768DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'768DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 769:

PYACTION
	'769DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'769DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 770:

PYACTION
	'770DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'770DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 701:

PYACTION
	'701CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'701CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 702:

PYACTION
	'702CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'702CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 703:

PYACTION
	'703CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'703CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 704:

PYACTION
	'704CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'704CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 705:

PYACTION
	'705CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'705CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 706:

PYACTION
	'706CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'706CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 707:

PYACTION
	'707CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'707CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 708:

PYACTION
	'708CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'708CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 709:

PYACTION
	'709CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'709CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 710:

PYACTION
	'710CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'710CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 781:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 782:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 783:

PYACTION
	'783DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'783DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 784:

PYACTION
	'784DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'784DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 785:

PYACTION
	'785DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'785DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 786:

PYACTION
	'786DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'786DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 787:

PYACTION
	'787DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'787DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 788:

PYACTION
	'788DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'788DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 789:

PYACTION
	'789DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'789DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 790:

PYACTION
	'790DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'790DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 791:

PYACTION
	'791DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'791DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 792:

PYACTION
	'792DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'792DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 721:

PYACTION
	'721CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'721CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 722:

PYACTION
	'722CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'722CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 723:

PYACTION
	'723CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'723CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 724:

PYACTION
	'724CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'724CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 725:

PYACTION
	'725CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'725CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 726:

PYACTION
	'726CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'726CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 727:

PYACTION
	'727CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'727CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 728:

PYACTION
	'728CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'728CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 729:

PYACTION
	'729CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'729CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 730:

PYACTION
	'730CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'730CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 803:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 804:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 805:

PYACTION
	'805DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'805DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 806:

PYACTION
	'806DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'806DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 807:

PYACTION
	'807DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'807DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 808:

PYACTION
	'808DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'808DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 809:

PYACTION
	'809DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'809DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 810:

PYACTION
	'810DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'810DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 811:

PYACTION
	'811DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'811DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 812:

PYACTION
	'812DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'812DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 813:

PYACTION
	'813DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'813DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 814:

PYACTION
	'814DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'814DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 741:

PYACTION
	'741CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'741CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 742:

PYACTION
	'742CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'742CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 743:

PYACTION
	'743CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'743CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 744:

PYACTION
	'744CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'744CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 745:

PYACTION
	'745CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'745CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 746:

PYACTION
	'746CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'746CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 747:

PYACTION
	'747CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'747CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 748:

PYACTION
	'748CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'748CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 749:

PYACTION
	'749CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'749CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 750:

PYACTION
	'750CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'750CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 825:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 826:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 827:

PYACTION
	'827DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'827DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 828:

PYACTION
	'828DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'828DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 829:

PYACTION
	'829DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'829DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 830:

PYACTION
	'830DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'830DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 831:

PYACTION
	'831DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'831DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 832:

PYACTION
	'832DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'832DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 833:

PYACTION
	'833DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'833DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 834:

PYACTION
	'834DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'834DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 835:

PYACTION
	'835DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'835DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 836:

PYACTION
	'836DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'836DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 761:

PYACTION
	'761CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'761CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 762:

PYACTION
	'762CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'762CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 763:

PYACTION
	'763CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'763CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 764:

PYACTION
	'764CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'764CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 765:

PYACTION
	'765CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'765CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 766:

PYACTION
	'766CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'766CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 767:

PYACTION
	'767CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'767CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 768:

PYACTION
	'768CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'768CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 769:

PYACTION
	'769CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'769CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 770:

PYACTION
	'770CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'770CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 847:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 848:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 849:

PYACTION
	'849DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'849DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 850:

PYACTION
	'850DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'850DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 851:

PYACTION
	'851DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'851DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 852:

PYACTION
	'852DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'852DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 853:

PYACTION
	'853DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'853DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 854:

PYACTION
	'854DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'854DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 855:

PYACTION
	'855DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'855DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 856:

PYACTION
	'856DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'856DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 857:

PYACTION
	'857DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'857DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 858:

PYACTION
	'858DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'858DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 781:

PYACTION
	'781CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'781CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 782:

PYACTION
	'782CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'782CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 783:

PYACTION
	'783CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'783CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 784:

PYACTION
	'784CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'784CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 785:

PYACTION
	'785CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'785CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 786:

PYACTION
	'786CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'786CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 787:

PYACTION
	'787CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'787CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 788:

PYACTION
	'788CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'788CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 789:

PYACTION
	'789CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'789CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 790:

PYACTION
	'790CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'790CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 869:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 870:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 871:

PYACTION
	'871DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'871DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 872:

PYACTION
	'872DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'872DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 873:

PYACTION
	'873DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'873DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 874:

PYACTION
	'874DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'874DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 875:

PYACTION
	'875DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'875DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 876:

PYACTION
	'876DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'876DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 877:

PYACTION
	'877DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'877DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 878:

PYACTION
	'878DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'878DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 879:

PYACTION
	'879DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'879DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 880:

PYACTION
	'880DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'880DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 801:

PYACTION
	'801CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'801CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 802:

PYACTION
	'802CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'802CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 803:

PYACTION
	'803CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'803CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 804:

PYACTION
	'804CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'804CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 805:

PYACTION
	'805CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'805CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 806:

PYACTION
	'806CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'806CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 807:

PYACTION
	'807CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'807CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 808:

PYACTION
	'808CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'808CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 809:

PYACTION
	'809CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'809CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 810:

PYACTION
	'810CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'810CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 891:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 892:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 893:

PYACTION
	'893DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'893DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 894:

PYACTION
	'894DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'894DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 895:

PYACTION
	'895DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'895DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 896:

PYACTION
	'896DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'896DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 897:

PYACTION
	'897DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'897DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 898:

PYACTION
	'898DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'898DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 899:

PYACTION
	'899DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'899DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 900:

PYACTION
	'900DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'900DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 901:

PYACTION
	'901DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'901DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 902:

PYACTION
	'902DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'902DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 821:

PYACTION
	'821CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'821CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 822:

PYACTION
	'822CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'822CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 823:

PYACTION
	'823CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'823CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 824:

PYACTION
	'824CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'824CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 825:

PYACTION
	'825CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'825CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 826:

PYACTION
	'826CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'826CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 827:

PYACTION
	'827CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'827CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 828:

PYACTION
	'828CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'828CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 829:

PYACTION
	'829CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'829CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 830:

PYACTION
	'830CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'830CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 913:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 914:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 915:

PYACTION
	'915DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'915DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 916:

PYACTION
	'916DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'916DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 917:

PYACTION
	'917DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'917DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 918:

PYACTION
	'918DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'918DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 919:

PYACTION
	'919DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'919DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 920:

PYACTION
	'920DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'920DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 921:

PYACTION
	'921DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'921DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 922:

PYACTION
	'922DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'922DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 923:

PYACTION
	'923DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'923DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 924:

PYACTION
	'924DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'924DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 841:

PYACTION
	'841CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'841CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 842:

PYACTION
	'842CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'842CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 843:

PYACTION
	'843CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'843CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 844:

PYACTION
	'844CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'844CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 845:

PYACTION
	'845CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'845CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 846:

PYACTION
	'846CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'846CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 847:

PYACTION
	'847CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'847CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 848:

PYACTION
	'848CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'848CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 849:

PYACTION
	'849CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'849CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 850:

PYACTION
	'850CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'850CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 935:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 936:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 937:

PYACTION
	'937DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'937DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 938:

PYACTION
	'938DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'938DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 939:

PYACTION
	'939DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'939DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 940:

PYACTION
	'940DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'940DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 941:

PYACTION
	'941DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'941DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 942:

PYACTION
	'942DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'942DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 943:

PYACTION
	'943DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'943DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 944:

PYACTION
	'944DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'944DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 945:

PYACTION
	'945DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'945DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 946:

PYACTION
	'946DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'946DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 861:

PYACTION
	'861CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'861CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 862:

PYACTION
	'862CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'862CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 863:

PYACTION
	'863CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'863CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 864:

PYACTION
	'864CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'864CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 865:

PYACTION
	'865CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'865CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 866:

PYACTION
	'866CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'866CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 867:

PYACTION
	'867CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'867CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 868:

PYACTION
	'868CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'868CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 869:

PYACTION
	'869CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'869CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 870:

PYACTION
	'870CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'870CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 957:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 958:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 959:

PYACTION
	'959DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'959DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 960:

PYACTION
	'960DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'960DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 961:

PYACTION
	'961DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'961DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 962:

PYACTION
	'962DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'962DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 963:

PYACTION
	'963DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'963DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 964:

PYACTION
	'964DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'964DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 965:

PYACTION
	'965DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'965DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 966:

PYACTION
	'966DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'966DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 967:

PYACTION
	'967DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'967DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 968:

PYACTION
	'968DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'968DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 881:

PYACTION
	'881CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'881CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 882:

PYACTION
	'882CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'882CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 883:

PYACTION
	'883CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'883CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 884:

PYACTION
	'884CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'884CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 885:

PYACTION
	'885CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'885CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 886:

PYACTION
	'886CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'886CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 887:

PYACTION
	'887CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'887CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 888:

PYACTION
	'888CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'888CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 889:

PYACTION
	'889CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'889CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 890:

PYACTION
	'890CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'890CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 979:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 980:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 981:

PYACTION
	'981DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'981DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 982:

PYACTION
	'982DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'982DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 983:

PYACTION
	'983DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'983DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 984:

PYACTION
	'984DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'984DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 985:

PYACTION
	'985DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'985DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 986:

PYACTION
	'986DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'986DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 987:

PYACTION
	'987DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'987DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 988:

PYACTION
	'988DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'988DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 989:

PYACTION
	'989DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'989DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 990:

PYACTION
	'990DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'990DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 901:

PYACTION
	'901CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'901CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 902:

PYACTION
	'902CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'902CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 903:

PYACTION
	'903CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'903CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 904:

PYACTION
	'904CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'904CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 905:

PYACTION
	'905CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'905CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 906:

PYACTION
	'906CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'906CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 907:

PYACTION
	'907CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'907CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 908:

PYACTION
	'908CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'908CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 909:

PYACTION
	'909CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'909CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 910:

PYACTION
	'910CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'910CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 1001:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 1002:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 1003:

PYACTION
	'1003DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1003DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1004:

PYACTION
	'1004DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1004DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1005:

PYACTION
	'1005DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1005DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1006:

PYACTION
	'1006DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1006DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1007:

PYACTION
	'1007DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1007DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1008:

PYACTION
	'1008DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1008DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1009:

PYACTION
	'1009DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1009DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1010:

PYACTION
	'1010DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1010DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1011:

PYACTION
	'1011DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1011DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1012:

PYACTION
	'1012DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1012DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 921:

PYACTION
	'921CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'921CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 922:

PYACTION
	'922CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'922CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 923:

PYACTION
	'923CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'923CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 924:

PYACTION
	'924CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'924CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 925:

PYACTION
	'925CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'925CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 926:

PYACTION
	'926CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'926CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 927:

PYACTION
	'927CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'927CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 928:

PYACTION
	'928CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'928CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 929:

PYACTION
	'929CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'929CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 930:

PYACTION
	'930CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'930CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 1023:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 1024:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 1025:

PYACTION
	'1025DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1025DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1026:

PYACTION
	'1026DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1026DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1027:

PYACTION
	'1027DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1027DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1028:

PYACTION
	'1028DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1028DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1029:

PYACTION
	'1029DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1029DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1030:

PYACTION
	'1030DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1030DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1031:

PYACTION
	'1031DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1031DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1032:

PYACTION
	'1032DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1032DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1033:

PYACTION
	'1033DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1033DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1034:

PYACTION
	'1034DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1034DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 941:

PYACTION
	'941CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'941CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 942:

PYACTION
	'942CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'942CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 943:

PYACTION
	'943CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'943CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 944:

PYACTION
	'944CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'944CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 945:

PYACTION
	'945CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'945CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 946:

PYACTION
	'946CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'946CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 947:

PYACTION
	'947CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'947CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 948:

PYACTION
	'948CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'948CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 949:

PYACTION
	'949CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'949CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 950:

PYACTION
	'950CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'950CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 1045:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 1046:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 1047:

PYACTION
	'1047DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1047DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1048:

PYACTION
	'1048DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1048DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1049:

PYACTION
	'1049DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1049DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1050:

PYACTION
	'1050DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1050DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1051:

PYACTION
	'1051DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1051DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1052:

PYACTION
	'1052DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1052DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1053:

PYACTION
	'1053DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1053DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1054:

PYACTION
	'1054DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1054DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1055:

PYACTION
	'1055DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1055DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1056:

PYACTION
	'1056DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1056DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 961:

PYACTION
	'961CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'961CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 962:

PYACTION
	'962CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'962CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 963:

PYACTION
	'963CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'963CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 964:

PYACTION
	'964CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'964CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 965:

PYACTION
	'965CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'965CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 966:

PYACTION
	'966CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'966CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 967:

PYACTION
	'967CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'967CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 968:

PYACTION
	'968CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'968CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 969:

PYACTION
	'969CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'969CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 970:

PYACTION
	'970CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'970CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 1067:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 1068:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 1069:

PYACTION
	'1069DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1069DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1070:

PYACTION
	'1070DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1070DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1071:

PYACTION
	'1071DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1071DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1072:

PYACTION
	'1072DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1072DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1073:

PYACTION
	'1073DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1073DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1074:

PYACTION
	'1074DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1074DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1075:

PYACTION
	'1075DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1075DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1076:

PYACTION
	'1076DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1076DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1077:

PYACTION
	'1077DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1077DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1078:

PYACTION
	'1078DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1078DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

WCONINJE
	'BOTTOM'	WAT	'OPEN'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	148/
/
-- Charge day 981:

PYACTION
	'981CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'981CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 982:

PYACTION
	'982CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'982CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 983:

PYACTION
	'983CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'983CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 984:

PYACTION
	'984CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'984CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 985:

PYACTION
	'985CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'985CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 986:

PYACTION
	'986CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'986CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 987:

PYACTION
	'987CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'987CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 988:

PYACTION
	'988CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'988CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 989:

PYACTION
	'989CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'989CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Charge day 990:

PYACTION
	'990CH0B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

PYACTION
	'990CH1B'	'SINGLE'	/
	'./pyaction/PYACTION_CH.py'	/

TSTEP
  0.5 /

-- Shut-in day 1089:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

-- Shut-in day 1090:

WCONINJE
	'BOTTOM'	WAT	'SHUT'	RATE	0	1*	260/
/
WCONPROD
	'TOP'	'SHUT'	'WRAT'	1*	0	1*	1*	1*	148/
/
TSTEP
  1.0 /

WCONPROD
	'BOTTOM'	'OPEN'	'WRAT'	1*	0	1*	1*	1*	153/
/
WCONINJE
	'TOP'	WAT	'OPEN'	RATE	0	1*	255/
/
-- Discharge day 1091:

PYACTION
	'1091DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1091DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1092:

PYACTION
	'1092DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1092DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1093:

PYACTION
	'1093DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1093DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1094:

PYACTION
	'1094DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1094DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1095:

PYACTION
	'1095DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1095DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1096:

PYACTION
	'1096DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1096DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1097:

PYACTION
	'1097DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1097DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1098:

PYACTION
	'1098DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1098DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1099:

PYACTION
	'1099DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1099DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

-- Discharge day 1100:

PYACTION
	'1100DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

PYACTION
	'1100DCH1B'	'SINGLE'	/
	'./pyaction/PYACTION_DCH.py'	/

TSTEP
  0.5 /

