RUNSPEC

TITLE
   Tilted Reservoir with gas cushion

DIMENS
   11 11 3 /

EQLDIMS
	2  100  20	
/

REGDIMS
-- ntfip  nmfipr  nrfreg  ntfreg
    2      2      1*      20    /

TABDIMS  
--ntsfun ntpvt nssfun nppvt ntfip nrpvt ntendp
   2     2     33     60     2      60 /

GAS
WATER

METRIC

START
   1 'JAN' 2023 /

WELLDIMS
   2 3 1 2/

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
---------------------------------------------------------
--
--    Input of fluid properties and relative permeability
--
---------------------------------------------------------

-- NOECHO

INCLUDE
'./PROPS_tilted_gas.INC' / 

REGIONS 

EQUALS
--          I1  I2  J1  J2  K1  K2
 FIPNUM 1    1*  1*  1*  1*  1  1 / SET REGION 1
 FIPNUM 2    1*  1*  1*  1*  3  3 / SET REGION 2
/

EQUALS
--          I1  I2  J1  J2  K1  K2
 EQLNUM 1    1*  1*  1*  1*  1  1 / SET REGION 1
 EQLNUM 2    1*  1*  1*  1*  3  3 / SET REGION 2
/

EQUALS
--          I1  I2  J1  J2  K1  K2
 SATNUM 1    1*  1*  1*  1*  1  1 / SET REGION 1
 SATNUM 2    1*  1*  1*  1*  3  3 / SET REGION 2
/

EQUALS
--          I1  I2  J1  J2  K1  K2
 PVTNUM 1    1*  1*  1*  1*  1  1 / SET REGION 1
 PVTNUM 2    1*  1*  1*  1*  3  3 / SET REGION 2
/

SOLUTION
-- -------------------------------------------------------------------------

EQUIL
--datum press GWC WATCAP GOC GASCAP 
	3200 210 3022 0 1000 0 1 0 0 /   -- with gas
	3200 210 3067 0 1000 0 2 0 0 /


SUMMARY
-- -------------------------------------------------------------------------	 

FWPR
FWPT
FWIR
FGIPR
FWIT
FPR
RPR
/

-- INCLUDE
--    './BPR.INC' / 

-- CWFR
-- 	'TOP'	 6 6 1  /
--   	'BOTTOM' 6 6 3  /
-- 
-- /

-- CWIR
-- 	'TOP'	 6 6 1  /
--   	'BOTTOM' 6 6 3  /
-- /
-- 
-- CWIT
-- 	'TOP'	 6 6 1  /
--   	'BOTTOM' 6 6 3  /
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