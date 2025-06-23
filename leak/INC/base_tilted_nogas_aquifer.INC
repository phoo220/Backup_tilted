RUNSPEC

TITLE
    Tilted reservoir with no gas cushion and aquifer at down flank

DIMENS
	23 25 21 /

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
'../tiltgrid_withleak.GRDECL'/

--------------------------------------------------------
--
--  	Input of grid parametres
--
--------------------------------------------------------

PORO
   12075*0.3 /

PERMX
   575*500 575*500 575*500 575*500 575*500 575*500 575*500 575*500 575*500 575*500 575*0 575*500 575*500 575*500 575*500 575*500 575*500 575*500 575*500 575*500 575*500 /

PERMY
   575*500 575*500 575*500 575*500 575*500 575*500 575*500 575*500 575*500 575*500 575*0 575*500 575*500 575*500 575*500 575*500 575*500 575*500 575*500 575*500 575*500 /


PERMZ
   575*500 575*500 575*500 575*500 575*500 575*500 575*500 575*500 575*500 575*500 575*0 575*500 575*500 575*500 575*500 575*500 575*500 575*500 575*500 575*500 575*500 /

BOX
 1 23 1 25  1 21 / DEFINE BOX AREA
--
-- SET MULTX+ TRANSMISSIBILITY MULTIPLIERS
--
MULTPV
 12075*0.99243 /


-- ********Don't forget to the change the leak location
-- ARRAY CONSTANT ---------- BOX ---------
--             I1 I2 J1 J2 K1 K2
-- MULTIPLY
-- 
--  PERMX 0.002 1 23 2 2 1 21 /  -- permeable barrier
--  PERMY 0.002 1 23 2 2 1 21 /
--  PERMZ 0.002 1 23 2 2 1 21 / 
-- 
-- /

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
	'TOP'	 12 14 10  /
  	'BOTTOM' 12 14 12  /
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