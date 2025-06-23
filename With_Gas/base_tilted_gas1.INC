RUNSPEC

TITLE
   Tilted Reservoir with gas cushion

DIMENS
	23 23 15 /

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
'../tiltgrid_refine.GRDECL'/

--------------------------------------------------------
--
--  	Input of grid parametres
--
--------------------------------------------------------

PORO
   7935*0.3 /

PERMX
   529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*0 529*500 529*500 529*500 529*500 529*500 529*500 529*500 /

PERMY
   529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*0 529*500 529*500 529*500 529*500 529*500 529*500 529*500/

PERMZ
   529*500 529*500 529*500 529*500 529*500 529*500 529*500 529*0 529*500 529*500 529*500 529*500 529*500 529*500 529*500/

BOX
 1 23 1 23  1 15 / DEFINE BOX AREA
--
-- SET MULTX+ TRANSMISSIBILITY MULTIPLIERS
--
MULTPV
 7935*0.99243 /

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
 FIPNUM 1    1*  1*  1*  1*  1  7 / SET REGION 1
 FIPNUM 2    1*  1*  1*  1*  9  15 / SET REGION 2
/

EQUALS
--          I1  I2  J1  J2  K1  K2
 EQLNUM 1    1*  1*  1*  1*  1  7 / SET REGION 1
 EQLNUM 2    1*  1*  1*  1*  9  15 / SET REGION 2
/

EQUALS
--          I1  I2  J1  J2  K1  K2
 SATNUM 1    1*  1*  1*  1*  1  7 / SET REGION 1
 SATNUM 2    1*  1*  1*  1*  9  15 / SET REGION 2
/

EQUALS
--          I1  I2  J1  J2  K1  K2
 PVTNUM 1    1*  1*  1*  1*  1  7 / SET REGION 1
 PVTNUM 2    1*  1*  1*  1*  9  15 / SET REGION 2
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
FWIT
FGIPR
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
	'TOP'	 12 12 1  /
  	'BOTTOM' 12 12 9  /
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