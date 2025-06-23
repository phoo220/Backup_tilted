RUNSPEC

TITLE
    Tilted reservoir with no gas cushion

DIMENS
   11 11 3 /

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

-- we have 2 wells, can be connected max to 3 grid blocks
-- we have just 1 group in the model, with 2 well per group
WELLDIMS
   2 16 1 2/

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
'../tiltgrid.GRDECL'/

--------------------------------------------------------
--
--  	Input of grid parametres
--
--------------------------------------------------------

PORO
   363*0.3 /

PERMX
   121*500 121*0 121*500 /

PERMY
   121*500 121*0 121*500 /

PERMZ
   121*500 121*0 121*500 /

BOX
 1 11 1 11  1 3 / DEFINE BOX AREA
--
-- SET MULTX+ TRANSMISSIBILITY MULTIPLIERS
--
MULTPV
 363*0.99243 /

PROPS
-------------------------------------------------------------------------
-- NOECHO

INCLUDE
'./PROPS_JUSTWATER.INC' / 

REGIONS 
-- ---------------------------------------------------------------------------
-- We defined two different regions the top layer (region 1) and 
-- the bottom layer (region 2), same as Phoo model

EQUALS
--          I1  I2  J1  J2  K1  K2
 FIPNUM 1    1*  1*  1*  1*  1  1 / SET REGION 1
 FIPNUM 2    1*  1*  1*  1*  3  3 / SET REGION 2
/


SOLUTION
-- -------------------------------------------------------------------------

EQUIL
--datum press OWC WATCAP GOC GASCAP 
	3200 210 2000 0 1000 0 1 0 0 /

-- SWAT
--   300*1
--/

--PRESSURE
--   300*100
--/

-- This keyword defines the data in the SOLUTION section that is to be printed to the output print file in
-- human readable format
-- In Phoo model it was the water saturation in region 2 (bottom layer)
-- RPTSOL
--    FIP=2 SWAT /



SUMMARY
-- -------------------------------------------------------------------------	 

FWPR
FWPT
FWIR
FWIT
-- FGIPR
FPR
RPR
-- RGIP
/

-- INCLUDE
--    './BPR.INC' / 

-- CWFR
-- 	'TOP' 	 50 50 1  /
--   	'BOTTOM' 50 50 3  /
-- 
-- /
-- 
-- CWIR
-- 	'TOP' 	 50 50 1  /
--   	'BOTTOM' 50 50 3  /
-- /

-- CWIT
-- 	'TOP'	 50 50 1  /
--   	'BOTTOM' 50 50 3  /
-- /

CPR
	'TOP'	 6 6 1  /
  	'BOTTOM' 6 6 3  /
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