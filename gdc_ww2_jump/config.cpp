class CfgPatches
{
	class gdc_ww2_jump
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {"gdc_ww2_main","WW2_Core_c_ACE_Animations_c_Jump"};
	};
};

class CfgMovesBasic
{
	class Actions
	{
		class RifleLowStandActionsNoAdjust;
		class RifleStandActionsNoAdjust;
		class RifleLowStandActionsRunF: RifleLowStandActionsNoAdjust
		{
			getOver = "AovrPercMstpSlowWrflDf";
		};
		class RifleLowStandActionsRunFL: RifleLowStandActionsNoAdjust
		{
			getOver = "AovrPercMstpSlowWrflDf";
		};
		class RifleLowStandActionsRunFR: RifleLowStandActionsNoAdjust
		{
			getOver = "AovrPercMstpSlowWrflDf";
		};
		class RifleStandActionsRunF: RifleStandActionsNoAdjust
		{
			getOver = "AovrPercMstpSrasWrflDf";
		};
		class RifleStandActionsRunFL: RifleStandActionsNoAdjust
		{
			getOver = "AovrPercMstpSrasWrflDf";
		};
		class RifleStandActionsRunFR: RifleStandActionsNoAdjust
		{
			getOver = "AovrPercMstpSrasWrflDf";
		};
		class RifleStandEvasiveActionsF: RifleStandActionsNoAdjust
		{
			getOver = "AovrPercMstpSrasWrflDf";
		};
		class RifleStandEvasiveActionsFL: RifleStandActionsNoAdjust
		{
			getOver = "AovrPercMstpSrasWrflDf";
		};
		class RifleStandEvasiveActionsFR: RifleStandActionsNoAdjust
		{
			getOver = "AovrPercMstpSrasWrflDf";
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class AovrPercMstpSrasWrflDf;
		class AmovPercMstpSrasWrflDnon;
		class AovrPercMrunSrasWrflDf: AovrPercMstpSrasWrflDf
		{
			forceAim = 1;
		};
		class AmovPercMrunSrasWrflDf: AmovPercMstpSrasWrflDnon
		{
			InterpolateTo[] = {"AovrPercMstpSrasWrflDf",0.22,"AmovPercMrunSlowWrflDf",0.025,"AmovPercMwlkSrasWrflDf",0.025,"AmovPknlMrunSrasWrflDf",0.03,"AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02,"AmovPercMevaSrasWrflDf",0.025,"Unconscious",0.02,"AmovPercMtacSrasWrflDf",0.02,"AmovPercMrunSrasWrflDfl",0.02,"AmovPercMrunSrasWrflDfl_ldst",0.02,"AmovPercMrunSrasWrflDfr",0.02,"AmovPercMrunSrasWrflDfr_ldst",0.02,"AmovPercMstpSrasWrflDnon",0.02,"AmovPercMrunSrasWrflDl",0.02,"AmovPercMrunSrasWrflDbl",0.02,"AmovPercMrunSrasWrflDb",0.02,"AmovPercMrunSrasWrflDbr",0.02,"AmovPercMrunSrasWrflDr",0.02,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPercMrunSrasWrflDf_ldst",0.02,"AmovPercMrunSrasWrflDf",0.02};
		};
	};
};