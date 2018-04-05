class CfgPatches
{
	class gdc_ww2_radio
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {"gdc_ww2_main","ww2_core_c_if_zzz_lastloaded_c"};
	};
};

class CfgVehicles
{
	class B_LIB_US_Radio;
	class B_LIB_US_Radio_ACRE2: B_LIB_US_Radio
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "US SCR-300 (ACRE2)";
	};
	class B_LIB_GER_Radio;
	class B_LIB_GER_Radio_ACRE2: B_LIB_GER_Radio
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "GER Torn.Fu.d2 Radio (ACRE2)";
	};
	class B_LIB_SOV_RA_Radio;
	class B_LIB_SOV_RA_Radio_ACRE2: B_LIB_US_Radio
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "SOV RBM-1 (ACRE2)";
	};
};