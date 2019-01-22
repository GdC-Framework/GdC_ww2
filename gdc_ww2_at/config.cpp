class CfgPatches
{
	class gdc_ww2_at
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {"gdc_ww2_main","ww2_core_c_if_zzz_lastloaded_c","WW2_Assets_c_Weapons_InfantryWeapons_c","IFA3_COMP_ACE_main"};
	};
};

class CfgAmmo
{
	class LIB_Rocket_base;
	class LIB_60mm_M6: LIB_Rocket_base
	{
		ace_frag_enabled = 1;
		ace_frag_metal = 400;
		ace_frag_charge = 210;
		ace_frag_gurney_c = 2800;
		ace_frag_gurney_k = "3/5";
		ace_frag_classes[] = { "ACE_frag_small" };
	};
	class LIB_R_88mm_RPzB: LIB_Rocket_base
	{
		ace_frag_enabled = 1;
		ace_frag_metal = 400;
		ace_frag_charge = 210;
		ace_frag_gurney_c = 2800;
		ace_frag_gurney_k = "3/5";
		ace_frag_classes[] = { "ACE_frag_small" };
	};
};		