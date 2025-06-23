RUNSPEC

TITLE
    Tilted reservoir with no gas cushion and leak

DIMENS
	23 23 21 /

EQLDIMS
/

TABDIMS
/

-- we have just water but have to put oil

-- OIL 
WATER

METRIC

START
   1 'JAN' 2023 /


WELLDIMS
   2 22 1 2/

UNIFIN
UNIFOUT

GRID

---------------------------------------------------------
--
--	Input of grid geometry
--
---------------------------------------------------------

GRIDFILE
	0	1	  /

INIT

INCLUDE
'../tiltgrid_refine.GRDECL'/

--------------------------------------------------------
--
--  	Input of grid parametres
--
--------------------------------------------------------

PORO
   11109*0.3 /

PERMX
   529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*0.000000001 529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*500 /

PERMY
   529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*0.000000001 529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*500 /


PERMZ
   529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*0.000000001 529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*500 /

BOX
 1 23 1 23  1 21 / DEFINE BOX AREA
--
-- SET MULTX+ TRANSMISSIBILITY MULTIPLIERS
--
MULTPV
 11109*0.99243 /


-- ********Don't forget to the change the leak location
-- ARRAY CONSTANT ---------- BOX ---------
--             I1 I2 J1 J2 K1 K2
MULTIPLY
 PERMX 1000000000 1 1 1 1 11 11 /  -- leak at down flank 
 PERMY 1000000000 1 1 1 1 11 11 / 
 PERMZ 1000000000 1 1 1 1 11 11 /

 PERMX 1000000000 23 23 23 23 11 11 /  -- leak at up flank 
 PERMY 1000000000 23 23 23 23 11 11 /
 PERMZ 1000000000 23 23 23 23 11 11 / 

/


PROPS
-------------------------------------------------------------------------
-- NOECHO

INCLUDE
'./PROPS_JUSTWATER.INC' / 

REGIONS 

EQUALS
--          I1  I2  J1  J2  K1  K2
 FIPNUM 1    1*  1*  1*  1*  1  10 / SET REGION 1
 FIPNUM 2    1*  1*  1*  1*  12  21 / SET REGION 2
/


SOLUTION
-- -------------------------------------------------------------------------

EQUIL
--datum press OWC WATCAP GOC GASCAP 
	3200 200 2000 0 1000 0 1 0 0 /



SUMMARY
-- -------------------------------------------------------------------------	 

FWPR
FWPT
FWIR
FWIT
FGIPR
FPR
RPR
/


CPR
	'TOP'	 12 12 10  /
  	'BOTTOM' 12 12 12  /
/

WBHP
	'TOP'
  	'BOTTOM'
/

WWIR
	'TOP'
	'BOTTOM'
/

WWIT
	'TOP'
	'BOTTOM'
/

WWPR
	'TOP'
	'BOTTOM'
/

WWPT
	'TOP'
	'BOTTOM'
/