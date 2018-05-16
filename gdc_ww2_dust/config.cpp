class CfgPatches
{
	class gdc_ww2_dust
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {"gdc_ww2_main","CUP_Worlds_DustEffects","ww2_core_c_if_zzz_lastloaded_c"};
	};
};

class CfgVehicles{
	class All;
	class AllVehicles: All{};
	class Land: AllVehicles{};
	class LandVehicle: Land{};
	class Man: Land
	{
		rightDustEffects[] =
		{
			{"GdtGrassShort","RDustEffectsMan"},
			{"GdtGrassTall","RDustEffectsMan"},
			{"GdtRedDirt","RDustEffectsManRed"},
			{"GdtField","RDustEffectsMan"},
			{"GdtForest","RDustEffectsMan"},
			{"GdtVolcano","RDustEffectsMan"},
			{"GdtCliff","RDustEffectsMan"},
			{"GdtVolcanoBeach","RDustEffectsMan"},
			{"SurfRoadDirt_exp","RDustEffectsManRed"},
			{"SurfRoadConcrete_exp","RDustEffectsMan"},
			{"SurfRoadTarmac_exp","RDustEffectsMan"},
			{"GdtStratisConcrete","RDustEffectsMan"},
			{"GdtStratisBeach","RDustEffectsMan"},
			{"GdtStratisDirt","RDustEffectsMan"},
			{"GdtStratisSeabedCluttered","RDustEffectsMan"},
			{"GdtStratisSeabed","RDustEffectsMan"},
			{"GdtStratisDryGrass","RDustEffectsMan"},
			{"GdtStratisGreenGrass","RDustEffectsMan"},
			{"GdtStratisRocky","RDustEffectsMan"},
			{"GdtStratisThistles","RDustEffectsMan"},
			{"GdtConcrete","RDustEffectsMan"},
			{"GdtAsphalt","RDustEffectsMan"},
			{"GdtRubble","RDustEffectsMan"},
			{"GdtSoil","RDustEffectsMan"},
			{"GdtBeach","RDustEffectsMan"},
			{"GdtRock","RDustEffectsMan"},
			{"GdtDead","RDustEffectsMan"},
			{"Default","RDustEffectsMan"},
			{"GdtDesert","RDustEffectsMan"},
			{"GdtDesert1","RDustEffectsMan"},
			{"GdtDesert2","RDustEffectsMan"},
			{"GdtDirt","RDustEffectsMan"},
			{"GdtGrassGreen","RDustEffectsMan"},
			{"GdtGrassDry","RDustEffectsMan"},
			{"GdtGrassWild","RDustEffectsMan"},
			{"GdtWildField","RDustEffectsMan"},
			{"GdtWeed1","RDustEffectsMan"},
			{"GdtWeed2","RDustEffectsMan"},
			{"GdtThorn","RDustEffectsMan"},
			{"GdtStony","RDustEffectsMan"},
			{"GdtStonyGreen","RDustEffectsMan"},
			{"GdtStonyThistle","RDustEffectsMan"},
			{"GdtSeabedDeep","RDustEffectsMan"},
			{"GdtSeabed","RDustEffectsMan"},
			{"SurfRoadDirt","RDustEffectsMan"},
			{"SurfRoadConcrete","RDustEffectsMan"},
			{"SurfRoadTarmac","RDustEffectsMan"},
			{"SurfWood","RDustEffectsMan"},
			{"SurfMetal","RDustEffectsMan"},
			{"SurfRoofTin","RDustEffectsMan"},
			{"SurfRoofTiles","RDustEffectsMan"},
			{"SurfIntWood","RDustEffectsMan"},
			{"SurfIntConcrete","RDustEffectsMan"},
			{"SurfIntTiles","RDustEffectsMan"},
			{"SurfIntMetal","RDustEffectsMan"},
			// CUP TP
			{"CRGrass1","RDustEffectsMan"},
			{"CRGrass2","RDustEffectsMan"},
			{"CRGrassW1","RDustEffectsMan"},
			{"CRGrassW2","RDustEffectsMan"},
			{"CRField1","RDustEffectsMan"},
			{"CRField2","RDustEffectsMan"},
			{"CRGrit1","RDustEffectsMan"},
			{"CRHeather","RDustEffectsMan"},
			{"TKPlevel","RDustEffectsMan"},
			{"TKPole","RDustEffectsMan"},
			{"TKPolopoust","RDustEffectsMan"},
			{"TKSkala","RDustEffectsMan"},
			{"TKSkalniSterk","RDustEffectsMan"},
			{"TKSterkNaDno","RDustEffectsMan"},
			{"TKMoutain","RDustEffectsMan"},
			{"TKValouny","RDustEffectsMan"},
			{"TKTrava","RDustEffectsMan"},
			{"TKForest","RDustEffectsMan"},
			{"ZRPlevel","RDustEffectsMan"},
			{"ZRPole","RDustEffectsMan"},
			{"ZRPolopoust","RDustEffectsMan"},
			{"ZRSkala","RDustEffectsMan"},
			{"ZRSkalniSterk","RDustEffectsMan"},
			{"ZRSterkNaDno","RDustEffectsMan"},
			{"ZRValouny","RDustEffectsMan"},
			{"ZRTrava","RDustEffectsMan"},
			{"DEPolopoust","RDustEffectsMan"},
			{"DESkalniSterk","RDustEffectsMan"},
			{"DETrava","RDustEffectsMan"},
			{"WLGrass1","RDustEffectsMan"},
			{"WLGrass2","RDustEffectsMan"},
			{"WLGrassW1","RDustEffectsMan"},
			{"WLGrassW2","RDustEffectsMan"},
			{"WLField1","RDustEffectsMan"},
			{"WLField2","RDustEffectsMan"},
			{"WLMudGround","RDustEffectsMan"},
			{"WLGrit1","RDustEffectsMan"},
			{"WLHeather","RDustEffectsMan"},
			{"WLConcrete","RDirtEffects"},
			{"GZTrava","RDustEffectsMan"},
			{"GZforest","RDustEffectsMan"},
			{"GZkameny","RDustEffectsMan"},
			{"GZHlina","RDustEffectsMan"},
			// IFA3
			{"I44_Mer_Field","RDustEffectsMan"}, // Champ de blé sol terre
			{"I44_Mer_Forest","RDustEffectsMan"}, // sol de foret feuilles + herbes
			{"I44_Mer_Grass1","RDustEffectsMan"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass2","RDustEffectsMan"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Ground","RDustEffectsMan"}, // terre brune bord riviere
			{"I44_Nea_Farmdirt","RDustEffectsMan"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmsurface","RDustEffectsMan"}, // Champ en terre + hautes herbes
			{"I44_Nea_Grasssurface","RDustEffectsMan"}, // herbe
			{"I44_Nea_GravelSurface","RDustEffectsMan"}, // terre nue gravier
			{"I44_Omaha_Brown","RDustEffectsMan"},
			{"I44_Omaha_Green","RDustEffectsMan"},
			{"I44_Omaha_Lawn","RDustEffectsMan"},
			{"I44_Omaha_v2_Brown","RDustEffectsMan"}, // terre + herbes
			{"I44_Omaha_v2_Green","RDustEffectsMan"}, // marron herbe
			{"I44_Omaha_v2_Lawn","RDustEffectsMan"}, // vert Herbe
			{"LIB_France_Grass","RDustEffectsMan"}, // Herbe bien verte
			{"LIB_France_Poppy","RDustEffectsMan"}, // Coquelicots
			{"LIB_France_Raps","RDustEffectsMan"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Sand","RDustEffectsMan"}, // Sable plage
			{"LIB_France_Tillage","RDustEffectsMan"}, // Champ de terre
			{"LIB_France_Weed","RDustEffectsMan"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Wheat","RDustEffectsMan"}, // Champ de blé vert
			{"LIB_Staszow_Ambush","RDustEffectsMan"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Burn","RDustEffectsMan"}, // sol brulé
			{"LIB_Staszow_Forest","RDustEffectsMan"}, // Sous-bois
			{"LIB_Staszow_Grass","RDustEffectsMan"}, // herbe verte
			{"LIB_Staszow_Grazy","RDustEffectsMan"},
			{"LIB_Staszow_Oldgrass","RDustEffectsMan"},
			{"LIB_Staszow_Oldwheat","RDustEffectsMan"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Sand","RDustEffectsMan"}, // Sable
			{"LIB_Staszow_Swamp","RDustEffectsMan"}, // marais
			{"LIB_Staszow_Wheat","RDustEffectsMan"}, // champ de blé jaune non coupé fond terre seche
			{"swu_aachen_corn_field","RDustEffectsMan"}, // Champ herbe
			{"swu_aachen_footsteps","RDustEffectsMan"}, // terreux
			{"swu_aachen_forest","RDustEffectsMan"}, // sous bois herbe
			{"swu_aachen_main_field","RDustEffectsMan"}, // Champ herbe brun
			{"swu_aachen_roads","RDustEffectsMan"}, // terreux bord de route
			{"swu_berlin_grass","RDustEffectsMan"},
			{"swu_berlin_main","RDustEffectsMan"},
			{"SWU_Dunkirk_Roadside","RDustEffectsMan"}, // bord de route herbe terreuse
			{"SWU_Forest_Mud","RDustEffectsMan"}, // sous bois
			{"SWU_Grass_Normal","RDustEffectsMan"}, // herbe
			{"SWU_Grassy_Floor","RDustEffectsMan"}, // herbe
			{"swu_greece_grass","RDustEffectsMan"}, // Herbe
			{"swu_greece_road","RDustEffectsMan"}, // bord de route terre et herbe seche
			{"swu_greece_vinesdust","RDustEffectsMan"}, // Champ herbe très seche
			{"swu_greece_woods","RDustEffectsMan"}, // sous bois herebe
			{"SWU_Road_Side","RDustEffectsMan"}, // bord de route terreux
			{"SWU_Sandy_Floor","RDustEffectsMan"}, // sol sabloneux avec herbe
			// Fallujah
			{"siFallujahTerra","RDustEffectsMan"},
			{"siFallujahAcqua","RDustEffectsMan"},
			{"siFallujahErba","RDustEffectsMan"},
			{"siFallujahSabbia","RDustEffectsMan"},
			{"siFallujahCitta","RDustEffectsMan"},
			// N'ziwasogo (projeta 305)
			{"mak305_dirt","RDustEffectsMan"},
			{"mak305_jungle","RDustEffectsMan"},
			{"mak305_dirtgrass","RDustEffectsMan"},
			{"mak305_palm","RDustEffectsMan"},
			{"mak305_palmbroken","RDustEffectsMan"},
			{"mak305_sand","RDustEffectsMan"},
			// Aliabad
			{"AliDirtSurface","RDustEffectsMan"},
			{"AliSandSurface","RDustEffectsMan"},
			{"AliDesertSurface","RDustEffectsMan"},
			{"AliForestSurface","RDustEffectsMan"},
			{"AliRockySurface","RDustEffectsMan"},
			{"AliCliffSurface","RDustEffectsMan"},
			{"AliRiverbedSurface","RDustEffectsMan"},
			// HazarKot
			{"FTDirtSurface","RDustEffectsMan"},
			{"FTSandSurface","RDustEffectsMan"},
			{"FTDesertSurface","RDustEffectsMan"},
			{"FTForestSurface","RDustEffectsMan"},
			{"FTRockySurface","RDustEffectsMan"},
			// Caribou
			{"CARIBOU_FOREST01","RDustEffectsMan"},
			{"CARIBOU_FOREST02","RDustEffectsMan"},
			{"CARIBOU_GRASS01","RDustEffectsMan"},
			{"CARIBOU_GRASS02","RDustEffectsMan"},
			{"CARIBOU_GRAVEL01","RDustEffectsMan"},
			{"CARIBOU_GRAVEL02","RDustEffectsMan"},
			{"CARIBOU_ROCK01","RDustEffectsMan"},
			{"CARIBOU_ROCK02","RDustEffectsMan"},
			{"CARIBOU_BETON01","RDustEffectsMan"},
			// Duala
			{"duala_grass","RDustEffectsMan"},
			{"duala_stones","RDustEffectsMan"},
			{"duala_rock","RDustEffectsMan"},
			{"duala_sand","RDustEffectsMan"},
			{"duala_wood","RDustEffectsMan"},
			// Podagorsk
			{"FDF_Tex_1","RDustEffectsMan"},
			{"FDF_Tex_2","RDustEffectsMan"},
			{"FDF_Tex_3","RDustEffectsMan"},
			{"FDF_Tex_4","RDustEffectsMan"},
			{"FDF_Tex_5","RDustEffectsMan"},
			{"FDF_Tex_6","RDustEffectsMan"},
			{"FDF_Tex_7","RDustEffectsMan"},
			{"FDF_Tex_8","RDustEffectsMan"},
			{"FDF_Tex_9","RDustEffectsMan"},
			{"FDF_Tex_10","RDustEffectsMan"},
			{"FDF_Tex_11","RDustEffectsMan"},
			// Zernovo
			{"gsep_creekbedsurface","RDustEffectsMan"},
			{"gsepconcretegroundsurface","RDustEffectsMan"},
			{"gsepdirtsurface","RDustEffectsMan"},
			{"gsepforest1surface","RDustEffectsMan"},
			{"gseptallgrasssurface","RDustEffectsMan"},
			{"gsepshortgrasssurface","RDustEffectsMan"},
			{"gsepbarerocksurface","RDustEffectsMan"},
			{"gsepgravelsurface","RDustEffectsMan"},
			{"gsephayfieldsurface","RDustEffectsMan"},
			{"gsepcropsurface","RDustEffectsMan"},
			/*
			// Taunus
			{"xcam_grassbravo_co","RDustEffectsMan"},
			{"xcam_grass_green_co","RDustEffectsMan"},
			{"xcam_acker_co","RDustEffectsMan"},
			{"xcam_dirt_co","RDustEffectsMan"},
			{"xcam_asfalt_co","RDustEffectsMan"},
			*/
			// Thirsk
			{"THgrass2","RDustEffectsMan"},
			{"THgrass3","RDustEffectsMan"},
			{"THForest1","RDustEffectsMan"},
			{"THForest2","RDustEffectsMan"},
			{"THGrit1","RDustEffectsMan"},
			{"THBetoni1","RDustEffectsMan"},
			{"THRock","RDustEffectsMan"},
			{"THTarmac","RDustEffectsMan"},
			// PKL
			{"bludriver","RDustEffectsMan"},
			{"bludjungle1","RDustEffectsMan"},
			{"bludjungle2","RDustEffectsMan"},
			{"bludjungle3","RDustEffectsMan"},
			{"bludgressj","RDustEffectsMan"},
			{"bludjunglerd1","RDustEffectsMan"},
			{"bludjunglerd2","RDustEffectsMan"},
			{"bludrivermaling","RDustEffectsMan"},
			{"blud_sti","RDustEffectsMan"},
			// Ndjenahoud
			{"mak319_desgrass","RDustEffectsMan"},
			{"mak319_stony","RDustEffectsMan"},
			{"mak308_Dirt","RDustEffectsMan"},
			{"mak308_GrassDry","RDustEffectsMan"},
			{"mak319_thorn","RDustEffectsMan"},
			{"mak319_desert","RDustEffectsMan"}
		};
		leftDustEffects[] ={
			{"GdtGrassShort","LDustEffectsMan"},
			{"GdtGrassTall","LDustEffectsMan"},
			{"GdtRedDirt","LDustEffectsManRed"},
			{"GdtField","LDustEffectsMan"},
			{"GdtForest","LDustEffectsMan"},
			{"GdtVolcano","LDustEffectsMan"},
			{"GdtCliff","LDustEffectsMan"},
			{"GdtVolcanoBeach","LDustEffectsMan"},
			{"SurfRoadDirt_exp","LDustEffectsManRed"},
			{"SurfRoadConcrete_exp","LDustEffectsMan"},
			{"SurfRoadTarmac_exp","LDustEffectsMan"},
			{"GdtStratisConcrete","LDustEffectsMan"},
			{"GdtStratisBeach","LDustEffectsMan"},
			{"GdtStratisDirt","LDustEffectsMan"},
			{"GdtStratisSeabedCluttered","LDustEffectsMan"},
			{"GdtStratisSeabed","LDustEffectsMan"},
			{"GdtStratisDryGrass","LDustEffectsMan"},
			{"GdtStratisGreenGrass","LDustEffectsMan"},
			{"GdtStratisRocky","LDustEffectsMan"},
			{"GdtStratisThistles","LDustEffectsMan"},
			{"GdtConcrete","LDustEffectsMan"},
			{"GdtAsphalt","LDustEffectsMan"},
			{"GdtRubble","LDustEffectsMan"},
			{"GdtSoil","LDustEffectsMan"},
			{"GdtBeach","LDustEffectsMan"},
			{"GdtRock","LDustEffectsMan"},
			{"GdtDead","LDustEffectsMan"},
			{"Default","LDustEffectsMan"},
			{"GdtDesert","LDustEffectsMan"},
			{"GdtDesert1","LDustEffectsMan"},
			{"GdtDesert2","LDustEffectsMan"},
			{"GdtDirt","LDustEffectsMan"},
			{"GdtGrassGreen","LDustEffectsMan"},
			{"GdtGrassDry","LDustEffectsMan"},
			{"GdtGrassWild","LDustEffectsMan"},
			{"GdtWildField","LDustEffectsMan"},
			{"GdtWeed1","LDustEffectsMan"},
			{"GdtWeed2","LDustEffectsMan"},
			{"GdtThorn","LDustEffectsMan"},
			{"GdtStony","LDustEffectsMan"},
			{"GdtStonyGreen","LDustEffectsMan"},
			{"GdtStonyThistle","LDustEffectsMan"},
			{"GdtSeabedDeep","LDustEffectsMan"},
			{"GdtSeabed","LDustEffectsMan"},
			{"SurfRoadDirt","LDustEffectsMan"},
			{"SurfRoadConcrete","LDustEffectsMan"},
			{"SurfRoadTarmac","LDustEffectsMan"},
			{"SurfWood","LDustEffectsMan"},
			{"SurfMetal","LDustEffectsMan"},
			{"SurfRoofTin","LDustEffectsMan"},
			{"SurfRoofTiles","LDustEffectsMan"},
			{"SurfIntWood","LDustEffectsMan"},
			{"SurfIntConcrete","LDustEffectsMan"},
			{"SurfIntTiles","LDustEffectsMan"},
			{"SurfIntMetal","LDustEffectsMan"},
			// CUP TP
			{"CRGrass1","LDustEffectsMan"},
			{"CRGrass2","LDustEffectsMan"},
			{"CRGrassW1","LDustEffectsMan"},
			{"CRGrassW2","LDustEffectsMan"},
			{"CRField1","LDustEffectsMan"},
			{"CRField2","LDustEffectsMan"},
			{"CRGrit1","LDustEffectsMan"},
			{"CRHeather","LDustEffectsMan"},
			{"TKPlevel","LDustEffectsMan"},
			{"TKPole","LDustEffectsMan"},
			{"TKPolopoust","LDustEffectsMan"},
			{"TKSkala","LDustEffectsMan"},
			{"TKSkalniSterk","LDustEffectsMan"},
			{"TKSterkNaDno","LDustEffectsMan"},
			{"TKMoutain","LDustEffectsMan"},
			{"TKValouny","LDustEffectsMan"},
			{"TKTrava","LDustEffectsMan"},
			{"TKForest","LDustEffectsMan"},
			{"ZRPlevel","LDustEffectsMan"},
			{"ZRPole","LDustEffectsMan"},
			{"ZRPolopoust","LDustEffectsMan"},
			{"ZRSkala","LDustEffectsMan"},
			{"ZRSkalniSterk","LDustEffectsMan"},
			{"ZRSterkNaDno","LDustEffectsMan"},
			{"ZRValouny","LDustEffectsMan"},
			{"ZRTrava","LDustEffectsMan"},
			{"DEPolopoust","LDustEffectsMan"},
			{"DESkalniSterk","LDustEffectsMan"},
			{"DETrava","LDustEffectsMan"},
			{"WLGrass1","LDustEffectsMan"},
			{"WLGrass2","LDustEffectsMan"},
			{"WLGrassW1","LDustEffectsMan"},
			{"WLGrassW2","LDustEffectsMan"},
			{"WLField1","LDustEffectsMan"},
			{"WLField2","LDustEffectsMan"},
			{"WLMudGround","LDustEffectsMan"},
			{"WLGrit1","LDustEffectsMan"},
			{"WLHeather","LDustEffectsMan"},
			{"WLConcrete","LDirtEffects"},
			{"GZTrava","LDustEffectsMan"},
			{"GZforest","LDustEffectsMan"},
			{"GZkameny","LDustEffectsMan"},
			{"GZHlina","LDustEffectsMan"},
			// IFA3
			{"I44_Mer_Field","LDustEffectsMan"}, // Champ de blé sol terre
			{"I44_Mer_Forest","LDustEffectsMan"}, // sol de foret feuilles + herbes
			{"I44_Mer_Grass1","LDustEffectsMan"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass2","LDustEffectsMan"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Ground","LDustEffectsMan"}, // terre brune bord riviere
			{"I44_Nea_Farmdirt","LDustEffectsMan"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmsurface","LDustEffectsMan"}, // Champ en terre + hautes herbes
			{"I44_Nea_Grasssurface","LDustEffectsMan"}, // herbe
			{"I44_Nea_GravelSurface","LDustEffectsMan"}, // terre nue gravier
			{"I44_Omaha_Brown","LDustEffectsMan"},
			{"I44_Omaha_Green","LDustEffectsMan"},
			{"I44_Omaha_Lawn","LDustEffectsMan"},
			{"I44_Omaha_v2_Brown","LDustEffectsMan"}, // terre + herbes
			{"I44_Omaha_v2_Green","LDustEffectsMan"}, // marron herbe
			{"I44_Omaha_v2_Lawn","LDustEffectsMan"}, // vert Herbe
			{"LIB_France_Grass","LDustEffectsMan"}, // Herbe bien verte
			{"LIB_France_Poppy","LDustEffectsMan"}, // Coquelicots
			{"LIB_France_Raps","LDustEffectsMan"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Sand","LDustEffectsMan"}, // Sable plage
			{"LIB_France_Tillage","LDustEffectsMan"}, // Champ de terre
			{"LIB_France_Weed","LDustEffectsMan"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Wheat","LDustEffectsMan"}, // Champ de blé vert
			{"LIB_Staszow_Ambush","LDustEffectsMan"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Burn","LDustEffectsMan"}, // sol brulé
			{"LIB_Staszow_Forest","LDustEffectsMan"}, // Sous-bois
			{"LIB_Staszow_Grass","LDustEffectsMan"}, // herbe verte
			{"LIB_Staszow_Grazy","LDustEffectsMan"},
			{"LIB_Staszow_Oldgrass","LDustEffectsMan"},
			{"LIB_Staszow_Oldwheat","LDustEffectsMan"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Sand","LDustEffectsMan"}, // Sable
			{"LIB_Staszow_Swamp","LDustEffectsMan"}, // marais
			{"LIB_Staszow_Wheat","LDustEffectsMan"}, // champ de blé jaune non coupé fond terre seche
			{"swu_aachen_corn_field","LDustEffectsMan"}, // Champ herbe
			{"swu_aachen_footsteps","LDustEffectsMan"}, // terreux
			{"swu_aachen_forest","LDustEffectsMan"}, // sous bois herbe
			{"swu_aachen_main_field","LDustEffectsMan"}, // Champ herbe brun
			{"swu_aachen_roads","LDustEffectsMan"}, // terreux bord de route
			{"swu_berlin_grass","LDustEffectsMan"},
			{"swu_berlin_main","LDustEffectsMan"},
			{"SWU_Dunkirk_Roadside","LDustEffectsMan"}, // bord de route herbe terreuse
			{"SWU_Forest_Mud","LDustEffectsMan"}, // sous bois
			{"SWU_Grass_Normal","LDustEffectsMan"}, // herbe
			{"SWU_Grassy_Floor","LDustEffectsMan"}, // herbe
			{"swu_greece_grass","LDustEffectsMan"}, // Herbe
			{"swu_greece_road","LDustEffectsMan"}, // bord de route terre et herbe seche
			{"swu_greece_vinesdust","LDustEffectsMan"}, // Champ herbe très seche
			{"swu_greece_woods","LDustEffectsMan"}, // sous bois herebe
			{"SWU_Road_Side","LDustEffectsMan"}, // bord de route terreux
			{"SWU_Sandy_Floor","LDustEffectsMan"}, // sol sabloneux avec herbe
			// Fallujah
			{"siFallujahTerra","LDustEffectsMan"},
			{"siFallujahAcqua","LDustEffectsMan"},
			{"siFallujahErba","LDustEffectsMan"},
			{"siFallujahSabbia","LDustEffectsMan"},
			{"siFallujahCitta","LDustEffectsMan"},
			//N'ziwasogo (projeta 305)
			{"mak305_dirt","LDustEffectsMan"},
			{"mak305_jungle","LDustEffectsMan"},
			{"mak305_dirtgrass","LDustEffectsMan"},
			{"mak305_palm","LDustEffectsMan"},
			{"mak305_palmbroken","LDustEffectsMan"},
			{"mak305_sand","LDustEffectsMan"},
			// Aliabad
			{"AliDirtSurface","LDustEffectsMan"},
			{"AliSandSurface","LDustEffectsMan"},
			{"AliDesertSurface","LDustEffectsMan"},
			{"AliForestSurface","LDustEffectsMan"},
			{"AliRockySurface","LDustEffectsMan"},
			{"AliCliffSurface","LDustEffectsMan"},
			{"AliRiverbedSurface","LDustEffectsMan"},
			// HazarKot
			{"FTDirtSurface","LDustEffectsMan"},
			{"FTSandSurface","LDustEffectsMan"},
			{"FTDesertSurface","LDustEffectsMan"},
			{"FTForestSurface","LDustEffectsMan"},
			{"FTRockySurface","LDustEffectsMan"},
			// Caribou
			{"CARIBOU_FOREST01","LDustEffectsMan"},
			{"CARIBOU_FOREST02","LDustEffectsMan"},
			{"CARIBOU_GRASS01","LDustEffectsMan"},
			{"CARIBOU_GRASS02","LDustEffectsMan"},
			{"CARIBOU_GRAVEL01","LDustEffectsMan"},
			{"CARIBOU_GRAVEL02","LDustEffectsMan"},
			{"CARIBOU_ROCK01","LDustEffectsMan"},
			{"CARIBOU_ROCK02","LDustEffectsMan"},
			{"CARIBOU_BETON01","LDustEffectsMan"},
			// Duala
			{"duala_grass","LDustEffectsMan"},
			{"duala_stones","LDustEffectsMan"},
			{"duala_rock","LDustEffectsMan"},
			{"duala_sand","LDustEffectsMan"},
			{"duala_wood","LDustEffectsMan"},
			// Podagorsk
			{"FDF_Tex_1","LDustEffectsMan"},
			{"FDF_Tex_2","LDustEffectsMan"},
			{"FDF_Tex_3","LDustEffectsMan"},
			{"FDF_Tex_4","LDustEffectsMan"},
			{"FDF_Tex_5","LDustEffectsMan"},
			{"FDF_Tex_6","LDustEffectsMan"},
			{"FDF_Tex_7","LDustEffectsMan"},
			{"FDF_Tex_8","LDustEffectsMan"},
			{"FDF_Tex_9","LDustEffectsMan"},
			{"FDF_Tex_10","LDustEffectsMan"},
			{"FDF_Tex_11","LDustEffectsMan"},
			// Zernovo
			{"gsep_creekbedsurface","LDustEffectsMan"},
			{"gsepconcretegroundsurface","LDustEffectsMan"},
			{"gsepdirtsurface","LDustEffectsMan"},
			{"gsepforest1surface","LDustEffectsMan"},
			{"gseptallgrasssurface","LDustEffectsMan"},
			{"gsepshortgrasssurface","LDustEffectsMan"},
			{"gsepbarerocksurface","LDustEffectsMan"},
			{"gsepgravelsurface","LDustEffectsMan"},
			{"gsephayfieldsurface","LDustEffectsMan"},
			{"gsepcropsurface","LDustEffectsMan"},
			/*
			// Taunus
			{"xcam_grassbravo_co","LDustEffectsMan"},
			{"xcam_grass_green_co","LDustEffectsMan"},
			{"xcam_acker_co","LDustEffectsMan"},
			{"xcam_dirt_co","LDustEffectsMan"},
			{"xcam_asfalt_co","LDustEffectsMan"},
			*/
			// Thirsk
			{"THgrass2","LDustEffectsMan"},
			{"THgrass3","LDustEffectsMan"},
			{"THForest1","LDustEffectsMan"},
			{"THForest2","LDustEffectsMan"},
			{"THGrit1","LDustEffectsMan"},
			{"THBetoni1","LDustEffectsMan"},
			{"THRock","LDustEffectsMan"},
			{"THTarmac","LDustEffectsMan"},
			// PKL
			{"bludriver","LDustEffectsMan"},
			{"bludjungle1","LDustEffectsMan"},
			{"bludjungle2","LDustEffectsMan"},
			{"bludjungle3","LDustEffectsMan"},
			{"bludgressj","LDustEffectsMan"},
			{"bludjunglerd1","LDustEffectsMan"},
			{"bludjunglerd2","LDustEffectsMan"},
			{"bludrivermaling","LDustEffectsMan"},
			{"blud_sti","LDustEffectsMan"},
			// Ndjenahoud
			{"mak319_desgrass","LDustEffectsMan"},
			{"mak319_stony","LDustEffectsMan"},
			{"mak308_Dirt","LDustEffectsMan"},
			{"mak308_GrassDry","LDustEffectsMan"},
			{"mak319_thorn","LDustEffectsMan"},
			{"mak319_desert","LDustEffectsMan"}
		};
	};
	class Car: LandVehicle
	{
		rightDustEffects[] =
		{
			{"GdtGrassShort","RDustEffects"},
			{"GdtGrassShort","RGrassEffects"},
			{"GdtGrassTall","RDustEffects"},
			{"GdtGrassTall","RGrassEffects"},
			{"GdtRedDirt","RDustEffectsRed"},
			{"GdtField","RDustEffects"},
			{"GdtForest","RDustEffects"},
			{"GdtVolcano","RDustEffects"},
			{"GdtVolcano","RStonesEffects"},
			{"GdtCliff","RDustEffects"},
			{"GdtVolcanoBeach","RDustEffects"},
			{"SurfRoadDirt_exp","RDustEffectsRed"},
			{"SurfRoadConcrete_exp","RDustEffects"},
			{"SurfRoadTarmac_exp","RDustEffects"},
			{"GdtStratisConcrete","RDustEffects"},
			{"GdtStratisConcrete","RDirtEffects"},
			{"GdtStratisBeach","RDustEffects"},
			{"GdtStratisBeach","RStonesEffects"},
			{"GdtStratisDirt","RDustEffects"},
			{"GdtStratisDirt","RDirtEffects"},
			{"GdtStratisSeabedCluttered","RDustEffects"},
			{"GdtStratisSeabed","RDustEffects"},
			{"GdtStratisDryGrass","RDustEffects"},
			{"GdtStratisDryGrass","RGrassDryEffects"},
			{"GdtStratisDryGrass","RDirtEffects"},
			{"GdtStratisGreenGrass","RDustEffects"},
			{"GdtStratisGreenGrass","RGrassEffects"},
			{"GdtStratisGreenGrass","RDirtEffects"},
			{"GdtStratisRocky","RDustEffects"},
			{"GdtStratisRocky","RGrassEffects"},
			{"GdtStratisRocky","RDirtEffects"},
			{"GdtStratisThistles","RDustEffects"},
			{"GdtStratisThistles","RGrassEffects"},
			{"GdtStratisThistles","RDirtEffects"},
			{"GdtConcrete","RDustEffects"},
			{"GdtConcrete","RDirtEffects"},
			{"GdtAsphalt","RDustEffects"},
			{"GdtAsphalt","RDirtEffects"},
			{"GdtRubble","RDustEffects"},
			{"GdtRubble","RDirtEffects"},
			{"GdtSoil","RDustEffects"},
			{"GdtSoil","RDirtEffects"},
			{"GdtBeach","RDustEffects"},
			{"GdtBeach","RStonesEffects"},
			{"GdtRock","RDustEffects"},
			{"GdtRock","RDirtEffects"},
			{"GdtDead","RDustEffects"},
			{"GdtDead","RDirtEffects"},
			{"Default","RDustEffects"},
			{"GdtDesert","RDustEffects"},
			{"GdtDesert","RStonesEffects"},
			{"GdtDesert1","RDustEffects"},
			{"GdtDesert1","RSandEffects"},
			{"GdtDesert1","RDirtEffects"},
			{"GdtDesert1","RStonesEffects"},
			{"GdtDesert2","RDustEffects"},
			{"GdtDesert2","RSandEffects"},
			{"GdtDesert2","RGrassEffects"},
			{"GdtDesert2","RDirtEffects"},
			{"GdtDirt","RDustEffects"},
			{"GdtDirt","RDirtEffects"},
			{"GdtGrassGreen","RDustEffects"},
			{"GdtGrassGreen","RGrassEffects"},
			{"GdtGrassGreen","RDirtEffects"},
			{"GdtGrassDry","RDustEffects"},
			{"GdtGrassDry","RGrassDryEffects"},
			{"GdtGrassDry","RDirtEffects"},
			{"GdtGrassWild","RDustEffects"},
			{"GdtGrassWild","RGrassEffects"},
			{"GdtGrassWild","RDirtEffects"},
			{"GdtWildField","RDustEffects"},
			{"GdtWildField","RGrassEffects"},
			{"GdtWildField","RDirtEffects"},
			{"GdtWeed1","RDustEffects"},
			{"GdtWeed1","RGrassEffects"},
			{"GdtWeed1","RDirtEffects"},
			{"GdtWeed2","RDustEffects"},
			{"GdtWeed2","RGrassEffects"},
			{"GdtWeed2","RDirtEffects"},
			{"GdtThorn","RDustEffects"},
			{"GdtThorn","RGrassEffects"},
			{"GdtThorn","RDirtEffects"},
			{"GdtStony","RDustEffects"},
			{"GdtStony","RGrassEffects"},
			{"GdtStony","RDirtEffects"},
			{"GdtStonyGreen","RDustEffects"},
			{"GdtStonyGreen","RGrassEffects"},
			{"GdtStonyGreen","RDirtEffects"},
			{"GdtStonyThistle","RDustEffects"},
			{"GdtStonyThistle","RGrassEffects"},
			{"GdtStonyThistle","RDirtEffects"},
			{"GdtSeabedDeep","RDustEffects"},
			{"GdtSeabed","RDustEffects"},
			{"SurfRoadDirt","RDustEffects"},
			{"SurfRoadConcrete","RDustEffects"},
			{"SurfRoadTarmac","RDustEffects"},
			{"SurfWood","RDustEffects"},
			{"SurfMetal","RDustEffects"},
			{"SurfRoofTin","RDustEffects"},
			{"SurfRoofTiles","RDustEffects"},
			{"SurfIntWood","RDustEffects"},
			{"SurfIntConcrete","RDustEffects"},
			{"SurfIntTiles","RDustEffects"},
			{"SurfIntMetal","RDustEffects"},
			{"dirtrunway","RDustEffects"},
			// CUP TP
			{"CRGrass1","RDustEffects"},
			{"CRGrass1","RGrassEffects"},
			{"CRGrass1","RDirtEffects"},
			{"CRGrass2","RDustEffects"},
			{"CRGrass2","RGrassEffects"},
			{"CRGrass2","RDirtEffects"},
			{"CRGrassW1","RDustEffects"},
			{"CRGrassW1","RGrassEffects"},
			{"CRGrassW1","RDirtEffects"},
			{"CRGrassW2","RDustEffects"},
			{"CRGrassW2","RGrassEffects"},
			{"CRGrassW2","RDirtEffects"},
			{"CRField1","RDustEffects"},
			{"CRField1","RGrassEffects"},
			{"CRField1","RDirtEffects"},
			{"CRField2","RDustEffects"},
			{"CRField2","RGrassEffects"},
			{"CRField2","RDirtEffects"},
			{"CRForest1","RDustEffects"},
			{"CRForest1","RGrassEffects"},
			{"CRForest1","RDirtEffects"},
			{"CRForest2","RDustEffects"},
			{"CRForest2","RGrassEffects"},
			{"CRForest2","RDirtEffects"},
			{"CRGrit1","RDustEffects"},
			{"CRGrit1","RDirtEffects"},
			{"CRHeather","RDustEffects"},
			{"CRHeather","RGrassEffects"},
			{"CRHeather","RDirtEffects"},
			{"CRConcrete","RDirtEffects"},
			{"TKAsfalt","RDirtEffects"},
			{"TKBeton","RDustEffects"},
			{"TKPlevel","RDustEffects"},
			{"TKPlevel","RGrassEffects"},
			{"TKPlevel","RDirtEffects"},
			{"TKPole","RDustEffects"},
			{"TKPole","RGrassDryEffects"},
			{"TKPole","RDirtEffects"},
			{"TKPolopoust","RDustEffects"},
			{"TKPolopoust","RSandEffects"},
			{"TKPolopoust","RDirtEffects"},
			{"TKSkala","RDustEffects"},
			{"TKSkala","RStonesEffects"},
			{"TKSkalniSterk","RDustEffects"},
			{"TKSkalniSterk","RStonesEffects"},
			{"TKSterkNaDno","RDustEffects"},
			{"TKSterkNaDno","RStonesEffects"},
			{"TKMoutain","RDustEffects"},
			{"TKMoutain","RStonesEffects"},
			{"TKValouny","RDustEffects"},
			{"TKValouny","RStonesEffects"},
			{"TKTrava","RDustEffects"},
			{"TKTrava","RGrassDryEffects"},
			{"TKTrava","RDirtEffects"},
			{"TKForest","RDustEffects"},
			{"TKForest","RGrassDryEffects"},
			{"TKForest","RDirtEffects"},
			{"ZRAsfalt","RDirtEffects"},
			{"ZRBeton","RDustEffects"},
			{"RoadDirt_EP1","RDustEffects"},
			{"RoadTarmac_EP1","RDirtEffects"},
			{"ZRPlevel","RDustEffects"},
			{"ZRPlevel","RGrassEffects"},
			{"ZRPlevel","RDirtEffects"},
			{"ZRPole","RDustEffects"},
			{"ZRPole","RGrassDryEffects"},
			{"ZRPole","RDirtEffects"},
			{"ZRPolopoust","RDustEffects"},
			{"ZRPolopoust","RSandEffects"},
			{"ZRPolopoust","RDirtEffects"},
			{"ZRSkala","RDustEffects"},
			{"ZRSkala","RStonesEffects"},
			{"ZRSkalniSterk","RDustEffects"},
			{"ZRSkalniSterk","RStonesEffects"},
			{"ZRSterkNaDno","RDustEffects"},
			{"ZRSterkNaDno","RStonesEffects"},
			{"ZRValouny","RDustEffects"},
			{"ZRValouny","RStonesEffects"},
			{"ZRTrava","RDustEffects"},
			{"ZRTrava","RGrassDryEffects"},
			{"ZRTrava","RDirtEffects"},
			{"DEPolopoust","RDustEffects"},
			{"DEPolopoust","RSandEffects"},
			{"DEPolopoust","RDirtEffects"},
			{"DESkalniSterk","RDustEffects"},
			{"DESkalniSterk","RStonesEffects"},
			{"DETrava","RDustEffects"},
			{"DETrava","RGrassDryEffects"},
			{"DETrava","RDirtEffects"},
			{"WLGrass1","RDustEffects"},
			{"WLGrass1","RGrassEffects"},
			{"WLGrass1","RDirtEffects"},
			{"WLGrass2","RDustEffects"},
			{"WLGrass2","RGrassEffects"},
			{"WLGrass2","RDirtEffects"},
			{"WLGrassW1","RDustEffects"},
			{"WLGrassW1","RGrassEffects"},
			{"WLGrassW1","RDirtEffects"},
			{"WLGrassW2","RDustEffects"},
			{"WLGrassW2","RGrassEffects"},
			{"WLGrassW2","RDirtEffects"},
			{"WLField1","RDustEffects"},
			{"WLField1","RGrassEffects"},
			{"WLField1","RDirtEffects"},
			{"WLField2","RDustEffects"},
			{"WLField2","RGrassEffects"},
			{"WLField2","RDirtEffects"},
			{"WLForest1","RDustEffects"},
			{"WLForest1","RGrassEffects"},
			{"WLForest1","RDirtEffects"},
			{"WLForest2","RDustEffects"},
			{"WLForest2","RGrassEffects"},
			{"WLForest2","RDirtEffects"},
			{"WLMudGround","RDustEffects"},
			{"WLMudGround","RGrassEffects"},
			{"WLMudGround","RDirtEffects"},
			{"WLGrit1","RDustEffects"},
			{"WLGrit1","RDirtEffects"},
			{"WLHeather","RDustEffects"},
			{"WLHeather","RGrassEffects"},
			{"WLHeather","RDirtEffects"},
			{"WLConcrete","RDirtEffects"},
			{"GZTrava","RDustEffects"},
			{"GZTrava","RGrassDryEffects"},
			{"GZTrava","RDirtEffects"},
			{"GZforest","RDustEffects"},
			{"GZforest","RGrassDryEffects"},
			{"GZforest","RDirtEffects"},
			{"GZkameny","RDustEffects"},
			{"GZkameny","RStonesEffects"},
			{"GZHlina","RDustEffects"},
			{"GZHlina","RGrassEffects"},
			{"GZHlina","RDirtEffects"},
			{"BetonNew","RDirtEffects"},
			{"Asf1","RDirtEffects"},
			{"Asf2","RDirtEffects"},
			{"Asf3","RDirtEffects"},
			{"road","RDustEffects"},
			// IFA3
			{"I44_Mer_Field","RDustEffects"}, // Champ de blé sol terre
			{"I44_Mer_Field","RGrassEffects"}, // Champ de blé sol terre
			{"I44_Mer_Field","RDirtEffects"}, // Champ de blé sol terre
			{"I44_Mer_Forest","RDustEffects"}, // sol de foret feuilles + herbes
			{"I44_Mer_Forest","RGrassEffects"}, // sol de foret feuilles + herbes
			{"I44_Mer_Forest","RDirtEffects"}, // sol de foret feuilles + herbes
			{"I44_Mer_Grass1","RDustEffects"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass1","RGrassEffects"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass1","RDirtEffects"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass2","RDustEffects"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Grass2","RGrassEffects"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Grass2","RDirtEffects"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Ground","RDustEffects"}, // terre brune bord riviere
			{"I44_Mer_Ground","RDirtEffects"}, // terre brune bord riviere
			{"I44_Nea_Farmdirt","RDustEffects"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmdirt","RGrassDryEffects"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmdirt","RDirtEffects"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmsurface","RDustEffects"}, // Champ en terre + hautes herbes
			{"I44_Nea_Farmsurface","RGrassEffects"}, // Champ en terre + hautes herbes
			{"I44_Nea_Farmsurface","RDirtEffects"}, // Champ en terre + hautes herbes
			{"I44_Nea_Grasssurface","RDustEffects"}, // herbe
			{"I44_Nea_Grasssurface","RGrassEffects"}, // herbe
			{"I44_Nea_Grasssurface","RDirtEffects"}, // herbe
			{"I44_Nea_GravelSurface","RDustEffects"}, // terre nue gravier
			{"I44_Nea_GravelSurface","RDirtEffects"}, // terre nue gravier
			{"I44_Nea_GravelSurface","RStonesEffects"}, // terre nue gravier
			{"I44_Omaha_v2_Brown","RDustEffects"}, // terre + herbes
			{"I44_Omaha_v2_Brown","RGrassEffects"}, // terre + herbes
			{"I44_Omaha_v2_Brown","RDirtEffects"}, // terre + herbes
			{"I44_Omaha_v2_Green","RDustEffects"}, // marron herbe
			{"I44_Omaha_v2_Green","RGrassEffects"}, // marron herbe
			{"I44_Omaha_v2_Green","RDirtEffects"}, // marron herbe
			{"I44_Omaha_v2_Lawn","RDustEffects"}, // vert Herbe
			{"I44_Omaha_v2_Lawn","RGrassEffects"}, // vert Herbe
			{"I44_Omaha_v2_Lawn","RDirtEffects"}, // vert Herbe
			{"LIB_France_Grass","RDustEffects"}, // Herbe bien verte
			{"LIB_France_Grass","RGrassEffects"}, // Herbe bien verte
			{"LIB_France_Grass","RDirtEffects"}, // Herbe bien verte
			{"LIB_France_Poppy","RDustEffects"}, // Coquelicots
			{"LIB_France_Poppy","RGrassEffects"}, // Coquelicots
			{"LIB_France_Poppy","RDirtEffects"}, // Coquelicots
			{"LIB_France_Raps","RDustEffects"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Raps","RGrassEffects"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Raps","RDirtEffects"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Sand","RDustEffects"}, // Sable plage
			{"LIB_France_Sand","RDirtEffects"}, // Sable plage
			{"LIB_France_Sand","RSandEffects"}, // Sable plage
			{"LIB_France_Tillage","RDustEffects"}, // Champ de terre
			{"LIB_France_Tillage","RDirtEffects"}, // Champ de terre
			{"LIB_France_Weed","RDustEffects"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Weed","RGrassDryEffects"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Weed","RDirtEffects"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Wheat","RDustEffects"}, // Champ de blé vert
			{"LIB_France_Wheat","RGrassEffects"}, // Champ de blé vert
			{"LIB_France_Wheat","RDirtEffects"}, // Champ de blé vert
			{"LIB_Staszow_Ambush","RDustEffects"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Ambush","RGrassEffects"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Ambush","RDirtEffects"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Burn","RDustEffects"}, // sol brulé
			{"LIB_Staszow_Burn","RDirtEffectsBig"}, // sol brulé
			{"LIB_Staszow_Forest","RDustEffects"}, // Sous-bois
			{"LIB_Staszow_Forest","RGrassEffects"}, // Sous-bois
			{"LIB_Staszow_Forest","RDirtEffects"}, // Sous-bois
			{"LIB_Staszow_Grass","RDustEffects"}, // herbe verte
			{"LIB_Staszow_Grass","RGrassEffects"}, // herbe verte
			{"LIB_Staszow_Grass","RDirtEffects"}, // herbe verte
			{"LIB_Staszow_Grazy","RDustEffects"},
			{"LIB_Staszow_Grazy","RGrassEffects"},
			{"LIB_Staszow_Grazy","RDirtEffects"},
			{"LIB_Staszow_Oldgrass","RDustEffects"},
			{"LIB_Staszow_Oldgrass","RGrassDryEffects"},
			{"LIB_Staszow_Oldgrass","RDirtEffects"},
			{"LIB_Staszow_Oldwheat","RDustEffects"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Oldwheat","RGrassDryEffects"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Oldwheat","RDirtEffects"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Sand","RDustEffects"}, // Sable
			{"LIB_Staszow_Sand","RDirtEffects"}, // Sable
			{"LIB_Staszow_Sand","RSandEffects"}, // Sable
			{"LIB_Staszow_Swamp","RDustEffects"}, // marais
			{"LIB_Staszow_Swamp","RGrassEffects"}, // marais
			{"LIB_Staszow_Swamp","RDirtEffects"}, // marais
			{"LIB_Staszow_Wheat","RDustEffects"}, // champ de blé jaune non coupé fond terre seche
			{"LIB_Staszow_Wheat","RGrassDryEffects"}, // champ de blé jaune non coupé fond terre seche
			{"LIB_Staszow_Wheat","RDirtEffects"}, // champ de blé jaune non coupé fond terre seche
			{"swu_aachen_corn_field","RDustEffects"}, // Champ herbe
			{"swu_aachen_corn_field","RGrassEffects"}, // Champ herbe
			{"swu_aachen_corn_field","RDirtEffects"}, // Champ herbe
			{"swu_aachen_footsteps","RDustEffects"}, // terreux
			{"swu_aachen_footsteps","RDirtEffects"}, // terreux
			{"swu_aachen_forest","RDustEffects"}, // sous bois herbe
			{"swu_aachen_forest","RGrassEffects"}, // sous bois herbe
			{"swu_aachen_forest","RDirtEffects"}, // sous bois herbe
			{"swu_aachen_main_field","RDustEffects"}, // Champ herbe brun
			{"swu_aachen_main_field","RGrassDryEffects"}, // Champ herbe brun
			{"swu_aachen_main_field","RDirtEffects"}, // Champ herbe brun
			{"swu_aachen_roads","RDustEffects"}, // terreux bord de route
			{"swu_aachen_roads","RDirtEffects"}, // terreux bord de route
			{"swu_berlin_grass","RDustEffects"},
			{"swu_berlin_grass","RGrassEffects"},
			{"swu_berlin_grass","RDirtEffects"},
			{"swu_berlin_main","RDustEffects"},
			{"swu_berlin_main","RDirtEffects"},
			{"SWU_Dunkirk_Roadside","RDustEffects"}, // bord de route herbe terreuse
			{"SWU_Dunkirk_Roadside","RGrassEffects"}, // bord de route herbe terreuse
			{"SWU_Dunkirk_Roadside","RDirtEffects"}, // bord de route herbe terreuse
			{"SWU_Forest_Mud","RDustEffects"}, // sous bois
			{"SWU_Forest_Mud","RGrassEffects"}, // sous bois
			{"SWU_Forest_Mud","RDirtEffects"}, // sous bois
			{"SWU_Grass_Normal","RDustEffects"}, // herbe
			{"SWU_Grass_Normal","RGrassEffects"}, // herbe
			{"SWU_Grass_Normal","RDirtEffects"}, // herbe
			{"SWU_Grassy_Floor","RDustEffects"}, // herbe
			{"SWU_Grassy_Floor","RGrassEffects"}, // herbe
			{"SWU_Grassy_Floor","RDirtEffects"}, // herbe
			{"swu_greece_grass","RDustEffects"}, // Herbe
			{"swu_greece_grass","RGrassEffects"}, // Herbe
			{"swu_greece_grass","RDirtEffects"}, // Herbe
			{"swu_greece_road","RDustEffects"}, // bord de route terre et herbe seche
			{"swu_greece_road","RGrassDryEffects"}, // bord de route terre et herbe seche
			{"swu_greece_road","RDirtEffects"}, // bord de route terre et herbe seche
			{"swu_greece_vinesdust","RDustEffects"}, // Champ herbe très seche
			{"swu_greece_vinesdust","RGrassDryEffects"}, // Champ herbe très seche
			{"swu_greece_vinesdust","RDirtEffects"}, // Champ herbe très seche
			{"swu_greece_woods","RDustEffects"}, // sous bois herebe
			{"swu_greece_woods","RGrassEffects"}, // sous bois herebe
			{"swu_greece_woods","RDirtEffects"}, // sous bois herebe
			{"SWU_Road_Side","RDustEffects"}, // bord de route terreux
			{"SWU_Road_Side","RDirtEffects"}, // bord de route terreux
			{"SWU_Sandy_Floor","RDustEffects"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","RGrassDryEffects"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","RDirtEffects"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","RSandEffects"}, // sol sabloneux avec herbe
			// Fallujah
			{"siFallujahTerra","RDustEffects"},
			{"siFallujahTerra","RSandEffects"},
			{"siFallujahTerra","RDirtEffectsBig"},
			{"siFallujahTerra","RStonesEffects"},
			{"siFallujahAcqua","RDustEffects"},
			{"siFallujahErba","RGrassDryEffects"},
			{"siFallujahErba","RDustEffects"},
			{"siFallujahErba","RDirtEffects"},
			{"siFallujahSabbia","RDustEffects"},
			{"siFallujahSabbia","RSandEffects"},
			{"siFallujahSabbia","RDirtEffectsBig"},
			{"siFallujahSabbia","RStonesEffects"},
			{"siFallujahCitta","RDirtEffects"},
			{"siFallujahCitta","RDustEffects"},
			//N'ziwasogo (projeta 305)
			{"mak305_dirt","RDustEffects"},
			{"mak305_dirt","RDirtEffects"},
			{"mak305_jungle","RDustEffects"},
			{"mak305_jungle","RDirtEffects"},
			{"mak305_jungle","RGrassEffects"},
			{"mak305_dirtgrass","RDustEffects"},
			{"mak305_dirtgrass","RDirtEffects"},
			{"mak305_dirtgrass","RGrassEffects"},
			{"mak305_palm","RDustEffects"},
			{"mak305_palm","RDirtEffects"},
			{"mak305_palm","RGrassDryEffects"},
			{"mak305_palmbroken","RDustEffects"},
			{"mak305_palmbroken","RDirtEffects"},
			{"mak305_palmbroken","RGrassDryEffects"},
			{"mak305_sand","RDustEffects"},
			{"mak305_sand","RDirtEffects"},
			{"mak305_sand","RSandEffects"},
			// Aliabad
			{"AliDirtSurface","RDustEffects"},
			{"AliDirtSurface","RDirtEffectsBig"},
			{"AliSandSurface","RDustEffects"},
			{"AliSandSurface","RSandEffects"},
			{"AliSandSurface","RStonesEffects"},
			{"AliSandSurface","RDirtEffectsBig"},
			{"AliDesertSurface","RDustEffects"},
			{"AliDesertSurface","RSandEffects"},
			{"AliDesertSurface","RStonesEffects"},
			{"AliDesertSurface","RDirtEffectsBig"},
			{"AliForestSurface","RDustEffects"},
			{"AliForestSurface","RDirtEffects"},
			{"AliRockySurface","RDustEffects"},
			{"AliRockySurface","RDirtEffectsBig"},
			{"AliCliffSurface","RDustEffects"},
			{"AliRiverbedSurface","RDustEffects"},
			// HazarKot
			{"FTDirtSurface","RDustEffects"},
			{"FTDirtSurface","RDirtEffectsBig"},
			{"FTSandSurface","RDustEffects"},
			{"FTSandSurface","RSandEffects"},
			{"FTSandSurface","RStonesEffects"},
			{"FTSandSurface","RDirtEffectsBig"},
			{"FTDesertSurface","RDustEffects"},
			{"FTDesertSurface","RSandEffects"},
			{"FTDesertSurface","RStonesEffects"},
			{"FTDesertSurface","RDirtEffectsBig"},
			{"FTForestSurface","RDustEffects"},
			{"FTForestSurface","RDirtEffects"},
			{"FTRockySurface","RDustEffects"},
			{"FTRockySurface","RDirtEffects"},
			// Caribou
			{"CARIBOU_FOREST01","RGrassDryEffects"},
			{"CARIBOU_FOREST01","RDustEffects"},
			{"CARIBOU_FOREST01","RDirtEffects"},
			{"CARIBOU_FOREST02","RDustEffects"},
			{"CARIBOU_FOREST02","RDirtEffects"},
			{"CARIBOU_GRASS01","RGrassDryEffects"},
			{"CARIBOU_GRASS01","RDustEffects"},
			{"CARIBOU_GRASS01","RDirtEffects"},
			{"CARIBOU_GRASS02","RGrassEffects"},
			{"CARIBOU_GRASS02","RDustEffects"},
			{"CARIBOU_GRASS02","RDirtEffects"},
			{"CARIBOU_GRAVEL01","RDirtEffects"},
			{"CARIBOU_GRAVEL01","RDustEffects"},
			{"CARIBOU_GRAVEL02","RDirtEffects"},
			{"CARIBOU_GRAVEL02","RDustEffects"},
			{"CARIBOU_ROCK01","RDirtEffects"},
			{"CARIBOU_ROCK01","RDustEffects"},
			{"CARIBOU_ROCK02","RDirtEffects"},
			{"CARIBOU_ROCK02","RDustEffects"},
			{"CARIBOU_BETON01","RDirtEffects"},
			{"CARIBOU_BETON01","RDustEffects"},
			// Duala
			{"duala_grass","RDustEffects"},
			{"duala_grass","RDirtEffectsBig"},
			{"duala_grass","RStonesEffectsBig"},
			{"duala_grass","RGrassEffectsDryBig"},
			{"duala_rock","RDustEffects"},
			{"duala_rock","RDirtEffectsBig"},
			{"duala_rock","RStonesEffectsBig"},
			{"duala_stones","RDustEffects"},
			{"duala_stones","RGrassEffectsBig"},
			{"duala_stones","RDirtEffectsBig"},
			{"duala_stones","RStonesEffectsBig"},
			{"duala_wood","RDustEffects"},
			{"duala_wood","RDirtEffectsBig"},
			{"duala_wood","RStonesEffectsBig"},
			{"duala_sand","RDustEffects"},
			{"duala_sand","RDirtEffectsBig"},
			{"duala_sand","RStonesEffectsBig"},
			// Podagorsk
			{"FDF_Tex_1","RDirtEffects"},
			{"FDF_Tex_1","RDustEffects"},
			{"FDF_Tex_2","RDustEffects"},
			{"FDF_Tex_2","RGrassEffects"},
			{"FDF_Tex_3","RDirtEffects"},
			{"FDF_Tex_3","RDustEffects"},
			{"FDF_Tex_4","RDirtEffects"},
			{"FDF_Tex_4","RDustEffects"},
			{"FDF_Tex_5","RDirtEffects"},
			{"FDF_Tex_5","RDustEffects"},
			{"FDF_Tex_6","RDirtEffects"},
			{"FDF_Tex_7","RDustEffects"},
			{"FDF_Tex_7","RDirtEffects"},
			{"FDF_Tex_7","RStonesEffects"},
			{"FDF_Tex_8","RDustEffects"},
			{"FDF_Tex_8","RStonesEffects"},
			{"FDF_Tex_9","RDustEffects"},
			{"FDF_Tex_9","RDirtEffects"},
			{"FDF_Tex_9","RStonesEffects"},
			{"FDF_Tex_10","RDustEffects"},
			{"FDF_Tex_11","RDirtEffects"},
			// Zernovo
			{"gsep_creekbedsurface","RDustEffects"},
			{"gsepconcretegroundsurface","RDustEffects"},
			{"gsepdirtsurface","RDustEffects"},
			{"gsepdirtsurface","RDirtEffects"},
			{"gsepforest1surface","RDustEffects"},
			{"gsepforest1surface","RDirtEffects"},
			{"gseptallgrasssurface","RDustEffects"},
			{"gseptallgrasssurface","RDirtEffects"},
			{"gseptallgrasssurface","RGrassEffects"},
			{"gsepshortgrasssurface","RDustEffects"},
			{"gsepshortgrasssurface","RDirtEffects"},
			{"gsepshortgrasssurface","RGrassEffects"},
			{"gsepbarerocksurface","RDustEffects"},
			{"gsepbarerocksurface","RStonesEffects"},
			{"gsepgravelsurface","RDustEffects"},
			{"gsepgravelsurface","RDirtEffects"},
			{"gsephayfieldsurface","RDustEffects"},
			{"gsephayfieldsurface","RDirtEffects"},
			{"gsephayfieldsurface","RGrassEffectsDryBig"},
			{"gsepcropsurface","RDustEffects"},
			{"gsepcropsurface","RDirtEffects"},
			/*
			// Taunus
			{"xcam_grass_green_co","RDustEffects"},
			{"xcam_grass_green_co","RDirtEffects"},
			{"xcam_grass_green_co","RStonesEffects"},
			{"xcam_grass_green_co","RGrassDryEffects"},
			{"xcam_grass_green_co","RGrassEffects"},
			{"xcam_grassbravo_co","RDustEffects"},
			{"xcam_grassbravo_co","RDirtEffects"},
			{"xcam_grassbravo_co","RStonesEffects"},
			{"xcam_grassbravo_co","RGrassDryEffects"},
			{"xcam_grassbravo_co","RGrassEffects"},
			{"xcam_acker_co","RDustEffects"},
			{"xcam_acker_co","RDirtEffects"},
			{"xcam_acker_co","RStonesEffects"},
			{"xcam_acker_co","RGrassDryEffects"},
			{"xcam_acker_co","RGrassEffects"},
			{"xcam_dirt_co","RDustEffects"},
			{"xcam_dirt_co","RDirtEffects"},
			{"xcam_dirt_co","RStonesEffects"},
			{"xcam_dirt_co","RGrassDryEffects"},
			{"xcam_forestground1_co","RDustEffects"},
			{"xcam_forestground1_co","RDirtEffects"},
			{"xcam_forestground1_co","RStonesEffects"},
			{"xcam_forestground1_co","RGrassDryEffects"},
			{"xcam_forestground1_co","RGrassEffects"},
			{"xcam_asfalt_co","RDustEffects"},
			{"xcam_asfalt_co","RDirtEffects"},
			{"xcam_asfalt_co","RStonesEffects"},
			{"xcam_asfalt_co","RGrassDryEffects"},
			*/
			// Thirsk
			{"THgrass2","RDustEffects"},
			{"THgrass2","RDirtEffects"},
			{"THgrass2","RGrassEffects"},
			{"THgrass3","RDustEffects"},
			{"THgrass3","RDirtEffects"},
			{"THgrass3","RGrassDryEffects"},
			{"THForest1","RDustEffects"},
			{"THForest1","RDirtEffects"},
			{"THForest1","RStonesEffects"},
			{"THForest2","RDustEffects"},
			{"THForest2","RDirtEffects"},
			{"THGrit1","RDustEffects"},
			{"THGrit1","RDirtEffects"},
			{"THGrit1","RStonesEffects"},
			{"THBetoni1","RDustEffects"},
			{"THRock","RDustEffects"},
			{"THRock","RStonesEffects"},
			{"THTarmac","RDustEffects"},
			// PKL
			{"bludriver","RDirtEffects"},
			{"bludjungle1","RDirtEffects"},
			{"bludjungle2","RDirtEffects"},
			{"bludjungle3","RDirtEffects"},
			{"bludgressj","RDirtEffects"},
			{"bludgressj","RDustEffects"},
			{"bludgressj","RGrassEffects"},
			{"bludjunglerd1","RDirtEffects"},
			{"bludjunglerd1","RDustEffects"},
			{"bludjunglerd2","RDirtEffects"},
			{"bludjunglerd2","RDustEffects"},
			{"bludrivermaling","RDirtEffects"},
			{"bludrivermaling","RDustEffects"},
			{"blud_sti","RDirtEffects"},
			{"blud_sti","RDustEffects"},
			// Ndjenahoud
			{"mak319_desgrass","RDustEffects"},
			{"mak319_desgrass","RDirtEffects"},
			{"mak319_desgrass","RStonesEffects"},
			{"mak319_stony","RDustEffects"},
			{"mak319_stony","RDirtEffects"},
			{"mak319_stony","RGrassEffects"},
			{"mak308_Dirt","RDustEffects"},
			{"mak308_Dirt","RDirtEffects"},
			{"mak308_Dirt","RGrassEffects"},
			{"mak308_GrassDry","RDustEffects"},
			{"mak308_GrassDry","RDirtEffects"},
			{"mak308_GrassDry","RgrassdryEffects"},
			{"mak319_thorn","RDustEffects"},
			{"mak319_thorn","RDirtEffects"},
			{"mak319_thorn","RgrassdryEffects"},
			{"mak319_desert","RDustEffects"},
			{"mak319_desert","RDirtEffectsBig"},
			{"mak319_desert","RSandEffects"}
		};
		leftDustEffects[] ={
			{"GdtGrassShort","LDustEffects"},
			{"GdtGrassShort","LGrassEffects"},
			{"GdtGrassTall","LDustEffects"},
			{"GdtGrassTall","LGrassEffects"},
			{"GdtRedDirt","LDustEffectsRed"},
			{"GdtField","LDustEffects"},
			{"GdtForest","LDustEffects"},
			{"GdtVolcano","LDustEffects"},
			{"GdtVolcano","LStonesEffects"},
			{"GdtCliff","LDustEffects"},
			{"GdtVolcanoBeach","LDustEffects"},
			{"SurfRoadDirt_exp","LDustEffectsRed"},
			{"SurfRoadConcrete_exp","LDustEffects"},
			{"SurfRoadTarmac_exp","LDustEffects"},
			{"GdtStratisConcrete","LDustEffects"},
			{"GdtStratisConcrete","LDirtEffects"},
			{"GdtStratisBeach","LDustEffects"},
			{"GdtStratisBeach","LStonesEffects"},
			{"GdtStratisDirt","LDustEffects"},
			{"GdtStratisDirt","LDirtEffects"},
			{"GdtStratisSeabedCluttered","LDustEffects"},
			{"GdtStratisSeabed","LDustEffects"},
			{"GdtStratisDryGrass","LDustEffects"},
			{"GdtStratisDryGrass","LGrassDryEffects"},
			{"GdtStratisDryGrass","LDirtEffects"},
			{"GdtStratisGreenGrass","LDustEffects"},
			{"GdtStratisGreenGrass","LGrassEffects"},
			{"GdtStratisGreenGrass","LDirtEffects"},
			{"GdtStratisRocky","LDustEffects"},
			{"GdtStratisRocky","LGrassEffects"},
			{"GdtStratisRocky","LDirtEffects"},
			{"GdtStratisThistles","LDustEffects"},
			{"GdtStratisThistles","LGrassEffects"},
			{"GdtStratisThistles","LDirtEffects"},
			{"GdtConcrete","LDustEffects"},
			{"GdtConcrete","LDirtEffects"},
			{"GdtAsphalt","LDustEffects"},
			{"GdtAsphalt","LDirtEffects"},
			{"GdtRubble","LDustEffects"},
			{"GdtRubble","LGrassEffects"},
			{"GdtRubble","LDirtEffects"},
			{"GdtSoil","LDustEffects"},
			{"GdtSoil","LDirtEffects"},
			{"GdtBeach","LDustEffects"},
			{"GdtBeach","LStonesEffects"},
			{"GdtRock","LDustEffects"},
			{"GdtRock","LDirtEffects"},
			{"GdtDead","LDustEffects"},
			{"GdtDead","LDirtEffects"},
			{"Default","LDustEffects"},
			{"GdtDesert","LDustEffects"},
			{"GdtDesert","LStonesEffects"},
			{"GdtDesert1","LDustEffects"},
			{"GdtDesert1","LSandEffects"},
			{"GdtDesert1","LDirtEffects"},
			{"GdtDesert1","LStonesEffects"},
			{"GdtDesert2","LDustEffects"},
			{"GdtDesert2","LSandEffects"},
			{"GdtDesert2","LGrassEffects"},
			{"GdtDesert2","LDirtEffects"},
			{"GdtDirt","LDustEffects"},
			{"GdtDirt","LDirtEffects"},
			{"GdtGrassGreen","LDustEffects"},
			{"GdtGrassGreen","LGrassEffects"},
			{"GdtGrassGreen","LDirtEffects"},
			{"GdtGrassDry","LDustEffects"},
			{"GdtGrassDry","LGrassDryEffects"},
			{"GdtGrassDry","LDirtEffects"},
			{"GdtGrassWild","LDustEffects"},
			{"GdtGrassWild","LGrassEffects"},
			{"GdtGrassWild","LDirtEffects"},
			{"GdtWildField","LDustEffects"},
			{"GdtWildField","LGrassEffects"},
			{"GdtWildField","LDirtEffects"},
			{"GdtWeed1","LDustEffects"},
			{"GdtWeed1","LGrassEffects"},
			{"GdtWeed1","LDirtEffects"},
			{"GdtWeed2","LDustEffects"},
			{"GdtWeed2","LGrassEffects"},
			{"GdtWeed2","LDirtEffects"},
			{"GdtThorn","LDustEffects"},
			{"GdtThorn","LGrassEffects"},
			{"GdtThorn","LDirtEffects"},
			{"GdtStony","LDustEffects"},
			{"GdtStony","LGrassEffects"},
			{"GdtStony","LDirtEffects"},
			{"GdtStonyGreen","LDustEffects"},
			{"GdtStonyGreen","LGrassEffects"},
			{"GdtStonyGreen","LDirtEffects"},
			{"GdtStonyThistle","LDustEffects"},
			{"GdtStonyThistle","LGrassEffects"},
			{"GdtStonyThistle","LDirtEffects"},
			{"GdtSeabedDeep","LDustEffects"},
			{"GdtSeabed","LDustEffects"},
			{"SurfRoadDirt","LDustEffects"},
			{"SurfRoadConcrete","LDustEffects"},
			{"SurfRoadTarmac","LDustEffects"},
			{"SurfWood","LDustEffects"},
			{"SurfMetal","LDustEffects"},
			{"SurfRoofTin","LDustEffects"},
			{"SurfRoofTiles","LDustEffects"},
			{"SurfIntWood","LDustEffects"},
			{"SurfIntConcrete","LDustEffects"},
			{"SurfIntTiles","LDustEffects"},
			{"SurfIntMetal","LDustEffects"},
			{"dirtrunway","LDustEffects"},
			// CUP TP
			{"CRGrass1","LDustEffects"},
			{"CRGrass1","LGrassEffects"},
			{"CRGrass1","LDirtEffects"},
			{"CRGrass2","LDustEffects"},
			{"CRGrass2","LGrassEffects"},
			{"CRGrass2","LDirtEffects"},
			{"CRGrassW1","LDustEffects"},
			{"CRGrassW1","LGrassEffects"},
			{"CRGrassW1","LDirtEffects"},
			{"CRGrassW2","LDustEffects"},
			{"CRGrassW2","LGrassEffects"},
			{"CRGrassW2","LDirtEffects"},
			{"CRField1","LDustEffects"},
			{"CRField1","LGrassEffects"},
			{"CRField1","LDirtEffects"},
			{"CRField2","LDustEffects"},
			{"CRField2","LGrassEffects"},
			{"CRField2","LDirtEffects"},
			{"CRForest1","LDustEffects"},
			{"CRForest1","LGrassEffects"},
			{"CRForest1","LDirtEffects"},
			{"CRForest2","LDustEffects"},
			{"CRForest2","LGrassEffects"},
			{"CRForest2","LDirtEffects"},
			{"CRGrit1","LDustEffects"},
			{"CRGrit1","LDirtEffects"},
			{"CRHeather","LDustEffects"},
			{"CRHeather","LGrassEffects"},
			{"CRHeather","LDirtEffects"},
			{"CRConcrete","LDirtEffects"},
			{"TKAsfalt","LDirtEffects"},
			{"TKBeton","LDustEffects"},
			{"RoadDirt_EP1","LDustEffects"},
			{"RoadTarmac_EP11","LDirtEffects"},
			{"TKPlevel","LDustEffects"},
			{"TKPlevel","LGrassEffects"},
			{"TKPlevel","LDirtEffects"},
			{"TKPole","LDustEffects"},
			{"TKPole","LGrassDryEffects"},
			{"TKPole","LDirtEffects"},
			{"TKPolopoust","LDustEffects"},
			{"TKPolopoust","LSandEffects"},
			{"TKPolopoust","LDirtEffects"},
			{"TKSkala","LDustEffects"},
			{"TKSkala","LStonesEffects"},
			{"TKSkalniSterk","LDustEffects"},
			{"TKSkalniSterk","LStonesEffects"},
			{"TKSterkNaDno","LDustEffects"},
			{"TKSterkNaDno","LStonesEffects"},
			{"TKMoutain","LDustEffects"},
			{"TKMoutain","LStonesEffects"},
			{"TKValouny","LDustEffects"},
			{"TKValouny","LStonesEffects"},
			{"TKTrava","LDustEffects"},
			{"TKTrava","LGrassDryEffects"},
			{"TKTrava","LDirtEffects"},
			{"TKForest","LDustEffects"},
			{"TKForest","LGrassDryEffects"},
			{"TKForest","LDirtEffects"},
			{"ZRAsfalt","LDirtEffects"},
			{"ZRBeton","LDustEffects"},
			{"ZRPlevel","LDustEffects"},
			{"ZRPlevel","LGrassEffects"},
			{"ZRPlevel","LDirtEffects"},
			{"ZRPole","LDustEffects"},
			{"ZRPole","LGrassDryEffects"},
			{"ZRPole","LDirtEffects"},
			{"ZRPolopoust","LDustEffects"},
			{"ZRPolopoust","LSandEffects"},
			{"ZRPolopoust","LDirtEffects"},
			{"ZRSkala","LDustEffects"},
			{"ZRSkala","LStonesEffects"},
			{"ZRSkalniSterk","LDustEffects"},
			{"ZRSkalniSterk","LStonesEffects"},
			{"ZRSterkNaDno","LDustEffects"},
			{"ZRSterkNaDno","LStonesEffects"},
			{"ZRValouny","LDustEffects"},
			{"ZRValouny","LStonesEffects"},
			{"ZRTrava","LDustEffects"},
			{"ZRTrava","LGrassDryEffects"},
			{"ZRTrava","LDirtEffects"},
			{"DEPolopoust","LDustEffects"},
			{"DEPolopoust","LSandEffects"},
			{"DEPolopoust","LDirtEffects"},
			{"DESkalniSterk","LDustEffects"},
			{"DESkalniSterk","LStonesEffects"},
			{"DETrava","LDustEffects"},
			{"DETrava","LGrassDryEffects"},
			{"DETrava","LDirtEffects"},
			{"WLGrass1","LDustEffects"},
			{"WLGrass1","LGrassEffects"},
			{"WLGrass1","LDirtEffects"},
			{"WLGrass2","LDustEffects"},
			{"WLGrass2","LGrassEffects"},
			{"WLGrass2","LDirtEffects"},
			{"WLGrassW1","LDustEffects"},
			{"WLGrassW1","LGrassEffects"},
			{"WLGrassW1","LDirtEffects"},
			{"WLGrassW2","LDustEffects"},
			{"WLGrassW2","LGrassEffects"},
			{"WLGrassW2","LDirtEffects"},
			{"WLField1","LDustEffects"},
			{"WLField1","LGrassEffects"},
			{"WLField1","LDirtEffects"},
			{"WLField2","LDustEffects"},
			{"WLField2","LGrassEffects"},
			{"WLField2","LDirtEffects"},
			{"WLForest1","LDustEffects"},
			{"WLForest1","LGrassEffects"},
			{"WLForest1","LDirtEffects"},
			{"WLForest2","LDustEffects"},
			{"WLForest2","LGrassEffects"},
			{"WLForest2","LDirtEffects"},
			{"WLMudGround","LDustEffects"},
			{"WLMudGround","LGrassEffects"},
			{"WLMudGround","LDirtEffects"},
			{"WLGrit1","LDustEffects"},
			{"WLGrit1","LDirtEffects"},
			{"WLHeather","LDustEffects"},
			{"WLHeather","LGrassEffects"},
			{"WLHeather","LDirtEffects"},
			{"WLConcrete","LDirtEffects"},
			{"GZTrava","LDustEffects"},
			{"GZTrava","LGrassDryEffects"},
			{"GZTrava","LDirtEffects"},
			{"GZforest","LDustEffects"},
			{"GZForest","LGrassDryEffects"},
			{"GZForest","LDirtEffects"},
			{"GZkameny","LDustEffects"},
			{"GZkameny","LStonesEffects"},
			{"GZHlina","LDustEffects"},
			{"GZHlina","LGrassEffects"},
			{"GZHlina","LDirtEffects"},
			{"BetonNew","LDirtEffects"},
			{"Asf1","LDirtEffects"},
			{"Asf2","LDirtEffects"},
			{"Asf3","LDirtEffects"},
			{"road","LDustEffects"},
			{"Cesta","LDustEffects"},
			// IFA3
			{"I44_Mer_Field","LDustEffects"}, // Champ de blé sol terre
			{"I44_Mer_Field","LGrassEffects"}, // Champ de blé sol terre
			{"I44_Mer_Field","LDirtEffects"}, // Champ de blé sol terre
			{"I44_Mer_Forest","LDustEffects"}, // sol de foret feuilles + herbes
			{"I44_Mer_Forest","LGrassEffects"}, // sol de foret feuilles + herbes
			{"I44_Mer_Forest","LDirtEffects"}, // sol de foret feuilles + herbes
			{"I44_Mer_Grass1","LDustEffects"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass1","LGrassEffects"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass1","LDirtEffects"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass2","LDustEffects"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Grass2","LGrassEffects"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Grass2","LDirtEffects"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Ground","LDustEffects"}, // terre brune bord riviere
			{"I44_Mer_Ground","LDirtEffects"}, // terre brune bord riviere
			{"I44_Nea_Farmdirt","LDustEffects"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmdirt","LGrassDryEffects"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmdirt","LDirtEffects"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmsurface","LDustEffects"}, // Champ en terre + hautes herbes
			{"I44_Nea_Farmsurface","LGrassEffects"}, // Champ en terre + hautes herbes
			{"I44_Nea_Farmsurface","LDirtEffects"}, // Champ en terre + hautes herbes
			{"I44_Nea_Grasssurface","LDustEffects"}, // herbe
			{"I44_Nea_Grasssurface","LGrassEffects"}, // herbe
			{"I44_Nea_Grasssurface","LDirtEffects"}, // herbe
			{"I44_Nea_GravelSurface","LDustEffects"}, // terre nue gravier
			{"I44_Nea_GravelSurface","LDirtEffects"}, // terre nue gravier
			{"I44_Nea_GravelSurface","LStonesEffects"}, // terre nue gravier
			{"I44_Omaha_v2_Brown","LDustEffects"}, // terre + herbes
			{"I44_Omaha_v2_Brown","LGrassEffects"}, // terre + herbes
			{"I44_Omaha_v2_Brown","LDirtEffects"}, // terre + herbes
			{"I44_Omaha_v2_Green","LDustEffects"}, // marron herbe
			{"I44_Omaha_v2_Green","LGrassEffects"}, // marron herbe
			{"I44_Omaha_v2_Green","LDirtEffects"}, // marron herbe
			{"I44_Omaha_v2_Lawn","LDustEffects"}, // vert Herbe
			{"I44_Omaha_v2_Lawn","LGrassEffects"}, // vert Herbe
			{"I44_Omaha_v2_Lawn","LDirtEffects"}, // vert Herbe
			{"LIB_France_Grass","LDustEffects"}, // Herbe bien verte
			{"LIB_France_Grass","LGrassEffects"}, // Herbe bien verte
			{"LIB_France_Grass","LDirtEffects"}, // Herbe bien verte
			{"LIB_France_Poppy","LDustEffects"}, // Coquelicots
			{"LIB_France_Poppy","LGrassEffects"}, // Coquelicots
			{"LIB_France_Poppy","LDirtEffects"}, // Coquelicots
			{"LIB_France_Raps","LDustEffects"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Raps","LGrassEffects"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Raps","LDirtEffects"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Sand","LDustEffects"}, // Sable plage
			{"LIB_France_Sand","LDirtEffects"}, // Sable plage
			{"LIB_France_Sand","LSandEffects"}, // Sable plage
			{"LIB_France_Tillage","LDustEffects"}, // Champ de terre
			{"LIB_France_Tillage","LDirtEffects"}, // Champ de terre
			{"LIB_France_Weed","LDustEffects"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Weed","LGrassDryEffects"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Weed","LDirtEffects"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Wheat","LDustEffects"}, // Champ de blé vert
			{"LIB_France_Wheat","LGrassEffects"}, // Champ de blé vert
			{"LIB_France_Wheat","LDirtEffects"}, // Champ de blé vert
			{"LIB_Staszow_Ambush","LDustEffects"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Ambush","LGrassEffects"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Ambush","LDirtEffects"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Burn","LDustEffects"}, // sol brulé
			{"LIB_Staszow_Burn","LDirtEffectsBig"}, // sol brulé
			{"LIB_Staszow_Forest","LDustEffects"}, // Sous-bois
			{"LIB_Staszow_Forest","LGrassEffects"}, // Sous-bois
			{"LIB_Staszow_Forest","LDirtEffects"}, // Sous-bois
			{"LIB_Staszow_Grass","LDustEffects"}, // herbe verte
			{"LIB_Staszow_Grass","LGrassEffects"}, // herbe verte
			{"LIB_Staszow_Grass","LDirtEffects"}, // herbe verte
			{"LIB_Staszow_Grazy","LDustEffects"},
			{"LIB_Staszow_Grazy","LGrassEffects"},
			{"LIB_Staszow_Grazy","LDirtEffects"},
			{"LIB_Staszow_Oldgrass","LDustEffects"},
			{"LIB_Staszow_Oldgrass","LGrassDryEffects"},
			{"LIB_Staszow_Oldgrass","LDirtEffects"},
			{"LIB_Staszow_Oldwheat","LDustEffects"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Oldwheat","LGrassDryEffects"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Oldwheat","LDirtEffects"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Sand","LDustEffects"}, // Sable
			{"LIB_Staszow_Sand","LDirtEffects"}, // Sable
			{"LIB_Staszow_Sand","LSandEffects"}, // Sable
			{"LIB_Staszow_Swamp","LDustEffects"}, // marais
			{"LIB_Staszow_Swamp","LGrassEffects"}, // marais
			{"LIB_Staszow_Swamp","LDirtEffects"}, // marais
			{"LIB_Staszow_Wheat","LDustEffects"}, // champ de blé jaune non coupé fond terre seche
			{"LIB_Staszow_Wheat","LGrassDryEffects"}, // champ de blé jaune non coupé fond terre seche
			{"LIB_Staszow_Wheat","LDirtEffects"}, // champ de blé jaune non coupé fond terre seche
			{"swu_aachen_corn_field","LDustEffects"}, // Champ herbe
			{"swu_aachen_corn_field","LGrassEffects"}, // Champ herbe
			{"swu_aachen_corn_field","LDirtEffects"}, // Champ herbe
			{"swu_aachen_footsteps","LDustEffects"}, // terreux
			{"swu_aachen_footsteps","LDirtEffects"}, // terreux
			{"swu_aachen_forest","LDustEffects"}, // sous bois herbe
			{"swu_aachen_forest","LGrassEffects"}, // sous bois herbe
			{"swu_aachen_forest","LDirtEffects"}, // sous bois herbe
			{"swu_aachen_main_field","LDustEffects"}, // Champ herbe brun
			{"swu_aachen_main_field","LGrassDryEffects"}, // Champ herbe brun
			{"swu_aachen_main_field","LDirtEffects"}, // Champ herbe brun
			{"swu_aachen_roads","LDustEffects"}, // terreux bord de route
			{"swu_aachen_roads","LDirtEffects"}, // terreux bord de route
			{"swu_berlin_grass","LDustEffects"},
			{"swu_berlin_grass","LGrassEffects"},
			{"swu_berlin_grass","LDirtEffects"},
			{"swu_berlin_main","LDustEffects"},
			{"swu_berlin_main","LDirtEffects"},
			{"SWU_Dunkirk_Roadside","LDustEffects"}, // bord de route herbe terreuse
			{"SWU_Dunkirk_Roadside","LGrassEffects"}, // bord de route herbe terreuse
			{"SWU_Dunkirk_Roadside","LDirtEffects"}, // bord de route herbe terreuse
			{"SWU_Forest_Mud","LDustEffects"}, // sous bois
			{"SWU_Forest_Mud","LGrassEffects"}, // sous bois
			{"SWU_Forest_Mud","LDirtEffects"}, // sous bois
			{"SWU_Grass_Normal","LDustEffects"}, // herbe
			{"SWU_Grass_Normal","LGrassEffects"}, // herbe
			{"SWU_Grass_Normal","LDirtEffects"}, // herbe
			{"SWU_Grassy_Floor","LDustEffects"}, // herbe
			{"SWU_Grassy_Floor","LGrassEffects"}, // herbe
			{"SWU_Grassy_Floor","LDirtEffects"}, // herbe
			{"swu_greece_grass","LDustEffects"}, // Herbe
			{"swu_greece_grass","LGrassEffects"}, // Herbe
			{"swu_greece_grass","LDirtEffects"}, // Herbe
			{"swu_greece_road","LDustEffects"}, // bord de route terre et herbe seche
			{"swu_greece_road","LGrassDryEffects"}, // bord de route terre et herbe seche
			{"swu_greece_road","LDirtEffects"}, // bord de route terre et herbe seche
			{"swu_greece_vinesdust","LDustEffects"}, // Champ herbe très seche
			{"swu_greece_vinesdust","LGrassDryEffects"}, // Champ herbe très seche
			{"swu_greece_vinesdust","LDirtEffects"}, // Champ herbe très seche
			{"swu_greece_woods","LDustEffects"}, // sous bois herebe
			{"swu_greece_woods","LGrassEffects"}, // sous bois herebe
			{"swu_greece_woods","LDirtEffects"}, // sous bois herebe
			{"SWU_Road_Side","LDustEffects"}, // bord de route terreux
			{"SWU_Road_Side","LDirtEffects"}, // bord de route terreux
			{"SWU_Sandy_Floor","LDustEffects"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","LGrassDryEffects"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","LDirtEffects"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","LSandEffects"}, // sol sabloneux avec herbe
			// Fallujah
			{"siFallujahTerra","LDustEffects"},
			{"siFallujahTerra","LDirtEffectsBig"},
			{"siFallujahAcqua","LDustEffects"},
			{"siFallujahErba","LGrassDryEffects"},
			{"siFallujahErba","LDustEffects"},
			{"siFallujahErba","LDirtEffects"},
			{"siFallujahSabbia","LDustEffects"},
			{"siFallujahSabbia","LSandEffects"},
			{"siFallujahSabbia","LDirtEffectsBig"},
			{"siFallujahSabbia","LStonesEffects"},
			{"siFallujahCitta","LDirtEffects"},
			{"siFallujahCitta","LDustEffects"},
			//N'ziwasogo (projeta 305)
			{"mak305_dirt","LDustEffects"},
			{"mak305_dirt","LDirtEffects"},
			{"mak305_jungle","LDustEffects"},
			{"mak305_jungle","LDirtEffects"},
			{"mak305_jungle","LGrassEffects"},
			{"mak305_dirtgrass","LDustEffects"},
			{"mak305_dirtgrass","LDirtEffects"},
			{"mak305_dirtgrass","LGrassEffects"},
			{"mak305_palm","LDustEffects"},
			{"mak305_palm","LDirtEffects"},
			{"mak305_palm","LGrassDryEffects"},
			{"mak305_palmbroken","LDustEffects"},
			{"mak305_palmbroken","LDirtEffects"},
			{"mak305_palmbroken","LGrassDryEffects"},
			{"mak305_sand","LDustEffects"},
			{"mak305_sand","LDirtEffects"},
			{"mak305_sand","LSandEffects"},
			// Aliabad
			{"AliDirtSurface","LDustEffects"},
			{"AliDirtSurface","LDirtEffectsBig"},
			{"AliSandSurface","LDustEffects"},
			{"AliSandSurface","LSandEffects"},
			{"AliSandSurface","LStonesEffects"},
			{"AliSandSurface","LDirtEffectsBig"},
			{"AliDesertSurface","LDustEffects"},
			{"AliDesertSurface","LSandEffects"},
			{"AliDesertSurface","LStonesEffects"},
			{"AliDesertSurface","LDirtEffectsBig"},
			{"AliForestSurface","LDustEffects"},
			{"AliForestSurface","LDirtEffects"},
			{"AliRockySurface","LDustEffects"},
			{"AliRockySurface","LDirtEffectsBig"},
			{"AliCliffSurface","LDustEffects"},
			{"AliRiverbedSurface","LDustEffects"},
			// HazarKot
			{"FTDirtSurface","LDustEffects"},
			{"FTDirtSurface","LDirtEffectsBig"},
			{"FTSandSurface","LDustEffects"},
			{"FTSandSurface","LSandEffects"},
			{"FTSandSurface","LStonesEffects"},
			{"FTSandSurface","LDirtEffectsBig"},
			{"FTDesertSurface","LDustEffects"},
			{"FTDesertSurface","LSandEffects"},
			{"FTDesertSurface","LStonesEffects"},
			{"FTDesertSurface","LDirtEffectsBig"},
			{"FTForestSurface","LDustEffects"},
			{"FTForestSurface","LDirtEffects"},
			{"FTRockySurface","LDustEffects"},
			{"FTRockySurface","LDirtEffects"},
			// Caribou
			{"CARIBOU_FOREST01","LGrassDryEffects"},
			{"CARIBOU_FOREST01","LDustEffects"},
			{"CARIBOU_FOREST01","LDirtEffects"},
			{"CARIBOU_FOREST02","LDustEffects"},
			{"CARIBOU_FOREST02","LDirtEffects"},
			{"CARIBOU_GRASS01","LGrassDryEffects"},
			{"CARIBOU_GRASS01","LDustEffects"},
			{"CARIBOU_GRASS01","LDirtEffects"},
			{"CARIBOU_GRASS02","LGrassEffects"},
			{"CARIBOU_GRASS02","LDustEffects"},
			{"CARIBOU_GRASS02","LDirtEffects"},
			{"CARIBOU_GRAVEL01","LDirtEffects"},
			{"CARIBOU_GRAVEL01","LDustEffects"},
			{"CARIBOU_GRAVEL02","LDirtEffects"},
			{"CARIBOU_GRAVEL02","LDustEffects"},
			{"CARIBOU_ROCK01","LDirtEffects"},
			{"CARIBOU_ROCK01","LDustEffects"},
			{"CARIBOU_ROCK02","LDirtEffects"},
			{"CARIBOU_ROCK02","LDustEffects"},
			{"CARIBOU_BETON01","LDirtEffects"},
			{"CARIBOU_BETON01","LDustEffects"},
			// Duala
			{"duala_grass","LDustEffects"},
			{"duala_grass","LDirtEffectsBig"},
			{"duala_grass","LStonesEffectsBig"},
			{"duala_grass","LGrassEffectsDryBig"},
			{"duala_rock","LDustEffects"},
			{"duala_rock","LDirtEffectsBig"},
			{"duala_rock","LStonesEffectsBig"},
			{"duala_stones","LDustEffects"},
			{"duala_stones","LGrassEffectsBig"},
			{"duala_stones","LDirtEffectsBig"},
			{"duala_stones","LStonesEffectsBig"},
			{"duala_wood","LDustEffects"},
			{"duala_wood","LDirtEffectsBig"},
			{"duala_wood","LStonesEffectsBig"},
			{"duala_sand","LDustEffects"},
			{"duala_sand","LDirtEffectsBig"},
			{"duala_sand","LStonesEffectsBig"},
			// Podagorsk
			{"FDF_Tex_1","LDirtEffects"},
			{"FDF_Tex_1","LDustEffects"},
			{"FDF_Tex_2","LDustEffects"},
			{"FDF_Tex_2","LGrassEffects"},
			{"FDF_Tex_3","LDirtEffects"},
			{"FDF_Tex_3","LDustEffects"},
			{"FDF_Tex_4","LDirtEffects"},
			{"FDF_Tex_4","LDustEffects"},
			{"FDF_Tex_5","LDirtEffects"},
			{"FDF_Tex_5","LDustEffects"},
			{"FDF_Tex_6","LDirtEffects"},
			{"FDF_Tex_7","LDustEffects"},
			{"FDF_Tex_7","LDirtEffects"},
			{"FDF_Tex_7","LStonesEffects"},
			{"FDF_Tex_8","LDustEffects"},
			{"FDF_Tex_8","LStonesEffects"},
			{"FDF_Tex_9","LDustEffects"},
			{"FDF_Tex_9","LDirtEffects"},
			{"FDF_Tex_9","LStonesEffects"},
			{"FDF_Tex_10","LDustEffects"},
			{"FDF_Tex_11","LDirtEffects"},
			// Zernovo
			{"gsep_creekbedsurface","LDustEffects"},
			{"gsepconcretegroundsurface","LDustEffects"},
			{"gsepdirtsurface","LDustEffects"},
			{"gsepdirtsurface","LDirtEffects"},
			{"gsepforest1surface","LDustEffects"},
			{"gsepforest1surface","LDirtEffects"},
			{"gseptallgrasssurface","LDustEffects"},
			{"gseptallgrasssurface","LDirtEffects"},
			{"gseptallgrasssurface","LGrassEffects"},
			{"gsepshortgrasssurface","LDustEffects"},
			{"gsepshortgrasssurface","LDirtEffects"},
			{"gsepshortgrasssurface","LGrassEffects"},
			{"gsepbarerocksurface","LDustEffects"},
			{"gsepbarerocksurface","LStonesEffects"},
			{"gsepgravelsurface","LDustEffects"},
			{"gsepgravelsurface","LDirtEffects"},
			{"gsephayfieldsurface","LDustEffects"},
			{"gsephayfieldsurface","LDirtEffects"},
			{"gsephayfieldsurface","LGrassEffectsDryBig"},
			{"gsepcropsurface","LDustEffects"},
			{"gsepcropsurface","LDirtEffects"},
			/*
			// Taunus
			{"xcam_grass_green_co","LDustEffects"},
			{"xcam_grass_green_co","LDirtEffects"},
			{"xcam_grass_green_co","LStonesEffects"},
			{"xcam_grass_green_co","LGrassDryEffects"},
			{"xcam_grass_green_co","LGrassEffects"},
			{"xcam_grassbravo_co","LDustEffects"},
			{"xcam_grassbravo_co","LDirtEffects"},
			{"xcam_grassbravo_co","LStonesEffects"},
			{"xcam_grassbravo_co","LGrassDryEffects"},
			{"xcam_grassbravo_co","LGrassEffects"},
			{"xcam_acker_co","LDustEffects"},
			{"xcam_acker_co","LDirtEffects"},
			{"xcam_acker_co","LStonesEffects"},
			{"xcam_acker_co","LGrassDryEffects"},
			{"xcam_acker_co","LGrassEffects"},
			{"xcam_dirt_co","LDustEffects"},
			{"xcam_dirt_co","LDirtEffects"},
			{"xcam_dirt_co","LStonesEffects"},
			{"xcam_dirt_co","LGrassDryEffects"},
			{"xcam_forestground1_co","LDustEffects"},
			{"xcam_forestground1_co","LDirtEffects"},
			{"xcam_forestground1_co","LStonesEffects"},
			{"xcam_forestground1_co","LGrassDryEffects"},
			{"xcam_forestground1_co","LGrassEffects"},
			{"xcam_asfalt_co","LDustEffects"},
			{"xcam_asfalt_co","LDirtEffects"},
			{"xcam_asfalt_co","LStonesEffects"},
			{"xcam_asfalt_co","LGrassDryEffects"},
			*/
			// Thirsk
			{"THgrass2","LDustEffects"},
			{"THgrass2","LDirtEffects"},
			{"THgrass2","LGrassEffects"},
			{"THgrass3","LDustEffects"},
			{"THgrass3","LDirtEffects"},
			{"THgrass3","LGrassDryEffects"},
			{"THForest1","LDustEffects"},
			{"THForest1","LDirtEffects"},
			{"THForest1","LStonesEffects"},
			{"THForest2","LDustEffects"},
			{"THForest2","LDirtEffects"},
			{"THGrit1","LDustEffects"},
			{"THGrit1","LDirtEffects"},
			{"THGrit1","LStonesEffects"},
			{"THBetoni1","LDustEffects"},
			{"THRock","LDustEffects"},
			{"THRock","LStonesEffects"},
			{"THTarmac","LDustEffects"},
			// PKL
			{"bludriver","LDirtEffects"},
			{"bludjungle1","LDirtEffects"},
			{"bludjungle2","LDirtEffects"},
			{"bludjungle3","LDirtEffects"},
			{"bludgressj","LDirtEffects"},
			{"bludgressj","LDustEffects"},
			{"bludgressj","LGrassEffects"},
			{"bludjunglerd1","LDirtEffects"},
			{"bludjunglerd1","LDustEffects"},
			{"bludjunglerd2","LDirtEffects"},
			{"bludjunglerd2","LDustEffects"},
			{"bludrivermaling","LDirtEffects"},
			{"bludrivermaling","LDustEffects"},
			{"blud_sti","LDirtEffects"},
			{"blud_sti","LDustEffects"},
			// Ndjenahoud
			{"mak319_desgrass","LDustEffects"},
			{"mak319_desgrass","LDirtEffects"},
			{"mak319_desgrass","LStonesEffects"},
			{"mak319_stony","LDustEffects"},
			{"mak319_stony","LDirtEffects"},
			{"mak319_stony","LGrassEffects"},
			{"mak308_Dirt","LDustEffects"},
			{"mak308_Dirt","LDirtEffects"},
			{"mak308_Dirt","LGrassEffects"},
			{"mak308_GrassDry","LDustEffects"},
			{"mak308_GrassDry","LDirtEffects"},
			{"mak308_GrassDry","LgrassdryEffects"},
			{"mak319_thorn","LDustEffects"},
			{"mak319_thorn","LDirtEffects"},
			{"mak319_thorn","LgrassdryEffects"},
			{"mak319_desert","LDustEffects"},
			{"mak319_desert","LDirtEffectsBig"},
			{"mak319_desert","LSandEffects"}
		};
	};
	class Car_F: Car {};
	class LIB_Car_base: Car_F
	{
		rightDustEffects[] =
		{
			{"GdtGrassShort","RDustEffects"},
			{"GdtGrassShort","RGrassEffects"},
			{"GdtGrassTall","RDustEffects"},
			{"GdtGrassTall","RGrassEffects"},
			{"GdtRedDirt","RDustEffectsRed"},
			{"GdtField","RDustEffects"},
			{"GdtForest","RDustEffects"},
			{"GdtVolcano","RDustEffects"},
			{"GdtVolcano","RStonesEffects"},
			{"GdtCliff","RDustEffects"},
			{"GdtVolcanoBeach","RDustEffects"},
			{"SurfRoadDirt_exp","RDustEffectsRed"},
			{"SurfRoadConcrete_exp","RDustEffects"},
			{"SurfRoadTarmac_exp","RDustEffects"},
			{"GdtStratisConcrete","RDustEffects"},
			{"GdtStratisConcrete","RDirtEffects"},
			{"GdtStratisBeach","RDustEffects"},
			{"GdtStratisBeach","RStonesEffects"},
			{"GdtStratisDirt","RDustEffects"},
			{"GdtStratisDirt","RDirtEffects"},
			{"GdtStratisSeabedCluttered","RDustEffects"},
			{"GdtStratisSeabed","RDustEffects"},
			{"GdtStratisDryGrass","RDustEffects"},
			{"GdtStratisDryGrass","RGrassDryEffects"},
			{"GdtStratisDryGrass","RDirtEffects"},
			{"GdtStratisGreenGrass","RDustEffects"},
			{"GdtStratisGreenGrass","RGrassEffects"},
			{"GdtStratisGreenGrass","RDirtEffects"},
			{"GdtStratisRocky","RDustEffects"},
			{"GdtStratisRocky","RGrassEffects"},
			{"GdtStratisRocky","RDirtEffects"},
			{"GdtStratisThistles","RDustEffects"},
			{"GdtStratisThistles","RGrassEffects"},
			{"GdtStratisThistles","RDirtEffects"},
			{"GdtConcrete","RDustEffects"},
			{"GdtConcrete","RDirtEffects"},
			{"GdtAsphalt","RDustEffects"},
			{"GdtAsphalt","RDirtEffects"},
			{"GdtRubble","RDustEffects"},
			{"GdtRubble","RDirtEffects"},
			{"GdtSoil","RDustEffects"},
			{"GdtSoil","RDirtEffects"},
			{"GdtBeach","RDustEffects"},
			{"GdtBeach","RStonesEffects"},
			{"GdtRock","RDustEffects"},
			{"GdtRock","RDirtEffects"},
			{"GdtDead","RDustEffects"},
			{"GdtDead","RDirtEffects"},
			{"Default","RDustEffects"},
			{"GdtDesert","RDustEffects"},
			{"GdtDesert","RStonesEffects"},
			{"GdtDesert1","RDustEffects"},
			{"GdtDesert1","RSandEffects"},
			{"GdtDesert1","RDirtEffects"},
			{"GdtDesert1","RStonesEffects"},
			{"GdtDesert2","RDustEffects"},
			{"GdtDesert2","RSandEffects"},
			{"GdtDesert2","RGrassEffects"},
			{"GdtDesert2","RDirtEffects"},
			{"GdtDirt","RDustEffects"},
			{"GdtDirt","RDirtEffects"},
			{"GdtGrassGreen","RDustEffects"},
			{"GdtGrassGreen","RGrassEffects"},
			{"GdtGrassGreen","RDirtEffects"},
			{"GdtGrassDry","RDustEffects"},
			{"GdtGrassDry","RGrassDryEffects"},
			{"GdtGrassDry","RDirtEffects"},
			{"GdtGrassWild","RDustEffects"},
			{"GdtGrassWild","RGrassEffects"},
			{"GdtGrassWild","RDirtEffects"},
			{"GdtWildField","RDustEffects"},
			{"GdtWildField","RGrassEffects"},
			{"GdtWildField","RDirtEffects"},
			{"GdtWeed1","RDustEffects"},
			{"GdtWeed1","RGrassEffects"},
			{"GdtWeed1","RDirtEffects"},
			{"GdtWeed2","RDustEffects"},
			{"GdtWeed2","RGrassEffects"},
			{"GdtWeed2","RDirtEffects"},
			{"GdtThorn","RDustEffects"},
			{"GdtThorn","RGrassEffects"},
			{"GdtThorn","RDirtEffects"},
			{"GdtStony","RDustEffects"},
			{"GdtStony","RGrassEffects"},
			{"GdtStony","RDirtEffects"},
			{"GdtStonyGreen","RDustEffects"},
			{"GdtStonyGreen","RGrassEffects"},
			{"GdtStonyGreen","RDirtEffects"},
			{"GdtStonyThistle","RDustEffects"},
			{"GdtStonyThistle","RGrassEffects"},
			{"GdtStonyThistle","RDirtEffects"},
			{"GdtSeabedDeep","RDustEffects"},
			{"GdtSeabed","RDustEffects"},
			{"SurfRoadDirt","RDustEffects"},
			{"SurfRoadConcrete","RDustEffects"},
			{"SurfRoadTarmac","RDustEffects"},
			{"SurfWood","RDustEffects"},
			{"SurfMetal","RDustEffects"},
			{"SurfRoofTin","RDustEffects"},
			{"SurfRoofTiles","RDustEffects"},
			{"SurfIntWood","RDustEffects"},
			{"SurfIntConcrete","RDustEffects"},
			{"SurfIntTiles","RDustEffects"},
			{"SurfIntMetal","RDustEffects"},
			{"dirtrunway","RDustEffects"},
			// CUP TP
			{"CRGrass1","RDustEffects"},
			{"CRGrass1","RGrassEffects"},
			{"CRGrass1","RDirtEffects"},
			{"CRGrass2","RDustEffects"},
			{"CRGrass2","RGrassEffects"},
			{"CRGrass2","RDirtEffects"},
			{"CRGrassW1","RDustEffects"},
			{"CRGrassW1","RGrassEffects"},
			{"CRGrassW1","RDirtEffects"},
			{"CRGrassW2","RDustEffects"},
			{"CRGrassW2","RGrassEffects"},
			{"CRGrassW2","RDirtEffects"},
			{"CRField1","RDustEffects"},
			{"CRField1","RGrassEffects"},
			{"CRField1","RDirtEffects"},
			{"CRField2","RDustEffects"},
			{"CRField2","RGrassEffects"},
			{"CRField2","RDirtEffects"},
			{"CRForest1","RDustEffects"},
			{"CRForest1","RGrassEffects"},
			{"CRForest1","RDirtEffects"},
			{"CRForest2","RDustEffects"},
			{"CRForest2","RGrassEffects"},
			{"CRForest2","RDirtEffects"},
			{"CRGrit1","RDustEffects"},
			{"CRGrit1","RDirtEffects"},
			{"CRHeather","RDustEffects"},
			{"CRHeather","RGrassEffects"},
			{"CRHeather","RDirtEffects"},
			{"CRConcrete","RDirtEffects"},
			{"TKAsfalt","RDirtEffects"},
			{"TKBeton","RDustEffects"},
			{"TKPlevel","RDustEffects"},
			{"TKPlevel","RGrassEffects"},
			{"TKPlevel","RDirtEffects"},
			{"TKPole","RDustEffects"},
			{"TKPole","RGrassDryEffects"},
			{"TKPole","RDirtEffects"},
			{"TKPolopoust","RDustEffects"},
			{"TKPolopoust","RSandEffects"},
			{"TKPolopoust","RDirtEffects"},
			{"TKSkala","RDustEffects"},
			{"TKSkala","RStonesEffects"},
			{"TKSkalniSterk","RDustEffects"},
			{"TKSkalniSterk","RStonesEffects"},
			{"TKSterkNaDno","RDustEffects"},
			{"TKSterkNaDno","RStonesEffects"},
			{"TKMoutain","RDustEffects"},
			{"TKMoutain","RStonesEffects"},
			{"TKValouny","RDustEffects"},
			{"TKValouny","RStonesEffects"},
			{"TKTrava","RDustEffects"},
			{"TKTrava","RGrassDryEffects"},
			{"TKTrava","RDirtEffects"},
			{"TKForest","RDustEffects"},
			{"TKForest","RGrassDryEffects"},
			{"TKForest","RDirtEffects"},
			{"ZRAsfalt","RDirtEffects"},
			{"ZRBeton","RDustEffects"},
			{"RoadDirt_EP1","RDustEffects"},
			{"RoadTarmac_EP1","RDirtEffects"},
			{"ZRPlevel","RDustEffects"},
			{"ZRPlevel","RGrassEffects"},
			{"ZRPlevel","RDirtEffects"},
			{"ZRPole","RDustEffects"},
			{"ZRPole","RGrassDryEffects"},
			{"ZRPole","RDirtEffects"},
			{"ZRPolopoust","RDustEffects"},
			{"ZRPolopoust","RSandEffects"},
			{"ZRPolopoust","RDirtEffects"},
			{"ZRSkala","RDustEffects"},
			{"ZRSkala","RStonesEffects"},
			{"ZRSkalniSterk","RDustEffects"},
			{"ZRSkalniSterk","RStonesEffects"},
			{"ZRSterkNaDno","RDustEffects"},
			{"ZRSterkNaDno","RStonesEffects"},
			{"ZRValouny","RDustEffects"},
			{"ZRValouny","RStonesEffects"},
			{"ZRTrava","RDustEffects"},
			{"ZRTrava","RGrassDryEffects"},
			{"ZRTrava","RDirtEffects"},
			{"DEPolopoust","RDustEffects"},
			{"DEPolopoust","RSandEffects"},
			{"DEPolopoust","RDirtEffects"},
			{"DESkalniSterk","RDustEffects"},
			{"DESkalniSterk","RStonesEffects"},
			{"DETrava","RDustEffects"},
			{"DETrava","RGrassDryEffects"},
			{"DETrava","RDirtEffects"},
			{"WLGrass1","RDustEffects"},
			{"WLGrass1","RGrassEffects"},
			{"WLGrass1","RDirtEffects"},
			{"WLGrass2","RDustEffects"},
			{"WLGrass2","RGrassEffects"},
			{"WLGrass2","RDirtEffects"},
			{"WLGrassW1","RDustEffects"},
			{"WLGrassW1","RGrassEffects"},
			{"WLGrassW1","RDirtEffects"},
			{"WLGrassW2","RDustEffects"},
			{"WLGrassW2","RGrassEffects"},
			{"WLGrassW2","RDirtEffects"},
			{"WLField1","RDustEffects"},
			{"WLField1","RGrassEffects"},
			{"WLField1","RDirtEffects"},
			{"WLField2","RDustEffects"},
			{"WLField2","RGrassEffects"},
			{"WLField2","RDirtEffects"},
			{"WLForest1","RDustEffects"},
			{"WLForest1","RGrassEffects"},
			{"WLForest1","RDirtEffects"},
			{"WLForest2","RDustEffects"},
			{"WLForest2","RGrassEffects"},
			{"WLForest2","RDirtEffects"},
			{"WLMudGround","RDustEffects"},
			{"WLMudGround","RGrassEffects"},
			{"WLMudGround","RDirtEffects"},
			{"WLGrit1","RDustEffects"},
			{"WLGrit1","RDirtEffects"},
			{"WLHeather","RDustEffects"},
			{"WLHeather","RGrassEffects"},
			{"WLHeather","RDirtEffects"},
			{"WLConcrete","RDirtEffects"},
			{"GZTrava","RDustEffects"},
			{"GZTrava","RGrassDryEffects"},
			{"GZTrava","RDirtEffects"},
			{"GZforest","RDustEffects"},
			{"GZforest","RGrassDryEffects"},
			{"GZforest","RDirtEffects"},
			{"GZkameny","RDustEffects"},
			{"GZkameny","RStonesEffects"},
			{"GZHlina","RDustEffects"},
			{"GZHlina","RGrassEffects"},
			{"GZHlina","RDirtEffects"},
			{"BetonNew","RDirtEffects"},
			{"Asf1","RDirtEffects"},
			{"Asf2","RDirtEffects"},
			{"Asf3","RDirtEffects"},
			{"road","RDustEffects"},
			// IFA3
			{"I44_Mer_Field","RDustEffects"}, // Champ de blé sol terre
			{"I44_Mer_Field","RGrassEffects"}, // Champ de blé sol terre
			{"I44_Mer_Field","RDirtEffects"}, // Champ de blé sol terre
			{"I44_Mer_Forest","RDustEffects"}, // sol de foret feuilles + herbes
			{"I44_Mer_Forest","RGrassEffects"}, // sol de foret feuilles + herbes
			{"I44_Mer_Forest","RDirtEffects"}, // sol de foret feuilles + herbes
			{"I44_Mer_Grass1","RDustEffects"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass1","RGrassEffects"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass1","RDirtEffects"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass2","RDustEffects"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Grass2","RGrassEffects"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Grass2","RDirtEffects"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Ground","RDustEffects"}, // terre brune bord riviere
			{"I44_Mer_Ground","RDirtEffects"}, // terre brune bord riviere
			{"I44_Nea_Farmdirt","RDustEffects"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmdirt","RGrassDryEffects"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmdirt","RDirtEffects"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmsurface","RDustEffects"}, // Champ en terre + hautes herbes
			{"I44_Nea_Farmsurface","RGrassEffects"}, // Champ en terre + hautes herbes
			{"I44_Nea_Farmsurface","RDirtEffects"}, // Champ en terre + hautes herbes
			{"I44_Nea_Grasssurface","RDustEffects"}, // herbe
			{"I44_Nea_Grasssurface","RGrassEffects"}, // herbe
			{"I44_Nea_Grasssurface","RDirtEffects"}, // herbe
			{"I44_Nea_GravelSurface","RDustEffects"}, // terre nue gravier
			{"I44_Nea_GravelSurface","RDirtEffects"}, // terre nue gravier
			{"I44_Nea_GravelSurface","RStonesEffects"}, // terre nue gravier
			{"I44_Omaha_v2_Brown","RDustEffects"}, // terre + herbes
			{"I44_Omaha_v2_Brown","RGrassEffects"}, // terre + herbes
			{"I44_Omaha_v2_Brown","RDirtEffects"}, // terre + herbes
			{"I44_Omaha_v2_Green","RDustEffects"}, // marron herbe
			{"I44_Omaha_v2_Green","RGrassEffects"}, // marron herbe
			{"I44_Omaha_v2_Green","RDirtEffects"}, // marron herbe
			{"I44_Omaha_v2_Lawn","RDustEffects"}, // vert Herbe
			{"I44_Omaha_v2_Lawn","RGrassEffects"}, // vert Herbe
			{"I44_Omaha_v2_Lawn","RDirtEffects"}, // vert Herbe
			{"LIB_France_Grass","RDustEffects"}, // Herbe bien verte
			{"LIB_France_Grass","RGrassEffects"}, // Herbe bien verte
			{"LIB_France_Grass","RDirtEffects"}, // Herbe bien verte
			{"LIB_France_Poppy","RDustEffects"}, // Coquelicots
			{"LIB_France_Poppy","RGrassEffects"}, // Coquelicots
			{"LIB_France_Poppy","RDirtEffects"}, // Coquelicots
			{"LIB_France_Raps","RDustEffects"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Raps","RGrassEffects"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Raps","RDirtEffects"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Sand","RDustEffects"}, // Sable plage
			{"LIB_France_Sand","RDirtEffects"}, // Sable plage
			{"LIB_France_Sand","RSandEffects"}, // Sable plage
			{"LIB_France_Tillage","RDustEffects"}, // Champ de terre
			{"LIB_France_Tillage","RDirtEffects"}, // Champ de terre
			{"LIB_France_Weed","RDustEffects"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Weed","RGrassDryEffects"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Weed","RDirtEffects"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Wheat","RDustEffects"}, // Champ de blé vert
			{"LIB_France_Wheat","RGrassEffects"}, // Champ de blé vert
			{"LIB_France_Wheat","RDirtEffects"}, // Champ de blé vert
			{"LIB_Staszow_Ambush","RDustEffects"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Ambush","RGrassEffects"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Ambush","RDirtEffects"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Burn","RDustEffects"}, // sol brulé
			{"LIB_Staszow_Burn","RDirtEffectsBig"}, // sol brulé
			{"LIB_Staszow_Forest","RDustEffects"}, // Sous-bois
			{"LIB_Staszow_Forest","RGrassEffects"}, // Sous-bois
			{"LIB_Staszow_Forest","RDirtEffects"}, // Sous-bois
			{"LIB_Staszow_Grass","RDustEffects"}, // herbe verte
			{"LIB_Staszow_Grass","RGrassEffects"}, // herbe verte
			{"LIB_Staszow_Grass","RDirtEffects"}, // herbe verte
			{"LIB_Staszow_Grazy","RDustEffects"},
			{"LIB_Staszow_Grazy","RGrassEffects"},
			{"LIB_Staszow_Grazy","RDirtEffects"},
			{"LIB_Staszow_Oldgrass","RDustEffects"},
			{"LIB_Staszow_Oldgrass","RGrassDryEffects"},
			{"LIB_Staszow_Oldgrass","RDirtEffects"},
			{"LIB_Staszow_Oldwheat","RDustEffects"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Oldwheat","RGrassDryEffects"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Oldwheat","RDirtEffects"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Sand","RDustEffects"}, // Sable
			{"LIB_Staszow_Sand","RDirtEffects"}, // Sable
			{"LIB_Staszow_Sand","RSandEffects"}, // Sable
			{"LIB_Staszow_Swamp","RDustEffects"}, // marais
			{"LIB_Staszow_Swamp","RGrassEffects"}, // marais
			{"LIB_Staszow_Swamp","RDirtEffects"}, // marais
			{"LIB_Staszow_Wheat","RDustEffects"}, // champ de blé jaune non coupé fond terre seche
			{"LIB_Staszow_Wheat","RGrassDryEffects"}, // champ de blé jaune non coupé fond terre seche
			{"LIB_Staszow_Wheat","RDirtEffects"}, // champ de blé jaune non coupé fond terre seche
			{"swu_aachen_corn_field","RDustEffects"}, // Champ herbe
			{"swu_aachen_corn_field","RGrassEffects"}, // Champ herbe
			{"swu_aachen_corn_field","RDirtEffects"}, // Champ herbe
			{"swu_aachen_footsteps","RDustEffects"}, // terreux
			{"swu_aachen_footsteps","RDirtEffects"}, // terreux
			{"swu_aachen_forest","RDustEffects"}, // sous bois herbe
			{"swu_aachen_forest","RGrassEffects"}, // sous bois herbe
			{"swu_aachen_forest","RDirtEffects"}, // sous bois herbe
			{"swu_aachen_main_field","RDustEffects"}, // Champ herbe brun
			{"swu_aachen_main_field","RGrassDryEffects"}, // Champ herbe brun
			{"swu_aachen_main_field","RDirtEffects"}, // Champ herbe brun
			{"swu_aachen_roads","RDustEffects"}, // terreux bord de route
			{"swu_aachen_roads","RDirtEffects"}, // terreux bord de route
			{"swu_berlin_grass","RDustEffects"},
			{"swu_berlin_grass","RGrassEffects"},
			{"swu_berlin_grass","RDirtEffects"},
			{"swu_berlin_main","RDustEffects"},
			{"swu_berlin_main","RDirtEffects"},
			{"SWU_Dunkirk_Roadside","RDustEffects"}, // bord de route herbe terreuse
			{"SWU_Dunkirk_Roadside","RGrassEffects"}, // bord de route herbe terreuse
			{"SWU_Dunkirk_Roadside","RDirtEffects"}, // bord de route herbe terreuse
			{"SWU_Forest_Mud","RDustEffects"}, // sous bois
			{"SWU_Forest_Mud","RGrassEffects"}, // sous bois
			{"SWU_Forest_Mud","RDirtEffects"}, // sous bois
			{"SWU_Grass_Normal","RDustEffects"}, // herbe
			{"SWU_Grass_Normal","RGrassEffects"}, // herbe
			{"SWU_Grass_Normal","RDirtEffects"}, // herbe
			{"SWU_Grassy_Floor","RDustEffects"}, // herbe
			{"SWU_Grassy_Floor","RGrassEffects"}, // herbe
			{"SWU_Grassy_Floor","RDirtEffects"}, // herbe
			{"swu_greece_grass","RDustEffects"}, // Herbe
			{"swu_greece_grass","RGrassEffects"}, // Herbe
			{"swu_greece_grass","RDirtEffects"}, // Herbe
			{"swu_greece_road","RDustEffects"}, // bord de route terre et herbe seche
			{"swu_greece_road","RGrassDryEffects"}, // bord de route terre et herbe seche
			{"swu_greece_road","RDirtEffects"}, // bord de route terre et herbe seche
			{"swu_greece_vinesdust","RDustEffects"}, // Champ herbe très seche
			{"swu_greece_vinesdust","RGrassDryEffects"}, // Champ herbe très seche
			{"swu_greece_vinesdust","RDirtEffects"}, // Champ herbe très seche
			{"swu_greece_woods","RDustEffects"}, // sous bois herebe
			{"swu_greece_woods","RGrassEffects"}, // sous bois herebe
			{"swu_greece_woods","RDirtEffects"}, // sous bois herebe
			{"SWU_Road_Side","RDustEffects"}, // bord de route terreux
			{"SWU_Road_Side","RDirtEffects"}, // bord de route terreux
			{"SWU_Sandy_Floor","RDustEffects"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","RGrassDryEffects"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","RDirtEffects"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","RSandEffects"}, // sol sabloneux avec herbe
			// Fallujah
			{"siFallujahTerra","RDustEffects"},
			{"siFallujahTerra","RSandEffects"},
			{"siFallujahTerra","RDirtEffectsBig"},
			{"siFallujahTerra","RStonesEffects"},
			{"siFallujahAcqua","RDustEffects"},
			{"siFallujahErba","RGrassDryEffects"},
			{"siFallujahErba","RDustEffects"},
			{"siFallujahErba","RDirtEffects"},
			{"siFallujahSabbia","RDustEffects"},
			{"siFallujahSabbia","RSandEffects"},
			{"siFallujahSabbia","RDirtEffectsBig"},
			{"siFallujahSabbia","RStonesEffects"},
			{"siFallujahCitta","RDirtEffects"},
			{"siFallujahCitta","RDustEffects"},
			//N'ziwasogo (projeta 305)
			{"mak305_dirt","RDustEffects"},
			{"mak305_dirt","RDirtEffects"},
			{"mak305_jungle","RDustEffects"},
			{"mak305_jungle","RDirtEffects"},
			{"mak305_jungle","RGrassEffects"},
			{"mak305_dirtgrass","RDustEffects"},
			{"mak305_dirtgrass","RDirtEffects"},
			{"mak305_dirtgrass","RGrassEffects"},
			{"mak305_palm","RDustEffects"},
			{"mak305_palm","RDirtEffects"},
			{"mak305_palm","RGrassDryEffects"},
			{"mak305_palmbroken","RDustEffects"},
			{"mak305_palmbroken","RDirtEffects"},
			{"mak305_palmbroken","RGrassDryEffects"},
			{"mak305_sand","RDustEffects"},
			{"mak305_sand","RDirtEffects"},
			{"mak305_sand","RSandEffects"},
			// Aliabad
			{"AliDirtSurface","RDustEffects"},
			{"AliDirtSurface","RDirtEffectsBig"},
			{"AliSandSurface","RDustEffects"},
			{"AliSandSurface","RSandEffects"},
			{"AliSandSurface","RStonesEffects"},
			{"AliSandSurface","RDirtEffectsBig"},
			{"AliDesertSurface","RDustEffects"},
			{"AliDesertSurface","RSandEffects"},
			{"AliDesertSurface","RStonesEffects"},
			{"AliDesertSurface","RDirtEffectsBig"},
			{"AliForestSurface","RDustEffects"},
			{"AliForestSurface","RDirtEffects"},
			{"AliRockySurface","RDustEffects"},
			{"AliRockySurface","RDirtEffectsBig"},
			{"AliCliffSurface","RDustEffects"},
			{"AliRiverbedSurface","RDustEffects"},
			// HazarKot
			{"FTDirtSurface","RDustEffects"},
			{"FTDirtSurface","RDirtEffectsBig"},
			{"FTSandSurface","RDustEffects"},
			{"FTSandSurface","RSandEffects"},
			{"FTSandSurface","RStonesEffects"},
			{"FTSandSurface","RDirtEffectsBig"},
			{"FTDesertSurface","RDustEffects"},
			{"FTDesertSurface","RSandEffects"},
			{"FTDesertSurface","RStonesEffects"},
			{"FTDesertSurface","RDirtEffectsBig"},
			{"FTForestSurface","RDustEffects"},
			{"FTForestSurface","RDirtEffects"},
			{"FTRockySurface","RDustEffects"},
			{"FTRockySurface","RDirtEffects"},
			// Caribou
			{"CARIBOU_FOREST01","RGrassDryEffects"},
			{"CARIBOU_FOREST01","RDustEffects"},
			{"CARIBOU_FOREST01","RDirtEffects"},
			{"CARIBOU_FOREST02","RDustEffects"},
			{"CARIBOU_FOREST02","RDirtEffects"},
			{"CARIBOU_GRASS01","RGrassDryEffects"},
			{"CARIBOU_GRASS01","RDustEffects"},
			{"CARIBOU_GRASS01","RDirtEffects"},
			{"CARIBOU_GRASS02","RGrassEffects"},
			{"CARIBOU_GRASS02","RDustEffects"},
			{"CARIBOU_GRASS02","RDirtEffects"},
			{"CARIBOU_GRAVEL01","RDirtEffects"},
			{"CARIBOU_GRAVEL01","RDustEffects"},
			{"CARIBOU_GRAVEL02","RDirtEffects"},
			{"CARIBOU_GRAVEL02","RDustEffects"},
			{"CARIBOU_ROCK01","RDirtEffects"},
			{"CARIBOU_ROCK01","RDustEffects"},
			{"CARIBOU_ROCK02","RDirtEffects"},
			{"CARIBOU_ROCK02","RDustEffects"},
			{"CARIBOU_BETON01","RDirtEffects"},
			{"CARIBOU_BETON01","RDustEffects"},
			// Duala
			{"duala_grass","RDustEffects"},
			{"duala_grass","RDirtEffectsBig"},
			{"duala_grass","RStonesEffectsBig"},
			{"duala_grass","RGrassEffectsDryBig"},
			{"duala_rock","RDustEffects"},
			{"duala_rock","RDirtEffectsBig"},
			{"duala_rock","RStonesEffectsBig"},
			{"duala_stones","RDustEffects"},
			{"duala_stones","RGrassEffectsBig"},
			{"duala_stones","RDirtEffectsBig"},
			{"duala_stones","RStonesEffectsBig"},
			{"duala_wood","RDustEffects"},
			{"duala_wood","RDirtEffectsBig"},
			{"duala_wood","RStonesEffectsBig"},
			{"duala_sand","RDustEffects"},
			{"duala_sand","RDirtEffectsBig"},
			{"duala_sand","RStonesEffectsBig"},
			// Podagorsk
			{"FDF_Tex_1","RDirtEffects"},
			{"FDF_Tex_1","RDustEffects"},
			{"FDF_Tex_2","RDustEffects"},
			{"FDF_Tex_2","RGrassEffects"},
			{"FDF_Tex_3","RDirtEffects"},
			{"FDF_Tex_3","RDustEffects"},
			{"FDF_Tex_4","RDirtEffects"},
			{"FDF_Tex_4","RDustEffects"},
			{"FDF_Tex_5","RDirtEffects"},
			{"FDF_Tex_5","RDustEffects"},
			{"FDF_Tex_6","RDirtEffects"},
			{"FDF_Tex_7","RDustEffects"},
			{"FDF_Tex_7","RDirtEffects"},
			{"FDF_Tex_7","RStonesEffects"},
			{"FDF_Tex_8","RDustEffects"},
			{"FDF_Tex_8","RStonesEffects"},
			{"FDF_Tex_9","RDustEffects"},
			{"FDF_Tex_9","RDirtEffects"},
			{"FDF_Tex_9","RStonesEffects"},
			{"FDF_Tex_10","RDustEffects"},
			{"FDF_Tex_11","RDirtEffects"},
			// Zernovo
			{"gsep_creekbedsurface","RDustEffects"},
			{"gsepconcretegroundsurface","RDustEffects"},
			{"gsepdirtsurface","RDustEffects"},
			{"gsepdirtsurface","RDirtEffects"},
			{"gsepforest1surface","RDustEffects"},
			{"gsepforest1surface","RDirtEffects"},
			{"gseptallgrasssurface","RDustEffects"},
			{"gseptallgrasssurface","RDirtEffects"},
			{"gseptallgrasssurface","RGrassEffects"},
			{"gsepshortgrasssurface","RDustEffects"},
			{"gsepshortgrasssurface","RDirtEffects"},
			{"gsepshortgrasssurface","RGrassEffects"},
			{"gsepbarerocksurface","RDustEffects"},
			{"gsepbarerocksurface","RStonesEffects"},
			{"gsepgravelsurface","RDustEffects"},
			{"gsepgravelsurface","RDirtEffects"},
			{"gsephayfieldsurface","RDustEffects"},
			{"gsephayfieldsurface","RDirtEffects"},
			{"gsephayfieldsurface","RGrassEffectsDryBig"},
			{"gsepcropsurface","RDustEffects"},
			{"gsepcropsurface","RDirtEffects"},
			/*
			// Taunus
			{"xcam_grass_green_co","RDustEffects"},
			{"xcam_grass_green_co","RDirtEffects"},
			{"xcam_grass_green_co","RStonesEffects"},
			{"xcam_grass_green_co","RGrassDryEffects"},
			{"xcam_grass_green_co","RGrassEffects"},
			{"xcam_grassbravo_co","RDustEffects"},
			{"xcam_grassbravo_co","RDirtEffects"},
			{"xcam_grassbravo_co","RStonesEffects"},
			{"xcam_grassbravo_co","RGrassDryEffects"},
			{"xcam_grassbravo_co","RGrassEffects"},
			{"xcam_acker_co","RDustEffects"},
			{"xcam_acker_co","RDirtEffects"},
			{"xcam_acker_co","RStonesEffects"},
			{"xcam_acker_co","RGrassDryEffects"},
			{"xcam_acker_co","RGrassEffects"},
			{"xcam_dirt_co","RDustEffects"},
			{"xcam_dirt_co","RDirtEffects"},
			{"xcam_dirt_co","RStonesEffects"},
			{"xcam_dirt_co","RGrassDryEffects"},
			{"xcam_forestground1_co","RDustEffects"},
			{"xcam_forestground1_co","RDirtEffects"},
			{"xcam_forestground1_co","RStonesEffects"},
			{"xcam_forestground1_co","RGrassDryEffects"},
			{"xcam_forestground1_co","RGrassEffects"},
			{"xcam_asfalt_co","RDustEffects"},
			{"xcam_asfalt_co","RDirtEffects"},
			{"xcam_asfalt_co","RStonesEffects"},
			{"xcam_asfalt_co","RGrassDryEffects"},
			*/
			// Thirsk
			{"THgrass2","RDustEffects"},
			{"THgrass2","RDirtEffects"},
			{"THgrass2","RGrassEffects"},
			{"THgrass3","RDustEffects"},
			{"THgrass3","RDirtEffects"},
			{"THgrass3","RGrassDryEffects"},
			{"THForest1","RDustEffects"},
			{"THForest1","RDirtEffects"},
			{"THForest1","RStonesEffects"},
			{"THForest2","RDustEffects"},
			{"THForest2","RDirtEffects"},
			{"THGrit1","RDustEffects"},
			{"THGrit1","RDirtEffects"},
			{"THGrit1","RStonesEffects"},
			{"THBetoni1","RDustEffects"},
			{"THRock","RDustEffects"},
			{"THRock","RStonesEffects"},
			{"THTarmac","RDustEffects"},
			// PKL
			{"bludriver","RDirtEffects"},
			{"bludjungle1","RDirtEffects"},
			{"bludjungle2","RDirtEffects"},
			{"bludjungle3","RDirtEffects"},
			{"bludgressj","RDirtEffects"},
			{"bludgressj","RDustEffects"},
			{"bludgressj","RGrassEffects"},
			{"bludjunglerd1","RDirtEffects"},
			{"bludjunglerd1","RDustEffects"},
			{"bludjunglerd2","RDirtEffects"},
			{"bludjunglerd2","RDustEffects"},
			{"bludrivermaling","RDirtEffects"},
			{"bludrivermaling","RDustEffects"},
			{"blud_sti","RDirtEffects"},
			{"blud_sti","RDustEffects"},
			// Ndjenahoud
			{"mak319_desgrass","RDustEffects"},
			{"mak319_desgrass","RDirtEffects"},
			{"mak319_desgrass","RStonesEffects"},
			{"mak319_stony","RDustEffects"},
			{"mak319_stony","RDirtEffects"},
			{"mak319_stony","RGrassEffects"},
			{"mak308_Dirt","RDustEffects"},
			{"mak308_Dirt","RDirtEffects"},
			{"mak308_Dirt","RGrassEffects"},
			{"mak308_GrassDry","RDustEffects"},
			{"mak308_GrassDry","RDirtEffects"},
			{"mak308_GrassDry","RgrassdryEffects"},
			{"mak319_thorn","RDustEffects"},
			{"mak319_thorn","RDirtEffects"},
			{"mak319_thorn","RgrassdryEffects"},
			{"mak319_desert","RDustEffects"},
			{"mak319_desert","RDirtEffectsBig"},
			{"mak319_desert","RSandEffects"}
		};
		leftDustEffects[] ={
			{"GdtGrassShort","LDustEffects"},
			{"GdtGrassShort","LGrassEffects"},
			{"GdtGrassTall","LDustEffects"},
			{"GdtGrassTall","LGrassEffects"},
			{"GdtRedDirt","LDustEffectsRed"},
			{"GdtField","LDustEffects"},
			{"GdtForest","LDustEffects"},
			{"GdtVolcano","LDustEffects"},
			{"GdtVolcano","LStonesEffects"},
			{"GdtCliff","LDustEffects"},
			{"GdtVolcanoBeach","LDustEffects"},
			{"SurfRoadDirt_exp","LDustEffectsRed"},
			{"SurfRoadConcrete_exp","LDustEffects"},
			{"SurfRoadTarmac_exp","LDustEffects"},
			{"GdtStratisConcrete","LDustEffects"},
			{"GdtStratisConcrete","LDirtEffects"},
			{"GdtStratisBeach","LDustEffects"},
			{"GdtStratisBeach","LStonesEffects"},
			{"GdtStratisDirt","LDustEffects"},
			{"GdtStratisDirt","LDirtEffects"},
			{"GdtStratisSeabedCluttered","LDustEffects"},
			{"GdtStratisSeabed","LDustEffects"},
			{"GdtStratisDryGrass","LDustEffects"},
			{"GdtStratisDryGrass","LGrassDryEffects"},
			{"GdtStratisDryGrass","LDirtEffects"},
			{"GdtStratisGreenGrass","LDustEffects"},
			{"GdtStratisGreenGrass","LGrassEffects"},
			{"GdtStratisGreenGrass","LDirtEffects"},
			{"GdtStratisRocky","LDustEffects"},
			{"GdtStratisRocky","LGrassEffects"},
			{"GdtStratisRocky","LDirtEffects"},
			{"GdtStratisThistles","LDustEffects"},
			{"GdtStratisThistles","LGrassEffects"},
			{"GdtStratisThistles","LDirtEffects"},
			{"GdtConcrete","LDustEffects"},
			{"GdtConcrete","LDirtEffects"},
			{"GdtAsphalt","LDustEffects"},
			{"GdtAsphalt","LDirtEffects"},
			{"GdtRubble","LDustEffects"},
			{"GdtRubble","LGrassEffects"},
			{"GdtRubble","LDirtEffects"},
			{"GdtSoil","LDustEffects"},
			{"GdtSoil","LDirtEffects"},
			{"GdtBeach","LDustEffects"},
			{"GdtBeach","LStonesEffects"},
			{"GdtRock","LDustEffects"},
			{"GdtRock","LDirtEffects"},
			{"GdtDead","LDustEffects"},
			{"GdtDead","LDirtEffects"},
			{"Default","LDustEffects"},
			{"GdtDesert","LDustEffects"},
			{"GdtDesert","LStonesEffects"},
			{"GdtDesert1","LDustEffects"},
			{"GdtDesert1","LSandEffects"},
			{"GdtDesert1","LDirtEffects"},
			{"GdtDesert1","LStonesEffects"},
			{"GdtDesert2","LDustEffects"},
			{"GdtDesert2","LSandEffects"},
			{"GdtDesert2","LGrassEffects"},
			{"GdtDesert2","LDirtEffects"},
			{"GdtDirt","LDustEffects"},
			{"GdtDirt","LDirtEffects"},
			{"GdtGrassGreen","LDustEffects"},
			{"GdtGrassGreen","LGrassEffects"},
			{"GdtGrassGreen","LDirtEffects"},
			{"GdtGrassDry","LDustEffects"},
			{"GdtGrassDry","LGrassDryEffects"},
			{"GdtGrassDry","LDirtEffects"},
			{"GdtGrassWild","LDustEffects"},
			{"GdtGrassWild","LGrassEffects"},
			{"GdtGrassWild","LDirtEffects"},
			{"GdtWildField","LDustEffects"},
			{"GdtWildField","LGrassEffects"},
			{"GdtWildField","LDirtEffects"},
			{"GdtWeed1","LDustEffects"},
			{"GdtWeed1","LGrassEffects"},
			{"GdtWeed1","LDirtEffects"},
			{"GdtWeed2","LDustEffects"},
			{"GdtWeed2","LGrassEffects"},
			{"GdtWeed2","LDirtEffects"},
			{"GdtThorn","LDustEffects"},
			{"GdtThorn","LGrassEffects"},
			{"GdtThorn","LDirtEffects"},
			{"GdtStony","LDustEffects"},
			{"GdtStony","LGrassEffects"},
			{"GdtStony","LDirtEffects"},
			{"GdtStonyGreen","LDustEffects"},
			{"GdtStonyGreen","LGrassEffects"},
			{"GdtStonyGreen","LDirtEffects"},
			{"GdtStonyThistle","LDustEffects"},
			{"GdtStonyThistle","LGrassEffects"},
			{"GdtStonyThistle","LDirtEffects"},
			{"GdtSeabedDeep","LDustEffects"},
			{"GdtSeabed","LDustEffects"},
			{"SurfRoadDirt","LDustEffects"},
			{"SurfRoadConcrete","LDustEffects"},
			{"SurfRoadTarmac","LDustEffects"},
			{"SurfWood","LDustEffects"},
			{"SurfMetal","LDustEffects"},
			{"SurfRoofTin","LDustEffects"},
			{"SurfRoofTiles","LDustEffects"},
			{"SurfIntWood","LDustEffects"},
			{"SurfIntConcrete","LDustEffects"},
			{"SurfIntTiles","LDustEffects"},
			{"SurfIntMetal","LDustEffects"},
			{"dirtrunway","LDustEffects"},
			// CUP TP
			{"CRGrass1","LDustEffects"},
			{"CRGrass1","LGrassEffects"},
			{"CRGrass1","LDirtEffects"},
			{"CRGrass2","LDustEffects"},
			{"CRGrass2","LGrassEffects"},
			{"CRGrass2","LDirtEffects"},
			{"CRGrassW1","LDustEffects"},
			{"CRGrassW1","LGrassEffects"},
			{"CRGrassW1","LDirtEffects"},
			{"CRGrassW2","LDustEffects"},
			{"CRGrassW2","LGrassEffects"},
			{"CRGrassW2","LDirtEffects"},
			{"CRField1","LDustEffects"},
			{"CRField1","LGrassEffects"},
			{"CRField1","LDirtEffects"},
			{"CRField2","LDustEffects"},
			{"CRField2","LGrassEffects"},
			{"CRField2","LDirtEffects"},
			{"CRForest1","LDustEffects"},
			{"CRForest1","LGrassEffects"},
			{"CRForest1","LDirtEffects"},
			{"CRForest2","LDustEffects"},
			{"CRForest2","LGrassEffects"},
			{"CRForest2","LDirtEffects"},
			{"CRGrit1","LDustEffects"},
			{"CRGrit1","LDirtEffects"},
			{"CRHeather","LDustEffects"},
			{"CRHeather","LGrassEffects"},
			{"CRHeather","LDirtEffects"},
			{"CRConcrete","LDirtEffects"},
			{"TKAsfalt","LDirtEffects"},
			{"TKBeton","LDustEffects"},
			{"RoadDirt_EP1","LDustEffects"},
			{"RoadTarmac_EP11","LDirtEffects"},
			{"TKPlevel","LDustEffects"},
			{"TKPlevel","LGrassEffects"},
			{"TKPlevel","LDirtEffects"},
			{"TKPole","LDustEffects"},
			{"TKPole","LGrassDryEffects"},
			{"TKPole","LDirtEffects"},
			{"TKPolopoust","LDustEffects"},
			{"TKPolopoust","LSandEffects"},
			{"TKPolopoust","LDirtEffects"},
			{"TKSkala","LDustEffects"},
			{"TKSkala","LStonesEffects"},
			{"TKSkalniSterk","LDustEffects"},
			{"TKSkalniSterk","LStonesEffects"},
			{"TKSterkNaDno","LDustEffects"},
			{"TKSterkNaDno","LStonesEffects"},
			{"TKMoutain","LDustEffects"},
			{"TKMoutain","LStonesEffects"},
			{"TKValouny","LDustEffects"},
			{"TKValouny","LStonesEffects"},
			{"TKTrava","LDustEffects"},
			{"TKTrava","LGrassDryEffects"},
			{"TKTrava","LDirtEffects"},
			{"TKForest","LDustEffects"},
			{"TKForest","LGrassDryEffects"},
			{"TKForest","LDirtEffects"},
			{"ZRAsfalt","LDirtEffects"},
			{"ZRBeton","LDustEffects"},
			{"ZRPlevel","LDustEffects"},
			{"ZRPlevel","LGrassEffects"},
			{"ZRPlevel","LDirtEffects"},
			{"ZRPole","LDustEffects"},
			{"ZRPole","LGrassDryEffects"},
			{"ZRPole","LDirtEffects"},
			{"ZRPolopoust","LDustEffects"},
			{"ZRPolopoust","LSandEffects"},
			{"ZRPolopoust","LDirtEffects"},
			{"ZRSkala","LDustEffects"},
			{"ZRSkala","LStonesEffects"},
			{"ZRSkalniSterk","LDustEffects"},
			{"ZRSkalniSterk","LStonesEffects"},
			{"ZRSterkNaDno","LDustEffects"},
			{"ZRSterkNaDno","LStonesEffects"},
			{"ZRValouny","LDustEffects"},
			{"ZRValouny","LStonesEffects"},
			{"ZRTrava","LDustEffects"},
			{"ZRTrava","LGrassDryEffects"},
			{"ZRTrava","LDirtEffects"},
			{"DEPolopoust","LDustEffects"},
			{"DEPolopoust","LSandEffects"},
			{"DEPolopoust","LDirtEffects"},
			{"DESkalniSterk","LDustEffects"},
			{"DESkalniSterk","LStonesEffects"},
			{"DETrava","LDustEffects"},
			{"DETrava","LGrassDryEffects"},
			{"DETrava","LDirtEffects"},
			{"WLGrass1","LDustEffects"},
			{"WLGrass1","LGrassEffects"},
			{"WLGrass1","LDirtEffects"},
			{"WLGrass2","LDustEffects"},
			{"WLGrass2","LGrassEffects"},
			{"WLGrass2","LDirtEffects"},
			{"WLGrassW1","LDustEffects"},
			{"WLGrassW1","LGrassEffects"},
			{"WLGrassW1","LDirtEffects"},
			{"WLGrassW2","LDustEffects"},
			{"WLGrassW2","LGrassEffects"},
			{"WLGrassW2","LDirtEffects"},
			{"WLField1","LDustEffects"},
			{"WLField1","LGrassEffects"},
			{"WLField1","LDirtEffects"},
			{"WLField2","LDustEffects"},
			{"WLField2","LGrassEffects"},
			{"WLField2","LDirtEffects"},
			{"WLForest1","LDustEffects"},
			{"WLForest1","LGrassEffects"},
			{"WLForest1","LDirtEffects"},
			{"WLForest2","LDustEffects"},
			{"WLForest2","LGrassEffects"},
			{"WLForest2","LDirtEffects"},
			{"WLMudGround","LDustEffects"},
			{"WLMudGround","LGrassEffects"},
			{"WLMudGround","LDirtEffects"},
			{"WLGrit1","LDustEffects"},
			{"WLGrit1","LDirtEffects"},
			{"WLHeather","LDustEffects"},
			{"WLHeather","LGrassEffects"},
			{"WLHeather","LDirtEffects"},
			{"WLConcrete","LDirtEffects"},
			{"GZTrava","LDustEffects"},
			{"GZTrava","LGrassDryEffects"},
			{"GZTrava","LDirtEffects"},
			{"GZforest","LDustEffects"},
			{"GZForest","LGrassDryEffects"},
			{"GZForest","LDirtEffects"},
			{"GZkameny","LDustEffects"},
			{"GZkameny","LStonesEffects"},
			{"GZHlina","LDustEffects"},
			{"GZHlina","LGrassEffects"},
			{"GZHlina","LDirtEffects"},
			{"BetonNew","LDirtEffects"},
			{"Asf1","LDirtEffects"},
			{"Asf2","LDirtEffects"},
			{"Asf3","LDirtEffects"},
			{"road","LDustEffects"},
			{"Cesta","LDustEffects"},
			// IFA3
			{"I44_Mer_Field","LDustEffects"}, // Champ de blé sol terre
			{"I44_Mer_Field","LGrassEffects"}, // Champ de blé sol terre
			{"I44_Mer_Field","LDirtEffects"}, // Champ de blé sol terre
			{"I44_Mer_Forest","LDustEffects"}, // sol de foret feuilles + herbes
			{"I44_Mer_Forest","LGrassEffects"}, // sol de foret feuilles + herbes
			{"I44_Mer_Forest","LDirtEffects"}, // sol de foret feuilles + herbes
			{"I44_Mer_Grass1","LDustEffects"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass1","LGrassEffects"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass1","LDirtEffects"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass2","LDustEffects"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Grass2","LGrassEffects"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Grass2","LDirtEffects"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Ground","LDustEffects"}, // terre brune bord riviere
			{"I44_Mer_Ground","LDirtEffects"}, // terre brune bord riviere
			{"I44_Nea_Farmdirt","LDustEffects"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmdirt","LGrassDryEffects"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmdirt","LDirtEffects"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmsurface","LDustEffects"}, // Champ en terre + hautes herbes
			{"I44_Nea_Farmsurface","LGrassEffects"}, // Champ en terre + hautes herbes
			{"I44_Nea_Farmsurface","LDirtEffects"}, // Champ en terre + hautes herbes
			{"I44_Nea_Grasssurface","LDustEffects"}, // herbe
			{"I44_Nea_Grasssurface","LGrassEffects"}, // herbe
			{"I44_Nea_Grasssurface","LDirtEffects"}, // herbe
			{"I44_Nea_GravelSurface","LDustEffects"}, // terre nue gravier
			{"I44_Nea_GravelSurface","LDirtEffects"}, // terre nue gravier
			{"I44_Nea_GravelSurface","LStonesEffects"}, // terre nue gravier
			{"I44_Omaha_v2_Brown","LDustEffects"}, // terre + herbes
			{"I44_Omaha_v2_Brown","LGrassEffects"}, // terre + herbes
			{"I44_Omaha_v2_Brown","LDirtEffects"}, // terre + herbes
			{"I44_Omaha_v2_Green","LDustEffects"}, // marron herbe
			{"I44_Omaha_v2_Green","LGrassEffects"}, // marron herbe
			{"I44_Omaha_v2_Green","LDirtEffects"}, // marron herbe
			{"I44_Omaha_v2_Lawn","LDustEffects"}, // vert Herbe
			{"I44_Omaha_v2_Lawn","LGrassEffects"}, // vert Herbe
			{"I44_Omaha_v2_Lawn","LDirtEffects"}, // vert Herbe
			{"LIB_France_Grass","LDustEffects"}, // Herbe bien verte
			{"LIB_France_Grass","LGrassEffects"}, // Herbe bien verte
			{"LIB_France_Grass","LDirtEffects"}, // Herbe bien verte
			{"LIB_France_Poppy","LDustEffects"}, // Coquelicots
			{"LIB_France_Poppy","LGrassEffects"}, // Coquelicots
			{"LIB_France_Poppy","LDirtEffects"}, // Coquelicots
			{"LIB_France_Raps","LDustEffects"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Raps","LGrassEffects"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Raps","LDirtEffects"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Sand","LDustEffects"}, // Sable plage
			{"LIB_France_Sand","LDirtEffects"}, // Sable plage
			{"LIB_France_Sand","LSandEffects"}, // Sable plage
			{"LIB_France_Tillage","LDustEffects"}, // Champ de terre
			{"LIB_France_Tillage","LDirtEffects"}, // Champ de terre
			{"LIB_France_Weed","LDustEffects"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Weed","LGrassDryEffects"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Weed","LDirtEffects"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Wheat","LDustEffects"}, // Champ de blé vert
			{"LIB_France_Wheat","LGrassEffects"}, // Champ de blé vert
			{"LIB_France_Wheat","LDirtEffects"}, // Champ de blé vert
			{"LIB_Staszow_Ambush","LDustEffects"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Ambush","LGrassEffects"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Ambush","LDirtEffects"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Burn","LDustEffects"}, // sol brulé
			{"LIB_Staszow_Burn","LDirtEffectsBig"}, // sol brulé
			{"LIB_Staszow_Forest","LDustEffects"}, // Sous-bois
			{"LIB_Staszow_Forest","LGrassEffects"}, // Sous-bois
			{"LIB_Staszow_Forest","LDirtEffects"}, // Sous-bois
			{"LIB_Staszow_Grass","LDustEffects"}, // herbe verte
			{"LIB_Staszow_Grass","LGrassEffects"}, // herbe verte
			{"LIB_Staszow_Grass","LDirtEffects"}, // herbe verte
			{"LIB_Staszow_Grazy","LDustEffects"},
			{"LIB_Staszow_Grazy","LGrassEffects"},
			{"LIB_Staszow_Grazy","LDirtEffects"},
			{"LIB_Staszow_Oldgrass","LDustEffects"},
			{"LIB_Staszow_Oldgrass","LGrassDryEffects"},
			{"LIB_Staszow_Oldgrass","LDirtEffects"},
			{"LIB_Staszow_Oldwheat","LDustEffects"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Oldwheat","LGrassDryEffects"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Oldwheat","LDirtEffects"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Sand","LDustEffects"}, // Sable
			{"LIB_Staszow_Sand","LDirtEffects"}, // Sable
			{"LIB_Staszow_Sand","LSandEffects"}, // Sable
			{"LIB_Staszow_Swamp","LDustEffects"}, // marais
			{"LIB_Staszow_Swamp","LGrassEffects"}, // marais
			{"LIB_Staszow_Swamp","LDirtEffects"}, // marais
			{"LIB_Staszow_Wheat","LDustEffects"}, // champ de blé jaune non coupé fond terre seche
			{"LIB_Staszow_Wheat","LGrassDryEffects"}, // champ de blé jaune non coupé fond terre seche
			{"LIB_Staszow_Wheat","LDirtEffects"}, // champ de blé jaune non coupé fond terre seche
			{"swu_aachen_corn_field","LDustEffects"}, // Champ herbe
			{"swu_aachen_corn_field","LGrassEffects"}, // Champ herbe
			{"swu_aachen_corn_field","LDirtEffects"}, // Champ herbe
			{"swu_aachen_footsteps","LDustEffects"}, // terreux
			{"swu_aachen_footsteps","LDirtEffects"}, // terreux
			{"swu_aachen_forest","LDustEffects"}, // sous bois herbe
			{"swu_aachen_forest","LGrassEffects"}, // sous bois herbe
			{"swu_aachen_forest","LDirtEffects"}, // sous bois herbe
			{"swu_aachen_main_field","LDustEffects"}, // Champ herbe brun
			{"swu_aachen_main_field","LGrassDryEffects"}, // Champ herbe brun
			{"swu_aachen_main_field","LDirtEffects"}, // Champ herbe brun
			{"swu_aachen_roads","LDustEffects"}, // terreux bord de route
			{"swu_aachen_roads","LDirtEffects"}, // terreux bord de route
			{"swu_berlin_grass","LDustEffects"},
			{"swu_berlin_grass","LGrassEffects"},
			{"swu_berlin_grass","LDirtEffects"},
			{"swu_berlin_main","LDustEffects"},
			{"swu_berlin_main","LDirtEffects"},
			{"SWU_Dunkirk_Roadside","LDustEffects"}, // bord de route herbe terreuse
			{"SWU_Dunkirk_Roadside","LGrassEffects"}, // bord de route herbe terreuse
			{"SWU_Dunkirk_Roadside","LDirtEffects"}, // bord de route herbe terreuse
			{"SWU_Forest_Mud","LDustEffects"}, // sous bois
			{"SWU_Forest_Mud","LGrassEffects"}, // sous bois
			{"SWU_Forest_Mud","LDirtEffects"}, // sous bois
			{"SWU_Grass_Normal","LDustEffects"}, // herbe
			{"SWU_Grass_Normal","LGrassEffects"}, // herbe
			{"SWU_Grass_Normal","LDirtEffects"}, // herbe
			{"SWU_Grassy_Floor","LDustEffects"}, // herbe
			{"SWU_Grassy_Floor","LGrassEffects"}, // herbe
			{"SWU_Grassy_Floor","LDirtEffects"}, // herbe
			{"swu_greece_grass","LDustEffects"}, // Herbe
			{"swu_greece_grass","LGrassEffects"}, // Herbe
			{"swu_greece_grass","LDirtEffects"}, // Herbe
			{"swu_greece_road","LDustEffects"}, // bord de route terre et herbe seche
			{"swu_greece_road","LGrassDryEffects"}, // bord de route terre et herbe seche
			{"swu_greece_road","LDirtEffects"}, // bord de route terre et herbe seche
			{"swu_greece_vinesdust","LDustEffects"}, // Champ herbe très seche
			{"swu_greece_vinesdust","LGrassDryEffects"}, // Champ herbe très seche
			{"swu_greece_vinesdust","LDirtEffects"}, // Champ herbe très seche
			{"swu_greece_woods","LDustEffects"}, // sous bois herebe
			{"swu_greece_woods","LGrassEffects"}, // sous bois herebe
			{"swu_greece_woods","LDirtEffects"}, // sous bois herebe
			{"SWU_Road_Side","LDustEffects"}, // bord de route terreux
			{"SWU_Road_Side","LDirtEffects"}, // bord de route terreux
			{"SWU_Sandy_Floor","LDustEffects"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","LGrassDryEffects"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","LDirtEffects"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","LSandEffects"}, // sol sabloneux avec herbe
			// Fallujah
			{"siFallujahTerra","LDustEffects"},
			{"siFallujahTerra","LDirtEffectsBig"},
			{"siFallujahAcqua","LDustEffects"},
			{"siFallujahErba","LGrassDryEffects"},
			{"siFallujahErba","LDustEffects"},
			{"siFallujahErba","LDirtEffects"},
			{"siFallujahSabbia","LDustEffects"},
			{"siFallujahSabbia","LSandEffects"},
			{"siFallujahSabbia","LDirtEffectsBig"},
			{"siFallujahSabbia","LStonesEffects"},
			{"siFallujahCitta","LDirtEffects"},
			{"siFallujahCitta","LDustEffects"},
			//N'ziwasogo (projeta 305)
			{"mak305_dirt","LDustEffects"},
			{"mak305_dirt","LDirtEffects"},
			{"mak305_jungle","LDustEffects"},
			{"mak305_jungle","LDirtEffects"},
			{"mak305_jungle","LGrassEffects"},
			{"mak305_dirtgrass","LDustEffects"},
			{"mak305_dirtgrass","LDirtEffects"},
			{"mak305_dirtgrass","LGrassEffects"},
			{"mak305_palm","LDustEffects"},
			{"mak305_palm","LDirtEffects"},
			{"mak305_palm","LGrassDryEffects"},
			{"mak305_palmbroken","LDustEffects"},
			{"mak305_palmbroken","LDirtEffects"},
			{"mak305_palmbroken","LGrassDryEffects"},
			{"mak305_sand","LDustEffects"},
			{"mak305_sand","LDirtEffects"},
			{"mak305_sand","LSandEffects"},
			// Aliabad
			{"AliDirtSurface","LDustEffects"},
			{"AliDirtSurface","LDirtEffectsBig"},
			{"AliSandSurface","LDustEffects"},
			{"AliSandSurface","LSandEffects"},
			{"AliSandSurface","LStonesEffects"},
			{"AliSandSurface","LDirtEffectsBig"},
			{"AliDesertSurface","LDustEffects"},
			{"AliDesertSurface","LSandEffects"},
			{"AliDesertSurface","LStonesEffects"},
			{"AliDesertSurface","LDirtEffectsBig"},
			{"AliForestSurface","LDustEffects"},
			{"AliForestSurface","LDirtEffects"},
			{"AliRockySurface","LDustEffects"},
			{"AliRockySurface","LDirtEffectsBig"},
			{"AliCliffSurface","LDustEffects"},
			{"AliRiverbedSurface","LDustEffects"},
			// HazarKot
			{"FTDirtSurface","LDustEffects"},
			{"FTDirtSurface","LDirtEffectsBig"},
			{"FTSandSurface","LDustEffects"},
			{"FTSandSurface","LSandEffects"},
			{"FTSandSurface","LStonesEffects"},
			{"FTSandSurface","LDirtEffectsBig"},
			{"FTDesertSurface","LDustEffects"},
			{"FTDesertSurface","LSandEffects"},
			{"FTDesertSurface","LStonesEffects"},
			{"FTDesertSurface","LDirtEffectsBig"},
			{"FTForestSurface","LDustEffects"},
			{"FTForestSurface","LDirtEffects"},
			{"FTRockySurface","LDustEffects"},
			{"FTRockySurface","LDirtEffects"},
			// Caribou
			{"CARIBOU_FOREST01","LGrassDryEffects"},
			{"CARIBOU_FOREST01","LDustEffects"},
			{"CARIBOU_FOREST01","LDirtEffects"},
			{"CARIBOU_FOREST02","LDustEffects"},
			{"CARIBOU_FOREST02","LDirtEffects"},
			{"CARIBOU_GRASS01","LGrassDryEffects"},
			{"CARIBOU_GRASS01","LDustEffects"},
			{"CARIBOU_GRASS01","LDirtEffects"},
			{"CARIBOU_GRASS02","LGrassEffects"},
			{"CARIBOU_GRASS02","LDustEffects"},
			{"CARIBOU_GRASS02","LDirtEffects"},
			{"CARIBOU_GRAVEL01","LDirtEffects"},
			{"CARIBOU_GRAVEL01","LDustEffects"},
			{"CARIBOU_GRAVEL02","LDirtEffects"},
			{"CARIBOU_GRAVEL02","LDustEffects"},
			{"CARIBOU_ROCK01","LDirtEffects"},
			{"CARIBOU_ROCK01","LDustEffects"},
			{"CARIBOU_ROCK02","LDirtEffects"},
			{"CARIBOU_ROCK02","LDustEffects"},
			{"CARIBOU_BETON01","LDirtEffects"},
			{"CARIBOU_BETON01","LDustEffects"},
			// Duala
			{"duala_grass","LDustEffects"},
			{"duala_grass","LDirtEffectsBig"},
			{"duala_grass","LStonesEffectsBig"},
			{"duala_grass","LGrassEffectsDryBig"},
			{"duala_rock","LDustEffects"},
			{"duala_rock","LDirtEffectsBig"},
			{"duala_rock","LStonesEffectsBig"},
			{"duala_stones","LDustEffects"},
			{"duala_stones","LGrassEffectsBig"},
			{"duala_stones","LDirtEffectsBig"},
			{"duala_stones","LStonesEffectsBig"},
			{"duala_wood","LDustEffects"},
			{"duala_wood","LDirtEffectsBig"},
			{"duala_wood","LStonesEffectsBig"},
			{"duala_sand","LDustEffects"},
			{"duala_sand","LDirtEffectsBig"},
			{"duala_sand","LStonesEffectsBig"},
			// Podagorsk
			{"FDF_Tex_1","LDirtEffects"},
			{"FDF_Tex_1","LDustEffects"},
			{"FDF_Tex_2","LDustEffects"},
			{"FDF_Tex_2","LGrassEffects"},
			{"FDF_Tex_3","LDirtEffects"},
			{"FDF_Tex_3","LDustEffects"},
			{"FDF_Tex_4","LDirtEffects"},
			{"FDF_Tex_4","LDustEffects"},
			{"FDF_Tex_5","LDirtEffects"},
			{"FDF_Tex_5","LDustEffects"},
			{"FDF_Tex_6","LDirtEffects"},
			{"FDF_Tex_7","LDustEffects"},
			{"FDF_Tex_7","LDirtEffects"},
			{"FDF_Tex_7","LStonesEffects"},
			{"FDF_Tex_8","LDustEffects"},
			{"FDF_Tex_8","LStonesEffects"},
			{"FDF_Tex_9","LDustEffects"},
			{"FDF_Tex_9","LDirtEffects"},
			{"FDF_Tex_9","LStonesEffects"},
			{"FDF_Tex_10","LDustEffects"},
			{"FDF_Tex_11","LDirtEffects"},
			// Zernovo
			{"gsep_creekbedsurface","LDustEffects"},
			{"gsepconcretegroundsurface","LDustEffects"},
			{"gsepdirtsurface","LDustEffects"},
			{"gsepdirtsurface","LDirtEffects"},
			{"gsepforest1surface","LDustEffects"},
			{"gsepforest1surface","LDirtEffects"},
			{"gseptallgrasssurface","LDustEffects"},
			{"gseptallgrasssurface","LDirtEffects"},
			{"gseptallgrasssurface","LGrassEffects"},
			{"gsepshortgrasssurface","LDustEffects"},
			{"gsepshortgrasssurface","LDirtEffects"},
			{"gsepshortgrasssurface","LGrassEffects"},
			{"gsepbarerocksurface","LDustEffects"},
			{"gsepbarerocksurface","LStonesEffects"},
			{"gsepgravelsurface","LDustEffects"},
			{"gsepgravelsurface","LDirtEffects"},
			{"gsephayfieldsurface","LDustEffects"},
			{"gsephayfieldsurface","LDirtEffects"},
			{"gsephayfieldsurface","LGrassEffectsDryBig"},
			{"gsepcropsurface","LDustEffects"},
			{"gsepcropsurface","LDirtEffects"},
			/*
			// Taunus
			{"xcam_grass_green_co","LDustEffects"},
			{"xcam_grass_green_co","LDirtEffects"},
			{"xcam_grass_green_co","LStonesEffects"},
			{"xcam_grass_green_co","LGrassDryEffects"},
			{"xcam_grass_green_co","LGrassEffects"},
			{"xcam_grassbravo_co","LDustEffects"},
			{"xcam_grassbravo_co","LDirtEffects"},
			{"xcam_grassbravo_co","LStonesEffects"},
			{"xcam_grassbravo_co","LGrassDryEffects"},
			{"xcam_grassbravo_co","LGrassEffects"},
			{"xcam_acker_co","LDustEffects"},
			{"xcam_acker_co","LDirtEffects"},
			{"xcam_acker_co","LStonesEffects"},
			{"xcam_acker_co","LGrassDryEffects"},
			{"xcam_acker_co","LGrassEffects"},
			{"xcam_dirt_co","LDustEffects"},
			{"xcam_dirt_co","LDirtEffects"},
			{"xcam_dirt_co","LStonesEffects"},
			{"xcam_dirt_co","LGrassDryEffects"},
			{"xcam_forestground1_co","LDustEffects"},
			{"xcam_forestground1_co","LDirtEffects"},
			{"xcam_forestground1_co","LStonesEffects"},
			{"xcam_forestground1_co","LGrassDryEffects"},
			{"xcam_forestground1_co","LGrassEffects"},
			{"xcam_asfalt_co","LDustEffects"},
			{"xcam_asfalt_co","LDirtEffects"},
			{"xcam_asfalt_co","LStonesEffects"},
			{"xcam_asfalt_co","LGrassDryEffects"},
			*/
			// Thirsk
			{"THgrass2","LDustEffects"},
			{"THgrass2","LDirtEffects"},
			{"THgrass2","LGrassEffects"},
			{"THgrass3","LDustEffects"},
			{"THgrass3","LDirtEffects"},
			{"THgrass3","LGrassDryEffects"},
			{"THForest1","LDustEffects"},
			{"THForest1","LDirtEffects"},
			{"THForest1","LStonesEffects"},
			{"THForest2","LDustEffects"},
			{"THForest2","LDirtEffects"},
			{"THGrit1","LDustEffects"},
			{"THGrit1","LDirtEffects"},
			{"THGrit1","LStonesEffects"},
			{"THBetoni1","LDustEffects"},
			{"THRock","LDustEffects"},
			{"THRock","LStonesEffects"},
			{"THTarmac","LDustEffects"},
			// PKL
			{"bludriver","LDirtEffects"},
			{"bludjungle1","LDirtEffects"},
			{"bludjungle2","LDirtEffects"},
			{"bludjungle3","LDirtEffects"},
			{"bludgressj","LDirtEffects"},
			{"bludgressj","LDustEffects"},
			{"bludgressj","LGrassEffects"},
			{"bludjunglerd1","LDirtEffects"},
			{"bludjunglerd1","LDustEffects"},
			{"bludjunglerd2","LDirtEffects"},
			{"bludjunglerd2","LDustEffects"},
			{"bludrivermaling","LDirtEffects"},
			{"bludrivermaling","LDustEffects"},
			{"blud_sti","LDirtEffects"},
			{"blud_sti","LDustEffects"},
			// Ndjenahoud
			{"mak319_desgrass","LDustEffects"},
			{"mak319_desgrass","LDirtEffects"},
			{"mak319_desgrass","LStonesEffects"},
			{"mak319_stony","LDustEffects"},
			{"mak319_stony","LDirtEffects"},
			{"mak319_stony","LGrassEffects"},
			{"mak308_Dirt","LDustEffects"},
			{"mak308_Dirt","LDirtEffects"},
			{"mak308_Dirt","LGrassEffects"},
			{"mak308_GrassDry","LDustEffects"},
			{"mak308_GrassDry","LDirtEffects"},
			{"mak308_GrassDry","LgrassdryEffects"},
			{"mak319_thorn","LDustEffects"},
			{"mak319_thorn","LDirtEffects"},
			{"mak319_thorn","LgrassdryEffects"},
			{"mak319_desert","LDustEffects"},
			{"mak319_desert","LDirtEffectsBig"},
			{"mak319_desert","LSandEffects"}
		};
	};
	class Truck_F: Car_F {};
	class LIB_Truck_base: Truck_F
	{
		rightDustEffects[] =
		{
			{"GdtGrassShort","RDustEffects"},
			{"GdtGrassShort","RGrassEffects"},
			{"GdtGrassTall","RDustEffects"},
			{"GdtGrassTall","RGrassEffects"},
			{"GdtRedDirt","RDustEffectsRed"},
			{"GdtField","RDustEffects"},
			{"GdtForest","RDustEffects"},
			{"GdtVolcano","RDustEffects"},
			{"GdtVolcano","RStonesEffects"},
			{"GdtCliff","RDustEffects"},
			{"GdtVolcanoBeach","RDustEffects"},
			{"SurfRoadDirt_exp","RDustEffectsRed"},
			{"SurfRoadConcrete_exp","RDustEffects"},
			{"SurfRoadTarmac_exp","RDustEffects"},
			{"GdtStratisConcrete","RDustEffects"},
			{"GdtStratisConcrete","RDirtEffects"},
			{"GdtStratisBeach","RDustEffects"},
			{"GdtStratisBeach","RStonesEffects"},
			{"GdtStratisDirt","RDustEffects"},
			{"GdtStratisDirt","RDirtEffects"},
			{"GdtStratisSeabedCluttered","RDustEffects"},
			{"GdtStratisSeabed","RDustEffects"},
			{"GdtStratisDryGrass","RDustEffects"},
			{"GdtStratisDryGrass","RGrassDryEffects"},
			{"GdtStratisDryGrass","RDirtEffects"},
			{"GdtStratisGreenGrass","RDustEffects"},
			{"GdtStratisGreenGrass","RGrassEffects"},
			{"GdtStratisGreenGrass","RDirtEffects"},
			{"GdtStratisRocky","RDustEffects"},
			{"GdtStratisRocky","RGrassEffects"},
			{"GdtStratisRocky","RDirtEffects"},
			{"GdtStratisThistles","RDustEffects"},
			{"GdtStratisThistles","RGrassEffects"},
			{"GdtStratisThistles","RDirtEffects"},
			{"GdtConcrete","RDustEffects"},
			{"GdtConcrete","RDirtEffects"},
			{"GdtAsphalt","RDustEffects"},
			{"GdtAsphalt","RDirtEffects"},
			{"GdtRubble","RDustEffects"},
			{"GdtRubble","RDirtEffects"},
			{"GdtSoil","RDustEffects"},
			{"GdtSoil","RDirtEffects"},
			{"GdtBeach","RDustEffects"},
			{"GdtBeach","RStonesEffects"},
			{"GdtRock","RDustEffects"},
			{"GdtRock","RDirtEffects"},
			{"GdtDead","RDustEffects"},
			{"GdtDead","RDirtEffects"},
			{"Default","RDustEffects"},
			{"GdtDesert","RDustEffects"},
			{"GdtDesert","RStonesEffects"},
			{"GdtDesert1","RDustEffects"},
			{"GdtDesert1","RSandEffects"},
			{"GdtDesert1","RDirtEffects"},
			{"GdtDesert1","RStonesEffects"},
			{"GdtDesert2","RDustEffects"},
			{"GdtDesert2","RSandEffects"},
			{"GdtDesert2","RGrassEffects"},
			{"GdtDesert2","RDirtEffects"},
			{"GdtDirt","RDustEffects"},
			{"GdtDirt","RDirtEffects"},
			{"GdtGrassGreen","RDustEffects"},
			{"GdtGrassGreen","RGrassEffects"},
			{"GdtGrassGreen","RDirtEffects"},
			{"GdtGrassDry","RDustEffects"},
			{"GdtGrassDry","RGrassDryEffects"},
			{"GdtGrassDry","RDirtEffects"},
			{"GdtGrassWild","RDustEffects"},
			{"GdtGrassWild","RGrassEffects"},
			{"GdtGrassWild","RDirtEffects"},
			{"GdtWildField","RDustEffects"},
			{"GdtWildField","RGrassEffects"},
			{"GdtWildField","RDirtEffects"},
			{"GdtWeed1","RDustEffects"},
			{"GdtWeed1","RGrassEffects"},
			{"GdtWeed1","RDirtEffects"},
			{"GdtWeed2","RDustEffects"},
			{"GdtWeed2","RGrassEffects"},
			{"GdtWeed2","RDirtEffects"},
			{"GdtThorn","RDustEffects"},
			{"GdtThorn","RGrassEffects"},
			{"GdtThorn","RDirtEffects"},
			{"GdtStony","RDustEffects"},
			{"GdtStony","RGrassEffects"},
			{"GdtStony","RDirtEffects"},
			{"GdtStonyGreen","RDustEffects"},
			{"GdtStonyGreen","RGrassEffects"},
			{"GdtStonyGreen","RDirtEffects"},
			{"GdtStonyThistle","RDustEffects"},
			{"GdtStonyThistle","RGrassEffects"},
			{"GdtStonyThistle","RDirtEffects"},
			{"GdtSeabedDeep","RDustEffects"},
			{"GdtSeabed","RDustEffects"},
			{"SurfRoadDirt","RDustEffects"},
			{"SurfRoadConcrete","RDustEffects"},
			{"SurfRoadTarmac","RDustEffects"},
			{"SurfWood","RDustEffects"},
			{"SurfMetal","RDustEffects"},
			{"SurfRoofTin","RDustEffects"},
			{"SurfRoofTiles","RDustEffects"},
			{"SurfIntWood","RDustEffects"},
			{"SurfIntConcrete","RDustEffects"},
			{"SurfIntTiles","RDustEffects"},
			{"SurfIntMetal","RDustEffects"},
			{"dirtrunway","RDustEffects"},
			// CUP TP
			{"CRGrass1","RDustEffects"},
			{"CRGrass1","RGrassEffects"},
			{"CRGrass1","RDirtEffects"},
			{"CRGrass2","RDustEffects"},
			{"CRGrass2","RGrassEffects"},
			{"CRGrass2","RDirtEffects"},
			{"CRGrassW1","RDustEffects"},
			{"CRGrassW1","RGrassEffects"},
			{"CRGrassW1","RDirtEffects"},
			{"CRGrassW2","RDustEffects"},
			{"CRGrassW2","RGrassEffects"},
			{"CRGrassW2","RDirtEffects"},
			{"CRField1","RDustEffects"},
			{"CRField1","RGrassEffects"},
			{"CRField1","RDirtEffects"},
			{"CRField2","RDustEffects"},
			{"CRField2","RGrassEffects"},
			{"CRField2","RDirtEffects"},
			{"CRForest1","RDustEffects"},
			{"CRForest1","RGrassEffects"},
			{"CRForest1","RDirtEffects"},
			{"CRForest2","RDustEffects"},
			{"CRForest2","RGrassEffects"},
			{"CRForest2","RDirtEffects"},
			{"CRGrit1","RDustEffects"},
			{"CRGrit1","RDirtEffects"},
			{"CRHeather","RDustEffects"},
			{"CRHeather","RGrassEffects"},
			{"CRHeather","RDirtEffects"},
			{"CRConcrete","RDirtEffects"},
			{"TKAsfalt","RDirtEffects"},
			{"TKBeton","RDustEffects"},
			{"TKPlevel","RDustEffects"},
			{"TKPlevel","RGrassEffects"},
			{"TKPlevel","RDirtEffects"},
			{"TKPole","RDustEffects"},
			{"TKPole","RGrassDryEffects"},
			{"TKPole","RDirtEffects"},
			{"TKPolopoust","RDustEffects"},
			{"TKPolopoust","RSandEffects"},
			{"TKPolopoust","RDirtEffects"},
			{"TKSkala","RDustEffects"},
			{"TKSkala","RStonesEffects"},
			{"TKSkalniSterk","RDustEffects"},
			{"TKSkalniSterk","RStonesEffects"},
			{"TKSterkNaDno","RDustEffects"},
			{"TKSterkNaDno","RStonesEffects"},
			{"TKMoutain","RDustEffects"},
			{"TKMoutain","RStonesEffects"},
			{"TKValouny","RDustEffects"},
			{"TKValouny","RStonesEffects"},
			{"TKTrava","RDustEffects"},
			{"TKTrava","RGrassDryEffects"},
			{"TKTrava","RDirtEffects"},
			{"TKForest","RDustEffects"},
			{"TKForest","RGrassDryEffects"},
			{"TKForest","RDirtEffects"},
			{"ZRAsfalt","RDirtEffects"},
			{"ZRBeton","RDustEffects"},
			{"RoadDirt_EP1","RDustEffects"},
			{"RoadTarmac_EP1","RDirtEffects"},
			{"ZRPlevel","RDustEffects"},
			{"ZRPlevel","RGrassEffects"},
			{"ZRPlevel","RDirtEffects"},
			{"ZRPole","RDustEffects"},
			{"ZRPole","RGrassDryEffects"},
			{"ZRPole","RDirtEffects"},
			{"ZRPolopoust","RDustEffects"},
			{"ZRPolopoust","RSandEffects"},
			{"ZRPolopoust","RDirtEffects"},
			{"ZRSkala","RDustEffects"},
			{"ZRSkala","RStonesEffects"},
			{"ZRSkalniSterk","RDustEffects"},
			{"ZRSkalniSterk","RStonesEffects"},
			{"ZRSterkNaDno","RDustEffects"},
			{"ZRSterkNaDno","RStonesEffects"},
			{"ZRValouny","RDustEffects"},
			{"ZRValouny","RStonesEffects"},
			{"ZRTrava","RDustEffects"},
			{"ZRTrava","RGrassDryEffects"},
			{"ZRTrava","RDirtEffects"},
			{"DEPolopoust","RDustEffects"},
			{"DEPolopoust","RSandEffects"},
			{"DEPolopoust","RDirtEffects"},
			{"DESkalniSterk","RDustEffects"},
			{"DESkalniSterk","RStonesEffects"},
			{"DETrava","RDustEffects"},
			{"DETrava","RGrassDryEffects"},
			{"DETrava","RDirtEffects"},
			{"WLGrass1","RDustEffects"},
			{"WLGrass1","RGrassEffects"},
			{"WLGrass1","RDirtEffects"},
			{"WLGrass2","RDustEffects"},
			{"WLGrass2","RGrassEffects"},
			{"WLGrass2","RDirtEffects"},
			{"WLGrassW1","RDustEffects"},
			{"WLGrassW1","RGrassEffects"},
			{"WLGrassW1","RDirtEffects"},
			{"WLGrassW2","RDustEffects"},
			{"WLGrassW2","RGrassEffects"},
			{"WLGrassW2","RDirtEffects"},
			{"WLField1","RDustEffects"},
			{"WLField1","RGrassEffects"},
			{"WLField1","RDirtEffects"},
			{"WLField2","RDustEffects"},
			{"WLField2","RGrassEffects"},
			{"WLField2","RDirtEffects"},
			{"WLForest1","RDustEffects"},
			{"WLForest1","RGrassEffects"},
			{"WLForest1","RDirtEffects"},
			{"WLForest2","RDustEffects"},
			{"WLForest2","RGrassEffects"},
			{"WLForest2","RDirtEffects"},
			{"WLMudGround","RDustEffects"},
			{"WLMudGround","RGrassEffects"},
			{"WLMudGround","RDirtEffects"},
			{"WLGrit1","RDustEffects"},
			{"WLGrit1","RDirtEffects"},
			{"WLHeather","RDustEffects"},
			{"WLHeather","RGrassEffects"},
			{"WLHeather","RDirtEffects"},
			{"WLConcrete","RDirtEffects"},
			{"GZTrava","RDustEffects"},
			{"GZTrava","RGrassDryEffects"},
			{"GZTrava","RDirtEffects"},
			{"GZforest","RDustEffects"},
			{"GZforest","RGrassDryEffects"},
			{"GZforest","RDirtEffects"},
			{"GZkameny","RDustEffects"},
			{"GZkameny","RStonesEffects"},
			{"GZHlina","RDustEffects"},
			{"GZHlina","RGrassEffects"},
			{"GZHlina","RDirtEffects"},
			{"BetonNew","RDirtEffects"},
			{"Asf1","RDirtEffects"},
			{"Asf2","RDirtEffects"},
			{"Asf3","RDirtEffects"},
			{"road","RDustEffects"},
			// IFA3
			{"I44_Mer_Field","RDustEffects"}, // Champ de blé sol terre
			{"I44_Mer_Field","RGrassEffects"}, // Champ de blé sol terre
			{"I44_Mer_Field","RDirtEffects"}, // Champ de blé sol terre
			{"I44_Mer_Forest","RDustEffects"}, // sol de foret feuilles + herbes
			{"I44_Mer_Forest","RGrassEffects"}, // sol de foret feuilles + herbes
			{"I44_Mer_Forest","RDirtEffects"}, // sol de foret feuilles + herbes
			{"I44_Mer_Grass1","RDustEffects"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass1","RGrassEffects"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass1","RDirtEffects"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass2","RDustEffects"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Grass2","RGrassEffects"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Grass2","RDirtEffects"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Ground","RDustEffects"}, // terre brune bord riviere
			{"I44_Mer_Ground","RDirtEffects"}, // terre brune bord riviere
			{"I44_Nea_Farmdirt","RDustEffects"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmdirt","RGrassDryEffects"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmdirt","RDirtEffects"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmsurface","RDustEffects"}, // Champ en terre + hautes herbes
			{"I44_Nea_Farmsurface","RGrassEffects"}, // Champ en terre + hautes herbes
			{"I44_Nea_Farmsurface","RDirtEffects"}, // Champ en terre + hautes herbes
			{"I44_Nea_Grasssurface","RDustEffects"}, // herbe
			{"I44_Nea_Grasssurface","RGrassEffects"}, // herbe
			{"I44_Nea_Grasssurface","RDirtEffects"}, // herbe
			{"I44_Nea_GravelSurface","RDustEffects"}, // terre nue gravier
			{"I44_Nea_GravelSurface","RDirtEffects"}, // terre nue gravier
			{"I44_Nea_GravelSurface","RStonesEffects"}, // terre nue gravier
			{"I44_Omaha_v2_Brown","RDustEffects"}, // terre + herbes
			{"I44_Omaha_v2_Brown","RGrassEffects"}, // terre + herbes
			{"I44_Omaha_v2_Brown","RDirtEffects"}, // terre + herbes
			{"I44_Omaha_v2_Green","RDustEffects"}, // marron herbe
			{"I44_Omaha_v2_Green","RGrassEffects"}, // marron herbe
			{"I44_Omaha_v2_Green","RDirtEffects"}, // marron herbe
			{"I44_Omaha_v2_Lawn","RDustEffects"}, // vert Herbe
			{"I44_Omaha_v2_Lawn","RGrassEffects"}, // vert Herbe
			{"I44_Omaha_v2_Lawn","RDirtEffects"}, // vert Herbe
			{"LIB_France_Grass","RDustEffects"}, // Herbe bien verte
			{"LIB_France_Grass","RGrassEffects"}, // Herbe bien verte
			{"LIB_France_Grass","RDirtEffects"}, // Herbe bien verte
			{"LIB_France_Poppy","RDustEffects"}, // Coquelicots
			{"LIB_France_Poppy","RGrassEffects"}, // Coquelicots
			{"LIB_France_Poppy","RDirtEffects"}, // Coquelicots
			{"LIB_France_Raps","RDustEffects"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Raps","RGrassEffects"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Raps","RDirtEffects"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Sand","RDustEffects"}, // Sable plage
			{"LIB_France_Sand","RDirtEffects"}, // Sable plage
			{"LIB_France_Sand","RSandEffects"}, // Sable plage
			{"LIB_France_Tillage","RDustEffects"}, // Champ de terre
			{"LIB_France_Tillage","RDirtEffects"}, // Champ de terre
			{"LIB_France_Weed","RDustEffects"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Weed","RGrassDryEffects"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Weed","RDirtEffects"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Wheat","RDustEffects"}, // Champ de blé vert
			{"LIB_France_Wheat","RGrassEffects"}, // Champ de blé vert
			{"LIB_France_Wheat","RDirtEffects"}, // Champ de blé vert
			{"LIB_Staszow_Ambush","RDustEffects"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Ambush","RGrassEffects"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Ambush","RDirtEffects"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Burn","RDustEffects"}, // sol brulé
			{"LIB_Staszow_Burn","RDirtEffectsBig"}, // sol brulé
			{"LIB_Staszow_Forest","RDustEffects"}, // Sous-bois
			{"LIB_Staszow_Forest","RGrassEffects"}, // Sous-bois
			{"LIB_Staszow_Forest","RDirtEffects"}, // Sous-bois
			{"LIB_Staszow_Grass","RDustEffects"}, // herbe verte
			{"LIB_Staszow_Grass","RGrassEffects"}, // herbe verte
			{"LIB_Staszow_Grass","RDirtEffects"}, // herbe verte
			{"LIB_Staszow_Grazy","RDustEffects"},
			{"LIB_Staszow_Grazy","RGrassEffects"},
			{"LIB_Staszow_Grazy","RDirtEffects"},
			{"LIB_Staszow_Oldgrass","RDustEffects"},
			{"LIB_Staszow_Oldgrass","RGrassDryEffects"},
			{"LIB_Staszow_Oldgrass","RDirtEffects"},
			{"LIB_Staszow_Oldwheat","RDustEffects"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Oldwheat","RGrassDryEffects"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Oldwheat","RDirtEffects"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Sand","RDustEffects"}, // Sable
			{"LIB_Staszow_Sand","RDirtEffects"}, // Sable
			{"LIB_Staszow_Sand","RSandEffects"}, // Sable
			{"LIB_Staszow_Swamp","RDustEffects"}, // marais
			{"LIB_Staszow_Swamp","RGrassEffects"}, // marais
			{"LIB_Staszow_Swamp","RDirtEffects"}, // marais
			{"LIB_Staszow_Wheat","RDustEffects"}, // champ de blé jaune non coupé fond terre seche
			{"LIB_Staszow_Wheat","RGrassDryEffects"}, // champ de blé jaune non coupé fond terre seche
			{"LIB_Staszow_Wheat","RDirtEffects"}, // champ de blé jaune non coupé fond terre seche
			{"swu_aachen_corn_field","RDustEffects"}, // Champ herbe
			{"swu_aachen_corn_field","RGrassEffects"}, // Champ herbe
			{"swu_aachen_corn_field","RDirtEffects"}, // Champ herbe
			{"swu_aachen_footsteps","RDustEffects"}, // terreux
			{"swu_aachen_footsteps","RDirtEffects"}, // terreux
			{"swu_aachen_forest","RDustEffects"}, // sous bois herbe
			{"swu_aachen_forest","RGrassEffects"}, // sous bois herbe
			{"swu_aachen_forest","RDirtEffects"}, // sous bois herbe
			{"swu_aachen_main_field","RDustEffects"}, // Champ herbe brun
			{"swu_aachen_main_field","RGrassDryEffects"}, // Champ herbe brun
			{"swu_aachen_main_field","RDirtEffects"}, // Champ herbe brun
			{"swu_aachen_roads","RDustEffects"}, // terreux bord de route
			{"swu_aachen_roads","RDirtEffects"}, // terreux bord de route
			{"swu_berlin_grass","RDustEffects"},
			{"swu_berlin_grass","RGrassEffects"},
			{"swu_berlin_grass","RDirtEffects"},
			{"swu_berlin_main","RDustEffects"},
			{"swu_berlin_main","RDirtEffects"},
			{"SWU_Dunkirk_Roadside","RDustEffects"}, // bord de route herbe terreuse
			{"SWU_Dunkirk_Roadside","RGrassEffects"}, // bord de route herbe terreuse
			{"SWU_Dunkirk_Roadside","RDirtEffects"}, // bord de route herbe terreuse
			{"SWU_Forest_Mud","RDustEffects"}, // sous bois
			{"SWU_Forest_Mud","RGrassEffects"}, // sous bois
			{"SWU_Forest_Mud","RDirtEffects"}, // sous bois
			{"SWU_Grass_Normal","RDustEffects"}, // herbe
			{"SWU_Grass_Normal","RGrassEffects"}, // herbe
			{"SWU_Grass_Normal","RDirtEffects"}, // herbe
			{"SWU_Grassy_Floor","RDustEffects"}, // herbe
			{"SWU_Grassy_Floor","RGrassEffects"}, // herbe
			{"SWU_Grassy_Floor","RDirtEffects"}, // herbe
			{"swu_greece_grass","RDustEffects"}, // Herbe
			{"swu_greece_grass","RGrassEffects"}, // Herbe
			{"swu_greece_grass","RDirtEffects"}, // Herbe
			{"swu_greece_road","RDustEffects"}, // bord de route terre et herbe seche
			{"swu_greece_road","RGrassDryEffects"}, // bord de route terre et herbe seche
			{"swu_greece_road","RDirtEffects"}, // bord de route terre et herbe seche
			{"swu_greece_vinesdust","RDustEffects"}, // Champ herbe très seche
			{"swu_greece_vinesdust","RGrassDryEffects"}, // Champ herbe très seche
			{"swu_greece_vinesdust","RDirtEffects"}, // Champ herbe très seche
			{"swu_greece_woods","RDustEffects"}, // sous bois herebe
			{"swu_greece_woods","RGrassEffects"}, // sous bois herebe
			{"swu_greece_woods","RDirtEffects"}, // sous bois herebe
			{"SWU_Road_Side","RDustEffects"}, // bord de route terreux
			{"SWU_Road_Side","RDirtEffects"}, // bord de route terreux
			{"SWU_Sandy_Floor","RDustEffects"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","RGrassDryEffects"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","RDirtEffects"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","RSandEffects"}, // sol sabloneux avec herbe
			// Fallujah
			{"siFallujahTerra","RDustEffects"},
			{"siFallujahTerra","RSandEffects"},
			{"siFallujahTerra","RDirtEffectsBig"},
			{"siFallujahTerra","RStonesEffects"},
			{"siFallujahAcqua","RDustEffects"},
			{"siFallujahErba","RGrassDryEffects"},
			{"siFallujahErba","RDustEffects"},
			{"siFallujahErba","RDirtEffects"},
			{"siFallujahSabbia","RDustEffects"},
			{"siFallujahSabbia","RSandEffects"},
			{"siFallujahSabbia","RDirtEffectsBig"},
			{"siFallujahSabbia","RStonesEffects"},
			{"siFallujahCitta","RDirtEffects"},
			{"siFallujahCitta","RDustEffects"},
			//N'ziwasogo (projeta 305)
			{"mak305_dirt","RDustEffects"},
			{"mak305_dirt","RDirtEffects"},
			{"mak305_jungle","RDustEffects"},
			{"mak305_jungle","RDirtEffects"},
			{"mak305_jungle","RGrassEffects"},
			{"mak305_dirtgrass","RDustEffects"},
			{"mak305_dirtgrass","RDirtEffects"},
			{"mak305_dirtgrass","RGrassEffects"},
			{"mak305_palm","RDustEffects"},
			{"mak305_palm","RDirtEffects"},
			{"mak305_palm","RGrassDryEffects"},
			{"mak305_palmbroken","RDustEffects"},
			{"mak305_palmbroken","RDirtEffects"},
			{"mak305_palmbroken","RGrassDryEffects"},
			{"mak305_sand","RDustEffects"},
			{"mak305_sand","RDirtEffects"},
			{"mak305_sand","RSandEffects"},
			// Aliabad
			{"AliDirtSurface","RDustEffects"},
			{"AliDirtSurface","RDirtEffectsBig"},
			{"AliSandSurface","RDustEffects"},
			{"AliSandSurface","RSandEffects"},
			{"AliSandSurface","RStonesEffects"},
			{"AliSandSurface","RDirtEffectsBig"},
			{"AliDesertSurface","RDustEffects"},
			{"AliDesertSurface","RSandEffects"},
			{"AliDesertSurface","RStonesEffects"},
			{"AliDesertSurface","RDirtEffectsBig"},
			{"AliForestSurface","RDustEffects"},
			{"AliForestSurface","RDirtEffects"},
			{"AliRockySurface","RDustEffects"},
			{"AliRockySurface","RDirtEffectsBig"},
			{"AliCliffSurface","RDustEffects"},
			{"AliRiverbedSurface","RDustEffects"},
			// HazarKot
			{"FTDirtSurface","RDustEffects"},
			{"FTDirtSurface","RDirtEffectsBig"},
			{"FTSandSurface","RDustEffects"},
			{"FTSandSurface","RSandEffects"},
			{"FTSandSurface","RStonesEffects"},
			{"FTSandSurface","RDirtEffectsBig"},
			{"FTDesertSurface","RDustEffects"},
			{"FTDesertSurface","RSandEffects"},
			{"FTDesertSurface","RStonesEffects"},
			{"FTDesertSurface","RDirtEffectsBig"},
			{"FTForestSurface","RDustEffects"},
			{"FTForestSurface","RDirtEffects"},
			{"FTRockySurface","RDustEffects"},
			{"FTRockySurface","RDirtEffects"},
			// Caribou
			{"CARIBOU_FOREST01","RGrassDryEffects"},
			{"CARIBOU_FOREST01","RDustEffects"},
			{"CARIBOU_FOREST01","RDirtEffects"},
			{"CARIBOU_FOREST02","RDustEffects"},
			{"CARIBOU_FOREST02","RDirtEffects"},
			{"CARIBOU_GRASS01","RGrassDryEffects"},
			{"CARIBOU_GRASS01","RDustEffects"},
			{"CARIBOU_GRASS01","RDirtEffects"},
			{"CARIBOU_GRASS02","RGrassEffects"},
			{"CARIBOU_GRASS02","RDustEffects"},
			{"CARIBOU_GRASS02","RDirtEffects"},
			{"CARIBOU_GRAVEL01","RDirtEffects"},
			{"CARIBOU_GRAVEL01","RDustEffects"},
			{"CARIBOU_GRAVEL02","RDirtEffects"},
			{"CARIBOU_GRAVEL02","RDustEffects"},
			{"CARIBOU_ROCK01","RDirtEffects"},
			{"CARIBOU_ROCK01","RDustEffects"},
			{"CARIBOU_ROCK02","RDirtEffects"},
			{"CARIBOU_ROCK02","RDustEffects"},
			{"CARIBOU_BETON01","RDirtEffects"},
			{"CARIBOU_BETON01","RDustEffects"},
			// Duala
			{"duala_grass","RDustEffects"},
			{"duala_grass","RDirtEffectsBig"},
			{"duala_grass","RStonesEffectsBig"},
			{"duala_grass","RGrassEffectsDryBig"},
			{"duala_rock","RDustEffects"},
			{"duala_rock","RDirtEffectsBig"},
			{"duala_rock","RStonesEffectsBig"},
			{"duala_stones","RDustEffects"},
			{"duala_stones","RGrassEffectsBig"},
			{"duala_stones","RDirtEffectsBig"},
			{"duala_stones","RStonesEffectsBig"},
			{"duala_wood","RDustEffects"},
			{"duala_wood","RDirtEffectsBig"},
			{"duala_wood","RStonesEffectsBig"},
			{"duala_sand","RDustEffects"},
			{"duala_sand","RDirtEffectsBig"},
			{"duala_sand","RStonesEffectsBig"},
			// Podagorsk
			{"FDF_Tex_1","RDirtEffects"},
			{"FDF_Tex_1","RDustEffects"},
			{"FDF_Tex_2","RDustEffects"},
			{"FDF_Tex_2","RGrassEffects"},
			{"FDF_Tex_3","RDirtEffects"},
			{"FDF_Tex_3","RDustEffects"},
			{"FDF_Tex_4","RDirtEffects"},
			{"FDF_Tex_4","RDustEffects"},
			{"FDF_Tex_5","RDirtEffects"},
			{"FDF_Tex_5","RDustEffects"},
			{"FDF_Tex_6","RDirtEffects"},
			{"FDF_Tex_7","RDustEffects"},
			{"FDF_Tex_7","RDirtEffects"},
			{"FDF_Tex_7","RStonesEffects"},
			{"FDF_Tex_8","RDustEffects"},
			{"FDF_Tex_8","RStonesEffects"},
			{"FDF_Tex_9","RDustEffects"},
			{"FDF_Tex_9","RDirtEffects"},
			{"FDF_Tex_9","RStonesEffects"},
			{"FDF_Tex_10","RDustEffects"},
			{"FDF_Tex_11","RDirtEffects"},
			// Zernovo
			{"gsep_creekbedsurface","RDustEffects"},
			{"gsepconcretegroundsurface","RDustEffects"},
			{"gsepdirtsurface","RDustEffects"},
			{"gsepdirtsurface","RDirtEffects"},
			{"gsepforest1surface","RDustEffects"},
			{"gsepforest1surface","RDirtEffects"},
			{"gseptallgrasssurface","RDustEffects"},
			{"gseptallgrasssurface","RDirtEffects"},
			{"gseptallgrasssurface","RGrassEffects"},
			{"gsepshortgrasssurface","RDustEffects"},
			{"gsepshortgrasssurface","RDirtEffects"},
			{"gsepshortgrasssurface","RGrassEffects"},
			{"gsepbarerocksurface","RDustEffects"},
			{"gsepbarerocksurface","RStonesEffects"},
			{"gsepgravelsurface","RDustEffects"},
			{"gsepgravelsurface","RDirtEffects"},
			{"gsephayfieldsurface","RDustEffects"},
			{"gsephayfieldsurface","RDirtEffects"},
			{"gsephayfieldsurface","RGrassEffectsDryBig"},
			{"gsepcropsurface","RDustEffects"},
			{"gsepcropsurface","RDirtEffects"},
			/*
			// Taunus
			{"xcam_grass_green_co","RDustEffects"},
			{"xcam_grass_green_co","RDirtEffects"},
			{"xcam_grass_green_co","RStonesEffects"},
			{"xcam_grass_green_co","RGrassDryEffects"},
			{"xcam_grass_green_co","RGrassEffects"},
			{"xcam_grassbravo_co","RDustEffects"},
			{"xcam_grassbravo_co","RDirtEffects"},
			{"xcam_grassbravo_co","RStonesEffects"},
			{"xcam_grassbravo_co","RGrassDryEffects"},
			{"xcam_grassbravo_co","RGrassEffects"},
			{"xcam_acker_co","RDustEffects"},
			{"xcam_acker_co","RDirtEffects"},
			{"xcam_acker_co","RStonesEffects"},
			{"xcam_acker_co","RGrassDryEffects"},
			{"xcam_acker_co","RGrassEffects"},
			{"xcam_dirt_co","RDustEffects"},
			{"xcam_dirt_co","RDirtEffects"},
			{"xcam_dirt_co","RStonesEffects"},
			{"xcam_dirt_co","RGrassDryEffects"},
			{"xcam_forestground1_co","RDustEffects"},
			{"xcam_forestground1_co","RDirtEffects"},
			{"xcam_forestground1_co","RStonesEffects"},
			{"xcam_forestground1_co","RGrassDryEffects"},
			{"xcam_forestground1_co","RGrassEffects"},
			{"xcam_asfalt_co","RDustEffects"},
			{"xcam_asfalt_co","RDirtEffects"},
			{"xcam_asfalt_co","RStonesEffects"},
			{"xcam_asfalt_co","RGrassDryEffects"},
			*/
			// Thirsk
			{"THgrass2","RDustEffects"},
			{"THgrass2","RDirtEffects"},
			{"THgrass2","RGrassEffects"},
			{"THgrass3","RDustEffects"},
			{"THgrass3","RDirtEffects"},
			{"THgrass3","RGrassDryEffects"},
			{"THForest1","RDustEffects"},
			{"THForest1","RDirtEffects"},
			{"THForest1","RStonesEffects"},
			{"THForest2","RDustEffects"},
			{"THForest2","RDirtEffects"},
			{"THGrit1","RDustEffects"},
			{"THGrit1","RDirtEffects"},
			{"THGrit1","RStonesEffects"},
			{"THBetoni1","RDustEffects"},
			{"THRock","RDustEffects"},
			{"THRock","RStonesEffects"},
			{"THTarmac","RDustEffects"},
			// PKL
			{"bludriver","RDirtEffects"},
			{"bludjungle1","RDirtEffects"},
			{"bludjungle2","RDirtEffects"},
			{"bludjungle3","RDirtEffects"},
			{"bludgressj","RDirtEffects"},
			{"bludgressj","RDustEffects"},
			{"bludgressj","RGrassEffects"},
			{"bludjunglerd1","RDirtEffects"},
			{"bludjunglerd1","RDustEffects"},
			{"bludjunglerd2","RDirtEffects"},
			{"bludjunglerd2","RDustEffects"},
			{"bludrivermaling","RDirtEffects"},
			{"bludrivermaling","RDustEffects"},
			{"blud_sti","RDirtEffects"},
			{"blud_sti","RDustEffects"},
			// Ndjenahoud
			{"mak319_desgrass","RDustEffects"},
			{"mak319_desgrass","RDirtEffects"},
			{"mak319_desgrass","RStonesEffects"},
			{"mak319_stony","RDustEffects"},
			{"mak319_stony","RDirtEffects"},
			{"mak319_stony","RGrassEffects"},
			{"mak308_Dirt","RDustEffects"},
			{"mak308_Dirt","RDirtEffects"},
			{"mak308_Dirt","RGrassEffects"},
			{"mak308_GrassDry","RDustEffects"},
			{"mak308_GrassDry","RDirtEffects"},
			{"mak308_GrassDry","RgrassdryEffects"},
			{"mak319_thorn","RDustEffects"},
			{"mak319_thorn","RDirtEffects"},
			{"mak319_thorn","RgrassdryEffects"},
			{"mak319_desert","RDustEffects"},
			{"mak319_desert","RDirtEffectsBig"},
			{"mak319_desert","RSandEffects"}
		};
		leftDustEffects[] ={
			{"GdtGrassShort","LDustEffects"},
			{"GdtGrassShort","LGrassEffects"},
			{"GdtGrassTall","LDustEffects"},
			{"GdtGrassTall","LGrassEffects"},
			{"GdtRedDirt","LDustEffectsRed"},
			{"GdtField","LDustEffects"},
			{"GdtForest","LDustEffects"},
			{"GdtVolcano","LDustEffects"},
			{"GdtVolcano","LStonesEffects"},
			{"GdtCliff","LDustEffects"},
			{"GdtVolcanoBeach","LDustEffects"},
			{"SurfRoadDirt_exp","LDustEffectsRed"},
			{"SurfRoadConcrete_exp","LDustEffects"},
			{"SurfRoadTarmac_exp","LDustEffects"},
			{"GdtStratisConcrete","LDustEffects"},
			{"GdtStratisConcrete","LDirtEffects"},
			{"GdtStratisBeach","LDustEffects"},
			{"GdtStratisBeach","LStonesEffects"},
			{"GdtStratisDirt","LDustEffects"},
			{"GdtStratisDirt","LDirtEffects"},
			{"GdtStratisSeabedCluttered","LDustEffects"},
			{"GdtStratisSeabed","LDustEffects"},
			{"GdtStratisDryGrass","LDustEffects"},
			{"GdtStratisDryGrass","LGrassDryEffects"},
			{"GdtStratisDryGrass","LDirtEffects"},
			{"GdtStratisGreenGrass","LDustEffects"},
			{"GdtStratisGreenGrass","LGrassEffects"},
			{"GdtStratisGreenGrass","LDirtEffects"},
			{"GdtStratisRocky","LDustEffects"},
			{"GdtStratisRocky","LGrassEffects"},
			{"GdtStratisRocky","LDirtEffects"},
			{"GdtStratisThistles","LDustEffects"},
			{"GdtStratisThistles","LGrassEffects"},
			{"GdtStratisThistles","LDirtEffects"},
			{"GdtConcrete","LDustEffects"},
			{"GdtConcrete","LDirtEffects"},
			{"GdtAsphalt","LDustEffects"},
			{"GdtAsphalt","LDirtEffects"},
			{"GdtRubble","LDustEffects"},
			{"GdtRubble","LGrassEffects"},
			{"GdtRubble","LDirtEffects"},
			{"GdtSoil","LDustEffects"},
			{"GdtSoil","LDirtEffects"},
			{"GdtBeach","LDustEffects"},
			{"GdtBeach","LStonesEffects"},
			{"GdtRock","LDustEffects"},
			{"GdtRock","LDirtEffects"},
			{"GdtDead","LDustEffects"},
			{"GdtDead","LDirtEffects"},
			{"Default","LDustEffects"},
			{"GdtDesert","LDustEffects"},
			{"GdtDesert","LStonesEffects"},
			{"GdtDesert1","LDustEffects"},
			{"GdtDesert1","LSandEffects"},
			{"GdtDesert1","LDirtEffects"},
			{"GdtDesert1","LStonesEffects"},
			{"GdtDesert2","LDustEffects"},
			{"GdtDesert2","LSandEffects"},
			{"GdtDesert2","LGrassEffects"},
			{"GdtDesert2","LDirtEffects"},
			{"GdtDirt","LDustEffects"},
			{"GdtDirt","LDirtEffects"},
			{"GdtGrassGreen","LDustEffects"},
			{"GdtGrassGreen","LGrassEffects"},
			{"GdtGrassGreen","LDirtEffects"},
			{"GdtGrassDry","LDustEffects"},
			{"GdtGrassDry","LGrassDryEffects"},
			{"GdtGrassDry","LDirtEffects"},
			{"GdtGrassWild","LDustEffects"},
			{"GdtGrassWild","LGrassEffects"},
			{"GdtGrassWild","LDirtEffects"},
			{"GdtWildField","LDustEffects"},
			{"GdtWildField","LGrassEffects"},
			{"GdtWildField","LDirtEffects"},
			{"GdtWeed1","LDustEffects"},
			{"GdtWeed1","LGrassEffects"},
			{"GdtWeed1","LDirtEffects"},
			{"GdtWeed2","LDustEffects"},
			{"GdtWeed2","LGrassEffects"},
			{"GdtWeed2","LDirtEffects"},
			{"GdtThorn","LDustEffects"},
			{"GdtThorn","LGrassEffects"},
			{"GdtThorn","LDirtEffects"},
			{"GdtStony","LDustEffects"},
			{"GdtStony","LGrassEffects"},
			{"GdtStony","LDirtEffects"},
			{"GdtStonyGreen","LDustEffects"},
			{"GdtStonyGreen","LGrassEffects"},
			{"GdtStonyGreen","LDirtEffects"},
			{"GdtStonyThistle","LDustEffects"},
			{"GdtStonyThistle","LGrassEffects"},
			{"GdtStonyThistle","LDirtEffects"},
			{"GdtSeabedDeep","LDustEffects"},
			{"GdtSeabed","LDustEffects"},
			{"SurfRoadDirt","LDustEffects"},
			{"SurfRoadConcrete","LDustEffects"},
			{"SurfRoadTarmac","LDustEffects"},
			{"SurfWood","LDustEffects"},
			{"SurfMetal","LDustEffects"},
			{"SurfRoofTin","LDustEffects"},
			{"SurfRoofTiles","LDustEffects"},
			{"SurfIntWood","LDustEffects"},
			{"SurfIntConcrete","LDustEffects"},
			{"SurfIntTiles","LDustEffects"},
			{"SurfIntMetal","LDustEffects"},
			{"dirtrunway","LDustEffects"},
			// CUP TP
			{"CRGrass1","LDustEffects"},
			{"CRGrass1","LGrassEffects"},
			{"CRGrass1","LDirtEffects"},
			{"CRGrass2","LDustEffects"},
			{"CRGrass2","LGrassEffects"},
			{"CRGrass2","LDirtEffects"},
			{"CRGrassW1","LDustEffects"},
			{"CRGrassW1","LGrassEffects"},
			{"CRGrassW1","LDirtEffects"},
			{"CRGrassW2","LDustEffects"},
			{"CRGrassW2","LGrassEffects"},
			{"CRGrassW2","LDirtEffects"},
			{"CRField1","LDustEffects"},
			{"CRField1","LGrassEffects"},
			{"CRField1","LDirtEffects"},
			{"CRField2","LDustEffects"},
			{"CRField2","LGrassEffects"},
			{"CRField2","LDirtEffects"},
			{"CRForest1","LDustEffects"},
			{"CRForest1","LGrassEffects"},
			{"CRForest1","LDirtEffects"},
			{"CRForest2","LDustEffects"},
			{"CRForest2","LGrassEffects"},
			{"CRForest2","LDirtEffects"},
			{"CRGrit1","LDustEffects"},
			{"CRGrit1","LDirtEffects"},
			{"CRHeather","LDustEffects"},
			{"CRHeather","LGrassEffects"},
			{"CRHeather","LDirtEffects"},
			{"CRConcrete","LDirtEffects"},
			{"TKAsfalt","LDirtEffects"},
			{"TKBeton","LDustEffects"},
			{"RoadDirt_EP1","LDustEffects"},
			{"RoadTarmac_EP11","LDirtEffects"},
			{"TKPlevel","LDustEffects"},
			{"TKPlevel","LGrassEffects"},
			{"TKPlevel","LDirtEffects"},
			{"TKPole","LDustEffects"},
			{"TKPole","LGrassDryEffects"},
			{"TKPole","LDirtEffects"},
			{"TKPolopoust","LDustEffects"},
			{"TKPolopoust","LSandEffects"},
			{"TKPolopoust","LDirtEffects"},
			{"TKSkala","LDustEffects"},
			{"TKSkala","LStonesEffects"},
			{"TKSkalniSterk","LDustEffects"},
			{"TKSkalniSterk","LStonesEffects"},
			{"TKSterkNaDno","LDustEffects"},
			{"TKSterkNaDno","LStonesEffects"},
			{"TKMoutain","LDustEffects"},
			{"TKMoutain","LStonesEffects"},
			{"TKValouny","LDustEffects"},
			{"TKValouny","LStonesEffects"},
			{"TKTrava","LDustEffects"},
			{"TKTrava","LGrassDryEffects"},
			{"TKTrava","LDirtEffects"},
			{"TKForest","LDustEffects"},
			{"TKForest","LGrassDryEffects"},
			{"TKForest","LDirtEffects"},
			{"ZRAsfalt","LDirtEffects"},
			{"ZRBeton","LDustEffects"},
			{"ZRPlevel","LDustEffects"},
			{"ZRPlevel","LGrassEffects"},
			{"ZRPlevel","LDirtEffects"},
			{"ZRPole","LDustEffects"},
			{"ZRPole","LGrassDryEffects"},
			{"ZRPole","LDirtEffects"},
			{"ZRPolopoust","LDustEffects"},
			{"ZRPolopoust","LSandEffects"},
			{"ZRPolopoust","LDirtEffects"},
			{"ZRSkala","LDustEffects"},
			{"ZRSkala","LStonesEffects"},
			{"ZRSkalniSterk","LDustEffects"},
			{"ZRSkalniSterk","LStonesEffects"},
			{"ZRSterkNaDno","LDustEffects"},
			{"ZRSterkNaDno","LStonesEffects"},
			{"ZRValouny","LDustEffects"},
			{"ZRValouny","LStonesEffects"},
			{"ZRTrava","LDustEffects"},
			{"ZRTrava","LGrassDryEffects"},
			{"ZRTrava","LDirtEffects"},
			{"DEPolopoust","LDustEffects"},
			{"DEPolopoust","LSandEffects"},
			{"DEPolopoust","LDirtEffects"},
			{"DESkalniSterk","LDustEffects"},
			{"DESkalniSterk","LStonesEffects"},
			{"DETrava","LDustEffects"},
			{"DETrava","LGrassDryEffects"},
			{"DETrava","LDirtEffects"},
			{"WLGrass1","LDustEffects"},
			{"WLGrass1","LGrassEffects"},
			{"WLGrass1","LDirtEffects"},
			{"WLGrass2","LDustEffects"},
			{"WLGrass2","LGrassEffects"},
			{"WLGrass2","LDirtEffects"},
			{"WLGrassW1","LDustEffects"},
			{"WLGrassW1","LGrassEffects"},
			{"WLGrassW1","LDirtEffects"},
			{"WLGrassW2","LDustEffects"},
			{"WLGrassW2","LGrassEffects"},
			{"WLGrassW2","LDirtEffects"},
			{"WLField1","LDustEffects"},
			{"WLField1","LGrassEffects"},
			{"WLField1","LDirtEffects"},
			{"WLField2","LDustEffects"},
			{"WLField2","LGrassEffects"},
			{"WLField2","LDirtEffects"},
			{"WLForest1","LDustEffects"},
			{"WLForest1","LGrassEffects"},
			{"WLForest1","LDirtEffects"},
			{"WLForest2","LDustEffects"},
			{"WLForest2","LGrassEffects"},
			{"WLForest2","LDirtEffects"},
			{"WLMudGround","LDustEffects"},
			{"WLMudGround","LGrassEffects"},
			{"WLMudGround","LDirtEffects"},
			{"WLGrit1","LDustEffects"},
			{"WLGrit1","LDirtEffects"},
			{"WLHeather","LDustEffects"},
			{"WLHeather","LGrassEffects"},
			{"WLHeather","LDirtEffects"},
			{"WLConcrete","LDirtEffects"},
			{"GZTrava","LDustEffects"},
			{"GZTrava","LGrassDryEffects"},
			{"GZTrava","LDirtEffects"},
			{"GZforest","LDustEffects"},
			{"GZForest","LGrassDryEffects"},
			{"GZForest","LDirtEffects"},
			{"GZkameny","LDustEffects"},
			{"GZkameny","LStonesEffects"},
			{"GZHlina","LDustEffects"},
			{"GZHlina","LGrassEffects"},
			{"GZHlina","LDirtEffects"},
			{"BetonNew","LDirtEffects"},
			{"Asf1","LDirtEffects"},
			{"Asf2","LDirtEffects"},
			{"Asf3","LDirtEffects"},
			{"road","LDustEffects"},
			{"Cesta","LDustEffects"},
			// IFA3
			{"I44_Mer_Field","LDustEffects"}, // Champ de blé sol terre
			{"I44_Mer_Field","LGrassEffects"}, // Champ de blé sol terre
			{"I44_Mer_Field","LDirtEffects"}, // Champ de blé sol terre
			{"I44_Mer_Forest","LDustEffects"}, // sol de foret feuilles + herbes
			{"I44_Mer_Forest","LGrassEffects"}, // sol de foret feuilles + herbes
			{"I44_Mer_Forest","LDirtEffects"}, // sol de foret feuilles + herbes
			{"I44_Mer_Grass1","LDustEffects"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass1","LGrassEffects"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass1","LDirtEffects"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass2","LDustEffects"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Grass2","LGrassEffects"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Grass2","LDirtEffects"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Ground","LDustEffects"}, // terre brune bord riviere
			{"I44_Mer_Ground","LDirtEffects"}, // terre brune bord riviere
			{"I44_Nea_Farmdirt","LDustEffects"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmdirt","LGrassDryEffects"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmdirt","LDirtEffects"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmsurface","LDustEffects"}, // Champ en terre + hautes herbes
			{"I44_Nea_Farmsurface","LGrassEffects"}, // Champ en terre + hautes herbes
			{"I44_Nea_Farmsurface","LDirtEffects"}, // Champ en terre + hautes herbes
			{"I44_Nea_Grasssurface","LDustEffects"}, // herbe
			{"I44_Nea_Grasssurface","LGrassEffects"}, // herbe
			{"I44_Nea_Grasssurface","LDirtEffects"}, // herbe
			{"I44_Nea_GravelSurface","LDustEffects"}, // terre nue gravier
			{"I44_Nea_GravelSurface","LDirtEffects"}, // terre nue gravier
			{"I44_Nea_GravelSurface","LStonesEffects"}, // terre nue gravier
			{"I44_Omaha_v2_Brown","LDustEffects"}, // terre + herbes
			{"I44_Omaha_v2_Brown","LGrassEffects"}, // terre + herbes
			{"I44_Omaha_v2_Brown","LDirtEffects"}, // terre + herbes
			{"I44_Omaha_v2_Green","LDustEffects"}, // marron herbe
			{"I44_Omaha_v2_Green","LGrassEffects"}, // marron herbe
			{"I44_Omaha_v2_Green","LDirtEffects"}, // marron herbe
			{"I44_Omaha_v2_Lawn","LDustEffects"}, // vert Herbe
			{"I44_Omaha_v2_Lawn","LGrassEffects"}, // vert Herbe
			{"I44_Omaha_v2_Lawn","LDirtEffects"}, // vert Herbe
			{"LIB_France_Grass","LDustEffects"}, // Herbe bien verte
			{"LIB_France_Grass","LGrassEffects"}, // Herbe bien verte
			{"LIB_France_Grass","LDirtEffects"}, // Herbe bien verte
			{"LIB_France_Poppy","LDustEffects"}, // Coquelicots
			{"LIB_France_Poppy","LGrassEffects"}, // Coquelicots
			{"LIB_France_Poppy","LDirtEffects"}, // Coquelicots
			{"LIB_France_Raps","LDustEffects"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Raps","LGrassEffects"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Raps","LDirtEffects"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Sand","LDustEffects"}, // Sable plage
			{"LIB_France_Sand","LDirtEffects"}, // Sable plage
			{"LIB_France_Sand","LSandEffects"}, // Sable plage
			{"LIB_France_Tillage","LDustEffects"}, // Champ de terre
			{"LIB_France_Tillage","LDirtEffects"}, // Champ de terre
			{"LIB_France_Weed","LDustEffects"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Weed","LGrassDryEffects"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Weed","LDirtEffects"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Wheat","LDustEffects"}, // Champ de blé vert
			{"LIB_France_Wheat","LGrassEffects"}, // Champ de blé vert
			{"LIB_France_Wheat","LDirtEffects"}, // Champ de blé vert
			{"LIB_Staszow_Ambush","LDustEffects"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Ambush","LGrassEffects"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Ambush","LDirtEffects"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Burn","LDustEffects"}, // sol brulé
			{"LIB_Staszow_Burn","LDirtEffectsBig"}, // sol brulé
			{"LIB_Staszow_Forest","LDustEffects"}, // Sous-bois
			{"LIB_Staszow_Forest","LGrassEffects"}, // Sous-bois
			{"LIB_Staszow_Forest","LDirtEffects"}, // Sous-bois
			{"LIB_Staszow_Grass","LDustEffects"}, // herbe verte
			{"LIB_Staszow_Grass","LGrassEffects"}, // herbe verte
			{"LIB_Staszow_Grass","LDirtEffects"}, // herbe verte
			{"LIB_Staszow_Grazy","LDustEffects"},
			{"LIB_Staszow_Grazy","LGrassEffects"},
			{"LIB_Staszow_Grazy","LDirtEffects"},
			{"LIB_Staszow_Oldgrass","LDustEffects"},
			{"LIB_Staszow_Oldgrass","LGrassDryEffects"},
			{"LIB_Staszow_Oldgrass","LDirtEffects"},
			{"LIB_Staszow_Oldwheat","LDustEffects"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Oldwheat","LGrassDryEffects"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Oldwheat","LDirtEffects"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Sand","LDustEffects"}, // Sable
			{"LIB_Staszow_Sand","LDirtEffects"}, // Sable
			{"LIB_Staszow_Sand","LSandEffects"}, // Sable
			{"LIB_Staszow_Swamp","LDustEffects"}, // marais
			{"LIB_Staszow_Swamp","LGrassEffects"}, // marais
			{"LIB_Staszow_Swamp","LDirtEffects"}, // marais
			{"LIB_Staszow_Wheat","LDustEffects"}, // champ de blé jaune non coupé fond terre seche
			{"LIB_Staszow_Wheat","LGrassDryEffects"}, // champ de blé jaune non coupé fond terre seche
			{"LIB_Staszow_Wheat","LDirtEffects"}, // champ de blé jaune non coupé fond terre seche
			{"swu_aachen_corn_field","LDustEffects"}, // Champ herbe
			{"swu_aachen_corn_field","LGrassEffects"}, // Champ herbe
			{"swu_aachen_corn_field","LDirtEffects"}, // Champ herbe
			{"swu_aachen_footsteps","LDustEffects"}, // terreux
			{"swu_aachen_footsteps","LDirtEffects"}, // terreux
			{"swu_aachen_forest","LDustEffects"}, // sous bois herbe
			{"swu_aachen_forest","LGrassEffects"}, // sous bois herbe
			{"swu_aachen_forest","LDirtEffects"}, // sous bois herbe
			{"swu_aachen_main_field","LDustEffects"}, // Champ herbe brun
			{"swu_aachen_main_field","LGrassDryEffects"}, // Champ herbe brun
			{"swu_aachen_main_field","LDirtEffects"}, // Champ herbe brun
			{"swu_aachen_roads","LDustEffects"}, // terreux bord de route
			{"swu_aachen_roads","LDirtEffects"}, // terreux bord de route
			{"swu_berlin_grass","LDustEffects"},
			{"swu_berlin_grass","LGrassEffects"},
			{"swu_berlin_grass","LDirtEffects"},
			{"swu_berlin_main","LDustEffects"},
			{"swu_berlin_main","LDirtEffects"},
			{"SWU_Dunkirk_Roadside","LDustEffects"}, // bord de route herbe terreuse
			{"SWU_Dunkirk_Roadside","LGrassEffects"}, // bord de route herbe terreuse
			{"SWU_Dunkirk_Roadside","LDirtEffects"}, // bord de route herbe terreuse
			{"SWU_Forest_Mud","LDustEffects"}, // sous bois
			{"SWU_Forest_Mud","LGrassEffects"}, // sous bois
			{"SWU_Forest_Mud","LDirtEffects"}, // sous bois
			{"SWU_Grass_Normal","LDustEffects"}, // herbe
			{"SWU_Grass_Normal","LGrassEffects"}, // herbe
			{"SWU_Grass_Normal","LDirtEffects"}, // herbe
			{"SWU_Grassy_Floor","LDustEffects"}, // herbe
			{"SWU_Grassy_Floor","LGrassEffects"}, // herbe
			{"SWU_Grassy_Floor","LDirtEffects"}, // herbe
			{"swu_greece_grass","LDustEffects"}, // Herbe
			{"swu_greece_grass","LGrassEffects"}, // Herbe
			{"swu_greece_grass","LDirtEffects"}, // Herbe
			{"swu_greece_road","LDustEffects"}, // bord de route terre et herbe seche
			{"swu_greece_road","LGrassDryEffects"}, // bord de route terre et herbe seche
			{"swu_greece_road","LDirtEffects"}, // bord de route terre et herbe seche
			{"swu_greece_vinesdust","LDustEffects"}, // Champ herbe très seche
			{"swu_greece_vinesdust","LGrassDryEffects"}, // Champ herbe très seche
			{"swu_greece_vinesdust","LDirtEffects"}, // Champ herbe très seche
			{"swu_greece_woods","LDustEffects"}, // sous bois herebe
			{"swu_greece_woods","LGrassEffects"}, // sous bois herebe
			{"swu_greece_woods","LDirtEffects"}, // sous bois herebe
			{"SWU_Road_Side","LDustEffects"}, // bord de route terreux
			{"SWU_Road_Side","LDirtEffects"}, // bord de route terreux
			{"SWU_Sandy_Floor","LDustEffects"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","LGrassDryEffects"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","LDirtEffects"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","LSandEffects"}, // sol sabloneux avec herbe
			// Fallujah
			{"siFallujahTerra","LDustEffects"},
			{"siFallujahTerra","LDirtEffectsBig"},
			{"siFallujahAcqua","LDustEffects"},
			{"siFallujahErba","LGrassDryEffects"},
			{"siFallujahErba","LDustEffects"},
			{"siFallujahErba","LDirtEffects"},
			{"siFallujahSabbia","LDustEffects"},
			{"siFallujahSabbia","LSandEffects"},
			{"siFallujahSabbia","LDirtEffectsBig"},
			{"siFallujahSabbia","LStonesEffects"},
			{"siFallujahCitta","LDirtEffects"},
			{"siFallujahCitta","LDustEffects"},
			//N'ziwasogo (projeta 305)
			{"mak305_dirt","LDustEffects"},
			{"mak305_dirt","LDirtEffects"},
			{"mak305_jungle","LDustEffects"},
			{"mak305_jungle","LDirtEffects"},
			{"mak305_jungle","LGrassEffects"},
			{"mak305_dirtgrass","LDustEffects"},
			{"mak305_dirtgrass","LDirtEffects"},
			{"mak305_dirtgrass","LGrassEffects"},
			{"mak305_palm","LDustEffects"},
			{"mak305_palm","LDirtEffects"},
			{"mak305_palm","LGrassDryEffects"},
			{"mak305_palmbroken","LDustEffects"},
			{"mak305_palmbroken","LDirtEffects"},
			{"mak305_palmbroken","LGrassDryEffects"},
			{"mak305_sand","LDustEffects"},
			{"mak305_sand","LDirtEffects"},
			{"mak305_sand","LSandEffects"},
			// Aliabad
			{"AliDirtSurface","LDustEffects"},
			{"AliDirtSurface","LDirtEffectsBig"},
			{"AliSandSurface","LDustEffects"},
			{"AliSandSurface","LSandEffects"},
			{"AliSandSurface","LStonesEffects"},
			{"AliSandSurface","LDirtEffectsBig"},
			{"AliDesertSurface","LDustEffects"},
			{"AliDesertSurface","LSandEffects"},
			{"AliDesertSurface","LStonesEffects"},
			{"AliDesertSurface","LDirtEffectsBig"},
			{"AliForestSurface","LDustEffects"},
			{"AliForestSurface","LDirtEffects"},
			{"AliRockySurface","LDustEffects"},
			{"AliRockySurface","LDirtEffectsBig"},
			{"AliCliffSurface","LDustEffects"},
			{"AliRiverbedSurface","LDustEffects"},
			// HazarKot
			{"FTDirtSurface","LDustEffects"},
			{"FTDirtSurface","LDirtEffectsBig"},
			{"FTSandSurface","LDustEffects"},
			{"FTSandSurface","LSandEffects"},
			{"FTSandSurface","LStonesEffects"},
			{"FTSandSurface","LDirtEffectsBig"},
			{"FTDesertSurface","LDustEffects"},
			{"FTDesertSurface","LSandEffects"},
			{"FTDesertSurface","LStonesEffects"},
			{"FTDesertSurface","LDirtEffectsBig"},
			{"FTForestSurface","LDustEffects"},
			{"FTForestSurface","LDirtEffects"},
			{"FTRockySurface","LDustEffects"},
			{"FTRockySurface","LDirtEffects"},
			// Caribou
			{"CARIBOU_FOREST01","LGrassDryEffects"},
			{"CARIBOU_FOREST01","LDustEffects"},
			{"CARIBOU_FOREST01","LDirtEffects"},
			{"CARIBOU_FOREST02","LDustEffects"},
			{"CARIBOU_FOREST02","LDirtEffects"},
			{"CARIBOU_GRASS01","LGrassDryEffects"},
			{"CARIBOU_GRASS01","LDustEffects"},
			{"CARIBOU_GRASS01","LDirtEffects"},
			{"CARIBOU_GRASS02","LGrassEffects"},
			{"CARIBOU_GRASS02","LDustEffects"},
			{"CARIBOU_GRASS02","LDirtEffects"},
			{"CARIBOU_GRAVEL01","LDirtEffects"},
			{"CARIBOU_GRAVEL01","LDustEffects"},
			{"CARIBOU_GRAVEL02","LDirtEffects"},
			{"CARIBOU_GRAVEL02","LDustEffects"},
			{"CARIBOU_ROCK01","LDirtEffects"},
			{"CARIBOU_ROCK01","LDustEffects"},
			{"CARIBOU_ROCK02","LDirtEffects"},
			{"CARIBOU_ROCK02","LDustEffects"},
			{"CARIBOU_BETON01","LDirtEffects"},
			{"CARIBOU_BETON01","LDustEffects"},
			// Duala
			{"duala_grass","LDustEffects"},
			{"duala_grass","LDirtEffectsBig"},
			{"duala_grass","LStonesEffectsBig"},
			{"duala_grass","LGrassEffectsDryBig"},
			{"duala_rock","LDustEffects"},
			{"duala_rock","LDirtEffectsBig"},
			{"duala_rock","LStonesEffectsBig"},
			{"duala_stones","LDustEffects"},
			{"duala_stones","LGrassEffectsBig"},
			{"duala_stones","LDirtEffectsBig"},
			{"duala_stones","LStonesEffectsBig"},
			{"duala_wood","LDustEffects"},
			{"duala_wood","LDirtEffectsBig"},
			{"duala_wood","LStonesEffectsBig"},
			{"duala_sand","LDustEffects"},
			{"duala_sand","LDirtEffectsBig"},
			{"duala_sand","LStonesEffectsBig"},
			// Podagorsk
			{"FDF_Tex_1","LDirtEffects"},
			{"FDF_Tex_1","LDustEffects"},
			{"FDF_Tex_2","LDustEffects"},
			{"FDF_Tex_2","LGrassEffects"},
			{"FDF_Tex_3","LDirtEffects"},
			{"FDF_Tex_3","LDustEffects"},
			{"FDF_Tex_4","LDirtEffects"},
			{"FDF_Tex_4","LDustEffects"},
			{"FDF_Tex_5","LDirtEffects"},
			{"FDF_Tex_5","LDustEffects"},
			{"FDF_Tex_6","LDirtEffects"},
			{"FDF_Tex_7","LDustEffects"},
			{"FDF_Tex_7","LDirtEffects"},
			{"FDF_Tex_7","LStonesEffects"},
			{"FDF_Tex_8","LDustEffects"},
			{"FDF_Tex_8","LStonesEffects"},
			{"FDF_Tex_9","LDustEffects"},
			{"FDF_Tex_9","LDirtEffects"},
			{"FDF_Tex_9","LStonesEffects"},
			{"FDF_Tex_10","LDustEffects"},
			{"FDF_Tex_11","LDirtEffects"},
			// Zernovo
			{"gsep_creekbedsurface","LDustEffects"},
			{"gsepconcretegroundsurface","LDustEffects"},
			{"gsepdirtsurface","LDustEffects"},
			{"gsepdirtsurface","LDirtEffects"},
			{"gsepforest1surface","LDustEffects"},
			{"gsepforest1surface","LDirtEffects"},
			{"gseptallgrasssurface","LDustEffects"},
			{"gseptallgrasssurface","LDirtEffects"},
			{"gseptallgrasssurface","LGrassEffects"},
			{"gsepshortgrasssurface","LDustEffects"},
			{"gsepshortgrasssurface","LDirtEffects"},
			{"gsepshortgrasssurface","LGrassEffects"},
			{"gsepbarerocksurface","LDustEffects"},
			{"gsepbarerocksurface","LStonesEffects"},
			{"gsepgravelsurface","LDustEffects"},
			{"gsepgravelsurface","LDirtEffects"},
			{"gsephayfieldsurface","LDustEffects"},
			{"gsephayfieldsurface","LDirtEffects"},
			{"gsephayfieldsurface","LGrassEffectsDryBig"},
			{"gsepcropsurface","LDustEffects"},
			{"gsepcropsurface","LDirtEffects"},
			/*
			// Taunus
			{"xcam_grass_green_co","LDustEffects"},
			{"xcam_grass_green_co","LDirtEffects"},
			{"xcam_grass_green_co","LStonesEffects"},
			{"xcam_grass_green_co","LGrassDryEffects"},
			{"xcam_grass_green_co","LGrassEffects"},
			{"xcam_grassbravo_co","LDustEffects"},
			{"xcam_grassbravo_co","LDirtEffects"},
			{"xcam_grassbravo_co","LStonesEffects"},
			{"xcam_grassbravo_co","LGrassDryEffects"},
			{"xcam_grassbravo_co","LGrassEffects"},
			{"xcam_acker_co","LDustEffects"},
			{"xcam_acker_co","LDirtEffects"},
			{"xcam_acker_co","LStonesEffects"},
			{"xcam_acker_co","LGrassDryEffects"},
			{"xcam_acker_co","LGrassEffects"},
			{"xcam_dirt_co","LDustEffects"},
			{"xcam_dirt_co","LDirtEffects"},
			{"xcam_dirt_co","LStonesEffects"},
			{"xcam_dirt_co","LGrassDryEffects"},
			{"xcam_forestground1_co","LDustEffects"},
			{"xcam_forestground1_co","LDirtEffects"},
			{"xcam_forestground1_co","LStonesEffects"},
			{"xcam_forestground1_co","LGrassDryEffects"},
			{"xcam_forestground1_co","LGrassEffects"},
			{"xcam_asfalt_co","LDustEffects"},
			{"xcam_asfalt_co","LDirtEffects"},
			{"xcam_asfalt_co","LStonesEffects"},
			{"xcam_asfalt_co","LGrassDryEffects"},
			*/
			// Thirsk
			{"THgrass2","LDustEffects"},
			{"THgrass2","LDirtEffects"},
			{"THgrass2","LGrassEffects"},
			{"THgrass3","LDustEffects"},
			{"THgrass3","LDirtEffects"},
			{"THgrass3","LGrassDryEffects"},
			{"THForest1","LDustEffects"},
			{"THForest1","LDirtEffects"},
			{"THForest1","LStonesEffects"},
			{"THForest2","LDustEffects"},
			{"THForest2","LDirtEffects"},
			{"THGrit1","LDustEffects"},
			{"THGrit1","LDirtEffects"},
			{"THGrit1","LStonesEffects"},
			{"THBetoni1","LDustEffects"},
			{"THRock","LDustEffects"},
			{"THRock","LStonesEffects"},
			{"THTarmac","LDustEffects"},
			// PKL
			{"bludriver","LDirtEffects"},
			{"bludjungle1","LDirtEffects"},
			{"bludjungle2","LDirtEffects"},
			{"bludjungle3","LDirtEffects"},
			{"bludgressj","LDirtEffects"},
			{"bludgressj","LDustEffects"},
			{"bludgressj","LGrassEffects"},
			{"bludjunglerd1","LDirtEffects"},
			{"bludjunglerd1","LDustEffects"},
			{"bludjunglerd2","LDirtEffects"},
			{"bludjunglerd2","LDustEffects"},
			{"bludrivermaling","LDirtEffects"},
			{"bludrivermaling","LDustEffects"},
			{"blud_sti","LDirtEffects"},
			{"blud_sti","LDustEffects"},
			// Ndjenahoud
			{"mak319_desgrass","LDustEffects"},
			{"mak319_desgrass","LDirtEffects"},
			{"mak319_desgrass","LStonesEffects"},
			{"mak319_stony","LDustEffects"},
			{"mak319_stony","LDirtEffects"},
			{"mak319_stony","LGrassEffects"},
			{"mak308_Dirt","LDustEffects"},
			{"mak308_Dirt","LDirtEffects"},
			{"mak308_Dirt","LGrassEffects"},
			{"mak308_GrassDry","LDustEffects"},
			{"mak308_GrassDry","LDirtEffects"},
			{"mak308_GrassDry","LgrassdryEffects"},
			{"mak319_thorn","LDustEffects"},
			{"mak319_thorn","LDirtEffects"},
			{"mak319_thorn","LgrassdryEffects"},
			{"mak319_desert","LDustEffects"},
			{"mak319_desert","LDirtEffectsBig"},
			{"mak319_desert","LSandEffects"}
		};
	};
	class Tank: LandVehicle
	{
		rightDustEffects[] =
		{
			{"GdtGrassShort","RDustEffects"},
			{"GdtGrassShort","RGrassEffectsBig"},
			{"GdtGrassTall","RDustEffects"},
			{"GdtGrassTall","RGrassEffectsBig"},
			{"GdtRedDirt","RDustEffectsRed"},
			{"GdtField","RDustEffects"},
			{"GdtForest","RDustEffects"},
			{"GdtVolcano","RDustEffects"},
			{"GdtVolcano","RStonesEffectsBig"},
			{"GdtCliff","RDustEffects"},
			{"GdtVolcanoBeach","RDustEffects"},
			{"SurfRoadDirt_exp","RDustEffectsRed"},
			{"SurfRoadConcrete_exp","RDustEffects"},
			{"SurfRoadTarmac_exp","RDustEffects"},
			{"GdtStratisConcrete","RDustEffects"},
			{"GdtStratisConcrete","RDirtEffectsBig"},
			{"GdtStratisBeach","RDustEffects"},
			{"GdtStratisBeach","RStonesEffectsBig"},
			{"GdtStratisDirt","RDustEffects"},
			{"GdtStratisDirt","RDirtEffectsBig"},
			{"GdtStratisSeabedCluttered","RDustEffects"},
			{"GdtStratisSeabed","RDustEffects"},
			{"GdtStratisDryGrass","RDustEffects"},
			{"GdtStratisDryGrass","RGrassEffectsDryBig"},
			{"GdtStratisDryGrass","RDirtEffectsBig"},
			{"GdtStratisGreenGrass","RDustEffects"},
			{"GdtStratisGreenGrass","RGrassEffectsBig"},
			{"GdtStratisGreenGrass","RDirtEffectsBig"},
			{"GdtStratisRocky","RDustEffects"},
			{"GdtStratisRocky","RGrassEffectsBig"},
			{"GdtStratisRocky","RDirtEffectsBig"},
			{"GdtStratisThistles","RDustEffects"},
			{"GdtStratisThistles","RGrassEffectsBig"},
			{"GdtStratisThistles","RDirtEffectsBig"},
			{"GdtConcrete","RDustEffects"},
			{"GdtConcrete","RDirtEffectsBig"},
			{"GdtAsphalt","RDustEffects"},
			{"GdtAsphalt","RDirtEffectsBig"},
			{"GdtRubble","RDustEffects"},
			{"GdtRubble","RDirtEffectsBig"},
			{"GdtSoil","RDustEffects"},
			{"GdtSoil","RDirtEffectsBig"},
			{"GdtBeach","RDustEffects"},
			{"GdtBeach","RStonesEffectsBig"},
			{"GdtRock","RDustEffects"},
			{"GdtRock","RDirtEffectsBig"},
			{"GdtDead","RDustEffects"},
			{"GdtDead","RDirtEffectsBig"},
			{"Default","RDustEffects"},
			{"GdtDesert","RDustEffects"},
			{"GdtDesert","RDirtEffectsBig"},
			{"GdtDesert","RStonesEffects"},
			{"GdtDesert1","RDustEffects"},
			{"GdtDesert1","RDirtEffectsBig"},
			{"GdtDesert1","RStonesEffectsBig"},
			{"GdtDesert2","RDustEffects"},
			{"GdtDesert2","RGrassEffectsBig"},
			{"GdtDesert2","RDirtEffectsBig"},
			{"GdtDirt","RDustEffects"},
			{"GdtDirt","RDirtEffectsBig"},
			{"GdtGrassGreen","RDustEffects"},
			{"GdtGrassGreen","RGrassEffectsBig"},
			{"GdtGrassGreen","RDirtEffectsBig"},
			{"GdtGrassDry","RDustEffects"},
			{"GdtGrassDry","RGrassEffectsDryBig"},
			{"GdtGrassDry","RDirtEffectsBig"},
			{"GdtGrassWild","RDustEffects"},
			{"GdtGrassWild","RGrassEffectsBig"},
			{"GdtGrassWild","RDirtEffectsBig"},
			{"GdtWildField","RDustEffects"},
			{"GdtWildField","RGrassEffectsBig"},
			{"GdtWildField","RDirtEffectsBig"},
			{"GdtWeed1","RDustEffects"},
			{"GdtWeed1","RGrassEffectsBig"},
			{"GdtWeed1","RDirtEffectsBig"},
			{"GdtWeed2","RDustEffects"},
			{"GdtWeed2","RGrassEffectsBig"},
			{"GdtWeed2","RDirtEffectsBig"},
			{"GdtThorn","RDustEffects"},
			{"GdtThorn","RGrassEffectsBig"},
			{"GdtThorn","RDirtEffectsBig"},
			{"GdtStony","RDustEffects"},
			{"GdtStony","RGrassEffectsBig"},
			{"GdtStony","RDirtEffectsBig"},
			{"GdtStonyGreen","RDustEffects"},
			{"GdtStonyGreen","RGrassEffectsBig"},
			{"GdtStonyGreen","RDirtEffectsBig"},
			{"GdtStonyThistle","RDustEffects"},
			{"GdtStonyThistle","RGrassEffectsBig"},
			{"GdtStonyThistle","RDirtEffectsBig"},
			{"GdtSeabedDeep","RDustEffects"},
			{"GdtSeabed","RDustEffects"},
			{"SurfRoadDirt","RDustEffects"},
			{"SurfRoadConcrete","RDustEffects"},
			{"SurfRoadTarmac","RDustEffects"},
			{"SurfWood","RDustEffects"},
			{"SurfMetal","RDustEffects"},
			{"SurfRoofTin","RDustEffects"},
			{"SurfRoofTiles","RDustEffects"},
			{"SurfIntWood","RDustEffects"},
			{"SurfIntConcrete","RDustEffects"},
			{"SurfIntTiles","RDustEffects"},
			{"SurfIntMetal","RDustEffects"},
			{"dirtrunway","RDustEffects"},
			// CUP TP
			{"CRGrass1","RDustEffects"},
			{"CRGrass1","RGrassEffectsBig"},
			{"CRGrass1","RDirtEffectsBig"},
			{"CRGrass2","RDustEffects"},
			{"CRGrass2","RGrassEffectsBig"},
			{"CRGrass2","RDirtEffectsBig"},
			{"CRGrassW1","RDustEffects"},
			{"CRGrassW1","RGrassEffectsBig"},
			{"CRGrassW1","RDirtEffectsBig"},
			{"CRGrassW2","RDustEffects"},
			{"CRGrassW2","RGrassEffectsBig"},
			{"CRGrassW2","RDirtEffectsBig"},
			{"CRField1","RDustEffects"},
			{"CRField1","RGrassEffectsBig"},
			{"CRField1","RDirtEffectsBig"},
			{"CRField2","RDustEffects"},
			{"CRField2","RGrassEffectsBig"},
			{"CRField2","RDirtEffectsBig"},
			{"CRForest1","RDustEffects"},
			{"CRForest1","RGrassEffectsBig"},
			{"CRForest1","RDirtEffectsBig"},
			{"CRForest2","RDustEffects"},
			{"CRForest2","RGrassEffectsBig"},
			{"CRForest2","RDirtEffectsBig"},
			{"CRGrit1","RDustEffects"},
			{"CRGrit1","RDirtEffectsBig"},
			{"CRHeather","RDustEffects"},
			{"CRHeather","RGrassEffectsBig"},
			{"CRHeather","RDirtEffectsBig"},
			{"CRConcrete","RDirtEffectsBig"},
			{"TKAsfalt","RDirtEffectsBig"},
			{"TKBeton","RDustEffects"},
			{"TKPlevel","RDustEffects"},
			{"TKPlevel","RGrassEffectsBig"},
			{"TKPlevel","RDirtEffectsBig"},
			{"TKPole","RDustEffects"},
			{"TKPole","RGrassEffectsDryBig"},
			{"TKPole","RDirtEffectsBig"},
			{"TKPolopoust","RDustEffects"},
			{"TKPolopoust","RSandEffects"},
			{"TKPolopoust","RDirtEffectsBig"},
			{"TKSkala","RDustEffects"},
			{"TKSkala","RStonesEffects"},
			{"TKSkalniSterk","RDustEffects"},
			{"TKSkalniSterk","RStonesEffects"},
			{"TKSterkNaDno","RDustEffects"},
			{"TKSterkNaDno","RStonesEffects"},
			{"TKMoutain","RDustEffects"},
			{"TKMoutain","RStonesEffects"},
			{"TKValouny","RDustEffects"},
			{"TKValouny","RStonesEffects"},
			{"TKTrava","RDustEffects"},
			{"TKTrava","RGrassEffectsDryBig"},
			{"TKTrava","RDirtEffectsBig"},
			{"TKForest","RDustEffects"},
			{"TKForest","RGrassEffectsDryBig"},
			{"TKForest","RDirtEffectsBig"},
			{"ZRAsfalt","RDirtEffectsBig"},
			{"ZRBeton","RDustEffects"},
			{"RoadDirt_EP1","RDustEffects"},
			{"RoadTarmac_EP1","RDirtEffectsBig"},
			{"ZRPlevel","RDustEffects"},
			{"ZRPlevel","RGrassEffectsBig"},
			{"ZRPlevel","RDirtEffectsBig"},
			{"ZRPole","RDustEffects"},
			{"ZRPole","RGrassEffectsDryBig"},
			{"ZRPole","RDirtEffectsBig"},
			{"ZRPolopoust","RDustEffects"},
			{"ZRPolopoust","RSandEffects"},
			{"ZRPolopoust","RDirtEffectsBig"},
			{"ZRSkala","RDustEffects"},
			{"ZRSkala","RStonesEffects"},
			{"ZRSkalniSterk","RDustEffects"},
			{"ZRSkalniSterk","RStonesEffects"},
			{"ZRSterkNaDno","RDustEffects"},
			{"ZRSterkNaDno","RStonesEffects"},
			{"ZRValouny","RDustEffects"},
			{"ZRValouny","RStonesEffects"},
			{"ZRTrava","RDustEffects"},
			{"ZRTrava","RGrassEffectsDryBig"},
			{"ZRTrava","RDirtEffectsBig"},
			{"DEPolopoust","RDustEffects"},
			{"DEPolopoust","RSandEffects"},
			{"DEPolopoust","RDirtEffectsBig"},
			{"DESkalniSterk","RDustEffects"},
			{"DESkalniSterk","RStonesEffects"},
			{"DETrava","RDustEffects"},
			{"DETrava","RGrassEffectsDryBig"},
			{"DETrava","RDirtEffectsBig"},
			{"WLGrass1","RDustEffects"},
			{"WLGrass1","RGrassEffectsBig"},
			{"WLGrass1","RDirtEffectsBig"},
			{"WLGrass2","RDustEffects"},
			{"WLGrass2","RGrassEffectsBig"},
			{"WLGrass2","RDirtEffectsBig"},
			{"WLGrassW1","RDustEffects"},
			{"WLGrassW1","RGrassEffectsBig"},
			{"WLGrassW1","RDirtEffectsBig"},
			{"WLGrassW2","RDustEffects"},
			{"WLGrassW2","RGrassEffectsBig"},
			{"WLGrassW2","RDirtEffectsBig"},
			{"WLField1","RDustEffects"},
			{"WLField1","RGrassEffectsBig"},
			{"WLField1","RDirtEffectsBig"},
			{"WLField2","RDustEffects"},
			{"WLField2","RGrassEffectsBig"},
			{"WLField2","RDirtEffectsBig"},
			{"WLForest1","RDustEffects"},
			{"WLForest1","RGrassEffectsBig"},
			{"WLForest1","RDirtEffectsBig"},
			{"WLForest2","RDustEffects"},
			{"WLForest2","RGrassEffectsBig"},
			{"WLForest2","RDirtEffectsBig"},
			{"WLMudGround","RDustEffects"},
			{"WLMudGround","RGrassEffectsBig"},
			{"WLMudGround","RDirtEffectsBig"},
			{"WLGrit1","RDustEffects"},
			{"WLGrit1","RDirtEffectsBig"},
			{"WLHeather","RDustEffects"},
			{"WLHeather","RGrassEffectsBig"},
			{"WLHeather","RDirtEffectsBig"},
			{"WLConcrete","RDirtEffectsBig"},
			{"GZTrava","RDustEffects"},
			{"GZTrava","RGrassEffectsDryBig"},
			{"GZTrava","RDirtEffectsBig"},
			{"GZforest","RDustEffects"},
			{"GZforest","RGrassEffectsDryBig"},
			{"GZforest","RDirtEffectsBig"},
			{"GZkameny","RDustEffects"},
			{"GZkameny","RStonesEffects"},
			{"GZHlina","RDustEffects"},
			{"GZHlina","RGrassEffectsBig"},
			{"GZHlina","RDirtEffectsBig"},
			{"BetonNew","RDirtEffectsBig"},
			{"Asf1","RDirtEffectsBig"},
			{"Asf2","RDirtEffectsBig"},
			{"Asf3","RDirtEffectsBig"},
			{"road","RDustEffects"},
			// IFA3
			{"I44_Mer_Field","RDustEffects"}, // Champ de blé sol terre
			{"I44_Mer_Field","RGrassEffectsBig"}, // Champ de blé sol terre
			{"I44_Mer_Field","RDirtEffectsBig"}, // Champ de blé sol terre
			{"I44_Mer_Forest","RDustEffects"}, // sol de foret feuilles + herbes
			{"I44_Mer_Forest","RGrassEffectsBig"}, // sol de foret feuilles + herbes
			{"I44_Mer_Forest","RDirtEffectsBig"}, // sol de foret feuilles + herbes
			{"I44_Mer_Grass1","RDustEffects"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass1","RGrassEffectsBig"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass1","RDirtEffectsBig"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass2","RDustEffects"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Grass2","RGrassEffectsBig"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Grass2","RDirtEffectsBig"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Ground","RDustEffects"}, // terre brune bord riviere
			{"I44_Mer_Ground","RDirtEffectsBig"}, // terre brune bord riviere
			{"I44_Nea_Farmdirt","RDustEffects"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmdirt","RGrassEffectsDryBig"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmdirt","RDirtEffectsBig"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmsurface","RDustEffects"}, // Champ en terre + hautes herbes
			{"I44_Nea_Farmsurface","RGrassEffectsBig"}, // Champ en terre + hautes herbes
			{"I44_Nea_Farmsurface","RDirtEffectsBig"}, // Champ en terre + hautes herbes
			{"I44_Nea_Grasssurface","RDustEffects"}, // herbe
			{"I44_Nea_Grasssurface","RGrassEffectsBig"}, // herbe
			{"I44_Nea_Grasssurface","RDirtEffectsBig"}, // herbe
			{"I44_Nea_GravelSurface","RDustEffects"}, // terre nue gravier
			{"I44_Nea_GravelSurface","RDirtEffectsBig"}, // terre nue gravier
			{"I44_Nea_GravelSurface","RStonesEffects"}, // terre nue gravier
			{"I44_Omaha_v2_Brown","RDustEffects"}, // terre + herbes
			{"I44_Omaha_v2_Brown","RGrassEffectsBig"}, // terre + herbes
			{"I44_Omaha_v2_Brown","RDirtEffectsBig"}, // terre + herbes
			{"I44_Omaha_v2_Green","RDustEffects"}, // marron herbe
			{"I44_Omaha_v2_Green","RGrassEffectsBig"}, // marron herbe
			{"I44_Omaha_v2_Green","RDirtEffectsBig"}, // marron herbe
			{"I44_Omaha_v2_Lawn","RDustEffects"}, // vert Herbe
			{"I44_Omaha_v2_Lawn","RGrassEffectsBig"}, // vert Herbe
			{"I44_Omaha_v2_Lawn","RDirtEffectsBig"}, // vert Herbe
			{"LIB_France_Grass","RDustEffects"}, // Herbe bien verte
			{"LIB_France_Grass","RGrassEffectsBig"}, // Herbe bien verte
			{"LIB_France_Grass","RDirtEffectsBig"}, // Herbe bien verte
			{"LIB_France_Poppy","RDustEffects"}, // Coquelicots
			{"LIB_France_Poppy","RGrassEffectsBig"}, // Coquelicots
			{"LIB_France_Poppy","RDirtEffectsBig"}, // Coquelicots
			{"LIB_France_Raps","RDustEffects"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Raps","RGrassEffectsBig"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Raps","RDirtEffectsBig"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Sand","RDustEffects"}, // Sable plage
			{"LIB_France_Sand","RDirtEffectsBig"}, // Sable plage
			{"LIB_France_Sand","RSandEffects"}, // Sable plage
			{"LIB_France_Tillage","RDustEffects"}, // Champ de terre
			{"LIB_France_Tillage","RDirtEffectsBig"}, // Champ de terre
			{"LIB_France_Weed","RDustEffects"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Weed","RGrassEffectsDryBig"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Weed","RDirtEffectsBig"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Wheat","RDustEffects"}, // Champ de blé vert
			{"LIB_France_Wheat","RGrassEffectsBig"}, // Champ de blé vert
			{"LIB_France_Wheat","RDirtEffectsBig"}, // Champ de blé vert
			{"LIB_Staszow_Ambush","RDustEffects"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Ambush","RGrassEffectsBig"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Ambush","RDirtEffectsBig"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Burn","RDustEffects"}, // sol brulé
			{"LIB_Staszow_Burn","RDirtEffectsBig"}, // sol brulé
			{"LIB_Staszow_Forest","RDustEffects"}, // Sous-bois
			{"LIB_Staszow_Forest","RGrassEffectsBig"}, // Sous-bois
			{"LIB_Staszow_Forest","RDirtEffectsBig"}, // Sous-bois
			{"LIB_Staszow_Grass","RDustEffects"}, // herbe verte
			{"LIB_Staszow_Grass","RGrassEffectsBig"}, // herbe verte
			{"LIB_Staszow_Grass","RDirtEffectsBig"}, // herbe verte
			{"LIB_Staszow_Grazy","RDustEffects"},
			{"LIB_Staszow_Grazy","RGrassEffectsBig"},
			{"LIB_Staszow_Grazy","RDirtEffectsBig"},
			{"LIB_Staszow_Oldgrass","RDustEffects"},
			{"LIB_Staszow_Oldgrass","RGrassEffectsDryBig"},
			{"LIB_Staszow_Oldgrass","RDirtEffectsBig"},
			{"LIB_Staszow_Oldwheat","RDustEffects"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Oldwheat","RGrassEffectsDryBig"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Oldwheat","RDirtEffectsBig"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Sand","RDustEffects"}, // Sable
			{"LIB_Staszow_Sand","RDirtEffectsBig"}, // Sable
			{"LIB_Staszow_Sand","RSandEffects"}, // Sable
			{"LIB_Staszow_Swamp","RDustEffects"}, // marais
			{"LIB_Staszow_Swamp","RGrassEffectsBig"}, // marais
			{"LIB_Staszow_Swamp","RDirtEffectsBig"}, // marais
			{"LIB_Staszow_Wheat","RDustEffects"}, // champ de blé jaune non coupé fond terre seche
			{"LIB_Staszow_Wheat","RGrassEffectsDryBig"}, // champ de blé jaune non coupé fond terre seche
			{"LIB_Staszow_Wheat","RDirtEffectsBig"}, // champ de blé jaune non coupé fond terre seche
			{"swu_aachen_corn_field","RDustEffects"}, // Champ herbe
			{"swu_aachen_corn_field","RGrassEffectsBig"}, // Champ herbe
			{"swu_aachen_corn_field","RDirtEffectsBig"}, // Champ herbe
			{"swu_aachen_footsteps","RDustEffects"}, // terreux
			{"swu_aachen_footsteps","RDirtEffectsBig"}, // terreux
			{"swu_aachen_forest","RDustEffects"}, // sous bois herbe
			{"swu_aachen_forest","RGrassEffectsBig"}, // sous bois herbe
			{"swu_aachen_forest","RDirtEffectsBig"}, // sous bois herbe
			{"swu_aachen_main_field","RDustEffects"}, // Champ herbe brun
			{"swu_aachen_main_field","RGrassEffectsDryBig"}, // Champ herbe brun
			{"swu_aachen_main_field","RDirtEffectsBig"}, // Champ herbe brun
			{"swu_aachen_roads","RDustEffects"}, // terreux bord de route
			{"swu_aachen_roads","RDirtEffectsBig"}, // terreux bord de route
			{"swu_berlin_grass","RDustEffects"},
			{"swu_berlin_grass","RGrassEffectsBig"},
			{"swu_berlin_grass","RDirtEffectsBig"},
			{"swu_berlin_main","RDustEffects"},
			{"swu_berlin_main","RDirtEffectsBig"},
			{"SWU_Dunkirk_Roadside","RDustEffects"}, // bord de route herbe terreuse
			{"SWU_Dunkirk_Roadside","RGrassEffectsBig"}, // bord de route herbe terreuse
			{"SWU_Dunkirk_Roadside","RDirtEffectsBig"}, // bord de route herbe terreuse
			{"SWU_Forest_Mud","RDustEffects"}, // sous bois
			{"SWU_Forest_Mud","RGrassEffectsBig"}, // sous bois
			{"SWU_Forest_Mud","RDirtEffectsBig"}, // sous bois
			{"SWU_Grass_Normal","RDustEffects"}, // herbe
			{"SWU_Grass_Normal","RGrassEffectsBig"}, // herbe
			{"SWU_Grass_Normal","RDirtEffectsBig"}, // herbe
			{"SWU_Grassy_Floor","RDustEffects"}, // herbe
			{"SWU_Grassy_Floor","RGrassEffectsBig"}, // herbe
			{"SWU_Grassy_Floor","RDirtEffectsBig"}, // herbe
			{"swu_greece_grass","RDustEffects"}, // Herbe
			{"swu_greece_grass","RGrassEffectsBig"}, // Herbe
			{"swu_greece_grass","RDirtEffectsBig"}, // Herbe
			{"swu_greece_road","RDustEffects"}, // bord de route terre et herbe seche
			{"swu_greece_road","RGrassEffectsDryBig"}, // bord de route terre et herbe seche
			{"swu_greece_road","RDirtEffectsBig"}, // bord de route terre et herbe seche
			{"swu_greece_vinesdust","RDustEffects"}, // Champ herbe très seche
			{"swu_greece_vinesdust","v"}, // Champ herbe très seche
			{"swu_greece_vinesdust","RDirtEffectsBig"}, // Champ herbe très seche
			{"swu_greece_woods","RDustEffects"}, // sous bois herebe
			{"swu_greece_woods","RGrassEffectsBig"}, // sous bois herebe
			{"swu_greece_woods","RDirtEffectsBig"}, // sous bois herebe
			{"SWU_Road_Side","RDustEffects"}, // bord de route terreux
			{"SWU_Road_Side","RDirtEffectsBig"}, // bord de route terreux
			{"SWU_Sandy_Floor","RDustEffects"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","RGrassEffectsDryBig"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","RDirtEffectsBig"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","RSandEffects"}, // sol sabloneux avec herbe
			// Fallujah
			{"siFallujahTerra","RDustEffects"},
			{"siFallujahTerra","RDirtEffectsBig"},
			{"siFallujahAcqua","RDustEffects"},
			{"siFallujahErba","RGrassEffectsDryBig"},
			{"siFallujahErba","RDustEffects"},
			{"siFallujahErba","RDirtEffectsBig"},
			{"siFallujahSabbia","RDustEffects"},
			{"siFallujahSabbia","RDirtEffectsBig"},
			{"siFallujahSabbia","RStonesEffectsBig"},
			{"siFallujahCitta","RDirtEffectsBig"},
			{"siFallujahCitta","RDustEffects"},
			//N'ziwasogo (projeta 305)
			{"mak305_dirt","RDustEffects"},
			{"mak305_dirt","RDirtEffectsBig"},
			{"mak305_jungle","RDustEffects"},
			{"mak305_jungle","RDirtEffectsBig"},
			{"mak305_jungle","RGrassEffectsBig"},
			{"mak305_dirtgrass","RDustEffects"},
			{"mak305_dirtgrass","RDirtEffectsBig"},
			{"mak305_dirtgrass","RGrassEffectsBig"},
			{"mak305_palm","RDustEffects"},
			{"mak305_palm","RDirtEffectsBig"},
			{"mak305_palm","RGrassEffectsDryBig"},
			{"mak305_palmbroken","RDustEffects"},
			{"mak305_palmbroken","RDirtEffectsBig"},
			{"mak305_palmbroken","RGrassEffectsDryBig"},
			{"mak305_sand","RDustEffects"},
			{"mak305_sand","RDirtEffectsBig"},
			{"mak305_sand","RSandEffects"},
			// Aliabad
			{"AliDirtSurface","RDustEffects"},
			{"AliDirtSurface","RDirtEffectsBig"},
			{"AliSandSurface","RDustEffects"},
			{"AliSandSurface","RStonesEffectsBig"},
			{"AliSandSurface","RDirtEffectsBig"},
			{"AliDesertSurface","RDustEffects"},
			{"AliDesertSurface","RStonesEffectsBig"},
			{"AliDesertSurface","RDirtEffectsBig"},
			{"AliForestSurface","RDustEffects"},
			{"AliForestSurface","RDirtEffectsBig"},
			{"AliRockySurface","RDustEffects"},
			{"AliRockySurface","RDirtEffectsBig"},
			{"AliCliffSurface","RDustEffects"},
			{"AliRiverbedSurface","RDustEffects"},
			// HazarKot
			{"FTDirtSurface","RDustEffects"},
			{"FTDirtSurface","RDirtEffectsBig"},
			{"FTSandSurface","RDustEffects"},
			{"FTSandSurface","RStonesEffectsBig"},
			{"FTSandSurface","RDirtEffectsBig"},
			{"FTDesertSurface","RDustEffects"},
			{"FTDesertSurface","RStonesEffectsBig"},
			{"FTDesertSurface","RDirtEffectsBig"},
			{"FTForestSurface","RDustEffects"},
			{"FTForestSurface","RDirtEffectsBig"},
			{"FTRockySurface","RDustEffects"},
			{"FTRockySurface","RDirtEffectsBig"},
			// Caribou
			{"CARIBOU_FOREST01","RDustEffects"},
			{"CARIBOU_FOREST01","RDirtEffectsBig"},
			{"CARIBOU_FOREST02","RDustEffects"},
			{"CARIBOU_FOREST02","RDirtEffectsBig"},
			{"CARIBOU_GRASS01","RGrassEffectsDryBig"},
			{"CARIBOU_GRASS01","RDustEffects"},
			{"CARIBOU_GRASS01","RDirtEffectsBig"},
			{"CARIBOU_GRASS02","RGrassEffects"},
			{"CARIBOU_GRASS02","RDustEffects"},
			{"CARIBOU_GRASS02","RDirtEffectsBig"},
			{"CARIBOU_GRAVEL01","RDirtEffectsBig"},
			{"CARIBOU_GRAVEL01","RDustEffects"},
			{"CARIBOU_GRAVEL02","RDirtEffectsBig"},
			{"CARIBOU_GRAVEL02","RDustEffects"},
			{"CARIBOU_ROCK01","RDirtEffectsBig"},
			{"CARIBOU_ROCK01","RDustEffects"},
			{"CARIBOU_ROCK02","RDirtEffectsBig"},
			{"CARIBOU_ROCK02","RDustEffects"},
			{"CARIBOU_BETON01","RDirtEffectsBig"},
			{"CARIBOU_BETON01","RDustEffects"},
			// Duala
			{"duala_grass","RDustEffects"},
			{"duala_grass","RDirtEffectsBig"},
			{"duala_grass","RStonesEffectsBig"},
			{"duala_grass","RGrassEffectsDryBig"},
			{"duala_rock","RDustEffects"},
			{"duala_rock","RDirtEffectsBig"},
			{"duala_rock","RStonesEffectsBig"},
			{"duala_stones","RDustEffects"},
			{"duala_stones","RGrassEffectsBig"},
			{"duala_stones","RDirtEffectsBig"},
			{"duala_stones","RStonesEffectsBig"},
			{"duala_wood","RDustEffects"},
			{"duala_wood","RDirtEffectsBig"},
			{"duala_wood","RStonesEffectsBig"},
			{"duala_sand","RDustEffects"},
			{"duala_sand","RDirtEffectsBig"},
			{"duala_sand","RStonesEffectsBig"},
			// Podagorsk
			{"FDF_Tex_1","RDirtEffectsBig"},
			{"FDF_Tex_1","RDustEffects"},
			{"FDF_Tex_2","RDustEffects"},
			{"FDF_Tex_2","RGrassEffectsBig"},
			{"FDF_Tex_3","RDirtEffectsBig"},
			{"FDF_Tex_3","RDustEffects"},
			{"FDF_Tex_4","RDirtEffectsBig"},
			{"FDF_Tex_4","RDustEffects"},
			{"FDF_Tex_5","RDirtEffectsBig"},
			{"FDF_Tex_5","RDustEffects"},
			{"FDF_Tex_6","RDirtEffectsBig"},
			{"FDF_Tex_7","RDustEffects"},
			{"FDF_Tex_7","RDirtEffectsBig"},
			{"FDF_Tex_7","RStonesEffectsBig"},
			{"FDF_Tex_8","RDustEffects"},
			{"FDF_Tex_8","RStonesEffectsBig"},
			{"FDF_Tex_9","RDustEffects"},
			{"FDF_Tex_9","RDirtEffectsBig"},
			{"FDF_Tex_9","RStonesEffectsBig"},
			{"FDF_Tex_10","RDustEffects"},
			{"FDF_Tex_11","RDirtEffectsBig"},
			// Zernovo
			{"gsep_creekbedsurface","RDustEffects"},
			{"gsepconcretegroundsurface","RDustEffects"},
			{"gsepdirtsurface","RDustEffects"},
			{"gsepdirtsurface","RDirtEffectsBig"},
			{"gsepforest1surface","RDustEffects"},
			{"gsepforest1surface","RDirtEffectsBig"},
			{"gseptallgrasssurface","RDustEffects"},
			{"gseptallgrasssurface","RDirtEffectsBig"},
			{"gseptallgrasssurface","RGrassEffects"},
			{"gsepshortgrasssurface","RDustEffects"},
			{"gsepshortgrasssurface","RDirtEffectsBig"},
			{"gsepshortgrasssurface","RGrassEffects"},
			{"gsepbarerocksurface","RDustEffects"},
			{"gsepbarerocksurface","RStonesEffectsBig"},
			{"gsepgravelsurface","RDustEffects"},
			{"gsepgravelsurface","RDirtEffectsBig"},
			{"gsephayfieldsurface","RDustEffects"},
			{"gsephayfieldsurface","RDirtEffectsBig"},
			{"gsephayfieldsurface","RGrassEffectsDryBig"},
			{"gsepcropsurface","RDustEffects"},
			{"gsepcropsurface","RDirtEffectsBig"},
			/*
			// Taunus
			{"xcam_grass_green_co","RStonesEffectsBig"},
			{"xcam_grass_green_co","RDirtEffectsBig"},
			{"xcam_grass_green_co","RGrassEffectsDryBig"},
			{"xcam_grass_green_co","RGrassEffectsBig"},
			{"xcam_grass_green_co","RDustEffects"},
			{"xcam_grassbravo_co","RStonesEffectsBig"},
			{"xcam_grassbravo_co","RDirtEffectsBig"},
			{"xcam_grassbravo_co","RGrassEffectsDryBig"},
			{"xcam_grassbravo_co","RGrassEffectsBig"},
			{"xcam_grassbravo_co","RDustEffects"},
			{"xcam_acker_co","RStonesEffectsBig"},
			{"xcam_acker_co","RDirtEffectsBig"},
			{"xcam_acker_co","RGrassEffectsDryBig"},
			{"xcam_acker_co","RGrassEffectsBig"},
			{"xcam_acker_co","RDustEffects"},
			{"xcam_dirt_co","RStonesEffectsBig"},
			{"xcam_dirt_co","RDirtEffectsBig"},
			{"xcam_dirt_co","RGrassEffectsDryBig"},
			{"xcam_dirt_co","RDustEffects"},
			{"xcam_forestground1_co","RStonesEffectsBig"},
			{"xcam_forestground1_co","RDirtEffectsBig"},
			{"xcam_forestground1_co","RGrassEffectsDryBig"},
			{"xcam_forestground1_co","RGrassEffectsBig"},
			{"xcam_forestground1_co","RDustEffects"},
			{"xcam_asfalt_co","RStonesEffectsBig"},
			{"xcam_asfalt_co","RDirtEffectsBig"},
			{"xcam_asfalt_co","RGrassEffectsDryBig"},
			{"xcam_asfalt_co","RDustEffects"},
			*/
			// Thirsk
			{"THgrass2","RDustEffects"},
			{"THgrass2","RDirtEffectsBig"},
			{"THgrass2","RGrassEffectsBig"},
			{"THgrass3","RDustEffects"},
			{"THgrass3","RDirtEffectsBig"},
			{"THgrass3","RGrassEffectsDryBig"},
			{"THForest1","RDustEffects"},
			{"THForest1","RDirtEffectsBig"},
			{"THForest1","RStonesEffectsBig"},
			{"THForest2","RDustEffects"},
			{"THForest2","RDirtEffectsBig"},
			{"THGrit1","RDustEffects"},
			{"THGrit1","RDirtEffectsBig"},
			{"THGrit1","RStonesEffectsBig"},
			{"THBetoni1","RDustEffects"},
			{"THRock","RDustEffects"},
			{"THRock","RStonesEffectsBig"},
			{"THTarmac","RDustEffects"},
			// PKL
			{"bludriver","RDirtEffectsBig"},
			{"bludjungle1","RDirtEffectsBig"},
			{"bludjungle2","RDirtEffectsBig"},
			{"bludjungle3","RDirtEffectsBig"},
			{"bludgressj","RDirtEffectsBig"},
			{"bludgressj","RDustEffects"},
			{"bludgressj","RGrassEffectsBig"},
			{"bludjunglerd1","RDirtEffectsBig"},
			{"bludjunglerd1","RDustEffects"},
			{"bludjunglerd2","RDirtEffectsBig"},
			{"bludjunglerd2","RDustEffects"},
			{"bludrivermaling","RDirtEffectsBig"},
			{"bludrivermaling","RDustEffects"},
			{"blud_sti","RDirtEffectsBig"},
			{"blud_sti","RDustEffects"},
			// Ndjenahoud
			{"mak319_desgrass","RDustEffects"},
			{"mak319_desgrass","RDirtEffectsBig"},
			{"mak319_desgrass","RStonesEffectsBig"},
			{"mak319_stony","RDustEffects"},
			{"mak319_stony","RDirtEffectsBig"},
			{"mak319_stony","RGrassEffectsBig"},
			{"mak308_Dirt","RDustEffects"},
			{"mak308_Dirt","RDirtEffectsBig"},
			{"mak308_Dirt","RGrassEffectsBig"},
			{"mak308_GrassDry","RDustEffects"},
			{"mak308_GrassDry","RDirtEffectsBig"},
			{"mak308_GrassDry","RGrassEffectsDryBig"},
			{"mak319_thorn","RDustEffects"},
			{"mak319_thorn","RDirtEffectsBig"},
			{"mak319_thorn","RGrassEffectsDryBig"},
			{"mak319_desert","RDustEffects"},
			{"mak319_desert","RDirtEffectsBig"},
			{"mak319_desert","RStonesEffectsBig"}
		};
		leftDustEffects[] =
		{
			{"GdtGrassShort","LDustEffects"},
			{"GdtGrassShort","LGrassEffectsBig"},
			{"GdtGrassTall","LDustEffects"},
			{"GdtGrassTall","LGrassEffectsBig"},
			{"GdtRedDirt","LDustEffectsRed"},
			{"GdtField","LDustEffects"},
			{"GdtForest","LDustEffects"},
			{"GdtVolcano","LDustEffects"},
			{"GdtVolcano","LStonesEffectsBig"},
			{"GdtCliff","LDustEffects"},
			{"GdtVolcanoBeach","LDustEffects"},
			{"SurfRoadDirt_exp","LDustEffectsRed"},
			{"SurfRoadConcrete_exp","LDustEffects"},
			{"SurfRoadTarmac_exp","LDustEffects"},
			{"GdtStratisConcrete","LDustEffects"},
			{"GdtStratisConcrete","LDirtEffectsBig"},
			{"GdtStratisBeach","LDustEffects"},
			{"GdtStratisBeach","LStonesEffectsBig"},
			{"GdtStratisDirt","LDustEffects"},
			{"GdtStratisDirt","LDirtEffectsBig"},
			{"GdtStratisSeabedCluttered","LDustEffects"},
			{"GdtStratisSeabed","LDustEffects"},
			{"GdtStratisDryGrass","LDustEffects"},
			{"GdtStratisDryGrass","LGrassEffectsDryBig"},
			{"GdtStratisDryGrass","LDirtEffectsBig"},
			{"GdtStratisGreenGrass","LDustEffects"},
			{"GdtStratisGreenGrass","LGrassEffectsBig"},
			{"GdtStratisGreenGrass","LDirtEffectsBig"},
			{"GdtStratisRocky","LDustEffects"},
			{"GdtStratisRocky","LGrassEffectsBig"},
			{"GdtStratisRocky","LDirtEffectsBig"},
			{"GdtStratisThistles","LDustEffects"},
			{"GdtStratisThistles","LGrassEffectsBig"},
			{"GdtStratisThistles","LDirtEffectsBig"},
			{"GdtConcrete","LDustEffects"},
			{"GdtConcrete","LDirtEffectsBig"},
			{"GdtAsphalt","LDustEffects"},
			{"GdtAsphalt","LDirtEffectsBig"},
			{"GdtRubble","LDustEffects"},
			{"GdtRubble","LGrassEffectsBig"},
			{"GdtRubble","LDirtEffectsBig"},
			{"GdtSoil","LDustEffects"},
			{"GdtSoil","LDirtEffectsBig"},
			{"GdtBeach","LDustEffects"},
			{"GdtBeach","LStonesEffectsBig"},
			{"GdtRock","LDustEffects"},
			{"GdtRock","LDirtEffectsBig"},
			{"GdtDead","LDustEffects"},
			{"GdtDead","LDirtEffectsBig"},
			{"Default","LDustEffects"},
			{"GdtDesert","LDustEffects"},
			{"GdtDesert","LDirtEffectsBig"},
			{"GdtDesert","LStonesEffects"},
			{"GdtDesert1","LDustEffects"},
			{"GdtDesert1","LDirtEffectsBig"},
			{"GdtDesert1","LStonesEffectsBig"},
			{"GdtDesert2","LDustEffects"},
			{"GdtDesert2","LGrassEffectsBig"},
			{"GdtDesert2","LDirtEffectsBig"},
			{"GdtDirt","LDustEffects"},
			{"GdtDirt","LDirtEffectsBig"},
			{"GdtGrassGreen","LDustEffects"},
			{"GdtGrassGreen","LGrassEffectsBig"},
			{"GdtGrassGreen","LDirtEffectsBig"},
			{"GdtGrassDry","LDustEffects"},
			{"GdtGrassDry","LGrassEffectsDryBig"},
			{"GdtGrassDry","LDirtEffectsBig"},
			{"GdtGrassWild","LDustEffects"},
			{"GdtGrassWild","LGrassEffectsBig"},
			{"GdtGrassWild","LDirtEffectsBig"},
			{"GdtWildField","LDustEffects"},
			{"GdtWildField","LGrassEffectsBig"},
			{"GdtWildField","LDirtEffectsBig"},
			{"GdtWeed1","LDustEffects"},
			{"GdtWeed1","LGrassEffectsBig"},
			{"GdtWeed1","LDirtEffectsBig"},
			{"GdtWeed2","LDustEffects"},
			{"GdtWeed2","LGrassEffectsBig"},
			{"GdtWeed2","LDirtEffectsBig"},
			{"GdtThorn","LDustEffects"},
			{"GdtThorn","LGrassEffectsBig"},
			{"GdtThorn","LDirtEffectsBig"},
			{"GdtStony","LDustEffects"},
			{"GdtStony","LGrassEffectsBig"},
			{"GdtStony","LDirtEffectsBig"},
			{"GdtStonyGreen","LDustEffects"},
			{"GdtStonyGreen","LGrassEffectsBig"},
			{"GdtStonyGreen","LDirtEffectsBig"},
			{"GdtStonyThistle","LDustEffects"},
			{"GdtStonyThistle","LGrassEffectsBig"},
			{"GdtStonyThistle","LDirtEffectsBig"},
			{"GdtSeabedDeep","LDustEffects"},
			{"GdtSeabed","LDustEffects"},
			{"SurfRoadDirt","LDustEffects"},
			{"SurfRoadConcrete","LDustEffects"},
			{"SurfRoadTarmac","LDustEffects"},
			{"SurfWood","LDustEffects"},
			{"SurfMetal","LDustEffects"},
			{"SurfRoofTin","LDustEffects"},
			{"SurfRoofTiles","LDustEffects"},
			{"SurfIntWood","LDustEffects"},
			{"SurfIntConcrete","LDustEffects"},
			{"SurfIntTiles","LDustEffects"},
			{"SurfIntMetal","LDustEffects"},
			{"dirtrunway","LDustEffects"},
			// CUP TP
			{"CRGrass1","LDustEffects"},
			{"CRGrass1","LGrassEffectsBig"},
			{"CRGrass1","LDirtEffectsBig"},
			{"CRGrass2","LDustEffects"},
			{"CRGrass2","LGrassEffectsBig"},
			{"CRGrass2","LDirtEffectsBig"},
			{"CRGrassW1","LDustEffects"},
			{"CRGrassW1","LGrassEffectsBig"},
			{"CRGrassW1","LDirtEffectsBig"},
			{"CRGrassW2","LDustEffects"},
			{"CRGrassW2","LGrassEffectsBig"},
			{"CRGrassW2","LDirtEffectsBig"},
			{"CRField1","LDustEffects"},
			{"CRField1","LGrassEffectsBig"},
			{"CRField1","LDirtEffectsBig"},
			{"CRField2","LDustEffects"},
			{"CRField2","LGrassEffectsBig"},
			{"CRField2","LDirtEffectsBig"},
			{"CRForest1","LDustEffects"},
			{"CRForest1","LGrassEffectsBig"},
			{"CRForest1","LDirtEffectsBig"},
			{"CRForest2","LDustEffects"},
			{"CRForest2","LGrassEffectsBig"},
			{"CRForest2","LDirtEffectsBig"},
			{"CRGrit1","LDustEffects"},
			{"CRGrit1","LDirtEffectsBig"},
			{"CRHeather","LDustEffects"},
			{"CRHeather","LGrassEffectsBig"},
			{"CRHeather","LDirtEffectsBig"},
			{"CRConcrete","LDirtEffectsBig"},
			{"TKAsfalt","LDirtEffectsBig"},
			{"TKBeton","LDustEffects"},
			{"RoadDirt_EP1","LDustEffects"},
			{"RoadTarmac_EP11","LDirtEffectsBig"},
			{"TKPlevel","LDustEffects"},
			{"TKPlevel","LGrassEffectsBig"},
			{"TKPlevel","LDirtEffectsBig"},
			{"TKPole","LDustEffects"},
			{"TKPole","LGrassEffectsDryBig"},
			{"TKPole","LDirtEffectsBig"},
			{"TKPolopoust","LDustEffects"},
			{"TKPolopoust","LSandEffects"},
			{"TKPolopoust","LDirtEffectsBig"},
			{"TKSkala","LDustEffects"},
			{"TKSkala","LStonesEffectsBig"},
			{"TKSkalniSterk","LDustEffects"},
			{"TKSkalniSterk","LStonesEffectsBig"},
			{"TKSterkNaDno","LDustEffects"},
			{"TKSterkNaDno","LStonesEffectsBig"},
			{"TKMoutain","LDustEffects"},
			{"TKMoutain","LStonesEffectsBig"},
			{"TKValouny","LDustEffects"},
			{"TKValouny","LStonesEffectsBig"},
			{"TKTrava","LDustEffects"},
			{"TKTrava","LGrassEffectsDryBig"},
			{"TKTrava","LDirtEffectsBig"},
			{"TKForest","LDustEffects"},
			{"TKForest","LGrassEffectsDryBig"},
			{"TKForest","LDirtEffectsBig"},
			{"ZRAsfalt","LDirtEffectsBig"},
			{"ZRBeton","LDustEffects"},
			{"ZRPlevel","LDustEffects"},
			{"ZRPlevel","LGrassEffectsBig"},
			{"ZRPlevel","LDirtEffectsBig"},
			{"ZRPole","LDustEffects"},
			{"ZRPole","LGrassEffectsDryBig"},
			{"ZRPole","LDirtEffectsBig"},
			{"ZRPolopoust","LDustEffects"},
			{"ZRPolopoust","LSandEffects"},
			{"ZRPolopoust","LDirtEffectsBig"},
			{"ZRSkala","LDustEffects"},
			{"ZRSkala","LStonesEffectsBig"},
			{"ZRSkalniSterk","LDustEffects"},
			{"ZRSkalniSterk","LStonesEffectsBig"},
			{"ZRSterkNaDno","LDustEffects"},
			{"ZRSterkNaDno","LStonesEffectsBig"},
			{"ZRValouny","LDustEffects"},
			{"ZRValouny","LStonesEffectsBig"},
			{"ZRTrava","LDustEffects"},
			{"ZRTrava","LGrassEffectsDryBig"},
			{"ZRTrava","LDirtEffectsBig"},
			{"DEPolopoust","LDustEffects"},
			{"DEPolopoust","LSandEffects"},
			{"DEPolopoust","LDirtEffectsBig"},
			{"DESkalniSterk","LDustEffects"},
			{"DESkalniSterk","LStonesEffectsBig"},
			{"DETrava","LDustEffects"},
			{"DETrava","LGrassEffectsDryBig"},
			{"DETrava","LDirtEffectsBig"},
			{"WLGrass1","LDustEffects"},
			{"WLGrass1","LGrassEffectsBig"},
			{"WLGrass1","LDirtEffectsBig"},
			{"WLGrass2","LDustEffects"},
			{"WLGrass2","LGrassEffectsBig"},
			{"WLGrass2","LDirtEffectsBig"},
			{"WLGrassW1","LDustEffects"},
			{"WLGrassW1","LGrassEffectsBig"},
			{"WLGrassW1","LDirtEffectsBig"},
			{"WLGrassW2","LDustEffects"},
			{"WLGrassW2","LGrassEffectsBig"},
			{"WLGrassW2","LDirtEffectsBig"},
			{"WLField1","LDustEffects"},
			{"WLField1","LGrassEffectsBig"},
			{"WLField1","LDirtEffectsBig"},
			{"WLField2","LDustEffects"},
			{"WLField2","LGrassEffectsBig"},
			{"WLField2","LDirtEffectsBig"},
			{"WLForest1","LDustEffects"},
			{"WLForest1","LGrassEffectsBig"},
			{"WLForest1","LDirtEffectsBig"},
			{"WLForest2","LDustEffects"},
			{"WLForest2","LGrassEffectsBig"},
			{"WLForest2","LDirtEffectsBig"},
			{"WLMudGround","LDustEffects"},
			{"WLMudGround","LGrassEffectsBig"},
			{"WLMudGround","LDirtEffectsBig"},
			{"WLGrit1","LDustEffects"},
			{"WLGrit1","LDirtEffectsBig"},
			{"WLHeather","LDustEffects"},
			{"WLHeather","LGrassEffectsBig"},
			{"WLHeather","LDirtEffectsBig"},
			{"WLConcrete","LDirtEffectsBig"},
			{"GZTrava","LDustEffects"},
			{"GZTrava","LGrassEffectsDryBig"},
			{"GZTrava","LDirtEffectsBig"},
			{"GZforest","LDustEffects"},
			{"GZForest","LGrassEffectsDryBig"},
			{"GZForest","LDirtEffectsBig"},
			{"GZkameny","LDustEffects"},
			{"GZkameny","LStonesEffectsBig"},
			{"GZHlina","LDustEffects"},
			{"GZHlina","LGrassEffectsBig"},
			{"GZHlina","LDirtEffectsBig"},
			{"BetonNew","LDirtEffectsBig"},
			{"Asf1","LDirtEffectsBig"},
			{"Asf2","LDirtEffectsBig"},
			{"Asf3","LDirtEffectsBig"},
			{"road","LDustEffects"},
			{"Cesta","LDustEffects"},
			// IFA3
			{"I44_Mer_Field","LDustEffects"}, // Champ de blé sol terre
			{"I44_Mer_Field","LGrassEffectsBig"}, // Champ de blé sol terre
			{"I44_Mer_Field","LDirtEffectsBig"}, // Champ de blé sol terre
			{"I44_Mer_Forest","LDustEffects"}, // sol de foret feuilles + herbes
			{"I44_Mer_Forest","LGrassEffectsBig"}, // sol de foret feuilles + herbes
			{"I44_Mer_Forest","LDirtEffectsBig"}, // sol de foret feuilles + herbes
			{"I44_Mer_Grass1","LDustEffects"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass1","LGrassEffectsBig"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass1","LDirtEffectsBig"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass2","LDustEffects"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Grass2","LGrassEffectsBig"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Grass2","LDirtEffectsBig"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Ground","LDustEffects"}, // terre brune bord riviere
			{"I44_Mer_Ground","LDirtEffectsBig"}, // terre brune bord riviere
			{"I44_Nea_Farmdirt","LDustEffects"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmdirt","LGrassEffectsDryBig"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmdirt","LDirtEffectsBig"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmsurface","LDustEffects"}, // Champ en terre + hautes herbes
			{"I44_Nea_Farmsurface","LGrassEffectsBig"}, // Champ en terre + hautes herbes
			{"I44_Nea_Farmsurface","LDirtEffectsBig"}, // Champ en terre + hautes herbes
			{"I44_Nea_Grasssurface","LDustEffects"}, // herbe
			{"I44_Nea_Grasssurface","LGrassEffectsBig"}, // herbe
			{"I44_Nea_Grasssurface","LDirtEffectsBig"}, // herbe
			{"I44_Nea_GravelSurface","LDustEffects"}, // terre nue gravier
			{"I44_Nea_GravelSurface","LDirtEffectsBig"}, // terre nue gravier
			{"I44_Nea_GravelSurface","LStonesEffects"}, // terre nue gravier
			{"I44_Omaha_v2_Brown","LDustEffects"}, // terre + herbes
			{"I44_Omaha_v2_Brown","LGrassEffectsBig"}, // terre + herbes
			{"I44_Omaha_v2_Brown","LDirtEffectsBig"}, // terre + herbes
			{"I44_Omaha_v2_Green","LDustEffects"}, // marron herbe
			{"I44_Omaha_v2_Green","LGrassEffectsBig"}, // marron herbe
			{"I44_Omaha_v2_Green","LDirtEffectsBig"}, // marron herbe
			{"I44_Omaha_v2_Lawn","LDustEffects"}, // vert Herbe
			{"I44_Omaha_v2_Lawn","LGrassEffectsBig"}, // vert Herbe
			{"I44_Omaha_v2_Lawn","LDirtEffectsBig"}, // vert Herbe
			{"LIB_France_Grass","LDustEffects"}, // Herbe bien verte
			{"LIB_France_Grass","LGrassEffectsBig"}, // Herbe bien verte
			{"LIB_France_Grass","LDirtEffectsBig"}, // Herbe bien verte
			{"LIB_France_Poppy","LDustEffects"}, // Coquelicots
			{"LIB_France_Poppy","LGrassEffectsBig"}, // Coquelicots
			{"LIB_France_Poppy","LDirtEffectsBig"}, // Coquelicots
			{"LIB_France_Raps","LDustEffects"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Raps","LGrassEffectsBig"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Raps","LDirtEffectsBig"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Sand","LDustEffects"}, // Sable plage
			{"LIB_France_Sand","LDirtEffectsBig"}, // Sable plage
			{"LIB_France_Sand","LSandEffects"}, // Sable plage
			{"LIB_France_Tillage","LDustEffects"}, // Champ de terre
			{"LIB_France_Tillage","LDirtEffectsBig"}, // Champ de terre
			{"LIB_France_Weed","LDustEffects"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Weed","LGrassEffectsDryBig"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Weed","LDirtEffectsBig"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Wheat","LDustEffects"}, // Champ de blé vert
			{"LIB_France_Wheat","LGrassEffectsBig"}, // Champ de blé vert
			{"LIB_France_Wheat","LDirtEffectsBig"}, // Champ de blé vert
			{"LIB_Staszow_Ambush","LDustEffects"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Ambush","LGrassEffectsBig"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Ambush","LDirtEffectsBig"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Burn","LDustEffects"}, // sol brulé
			{"LIB_Staszow_Burn","LDirtEffectsBig"}, // sol brulé
			{"LIB_Staszow_Forest","LDustEffects"}, // Sous-bois
			{"LIB_Staszow_Forest","LGrassEffectsBig"}, // Sous-bois
			{"LIB_Staszow_Forest","LDirtEffectsBig"}, // Sous-bois
			{"LIB_Staszow_Grass","LDustEffects"}, // herbe verte
			{"LIB_Staszow_Grass","LGrassEffectsBig"}, // herbe verte
			{"LIB_Staszow_Grass","LDirtEffectsBig"}, // herbe verte
			{"LIB_Staszow_Grazy","LDustEffects"},
			{"LIB_Staszow_Grazy","LGrassEffectsBig"},
			{"LIB_Staszow_Grazy","LDirtEffectsBig"},
			{"LIB_Staszow_Oldgrass","LDustEffects"},
			{"LIB_Staszow_Oldgrass","LGrassEffectsDryBig"},
			{"LIB_Staszow_Oldgrass","LDirtEffectsBig"},
			{"LIB_Staszow_Oldwheat","LDustEffects"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Oldwheat","LGrassEffectsDryBig"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Oldwheat","LDirtEffectsBig"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Sand","LDustEffects"}, // Sable
			{"LIB_Staszow_Sand","LDirtEffectsBig"}, // Sable
			{"LIB_Staszow_Sand","LSandEffects"}, // Sable
			{"LIB_Staszow_Swamp","LDustEffects"}, // marais
			{"LIB_Staszow_Swamp","LGrassEffectsBig"}, // marais
			{"LIB_Staszow_Swamp","LDirtEffectsBig"}, // marais
			{"LIB_Staszow_Wheat","LDustEffects"}, // champ de blé jaune non coupé fond terre seche
			{"LIB_Staszow_Wheat","LGrassEffectsDryBig"}, // champ de blé jaune non coupé fond terre seche
			{"LIB_Staszow_Wheat","LDirtEffectsBig"}, // champ de blé jaune non coupé fond terre seche
			{"swu_aachen_corn_field","LDustEffects"}, // Champ herbe
			{"swu_aachen_corn_field","LGrassEffectsBig"}, // Champ herbe
			{"swu_aachen_corn_field","LDirtEffectsBig"}, // Champ herbe
			{"swu_aachen_footsteps","LDustEffects"}, // terreux
			{"swu_aachen_footsteps","LDirtEffectsBig"}, // terreux
			{"swu_aachen_forest","LDustEffects"}, // sous bois herbe
			{"swu_aachen_forest","LGrassEffectsBig"}, // sous bois herbe
			{"swu_aachen_forest","LDirtEffectsBig"}, // sous bois herbe
			{"swu_aachen_main_field","LDustEffects"}, // Champ herbe brun
			{"swu_aachen_main_field","LGrassEffectsDryBig"}, // Champ herbe brun
			{"swu_aachen_main_field","LDirtEffectsBig"}, // Champ herbe brun
			{"swu_aachen_roads","LDustEffects"}, // terreux bord de route
			{"swu_aachen_roads","LDirtEffectsBig"}, // terreux bord de route
			{"swu_berlin_grass","LDustEffects"},
			{"swu_berlin_grass","LGrassEffectsBig"},
			{"swu_berlin_grass","LDirtEffectsBig"},
			{"swu_berlin_main","LDustEffects"},
			{"swu_berlin_main","LDirtEffectsBig"},
			{"SWU_Dunkirk_Roadside","LDustEffects"}, // bord de route herbe terreuse
			{"SWU_Dunkirk_Roadside","LGrassEffectsBig"}, // bord de route herbe terreuse
			{"SWU_Dunkirk_Roadside","LDirtEffectsBig"}, // bord de route herbe terreuse
			{"SWU_Forest_Mud","LDustEffects"}, // sous bois
			{"SWU_Forest_Mud","LGrassEffectsBig"}, // sous bois
			{"SWU_Forest_Mud","LDirtEffectsBig"}, // sous bois
			{"SWU_Grass_Normal","LDustEffects"}, // herbe
			{"SWU_Grass_Normal","LGrassEffectsBig"}, // herbe
			{"SWU_Grass_Normal","LDirtEffectsBig"}, // herbe
			{"SWU_Grassy_Floor","LDustEffects"}, // herbe
			{"SWU_Grassy_Floor","LGrassEffectsBig"}, // herbe
			{"SWU_Grassy_Floor","LDirtEffectsBig"}, // herbe
			{"swu_greece_grass","LDustEffects"}, // Herbe
			{"swu_greece_grass","LGrassEffectsBig"}, // Herbe
			{"swu_greece_grass","LDirtEffectsBig"}, // Herbe
			{"swu_greece_road","LDustEffects"}, // bord de route terre et herbe seche
			{"swu_greece_road","LGrassEffectsDryBig"}, // bord de route terre et herbe seche
			{"swu_greece_road","LDirtEffectsBig"}, // bord de route terre et herbe seche
			{"swu_greece_vinesdust","LDustEffects"}, // Champ herbe très seche
			{"swu_greece_vinesdust","LGrassEffectsDryBig"}, // Champ herbe très seche
			{"swu_greece_vinesdust","LDirtEffectsBig"}, // Champ herbe très seche
			{"swu_greece_woods","LDustEffects"}, // sous bois herebe
			{"swu_greece_woods","LGrassEffectsBig"}, // sous bois herebe
			{"swu_greece_woods","LDirtEffectsBig"}, // sous bois herebe
			{"SWU_Road_Side","LDustEffects"}, // bord de route terreux
			{"SWU_Road_Side","LDirtEffectsBig"}, // bord de route terreux
			{"SWU_Sandy_Floor","LDustEffects"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","LGrassEffectsDryBig"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","LDirtEffectsBig"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","LSandEffects"}, // sol sabloneux avec herbe
			// Fallujah
			{"siFallujahTerra","LDustEffects"},
			{"siFallujahTerra","LDirtEffectsBig"},
			{"siFallujahAcqua","LDustEffects"},
			{"siFallujahErba","LGrassEffectsDryBig"},
			{"siFallujahErba","LDustEffects"},
			{"siFallujahErba","LDirtEffectsBig"},
			{"siFallujahSabbia","LDustEffects"},
			{"siFallujahSabbia","LDirtEffectsBig"},
			{"siFallujahSabbia","LStonesEffectsBig"},
			{"siFallujahCitta","LDirtEffectsBig"},
			{"siFallujahCitta","LDustEffects"},
			//N'ziwasogo (projeta 305)
			{"mak305_dirt","LDustEffects"},
			{"mak305_dirt","LDirtEffectsBig"},
			{"mak305_jungle","LDustEffects"},
			{"mak305_jungle","LDirtEffectsBig"},
			{"mak305_jungle","LGrassEffectsBig"},
			{"mak305_dirtgrass","LDustEffects"},
			{"mak305_dirtgrass","LDirtEffectsBig"},
			{"mak305_dirtgrass","LGrassEffectsBig"},
			{"mak305_palm","LDustEffects"},
			{"mak305_palm","LDirtEffectsBig"},
			{"mak305_palm","LGrassEffectsDryBig"},
			{"mak305_palmbroken","LDustEffects"},
			{"mak305_palmbroken","LDirtEffectsBig"},
			{"mak305_palmbroken","LGrassEffectsDryBig"},
			{"mak305_sand","LDustEffects"},
			{"mak305_sand","LDirtEffectsBig"},
			{"mak305_sand","LSandEffects"},
			// Aliabad
			{"AliDirtSurface","LDustEffects"},
			{"AliDirtSurface","LDirtEffectsBig"},
			{"AliSandSurface","LDustEffects"},
			{"AliSandSurface","LStonesEffectsBig"},
			{"AliSandSurface","LDirtEffectsBig"},
			{"AliDesertSurface","LDustEffects"},
			{"AliDesertSurface","LStonesEffectsBig"},
			{"AliDesertSurface","LDirtEffectsBig"},
			{"AliForestSurface","LDustEffects"},
			{"AliForestSurface","LDirtEffectsBig"},
			{"AliRockySurface","LDustEffects"},
			{"AliRockySurface","LDirtEffectsBig"},
			{"AliCliffSurface","LDustEffects"},
			{"AliRiverbedSurface","LDustEffects"},
			// HazarKot
			{"FTDirtSurface","LDustEffects"},
			{"FTDirtSurface","LDirtEffectsBig"},
			{"FTSandSurface","LDustEffects"},
			{"FTSandSurface","LStonesEffectsBig"},
			{"FTSandSurface","LDirtEffectsBig"},
			{"FTDesertSurface","LDustEffects"},
			{"FTDesertSurface","LStonesEffectsBig"},
			{"FTDesertSurface","LDirtEffectsBig"},
			{"FTForestSurface","LDustEffects"},
			{"FTForestSurface","LDirtEffectsBig"},
			{"FTRockySurface","LDustEffects"},
			{"FTRockySurface","LDirtEffectsBig"},
			// Caribou
			{"CARIBOU_FOREST01","LDustEffects"},
			{"CARIBOU_FOREST01","LDirtEffectsBig"},
			{"CARIBOU_FOREST02","LDustEffects"},
			{"CARIBOU_FOREST02","LDirtEffectsBig"},
			{"CARIBOU_GRASS01","LGrassEffectsDryBig"},
			{"CARIBOU_GRASS01","LDustEffects"},
			{"CARIBOU_GRASS01","LDirtEffectsBig"},
			{"CARIBOU_GRASS02","LGrassEffects"},
			{"CARIBOU_GRASS02","LDustEffects"},
			{"CARIBOU_GRASS02","LDirtEffectsBig"},
			{"CARIBOU_GRAVEL01","LDirtEffectsBig"},
			{"CARIBOU_GRAVEL01","LDustEffects"},
			{"CARIBOU_GRAVEL02","LDirtEffectsBig"},
			{"CARIBOU_GRAVEL02","LDustEffects"},
			{"CARIBOU_ROCK01","LDirtEffectsBig"},
			{"CARIBOU_ROCK01","LDustEffects"},
			{"CARIBOU_ROCK02","LDirtEffectsBig"},
			{"CARIBOU_ROCK02","LDustEffects"},
			{"CARIBOU_BETON01","LDirtEffectsBig"},
			{"CARIBOU_BETON01","LDustEffects"},
			// Duala
			{"duala_grass","LDustEffects"},
			{"duala_grass","LDirtEffectsBig"},
			{"duala_grass","LStonesEffectsBig"},
			{"duala_grass","LGrassEffectsDryBig"},
			{"duala_rock","LDustEffects"},
			{"duala_rock","LDirtEffectsBig"},
			{"duala_rock","LStonesEffectsBig"},
			{"duala_stones","LDustEffects"},
			{"duala_stones","LGrassEffectsBig"},
			{"duala_stones","LDirtEffectsBig"},
			{"duala_stones","LStonesEffectsBig"},
			{"duala_wood","LDustEffects"},
			{"duala_wood","LDirtEffectsBig"},
			{"duala_wood","LStonesEffectsBig"},
			{"duala_sand","LDustEffects"},
			{"duala_sand","LDirtEffectsBig"},
			{"duala_sand","LStonesEffectsBig"},
			// Podagorsk
			{"FDF_Tex_1","LDirtEffectsBig"},
			{"FDF_Tex_1","LDustEffects"},
			{"FDF_Tex_2","LDustEffects"},
			{"FDF_Tex_2","LGrassEffectsBig"},
			{"FDF_Tex_3","LDirtEffectsBig"},
			{"FDF_Tex_3","LDustEffects"},
			{"FDF_Tex_4","LDirtEffectsBig"},
			{"FDF_Tex_4","LDustEffects"},
			{"FDF_Tex_5","LDirtEffectsBig"},
			{"FDF_Tex_5","LDustEffects"},
			{"FDF_Tex_6","LDirtEffectsBig"},
			{"FDF_Tex_7","LDustEffects"},
			{"FDF_Tex_7","LDirtEffectsBig"},
			{"FDF_Tex_7","LStonesEffectsBig"},
			{"FDF_Tex_8","LDustEffects"},
			{"FDF_Tex_8","LStonesEffectsBig"},
			{"FDF_Tex_9","LDustEffects"},
			{"FDF_Tex_9","LDirtEffectsBig"},
			{"FDF_Tex_9","LStonesEffectsBig"},
			{"FDF_Tex_10","LDustEffects"},
			{"FDF_Tex_11","LDirtEffectsBig"},
			// Zernovo
			{"gsep_creekbedsurface","LDustEffects"},
			{"gsepconcretegroundsurface","LDustEffects"},
			{"gsepdirtsurface","LDustEffects"},
			{"gsepdirtsurface","LDirtEffectsBig"},
			{"gsepforest1surface","LDustEffects"},
			{"gsepforest1surface","LDirtEffectsBig"},
			{"gseptallgrasssurface","LDustEffects"},
			{"gseptallgrasssurface","LDirtEffectsBig"},
			{"gseptallgrasssurface","LGrassEffects"},
			{"gsepshortgrasssurface","LDustEffects"},
			{"gsepshortgrasssurface","LDirtEffectsBig"},
			{"gsepshortgrasssurface","LGrassEffects"},
			{"gsepbarerocksurface","LDustEffects"},
			{"gsepbarerocksurface","LStonesEffectsBig"},
			{"gsepgravelsurface","LDustEffects"},
			{"gsepgravelsurface","LDirtEffectsBig"},
			{"gsephayfieldsurface","LDustEffects"},
			{"gsephayfieldsurface","LDirtEffectsBig"},
			{"gsephayfieldsurface","LGrassEffectsDryBig"},
			{"gsepcropsurface","LDustEffects"},
			{"gsepcropsurface","LDirtEffectsBig"},
			/*
			// Taunus
			{"xcam_grass_green_co","LStonesEffectsBig"},
			{"xcam_grass_green_co","LDirtEffectsBig"},
			{"xcam_grass_green_co","LGrassEffectsDryBig"},
			{"xcam_grass_green_co","LGrassEffectsBig"},
			{"xcam_grass_green_co","LDustEffects"},
			{"xcam_grassbravo_co","LStonesEffectsBig"},
			{"xcam_grassbravo_co","LDirtEffectsBig"},
			{"xcam_grassbravo_co","LGrassEffectsDryBig"},
			{"xcam_grassbravo_co","LGrassEffectsBig"},
			{"xcam_grassbravo_co","LDustEffects"},
			{"xcam_acker_co","LStonesEffectsBig"},
			{"xcam_acker_co","LDirtEffectsBig"},
			{"xcam_acker_co","LGrassEffectsDryBig"},
			{"xcam_acker_co","LGrassEffectsBig"},
			{"xcam_acker_co","LDustEffects"},
			{"xcam_dirt_co","LStonesEffectsBig"},
			{"xcam_dirt_co","LDirtEffectsBig"},
			{"xcam_dirt_co","LGrassEffectsDryBig"},
			{"xcam_dirt_co","LDustEffects"},
			{"xcam_forestground1_co","LStonesEffectsBig"},
			{"xcam_forestground1_co","LDirtEffectsBig"},
			{"xcam_forestground1_co","LGrassEffectsDryBig"},
			{"xcam_forestground1_co","LGrassEffectsBig"},
			{"xcam_forestground1_co","LDustEffects"},
			{"xcam_asfalt_co","LStonesEffectsBig"},
			{"xcam_asfalt_co","LDirtEffectsBig"},
			{"xcam_asfalt_co","LGrassEffectsDryBig"},
			{"xcam_asfalt_co","LDustEffects"},
			*/
			// Thirsk
			{"THgrass2","LDustEffects"},
			{"THgrass2","LDirtEffectsBig"},
			{"THgrass2","LGrassEffectsBig"},
			{"THgrass3","LDustEffects"},
			{"THgrass3","LDirtEffectsBig"},
			{"THgrass3","LGrassEffectsDryBig"},
			{"THForest1","LDustEffects"},
			{"THForest1","LDirtEffectsBig"},
			{"THForest1","LStonesEffectsBig"},
			{"THForest2","LDustEffects"},
			{"THForest2","LDirtEffectsBig"},
			{"THGrit1","LDustEffects"},
			{"THGrit1","LDirtEffectsBig"},
			{"THGrit1","LStonesEffectsBig"},
			{"THBetoni1","LDustEffects"},
			{"THRock","LDustEffects"},
			{"THRock","LStonesEffectsBig"},
			{"THTarmac","LDustEffects"},
			// PKL
			{"bludriver","LDirtEffectsBig"},
			{"bludjungle1","LDirtEffectsBig"},
			{"bludjungle2","LDirtEffectsBig"},
			{"bludjungle3","LDirtEffectsBig"},
			{"bludgressj","LDirtEffectsBig"},
			{"bludgressj","LDustEffects"},
			{"bludgressj","LGrassEffectsBig"},
			{"bludjunglerd1","LDirtEffectsBig"},
			{"bludjunglerd1","LDustEffects"},
			{"bludjunglerd2","LDirtEffectsBig"},
			{"bludjunglerd2","LDustEffects"},
			{"bludrivermaling","LDirtEffectsBig"},
			{"bludrivermaling","LDustEffects"},
			{"blud_sti","LDirtEffectsBig"},
			{"blud_sti","LDustEffects"},
			// Ndjenahoud
			{"mak319_desgrass","LDustEffects"},
			{"mak319_desgrass","LDirtEffectsBig"},
			{"mak319_desgrass","LStonesEffectsBig"},
			{"mak319_stony","LDustEffects"},
			{"mak319_stony","LDirtEffectsBig"},
			{"mak319_stony","LGrassEffectsBig"},
			{"mak308_Dirt","LDustEffects"},
			{"mak308_Dirt","LDirtEffectsBig"},
			{"mak308_Dirt","LGrassEffectsBig"},
			{"mak308_GrassDry","LDustEffects"},
			{"mak308_GrassDry","LDirtEffectsBig"},
			{"mak308_GrassDry","LGrassEffectsDryBig"},
			{"mak319_thorn","LDustEffects"},
			{"mak319_thorn","LDirtEffectsBig"},
			{"mak319_thorn","LGrassEffectsDryBig"},
			{"mak319_desert","LDustEffects"},
			{"mak319_desert","LDirtEffectsBig"},
			{"mak319_desert","LStonesEffectsBig"}
		};
	};
	class LIB_WheeledTracked_APC_base: Tank
	{
		rightDustEffects[] =
		{
			{"GdtGrassShort","RDustEffects"},
			{"GdtGrassShort","RGrassEffectsBig"},
			{"GdtGrassTall","RDustEffects"},
			{"GdtGrassTall","RGrassEffectsBig"},
			{"GdtRedDirt","RDustEffectsRed"},
			{"GdtField","RDustEffects"},
			{"GdtForest","RDustEffects"},
			{"GdtVolcano","RDustEffects"},
			{"GdtVolcano","RStonesEffectsBig"},
			{"GdtCliff","RDustEffects"},
			{"GdtVolcanoBeach","RDustEffects"},
			{"SurfRoadDirt_exp","RDustEffectsRed"},
			{"SurfRoadConcrete_exp","RDustEffects"},
			{"SurfRoadTarmac_exp","RDustEffects"},
			{"GdtStratisConcrete","RDustEffects"},
			{"GdtStratisConcrete","RDirtEffectsBig"},
			{"GdtStratisBeach","RDustEffects"},
			{"GdtStratisBeach","RStonesEffectsBig"},
			{"GdtStratisDirt","RDustEffects"},
			{"GdtStratisDirt","RDirtEffectsBig"},
			{"GdtStratisSeabedCluttered","RDustEffects"},
			{"GdtStratisSeabed","RDustEffects"},
			{"GdtStratisDryGrass","RDustEffects"},
			{"GdtStratisDryGrass","RGrassEffectsDryBig"},
			{"GdtStratisDryGrass","RDirtEffectsBig"},
			{"GdtStratisGreenGrass","RDustEffects"},
			{"GdtStratisGreenGrass","RGrassEffectsBig"},
			{"GdtStratisGreenGrass","RDirtEffectsBig"},
			{"GdtStratisRocky","RDustEffects"},
			{"GdtStratisRocky","RGrassEffectsBig"},
			{"GdtStratisRocky","RDirtEffectsBig"},
			{"GdtStratisThistles","RDustEffects"},
			{"GdtStratisThistles","RGrassEffectsBig"},
			{"GdtStratisThistles","RDirtEffectsBig"},
			{"GdtConcrete","RDustEffects"},
			{"GdtConcrete","RDirtEffectsBig"},
			{"GdtAsphalt","RDustEffects"},
			{"GdtAsphalt","RDirtEffectsBig"},
			{"GdtRubble","RDustEffects"},
			{"GdtRubble","RDirtEffectsBig"},
			{"GdtSoil","RDustEffects"},
			{"GdtSoil","RDirtEffectsBig"},
			{"GdtBeach","RDustEffects"},
			{"GdtBeach","RStonesEffectsBig"},
			{"GdtRock","RDustEffects"},
			{"GdtRock","RDirtEffectsBig"},
			{"GdtDead","RDustEffects"},
			{"GdtDead","RDirtEffectsBig"},
			{"Default","RDustEffects"},
			{"GdtDesert","RDustEffects"},
			{"GdtDesert","RDirtEffectsBig"},
			{"GdtDesert","RStonesEffects"},
			{"GdtDesert1","RDustEffects"},
			{"GdtDesert1","RDirtEffectsBig"},
			{"GdtDesert1","RStonesEffectsBig"},
			{"GdtDesert2","RDustEffects"},
			{"GdtDesert2","RGrassEffectsBig"},
			{"GdtDesert2","RDirtEffectsBig"},
			{"GdtDirt","RDustEffects"},
			{"GdtDirt","RDirtEffectsBig"},
			{"GdtGrassGreen","RDustEffects"},
			{"GdtGrassGreen","RGrassEffectsBig"},
			{"GdtGrassGreen","RDirtEffectsBig"},
			{"GdtGrassDry","RDustEffects"},
			{"GdtGrassDry","RGrassEffectsDryBig"},
			{"GdtGrassDry","RDirtEffectsBig"},
			{"GdtGrassWild","RDustEffects"},
			{"GdtGrassWild","RGrassEffectsBig"},
			{"GdtGrassWild","RDirtEffectsBig"},
			{"GdtWildField","RDustEffects"},
			{"GdtWildField","RGrassEffectsBig"},
			{"GdtWildField","RDirtEffectsBig"},
			{"GdtWeed1","RDustEffects"},
			{"GdtWeed1","RGrassEffectsBig"},
			{"GdtWeed1","RDirtEffectsBig"},
			{"GdtWeed2","RDustEffects"},
			{"GdtWeed2","RGrassEffectsBig"},
			{"GdtWeed2","RDirtEffectsBig"},
			{"GdtThorn","RDustEffects"},
			{"GdtThorn","RGrassEffectsBig"},
			{"GdtThorn","RDirtEffectsBig"},
			{"GdtStony","RDustEffects"},
			{"GdtStony","RGrassEffectsBig"},
			{"GdtStony","RDirtEffectsBig"},
			{"GdtStonyGreen","RDustEffects"},
			{"GdtStonyGreen","RGrassEffectsBig"},
			{"GdtStonyGreen","RDirtEffectsBig"},
			{"GdtStonyThistle","RDustEffects"},
			{"GdtStonyThistle","RGrassEffectsBig"},
			{"GdtStonyThistle","RDirtEffectsBig"},
			{"GdtSeabedDeep","RDustEffects"},
			{"GdtSeabed","RDustEffects"},
			{"SurfRoadDirt","RDustEffects"},
			{"SurfRoadConcrete","RDustEffects"},
			{"SurfRoadTarmac","RDustEffects"},
			{"SurfWood","RDustEffects"},
			{"SurfMetal","RDustEffects"},
			{"SurfRoofTin","RDustEffects"},
			{"SurfRoofTiles","RDustEffects"},
			{"SurfIntWood","RDustEffects"},
			{"SurfIntConcrete","RDustEffects"},
			{"SurfIntTiles","RDustEffects"},
			{"SurfIntMetal","RDustEffects"},
			{"dirtrunway","RDustEffects"},
			// CUP TP
			{"CRGrass1","RDustEffects"},
			{"CRGrass1","RGrassEffectsBig"},
			{"CRGrass1","RDirtEffectsBig"},
			{"CRGrass2","RDustEffects"},
			{"CRGrass2","RGrassEffectsBig"},
			{"CRGrass2","RDirtEffectsBig"},
			{"CRGrassW1","RDustEffects"},
			{"CRGrassW1","RGrassEffectsBig"},
			{"CRGrassW1","RDirtEffectsBig"},
			{"CRGrassW2","RDustEffects"},
			{"CRGrassW2","RGrassEffectsBig"},
			{"CRGrassW2","RDirtEffectsBig"},
			{"CRField1","RDustEffects"},
			{"CRField1","RGrassEffectsBig"},
			{"CRField1","RDirtEffectsBig"},
			{"CRField2","RDustEffects"},
			{"CRField2","RGrassEffectsBig"},
			{"CRField2","RDirtEffectsBig"},
			{"CRForest1","RDustEffects"},
			{"CRForest1","RGrassEffectsBig"},
			{"CRForest1","RDirtEffectsBig"},
			{"CRForest2","RDustEffects"},
			{"CRForest2","RGrassEffectsBig"},
			{"CRForest2","RDirtEffectsBig"},
			{"CRGrit1","RDustEffects"},
			{"CRGrit1","RDirtEffectsBig"},
			{"CRHeather","RDustEffects"},
			{"CRHeather","RGrassEffectsBig"},
			{"CRHeather","RDirtEffectsBig"},
			{"CRConcrete","RDirtEffectsBig"},
			{"TKAsfalt","RDirtEffectsBig"},
			{"TKBeton","RDustEffects"},
			{"TKPlevel","RDustEffects"},
			{"TKPlevel","RGrassEffectsBig"},
			{"TKPlevel","RDirtEffectsBig"},
			{"TKPole","RDustEffects"},
			{"TKPole","RGrassEffectsDryBig"},
			{"TKPole","RDirtEffectsBig"},
			{"TKPolopoust","RDustEffects"},
			{"TKPolopoust","RSandEffects"},
			{"TKPolopoust","RDirtEffectsBig"},
			{"TKSkala","RDustEffects"},
			{"TKSkala","RStonesEffects"},
			{"TKSkalniSterk","RDustEffects"},
			{"TKSkalniSterk","RStonesEffects"},
			{"TKSterkNaDno","RDustEffects"},
			{"TKSterkNaDno","RStonesEffects"},
			{"TKMoutain","RDustEffects"},
			{"TKMoutain","RStonesEffects"},
			{"TKValouny","RDustEffects"},
			{"TKValouny","RStonesEffects"},
			{"TKTrava","RDustEffects"},
			{"TKTrava","RGrassEffectsDryBig"},
			{"TKTrava","RDirtEffectsBig"},
			{"TKForest","RDustEffects"},
			{"TKForest","RGrassEffectsDryBig"},
			{"TKForest","RDirtEffectsBig"},
			{"ZRAsfalt","RDirtEffectsBig"},
			{"ZRBeton","RDustEffects"},
			{"RoadDirt_EP1","RDustEffects"},
			{"RoadTarmac_EP1","RDirtEffectsBig"},
			{"ZRPlevel","RDustEffects"},
			{"ZRPlevel","RGrassEffectsBig"},
			{"ZRPlevel","RDirtEffectsBig"},
			{"ZRPole","RDustEffects"},
			{"ZRPole","RGrassEffectsDryBig"},
			{"ZRPole","RDirtEffectsBig"},
			{"ZRPolopoust","RDustEffects"},
			{"ZRPolopoust","RSandEffects"},
			{"ZRPolopoust","RDirtEffectsBig"},
			{"ZRSkala","RDustEffects"},
			{"ZRSkala","RStonesEffects"},
			{"ZRSkalniSterk","RDustEffects"},
			{"ZRSkalniSterk","RStonesEffects"},
			{"ZRSterkNaDno","RDustEffects"},
			{"ZRSterkNaDno","RStonesEffects"},
			{"ZRValouny","RDustEffects"},
			{"ZRValouny","RStonesEffects"},
			{"ZRTrava","RDustEffects"},
			{"ZRTrava","RGrassEffectsDryBig"},
			{"ZRTrava","RDirtEffectsBig"},
			{"DEPolopoust","RDustEffects"},
			{"DEPolopoust","RSandEffects"},
			{"DEPolopoust","RDirtEffectsBig"},
			{"DESkalniSterk","RDustEffects"},
			{"DESkalniSterk","RStonesEffects"},
			{"DETrava","RDustEffects"},
			{"DETrava","RGrassEffectsDryBig"},
			{"DETrava","RDirtEffectsBig"},
			{"WLGrass1","RDustEffects"},
			{"WLGrass1","RGrassEffectsBig"},
			{"WLGrass1","RDirtEffectsBig"},
			{"WLGrass2","RDustEffects"},
			{"WLGrass2","RGrassEffectsBig"},
			{"WLGrass2","RDirtEffectsBig"},
			{"WLGrassW1","RDustEffects"},
			{"WLGrassW1","RGrassEffectsBig"},
			{"WLGrassW1","RDirtEffectsBig"},
			{"WLGrassW2","RDustEffects"},
			{"WLGrassW2","RGrassEffectsBig"},
			{"WLGrassW2","RDirtEffectsBig"},
			{"WLField1","RDustEffects"},
			{"WLField1","RGrassEffectsBig"},
			{"WLField1","RDirtEffectsBig"},
			{"WLField2","RDustEffects"},
			{"WLField2","RGrassEffectsBig"},
			{"WLField2","RDirtEffectsBig"},
			{"WLForest1","RDustEffects"},
			{"WLForest1","RGrassEffectsBig"},
			{"WLForest1","RDirtEffectsBig"},
			{"WLForest2","RDustEffects"},
			{"WLForest2","RGrassEffectsBig"},
			{"WLForest2","RDirtEffectsBig"},
			{"WLMudGround","RDustEffects"},
			{"WLMudGround","RGrassEffectsBig"},
			{"WLMudGround","RDirtEffectsBig"},
			{"WLGrit1","RDustEffects"},
			{"WLGrit1","RDirtEffectsBig"},
			{"WLHeather","RDustEffects"},
			{"WLHeather","RGrassEffectsBig"},
			{"WLHeather","RDirtEffectsBig"},
			{"WLConcrete","RDirtEffectsBig"},
			{"GZTrava","RDustEffects"},
			{"GZTrava","RGrassEffectsDryBig"},
			{"GZTrava","RDirtEffectsBig"},
			{"GZforest","RDustEffects"},
			{"GZforest","RGrassEffectsDryBig"},
			{"GZforest","RDirtEffectsBig"},
			{"GZkameny","RDustEffects"},
			{"GZkameny","RStonesEffects"},
			{"GZHlina","RDustEffects"},
			{"GZHlina","RGrassEffectsBig"},
			{"GZHlina","RDirtEffectsBig"},
			{"BetonNew","RDirtEffectsBig"},
			{"Asf1","RDirtEffectsBig"},
			{"Asf2","RDirtEffectsBig"},
			{"Asf3","RDirtEffectsBig"},
			{"road","RDustEffects"},
			// IFA3
			{"I44_Mer_Field","RDustEffects"}, // Champ de blé sol terre
			{"I44_Mer_Field","RGrassEffectsBig"}, // Champ de blé sol terre
			{"I44_Mer_Field","RDirtEffectsBig"}, // Champ de blé sol terre
			{"I44_Mer_Forest","RDustEffects"}, // sol de foret feuilles + herbes
			{"I44_Mer_Forest","RGrassEffectsBig"}, // sol de foret feuilles + herbes
			{"I44_Mer_Forest","RDirtEffectsBig"}, // sol de foret feuilles + herbes
			{"I44_Mer_Grass1","RDustEffects"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass1","RGrassEffectsBig"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass1","RDirtEffectsBig"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass2","RDustEffects"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Grass2","RGrassEffectsBig"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Grass2","RDirtEffectsBig"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Ground","RDustEffects"}, // terre brune bord riviere
			{"I44_Mer_Ground","RDirtEffectsBig"}, // terre brune bord riviere
			{"I44_Nea_Farmdirt","RDustEffects"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmdirt","RGrassEffectsDryBig"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmdirt","RDirtEffectsBig"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmsurface","RDustEffects"}, // Champ en terre + hautes herbes
			{"I44_Nea_Farmsurface","RGrassEffectsBig"}, // Champ en terre + hautes herbes
			{"I44_Nea_Farmsurface","RDirtEffectsBig"}, // Champ en terre + hautes herbes
			{"I44_Nea_Grasssurface","RDustEffects"}, // herbe
			{"I44_Nea_Grasssurface","RGrassEffectsBig"}, // herbe
			{"I44_Nea_Grasssurface","RDirtEffectsBig"}, // herbe
			{"I44_Nea_GravelSurface","RDustEffects"}, // terre nue gravier
			{"I44_Nea_GravelSurface","RDirtEffectsBig"}, // terre nue gravier
			{"I44_Nea_GravelSurface","RStonesEffects"}, // terre nue gravier
			{"I44_Omaha_v2_Brown","RDustEffects"}, // terre + herbes
			{"I44_Omaha_v2_Brown","RGrassEffectsBig"}, // terre + herbes
			{"I44_Omaha_v2_Brown","RDirtEffectsBig"}, // terre + herbes
			{"I44_Omaha_v2_Green","RDustEffects"}, // marron herbe
			{"I44_Omaha_v2_Green","RGrassEffectsBig"}, // marron herbe
			{"I44_Omaha_v2_Green","RDirtEffectsBig"}, // marron herbe
			{"I44_Omaha_v2_Lawn","RDustEffects"}, // vert Herbe
			{"I44_Omaha_v2_Lawn","RGrassEffectsBig"}, // vert Herbe
			{"I44_Omaha_v2_Lawn","RDirtEffectsBig"}, // vert Herbe
			{"LIB_France_Grass","RDustEffects"}, // Herbe bien verte
			{"LIB_France_Grass","RGrassEffectsBig"}, // Herbe bien verte
			{"LIB_France_Grass","RDirtEffectsBig"}, // Herbe bien verte
			{"LIB_France_Poppy","RDustEffects"}, // Coquelicots
			{"LIB_France_Poppy","RGrassEffectsBig"}, // Coquelicots
			{"LIB_France_Poppy","RDirtEffectsBig"}, // Coquelicots
			{"LIB_France_Raps","RDustEffects"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Raps","RGrassEffectsBig"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Raps","RDirtEffectsBig"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Sand","RDustEffects"}, // Sable plage
			{"LIB_France_Sand","RDirtEffectsBig"}, // Sable plage
			{"LIB_France_Sand","RSandEffects"}, // Sable plage
			{"LIB_France_Tillage","RDustEffects"}, // Champ de terre
			{"LIB_France_Tillage","RDirtEffectsBig"}, // Champ de terre
			{"LIB_France_Weed","RDustEffects"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Weed","RGrassEffectsDryBig"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Weed","RDirtEffectsBig"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Wheat","RDustEffects"}, // Champ de blé vert
			{"LIB_France_Wheat","RGrassEffectsBig"}, // Champ de blé vert
			{"LIB_France_Wheat","RDirtEffectsBig"}, // Champ de blé vert
			{"LIB_Staszow_Ambush","RDustEffects"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Ambush","RGrassEffectsBig"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Ambush","RDirtEffectsBig"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Burn","RDustEffects"}, // sol brulé
			{"LIB_Staszow_Burn","RDirtEffectsBig"}, // sol brulé
			{"LIB_Staszow_Forest","RDustEffects"}, // Sous-bois
			{"LIB_Staszow_Forest","RGrassEffectsBig"}, // Sous-bois
			{"LIB_Staszow_Forest","RDirtEffectsBig"}, // Sous-bois
			{"LIB_Staszow_Grass","RDustEffects"}, // herbe verte
			{"LIB_Staszow_Grass","RGrassEffectsBig"}, // herbe verte
			{"LIB_Staszow_Grass","RDirtEffectsBig"}, // herbe verte
			{"LIB_Staszow_Grazy","RDustEffects"},
			{"LIB_Staszow_Grazy","RGrassEffectsBig"},
			{"LIB_Staszow_Grazy","RDirtEffectsBig"},
			{"LIB_Staszow_Oldgrass","RDustEffects"},
			{"LIB_Staszow_Oldgrass","RGrassEffectsDryBig"},
			{"LIB_Staszow_Oldgrass","RDirtEffectsBig"},
			{"LIB_Staszow_Oldwheat","RDustEffects"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Oldwheat","RGrassEffectsDryBig"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Oldwheat","RDirtEffectsBig"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Sand","RDustEffects"}, // Sable
			{"LIB_Staszow_Sand","RDirtEffectsBig"}, // Sable
			{"LIB_Staszow_Sand","RSandEffects"}, // Sable
			{"LIB_Staszow_Swamp","RDustEffects"}, // marais
			{"LIB_Staszow_Swamp","RGrassEffectsBig"}, // marais
			{"LIB_Staszow_Swamp","RDirtEffectsBig"}, // marais
			{"LIB_Staszow_Wheat","RDustEffects"}, // champ de blé jaune non coupé fond terre seche
			{"LIB_Staszow_Wheat","RGrassEffectsDryBig"}, // champ de blé jaune non coupé fond terre seche
			{"LIB_Staszow_Wheat","RDirtEffectsBig"}, // champ de blé jaune non coupé fond terre seche
			{"swu_aachen_corn_field","RDustEffects"}, // Champ herbe
			{"swu_aachen_corn_field","RGrassEffectsBig"}, // Champ herbe
			{"swu_aachen_corn_field","RDirtEffectsBig"}, // Champ herbe
			{"swu_aachen_footsteps","RDustEffects"}, // terreux
			{"swu_aachen_footsteps","RDirtEffectsBig"}, // terreux
			{"swu_aachen_forest","RDustEffects"}, // sous bois herbe
			{"swu_aachen_forest","RGrassEffectsBig"}, // sous bois herbe
			{"swu_aachen_forest","RDirtEffectsBig"}, // sous bois herbe
			{"swu_aachen_main_field","RDustEffects"}, // Champ herbe brun
			{"swu_aachen_main_field","RGrassEffectsDryBig"}, // Champ herbe brun
			{"swu_aachen_main_field","RDirtEffectsBig"}, // Champ herbe brun
			{"swu_aachen_roads","RDustEffects"}, // terreux bord de route
			{"swu_aachen_roads","RDirtEffectsBig"}, // terreux bord de route
			{"swu_berlin_grass","RDustEffects"},
			{"swu_berlin_grass","RGrassEffectsBig"},
			{"swu_berlin_grass","RDirtEffectsBig"},
			{"swu_berlin_main","RDustEffects"},
			{"swu_berlin_main","RDirtEffectsBig"},
			{"SWU_Dunkirk_Roadside","RDustEffects"}, // bord de route herbe terreuse
			{"SWU_Dunkirk_Roadside","RGrassEffectsBig"}, // bord de route herbe terreuse
			{"SWU_Dunkirk_Roadside","RDirtEffectsBig"}, // bord de route herbe terreuse
			{"SWU_Forest_Mud","RDustEffects"}, // sous bois
			{"SWU_Forest_Mud","RGrassEffectsBig"}, // sous bois
			{"SWU_Forest_Mud","RDirtEffectsBig"}, // sous bois
			{"SWU_Grass_Normal","RDustEffects"}, // herbe
			{"SWU_Grass_Normal","RGrassEffectsBig"}, // herbe
			{"SWU_Grass_Normal","RDirtEffectsBig"}, // herbe
			{"SWU_Grassy_Floor","RDustEffects"}, // herbe
			{"SWU_Grassy_Floor","RGrassEffectsBig"}, // herbe
			{"SWU_Grassy_Floor","RDirtEffectsBig"}, // herbe
			{"swu_greece_grass","RDustEffects"}, // Herbe
			{"swu_greece_grass","RGrassEffectsBig"}, // Herbe
			{"swu_greece_grass","RDirtEffectsBig"}, // Herbe
			{"swu_greece_road","RDustEffects"}, // bord de route terre et herbe seche
			{"swu_greece_road","RGrassEffectsDryBig"}, // bord de route terre et herbe seche
			{"swu_greece_road","RDirtEffectsBig"}, // bord de route terre et herbe seche
			{"swu_greece_vinesdust","RDustEffects"}, // Champ herbe très seche
			{"swu_greece_vinesdust","v"}, // Champ herbe très seche
			{"swu_greece_vinesdust","RDirtEffectsBig"}, // Champ herbe très seche
			{"swu_greece_woods","RDustEffects"}, // sous bois herebe
			{"swu_greece_woods","RGrassEffectsBig"}, // sous bois herebe
			{"swu_greece_woods","RDirtEffectsBig"}, // sous bois herebe
			{"SWU_Road_Side","RDustEffects"}, // bord de route terreux
			{"SWU_Road_Side","RDirtEffectsBig"}, // bord de route terreux
			{"SWU_Sandy_Floor","RDustEffects"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","RGrassEffectsDryBig"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","RDirtEffectsBig"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","RSandEffects"}, // sol sabloneux avec herbe
			// Fallujah
			{"siFallujahTerra","RDustEffects"},
			{"siFallujahTerra","RDirtEffectsBig"},
			{"siFallujahAcqua","RDustEffects"},
			{"siFallujahErba","RGrassEffectsDryBig"},
			{"siFallujahErba","RDustEffects"},
			{"siFallujahErba","RDirtEffectsBig"},
			{"siFallujahSabbia","RDustEffects"},
			{"siFallujahSabbia","RDirtEffectsBig"},
			{"siFallujahSabbia","RStonesEffectsBig"},
			{"siFallujahCitta","RDirtEffectsBig"},
			{"siFallujahCitta","RDustEffects"},
			//N'ziwasogo (projeta 305)
			{"mak305_dirt","RDustEffects"},
			{"mak305_dirt","RDirtEffectsBig"},
			{"mak305_jungle","RDustEffects"},
			{"mak305_jungle","RDirtEffectsBig"},
			{"mak305_jungle","RGrassEffectsBig"},
			{"mak305_dirtgrass","RDustEffects"},
			{"mak305_dirtgrass","RDirtEffectsBig"},
			{"mak305_dirtgrass","RGrassEffectsBig"},
			{"mak305_palm","RDustEffects"},
			{"mak305_palm","RDirtEffectsBig"},
			{"mak305_palm","RGrassEffectsDryBig"},
			{"mak305_palmbroken","RDustEffects"},
			{"mak305_palmbroken","RDirtEffectsBig"},
			{"mak305_palmbroken","RGrassEffectsDryBig"},
			{"mak305_sand","RDustEffects"},
			{"mak305_sand","RDirtEffectsBig"},
			{"mak305_sand","RSandEffects"},
			// Aliabad
			{"AliDirtSurface","RDustEffects"},
			{"AliDirtSurface","RDirtEffectsBig"},
			{"AliSandSurface","RDustEffects"},
			{"AliSandSurface","RStonesEffectsBig"},
			{"AliSandSurface","RDirtEffectsBig"},
			{"AliDesertSurface","RDustEffects"},
			{"AliDesertSurface","RStonesEffectsBig"},
			{"AliDesertSurface","RDirtEffectsBig"},
			{"AliForestSurface","RDustEffects"},
			{"AliForestSurface","RDirtEffectsBig"},
			{"AliRockySurface","RDustEffects"},
			{"AliRockySurface","RDirtEffectsBig"},
			{"AliCliffSurface","RDustEffects"},
			{"AliRiverbedSurface","RDustEffects"},
			// HazarKot
			{"FTDirtSurface","RDustEffects"},
			{"FTDirtSurface","RDirtEffectsBig"},
			{"FTSandSurface","RDustEffects"},
			{"FTSandSurface","RStonesEffectsBig"},
			{"FTSandSurface","RDirtEffectsBig"},
			{"FTDesertSurface","RDustEffects"},
			{"FTDesertSurface","RStonesEffectsBig"},
			{"FTDesertSurface","RDirtEffectsBig"},
			{"FTForestSurface","RDustEffects"},
			{"FTForestSurface","RDirtEffectsBig"},
			{"FTRockySurface","RDustEffects"},
			{"FTRockySurface","RDirtEffectsBig"},
			// Caribou
			{"CARIBOU_FOREST01","RDustEffects"},
			{"CARIBOU_FOREST01","RDirtEffectsBig"},
			{"CARIBOU_FOREST02","RDustEffects"},
			{"CARIBOU_FOREST02","RDirtEffectsBig"},
			{"CARIBOU_GRASS01","RGrassEffectsDryBig"},
			{"CARIBOU_GRASS01","RDustEffects"},
			{"CARIBOU_GRASS01","RDirtEffectsBig"},
			{"CARIBOU_GRASS02","RGrassEffects"},
			{"CARIBOU_GRASS02","RDustEffects"},
			{"CARIBOU_GRASS02","RDirtEffectsBig"},
			{"CARIBOU_GRAVEL01","RDirtEffectsBig"},
			{"CARIBOU_GRAVEL01","RDustEffects"},
			{"CARIBOU_GRAVEL02","RDirtEffectsBig"},
			{"CARIBOU_GRAVEL02","RDustEffects"},
			{"CARIBOU_ROCK01","RDirtEffectsBig"},
			{"CARIBOU_ROCK01","RDustEffects"},
			{"CARIBOU_ROCK02","RDirtEffectsBig"},
			{"CARIBOU_ROCK02","RDustEffects"},
			{"CARIBOU_BETON01","RDirtEffectsBig"},
			{"CARIBOU_BETON01","RDustEffects"},
			// Duala
			{"duala_grass","RDustEffects"},
			{"duala_grass","RDirtEffectsBig"},
			{"duala_grass","RStonesEffectsBig"},
			{"duala_grass","RGrassEffectsDryBig"},
			{"duala_rock","RDustEffects"},
			{"duala_rock","RDirtEffectsBig"},
			{"duala_rock","RStonesEffectsBig"},
			{"duala_stones","RDustEffects"},
			{"duala_stones","RGrassEffectsBig"},
			{"duala_stones","RDirtEffectsBig"},
			{"duala_stones","RStonesEffectsBig"},
			{"duala_wood","RDustEffects"},
			{"duala_wood","RDirtEffectsBig"},
			{"duala_wood","RStonesEffectsBig"},
			{"duala_sand","RDustEffects"},
			{"duala_sand","RDirtEffectsBig"},
			{"duala_sand","RStonesEffectsBig"},
			// Podagorsk
			{"FDF_Tex_1","RDirtEffectsBig"},
			{"FDF_Tex_1","RDustEffects"},
			{"FDF_Tex_2","RDustEffects"},
			{"FDF_Tex_2","RGrassEffectsBig"},
			{"FDF_Tex_3","RDirtEffectsBig"},
			{"FDF_Tex_3","RDustEffects"},
			{"FDF_Tex_4","RDirtEffectsBig"},
			{"FDF_Tex_4","RDustEffects"},
			{"FDF_Tex_5","RDirtEffectsBig"},
			{"FDF_Tex_5","RDustEffects"},
			{"FDF_Tex_6","RDirtEffectsBig"},
			{"FDF_Tex_7","RDustEffects"},
			{"FDF_Tex_7","RDirtEffectsBig"},
			{"FDF_Tex_7","RStonesEffectsBig"},
			{"FDF_Tex_8","RDustEffects"},
			{"FDF_Tex_8","RStonesEffectsBig"},
			{"FDF_Tex_9","RDustEffects"},
			{"FDF_Tex_9","RDirtEffectsBig"},
			{"FDF_Tex_9","RStonesEffectsBig"},
			{"FDF_Tex_10","RDustEffects"},
			{"FDF_Tex_11","RDirtEffectsBig"},
			// Zernovo
			{"gsep_creekbedsurface","RDustEffects"},
			{"gsepconcretegroundsurface","RDustEffects"},
			{"gsepdirtsurface","RDustEffects"},
			{"gsepdirtsurface","RDirtEffectsBig"},
			{"gsepforest1surface","RDustEffects"},
			{"gsepforest1surface","RDirtEffectsBig"},
			{"gseptallgrasssurface","RDustEffects"},
			{"gseptallgrasssurface","RDirtEffectsBig"},
			{"gseptallgrasssurface","RGrassEffects"},
			{"gsepshortgrasssurface","RDustEffects"},
			{"gsepshortgrasssurface","RDirtEffectsBig"},
			{"gsepshortgrasssurface","RGrassEffects"},
			{"gsepbarerocksurface","RDustEffects"},
			{"gsepbarerocksurface","RStonesEffectsBig"},
			{"gsepgravelsurface","RDustEffects"},
			{"gsepgravelsurface","RDirtEffectsBig"},
			{"gsephayfieldsurface","RDustEffects"},
			{"gsephayfieldsurface","RDirtEffectsBig"},
			{"gsephayfieldsurface","RGrassEffectsDryBig"},
			{"gsepcropsurface","RDustEffects"},
			{"gsepcropsurface","RDirtEffectsBig"},
			/*
			// Taunus
			{"xcam_grass_green_co","RStonesEffectsBig"},
			{"xcam_grass_green_co","RDirtEffectsBig"},
			{"xcam_grass_green_co","RGrassEffectsDryBig"},
			{"xcam_grass_green_co","RGrassEffectsBig"},
			{"xcam_grass_green_co","RDustEffects"},
			{"xcam_grassbravo_co","RStonesEffectsBig"},
			{"xcam_grassbravo_co","RDirtEffectsBig"},
			{"xcam_grassbravo_co","RGrassEffectsDryBig"},
			{"xcam_grassbravo_co","RGrassEffectsBig"},
			{"xcam_grassbravo_co","RDustEffects"},
			{"xcam_acker_co","RStonesEffectsBig"},
			{"xcam_acker_co","RDirtEffectsBig"},
			{"xcam_acker_co","RGrassEffectsDryBig"},
			{"xcam_acker_co","RGrassEffectsBig"},
			{"xcam_acker_co","RDustEffects"},
			{"xcam_dirt_co","RStonesEffectsBig"},
			{"xcam_dirt_co","RDirtEffectsBig"},
			{"xcam_dirt_co","RGrassEffectsDryBig"},
			{"xcam_dirt_co","RDustEffects"},
			{"xcam_forestground1_co","RStonesEffectsBig"},
			{"xcam_forestground1_co","RDirtEffectsBig"},
			{"xcam_forestground1_co","RGrassEffectsDryBig"},
			{"xcam_forestground1_co","RGrassEffectsBig"},
			{"xcam_forestground1_co","RDustEffects"},
			{"xcam_asfalt_co","RStonesEffectsBig"},
			{"xcam_asfalt_co","RDirtEffectsBig"},
			{"xcam_asfalt_co","RGrassEffectsDryBig"},
			{"xcam_asfalt_co","RDustEffects"},
			*/
			// Thirsk
			{"THgrass2","RDustEffects"},
			{"THgrass2","RDirtEffectsBig"},
			{"THgrass2","RGrassEffectsBig"},
			{"THgrass3","RDustEffects"},
			{"THgrass3","RDirtEffectsBig"},
			{"THgrass3","RGrassEffectsDryBig"},
			{"THForest1","RDustEffects"},
			{"THForest1","RDirtEffectsBig"},
			{"THForest1","RStonesEffectsBig"},
			{"THForest2","RDustEffects"},
			{"THForest2","RDirtEffectsBig"},
			{"THGrit1","RDustEffects"},
			{"THGrit1","RDirtEffectsBig"},
			{"THGrit1","RStonesEffectsBig"},
			{"THBetoni1","RDustEffects"},
			{"THRock","RDustEffects"},
			{"THRock","RStonesEffectsBig"},
			{"THTarmac","RDustEffects"},
			// PKL
			{"bludriver","RDirtEffectsBig"},
			{"bludjungle1","RDirtEffectsBig"},
			{"bludjungle2","RDirtEffectsBig"},
			{"bludjungle3","RDirtEffectsBig"},
			{"bludgressj","RDirtEffectsBig"},
			{"bludgressj","RDustEffects"},
			{"bludgressj","RGrassEffectsBig"},
			{"bludjunglerd1","RDirtEffectsBig"},
			{"bludjunglerd1","RDustEffects"},
			{"bludjunglerd2","RDirtEffectsBig"},
			{"bludjunglerd2","RDustEffects"},
			{"bludrivermaling","RDirtEffectsBig"},
			{"bludrivermaling","RDustEffects"},
			{"blud_sti","RDirtEffectsBig"},
			{"blud_sti","RDustEffects"},
			// Ndjenahoud
			{"mak319_desgrass","RDustEffects"},
			{"mak319_desgrass","RDirtEffectsBig"},
			{"mak319_desgrass","RStonesEffectsBig"},
			{"mak319_stony","RDustEffects"},
			{"mak319_stony","RDirtEffectsBig"},
			{"mak319_stony","RGrassEffectsBig"},
			{"mak308_Dirt","RDustEffects"},
			{"mak308_Dirt","RDirtEffectsBig"},
			{"mak308_Dirt","RGrassEffectsBig"},
			{"mak308_GrassDry","RDustEffects"},
			{"mak308_GrassDry","RDirtEffectsBig"},
			{"mak308_GrassDry","RGrassEffectsDryBig"},
			{"mak319_thorn","RDustEffects"},
			{"mak319_thorn","RDirtEffectsBig"},
			{"mak319_thorn","RGrassEffectsDryBig"},
			{"mak319_desert","RDustEffects"},
			{"mak319_desert","RDirtEffectsBig"},
			{"mak319_desert","RStonesEffectsBig"}
		};
		leftDustEffects[] =
		{
			{"GdtGrassShort","LDustEffects"},
			{"GdtGrassShort","LGrassEffectsBig"},
			{"GdtGrassTall","LDustEffects"},
			{"GdtGrassTall","LGrassEffectsBig"},
			{"GdtRedDirt","LDustEffectsRed"},
			{"GdtField","LDustEffects"},
			{"GdtForest","LDustEffects"},
			{"GdtVolcano","LDustEffects"},
			{"GdtVolcano","LStonesEffectsBig"},
			{"GdtCliff","LDustEffects"},
			{"GdtVolcanoBeach","LDustEffects"},
			{"SurfRoadDirt_exp","LDustEffectsRed"},
			{"SurfRoadConcrete_exp","LDustEffects"},
			{"SurfRoadTarmac_exp","LDustEffects"},
			{"GdtStratisConcrete","LDustEffects"},
			{"GdtStratisConcrete","LDirtEffectsBig"},
			{"GdtStratisBeach","LDustEffects"},
			{"GdtStratisBeach","LStonesEffectsBig"},
			{"GdtStratisDirt","LDustEffects"},
			{"GdtStratisDirt","LDirtEffectsBig"},
			{"GdtStratisSeabedCluttered","LDustEffects"},
			{"GdtStratisSeabed","LDustEffects"},
			{"GdtStratisDryGrass","LDustEffects"},
			{"GdtStratisDryGrass","LGrassEffectsDryBig"},
			{"GdtStratisDryGrass","LDirtEffectsBig"},
			{"GdtStratisGreenGrass","LDustEffects"},
			{"GdtStratisGreenGrass","LGrassEffectsBig"},
			{"GdtStratisGreenGrass","LDirtEffectsBig"},
			{"GdtStratisRocky","LDustEffects"},
			{"GdtStratisRocky","LGrassEffectsBig"},
			{"GdtStratisRocky","LDirtEffectsBig"},
			{"GdtStratisThistles","LDustEffects"},
			{"GdtStratisThistles","LGrassEffectsBig"},
			{"GdtStratisThistles","LDirtEffectsBig"},
			{"GdtConcrete","LDustEffects"},
			{"GdtConcrete","LDirtEffectsBig"},
			{"GdtAsphalt","LDustEffects"},
			{"GdtAsphalt","LDirtEffectsBig"},
			{"GdtRubble","LDustEffects"},
			{"GdtRubble","LGrassEffectsBig"},
			{"GdtRubble","LDirtEffectsBig"},
			{"GdtSoil","LDustEffects"},
			{"GdtSoil","LDirtEffectsBig"},
			{"GdtBeach","LDustEffects"},
			{"GdtBeach","LStonesEffectsBig"},
			{"GdtRock","LDustEffects"},
			{"GdtRock","LDirtEffectsBig"},
			{"GdtDead","LDustEffects"},
			{"GdtDead","LDirtEffectsBig"},
			{"Default","LDustEffects"},
			{"GdtDesert","LDustEffects"},
			{"GdtDesert","LDirtEffectsBig"},
			{"GdtDesert","LStonesEffects"},
			{"GdtDesert1","LDustEffects"},
			{"GdtDesert1","LDirtEffectsBig"},
			{"GdtDesert1","LStonesEffectsBig"},
			{"GdtDesert2","LDustEffects"},
			{"GdtDesert2","LGrassEffectsBig"},
			{"GdtDesert2","LDirtEffectsBig"},
			{"GdtDirt","LDustEffects"},
			{"GdtDirt","LDirtEffectsBig"},
			{"GdtGrassGreen","LDustEffects"},
			{"GdtGrassGreen","LGrassEffectsBig"},
			{"GdtGrassGreen","LDirtEffectsBig"},
			{"GdtGrassDry","LDustEffects"},
			{"GdtGrassDry","LGrassEffectsDryBig"},
			{"GdtGrassDry","LDirtEffectsBig"},
			{"GdtGrassWild","LDustEffects"},
			{"GdtGrassWild","LGrassEffectsBig"},
			{"GdtGrassWild","LDirtEffectsBig"},
			{"GdtWildField","LDustEffects"},
			{"GdtWildField","LGrassEffectsBig"},
			{"GdtWildField","LDirtEffectsBig"},
			{"GdtWeed1","LDustEffects"},
			{"GdtWeed1","LGrassEffectsBig"},
			{"GdtWeed1","LDirtEffectsBig"},
			{"GdtWeed2","LDustEffects"},
			{"GdtWeed2","LGrassEffectsBig"},
			{"GdtWeed2","LDirtEffectsBig"},
			{"GdtThorn","LDustEffects"},
			{"GdtThorn","LGrassEffectsBig"},
			{"GdtThorn","LDirtEffectsBig"},
			{"GdtStony","LDustEffects"},
			{"GdtStony","LGrassEffectsBig"},
			{"GdtStony","LDirtEffectsBig"},
			{"GdtStonyGreen","LDustEffects"},
			{"GdtStonyGreen","LGrassEffectsBig"},
			{"GdtStonyGreen","LDirtEffectsBig"},
			{"GdtStonyThistle","LDustEffects"},
			{"GdtStonyThistle","LGrassEffectsBig"},
			{"GdtStonyThistle","LDirtEffectsBig"},
			{"GdtSeabedDeep","LDustEffects"},
			{"GdtSeabed","LDustEffects"},
			{"SurfRoadDirt","LDustEffects"},
			{"SurfRoadConcrete","LDustEffects"},
			{"SurfRoadTarmac","LDustEffects"},
			{"SurfWood","LDustEffects"},
			{"SurfMetal","LDustEffects"},
			{"SurfRoofTin","LDustEffects"},
			{"SurfRoofTiles","LDustEffects"},
			{"SurfIntWood","LDustEffects"},
			{"SurfIntConcrete","LDustEffects"},
			{"SurfIntTiles","LDustEffects"},
			{"SurfIntMetal","LDustEffects"},
			{"dirtrunway","LDustEffects"},
			// CUP TP
			{"CRGrass1","LDustEffects"},
			{"CRGrass1","LGrassEffectsBig"},
			{"CRGrass1","LDirtEffectsBig"},
			{"CRGrass2","LDustEffects"},
			{"CRGrass2","LGrassEffectsBig"},
			{"CRGrass2","LDirtEffectsBig"},
			{"CRGrassW1","LDustEffects"},
			{"CRGrassW1","LGrassEffectsBig"},
			{"CRGrassW1","LDirtEffectsBig"},
			{"CRGrassW2","LDustEffects"},
			{"CRGrassW2","LGrassEffectsBig"},
			{"CRGrassW2","LDirtEffectsBig"},
			{"CRField1","LDustEffects"},
			{"CRField1","LGrassEffectsBig"},
			{"CRField1","LDirtEffectsBig"},
			{"CRField2","LDustEffects"},
			{"CRField2","LGrassEffectsBig"},
			{"CRField2","LDirtEffectsBig"},
			{"CRForest1","LDustEffects"},
			{"CRForest1","LGrassEffectsBig"},
			{"CRForest1","LDirtEffectsBig"},
			{"CRForest2","LDustEffects"},
			{"CRForest2","LGrassEffectsBig"},
			{"CRForest2","LDirtEffectsBig"},
			{"CRGrit1","LDustEffects"},
			{"CRGrit1","LDirtEffectsBig"},
			{"CRHeather","LDustEffects"},
			{"CRHeather","LGrassEffectsBig"},
			{"CRHeather","LDirtEffectsBig"},
			{"CRConcrete","LDirtEffectsBig"},
			{"TKAsfalt","LDirtEffectsBig"},
			{"TKBeton","LDustEffects"},
			{"RoadDirt_EP1","LDustEffects"},
			{"RoadTarmac_EP11","LDirtEffectsBig"},
			{"TKPlevel","LDustEffects"},
			{"TKPlevel","LGrassEffectsBig"},
			{"TKPlevel","LDirtEffectsBig"},
			{"TKPole","LDustEffects"},
			{"TKPole","LGrassEffectsDryBig"},
			{"TKPole","LDirtEffectsBig"},
			{"TKPolopoust","LDustEffects"},
			{"TKPolopoust","LSandEffects"},
			{"TKPolopoust","LDirtEffectsBig"},
			{"TKSkala","LDustEffects"},
			{"TKSkala","LStonesEffectsBig"},
			{"TKSkalniSterk","LDustEffects"},
			{"TKSkalniSterk","LStonesEffectsBig"},
			{"TKSterkNaDno","LDustEffects"},
			{"TKSterkNaDno","LStonesEffectsBig"},
			{"TKMoutain","LDustEffects"},
			{"TKMoutain","LStonesEffectsBig"},
			{"TKValouny","LDustEffects"},
			{"TKValouny","LStonesEffectsBig"},
			{"TKTrava","LDustEffects"},
			{"TKTrava","LGrassEffectsDryBig"},
			{"TKTrava","LDirtEffectsBig"},
			{"TKForest","LDustEffects"},
			{"TKForest","LGrassEffectsDryBig"},
			{"TKForest","LDirtEffectsBig"},
			{"ZRAsfalt","LDirtEffectsBig"},
			{"ZRBeton","LDustEffects"},
			{"ZRPlevel","LDustEffects"},
			{"ZRPlevel","LGrassEffectsBig"},
			{"ZRPlevel","LDirtEffectsBig"},
			{"ZRPole","LDustEffects"},
			{"ZRPole","LGrassEffectsDryBig"},
			{"ZRPole","LDirtEffectsBig"},
			{"ZRPolopoust","LDustEffects"},
			{"ZRPolopoust","LSandEffects"},
			{"ZRPolopoust","LDirtEffectsBig"},
			{"ZRSkala","LDustEffects"},
			{"ZRSkala","LStonesEffectsBig"},
			{"ZRSkalniSterk","LDustEffects"},
			{"ZRSkalniSterk","LStonesEffectsBig"},
			{"ZRSterkNaDno","LDustEffects"},
			{"ZRSterkNaDno","LStonesEffectsBig"},
			{"ZRValouny","LDustEffects"},
			{"ZRValouny","LStonesEffectsBig"},
			{"ZRTrava","LDustEffects"},
			{"ZRTrava","LGrassEffectsDryBig"},
			{"ZRTrava","LDirtEffectsBig"},
			{"DEPolopoust","LDustEffects"},
			{"DEPolopoust","LSandEffects"},
			{"DEPolopoust","LDirtEffectsBig"},
			{"DESkalniSterk","LDustEffects"},
			{"DESkalniSterk","LStonesEffectsBig"},
			{"DETrava","LDustEffects"},
			{"DETrava","LGrassEffectsDryBig"},
			{"DETrava","LDirtEffectsBig"},
			{"WLGrass1","LDustEffects"},
			{"WLGrass1","LGrassEffectsBig"},
			{"WLGrass1","LDirtEffectsBig"},
			{"WLGrass2","LDustEffects"},
			{"WLGrass2","LGrassEffectsBig"},
			{"WLGrass2","LDirtEffectsBig"},
			{"WLGrassW1","LDustEffects"},
			{"WLGrassW1","LGrassEffectsBig"},
			{"WLGrassW1","LDirtEffectsBig"},
			{"WLGrassW2","LDustEffects"},
			{"WLGrassW2","LGrassEffectsBig"},
			{"WLGrassW2","LDirtEffectsBig"},
			{"WLField1","LDustEffects"},
			{"WLField1","LGrassEffectsBig"},
			{"WLField1","LDirtEffectsBig"},
			{"WLField2","LDustEffects"},
			{"WLField2","LGrassEffectsBig"},
			{"WLField2","LDirtEffectsBig"},
			{"WLForest1","LDustEffects"},
			{"WLForest1","LGrassEffectsBig"},
			{"WLForest1","LDirtEffectsBig"},
			{"WLForest2","LDustEffects"},
			{"WLForest2","LGrassEffectsBig"},
			{"WLForest2","LDirtEffectsBig"},
			{"WLMudGround","LDustEffects"},
			{"WLMudGround","LGrassEffectsBig"},
			{"WLMudGround","LDirtEffectsBig"},
			{"WLGrit1","LDustEffects"},
			{"WLGrit1","LDirtEffectsBig"},
			{"WLHeather","LDustEffects"},
			{"WLHeather","LGrassEffectsBig"},
			{"WLHeather","LDirtEffectsBig"},
			{"WLConcrete","LDirtEffectsBig"},
			{"GZTrava","LDustEffects"},
			{"GZTrava","LGrassEffectsDryBig"},
			{"GZTrava","LDirtEffectsBig"},
			{"GZforest","LDustEffects"},
			{"GZForest","LGrassEffectsDryBig"},
			{"GZForest","LDirtEffectsBig"},
			{"GZkameny","LDustEffects"},
			{"GZkameny","LStonesEffectsBig"},
			{"GZHlina","LDustEffects"},
			{"GZHlina","LGrassEffectsBig"},
			{"GZHlina","LDirtEffectsBig"},
			{"BetonNew","LDirtEffectsBig"},
			{"Asf1","LDirtEffectsBig"},
			{"Asf2","LDirtEffectsBig"},
			{"Asf3","LDirtEffectsBig"},
			{"road","LDustEffects"},
			{"Cesta","LDustEffects"},
			// IFA3
			{"I44_Mer_Field","LDustEffects"}, // Champ de blé sol terre
			{"I44_Mer_Field","LGrassEffectsBig"}, // Champ de blé sol terre
			{"I44_Mer_Field","LDirtEffectsBig"}, // Champ de blé sol terre
			{"I44_Mer_Forest","LDustEffects"}, // sol de foret feuilles + herbes
			{"I44_Mer_Forest","LGrassEffectsBig"}, // sol de foret feuilles + herbes
			{"I44_Mer_Forest","LDirtEffectsBig"}, // sol de foret feuilles + herbes
			{"I44_Mer_Grass1","LDustEffects"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass1","LGrassEffectsBig"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass1","LDirtEffectsBig"}, // Champ herbe verte mi haute + fleurs sol vert
			{"I44_Mer_Grass2","LDustEffects"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Grass2","LGrassEffectsBig"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Grass2","LDirtEffectsBig"}, // Champ herbe verte mi haute + fleurs sol terre
			{"I44_Mer_Ground","LDustEffects"}, // terre brune bord riviere
			{"I44_Mer_Ground","LDirtEffectsBig"}, // terre brune bord riviere
			{"I44_Nea_Farmdirt","LDustEffects"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmdirt","LGrassEffectsDryBig"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmdirt","LDirtEffectsBig"}, // Champ en terre + petites herbes en touffes eparses
			{"I44_Nea_Farmsurface","LDustEffects"}, // Champ en terre + hautes herbes
			{"I44_Nea_Farmsurface","LGrassEffectsBig"}, // Champ en terre + hautes herbes
			{"I44_Nea_Farmsurface","LDirtEffectsBig"}, // Champ en terre + hautes herbes
			{"I44_Nea_Grasssurface","LDustEffects"}, // herbe
			{"I44_Nea_Grasssurface","LGrassEffectsBig"}, // herbe
			{"I44_Nea_Grasssurface","LDirtEffectsBig"}, // herbe
			{"I44_Nea_GravelSurface","LDustEffects"}, // terre nue gravier
			{"I44_Nea_GravelSurface","LDirtEffectsBig"}, // terre nue gravier
			{"I44_Nea_GravelSurface","LStonesEffects"}, // terre nue gravier
			{"I44_Omaha_v2_Brown","LDustEffects"}, // terre + herbes
			{"I44_Omaha_v2_Brown","LGrassEffectsBig"}, // terre + herbes
			{"I44_Omaha_v2_Brown","LDirtEffectsBig"}, // terre + herbes
			{"I44_Omaha_v2_Green","LDustEffects"}, // marron herbe
			{"I44_Omaha_v2_Green","LGrassEffectsBig"}, // marron herbe
			{"I44_Omaha_v2_Green","LDirtEffectsBig"}, // marron herbe
			{"I44_Omaha_v2_Lawn","LDustEffects"}, // vert Herbe
			{"I44_Omaha_v2_Lawn","LGrassEffectsBig"}, // vert Herbe
			{"I44_Omaha_v2_Lawn","LDirtEffectsBig"}, // vert Herbe
			{"LIB_France_Grass","LDustEffects"}, // Herbe bien verte
			{"LIB_France_Grass","LGrassEffectsBig"}, // Herbe bien verte
			{"LIB_France_Grass","LDirtEffectsBig"}, // Herbe bien verte
			{"LIB_France_Poppy","LDustEffects"}, // Coquelicots
			{"LIB_France_Poppy","LGrassEffectsBig"}, // Coquelicots
			{"LIB_France_Poppy","LDirtEffectsBig"}, // Coquelicots
			{"LIB_France_Raps","LDustEffects"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Raps","LGrassEffectsBig"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Raps","LDirtEffectsBig"}, // Vert-brun herbe mi haute fleurs
			{"LIB_France_Sand","LDustEffects"}, // Sable plage
			{"LIB_France_Sand","LDirtEffectsBig"}, // Sable plage
			{"LIB_France_Sand","LSandEffects"}, // Sable plage
			{"LIB_France_Tillage","LDustEffects"}, // Champ de terre
			{"LIB_France_Tillage","LDirtEffectsBig"}, // Champ de terre
			{"LIB_France_Weed","LDustEffects"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Weed","LGrassEffectsDryBig"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Weed","LDirtEffectsBig"}, // champ d'herbes folles un peu jaunes
			{"LIB_France_Wheat","LDustEffects"}, // Champ de blé vert
			{"LIB_France_Wheat","LGrassEffectsBig"}, // Champ de blé vert
			{"LIB_France_Wheat","LDirtEffectsBig"}, // Champ de blé vert
			{"LIB_Staszow_Ambush","LDustEffects"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Ambush","LGrassEffectsBig"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Ambush","LDirtEffectsBig"}, // Sol terreux avec herbes vertes
			{"LIB_Staszow_Burn","LDustEffects"}, // sol brulé
			{"LIB_Staszow_Burn","LDirtEffectsBig"}, // sol brulé
			{"LIB_Staszow_Forest","LDustEffects"}, // Sous-bois
			{"LIB_Staszow_Forest","LGrassEffectsBig"}, // Sous-bois
			{"LIB_Staszow_Forest","LDirtEffectsBig"}, // Sous-bois
			{"LIB_Staszow_Grass","LDustEffects"}, // herbe verte
			{"LIB_Staszow_Grass","LGrassEffectsBig"}, // herbe verte
			{"LIB_Staszow_Grass","LDirtEffectsBig"}, // herbe verte
			{"LIB_Staszow_Grazy","LDustEffects"},
			{"LIB_Staszow_Grazy","LGrassEffectsBig"},
			{"LIB_Staszow_Grazy","LDirtEffectsBig"},
			{"LIB_Staszow_Oldgrass","LDustEffects"},
			{"LIB_Staszow_Oldgrass","LGrassEffectsDryBig"},
			{"LIB_Staszow_Oldgrass","LDirtEffectsBig"},
			{"LIB_Staszow_Oldwheat","LDustEffects"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Oldwheat","LGrassEffectsDryBig"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Oldwheat","LDirtEffectsBig"}, // Champ de blé jaune coupé fond terre labour
			{"LIB_Staszow_Sand","LDustEffects"}, // Sable
			{"LIB_Staszow_Sand","LDirtEffectsBig"}, // Sable
			{"LIB_Staszow_Sand","LSandEffects"}, // Sable
			{"LIB_Staszow_Swamp","LDustEffects"}, // marais
			{"LIB_Staszow_Swamp","LGrassEffectsBig"}, // marais
			{"LIB_Staszow_Swamp","LDirtEffectsBig"}, // marais
			{"LIB_Staszow_Wheat","LDustEffects"}, // champ de blé jaune non coupé fond terre seche
			{"LIB_Staszow_Wheat","LGrassEffectsDryBig"}, // champ de blé jaune non coupé fond terre seche
			{"LIB_Staszow_Wheat","LDirtEffectsBig"}, // champ de blé jaune non coupé fond terre seche
			{"swu_aachen_corn_field","LDustEffects"}, // Champ herbe
			{"swu_aachen_corn_field","LGrassEffectsBig"}, // Champ herbe
			{"swu_aachen_corn_field","LDirtEffectsBig"}, // Champ herbe
			{"swu_aachen_footsteps","LDustEffects"}, // terreux
			{"swu_aachen_footsteps","LDirtEffectsBig"}, // terreux
			{"swu_aachen_forest","LDustEffects"}, // sous bois herbe
			{"swu_aachen_forest","LGrassEffectsBig"}, // sous bois herbe
			{"swu_aachen_forest","LDirtEffectsBig"}, // sous bois herbe
			{"swu_aachen_main_field","LDustEffects"}, // Champ herbe brun
			{"swu_aachen_main_field","LGrassEffectsDryBig"}, // Champ herbe brun
			{"swu_aachen_main_field","LDirtEffectsBig"}, // Champ herbe brun
			{"swu_aachen_roads","LDustEffects"}, // terreux bord de route
			{"swu_aachen_roads","LDirtEffectsBig"}, // terreux bord de route
			{"swu_berlin_grass","LDustEffects"},
			{"swu_berlin_grass","LGrassEffectsBig"},
			{"swu_berlin_grass","LDirtEffectsBig"},
			{"swu_berlin_main","LDustEffects"},
			{"swu_berlin_main","LDirtEffectsBig"},
			{"SWU_Dunkirk_Roadside","LDustEffects"}, // bord de route herbe terreuse
			{"SWU_Dunkirk_Roadside","LGrassEffectsBig"}, // bord de route herbe terreuse
			{"SWU_Dunkirk_Roadside","LDirtEffectsBig"}, // bord de route herbe terreuse
			{"SWU_Forest_Mud","LDustEffects"}, // sous bois
			{"SWU_Forest_Mud","LGrassEffectsBig"}, // sous bois
			{"SWU_Forest_Mud","LDirtEffectsBig"}, // sous bois
			{"SWU_Grass_Normal","LDustEffects"}, // herbe
			{"SWU_Grass_Normal","LGrassEffectsBig"}, // herbe
			{"SWU_Grass_Normal","LDirtEffectsBig"}, // herbe
			{"SWU_Grassy_Floor","LDustEffects"}, // herbe
			{"SWU_Grassy_Floor","LGrassEffectsBig"}, // herbe
			{"SWU_Grassy_Floor","LDirtEffectsBig"}, // herbe
			{"swu_greece_grass","LDustEffects"}, // Herbe
			{"swu_greece_grass","LGrassEffectsBig"}, // Herbe
			{"swu_greece_grass","LDirtEffectsBig"}, // Herbe
			{"swu_greece_road","LDustEffects"}, // bord de route terre et herbe seche
			{"swu_greece_road","LGrassEffectsDryBig"}, // bord de route terre et herbe seche
			{"swu_greece_road","LDirtEffectsBig"}, // bord de route terre et herbe seche
			{"swu_greece_vinesdust","LDustEffects"}, // Champ herbe très seche
			{"swu_greece_vinesdust","LGrassEffectsDryBig"}, // Champ herbe très seche
			{"swu_greece_vinesdust","LDirtEffectsBig"}, // Champ herbe très seche
			{"swu_greece_woods","LDustEffects"}, // sous bois herebe
			{"swu_greece_woods","LGrassEffectsBig"}, // sous bois herebe
			{"swu_greece_woods","LDirtEffectsBig"}, // sous bois herebe
			{"SWU_Road_Side","LDustEffects"}, // bord de route terreux
			{"SWU_Road_Side","LDirtEffectsBig"}, // bord de route terreux
			{"SWU_Sandy_Floor","LDustEffects"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","LGrassEffectsDryBig"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","LDirtEffectsBig"}, // sol sabloneux avec herbe
			{"SWU_Sandy_Floor","LSandEffects"}, // sol sabloneux avec herbe
			// Fallujah
			{"siFallujahTerra","LDustEffects"},
			{"siFallujahTerra","LDirtEffectsBig"},
			{"siFallujahAcqua","LDustEffects"},
			{"siFallujahErba","LGrassEffectsDryBig"},
			{"siFallujahErba","LDustEffects"},
			{"siFallujahErba","LDirtEffectsBig"},
			{"siFallujahSabbia","LDustEffects"},
			{"siFallujahSabbia","LDirtEffectsBig"},
			{"siFallujahSabbia","LStonesEffectsBig"},
			{"siFallujahCitta","LDirtEffectsBig"},
			{"siFallujahCitta","LDustEffects"},
			//N'ziwasogo (projeta 305)
			{"mak305_dirt","LDustEffects"},
			{"mak305_dirt","LDirtEffectsBig"},
			{"mak305_jungle","LDustEffects"},
			{"mak305_jungle","LDirtEffectsBig"},
			{"mak305_jungle","LGrassEffectsBig"},
			{"mak305_dirtgrass","LDustEffects"},
			{"mak305_dirtgrass","LDirtEffectsBig"},
			{"mak305_dirtgrass","LGrassEffectsBig"},
			{"mak305_palm","LDustEffects"},
			{"mak305_palm","LDirtEffectsBig"},
			{"mak305_palm","LGrassEffectsDryBig"},
			{"mak305_palmbroken","LDustEffects"},
			{"mak305_palmbroken","LDirtEffectsBig"},
			{"mak305_palmbroken","LGrassEffectsDryBig"},
			{"mak305_sand","LDustEffects"},
			{"mak305_sand","LDirtEffectsBig"},
			{"mak305_sand","LSandEffects"},
			// Aliabad
			{"AliDirtSurface","LDustEffects"},
			{"AliDirtSurface","LDirtEffectsBig"},
			{"AliSandSurface","LDustEffects"},
			{"AliSandSurface","LStonesEffectsBig"},
			{"AliSandSurface","LDirtEffectsBig"},
			{"AliDesertSurface","LDustEffects"},
			{"AliDesertSurface","LStonesEffectsBig"},
			{"AliDesertSurface","LDirtEffectsBig"},
			{"AliForestSurface","LDustEffects"},
			{"AliForestSurface","LDirtEffectsBig"},
			{"AliRockySurface","LDustEffects"},
			{"AliRockySurface","LDirtEffectsBig"},
			{"AliCliffSurface","LDustEffects"},
			{"AliRiverbedSurface","LDustEffects"},
			// HazarKot
			{"FTDirtSurface","LDustEffects"},
			{"FTDirtSurface","LDirtEffectsBig"},
			{"FTSandSurface","LDustEffects"},
			{"FTSandSurface","LStonesEffectsBig"},
			{"FTSandSurface","LDirtEffectsBig"},
			{"FTDesertSurface","LDustEffects"},
			{"FTDesertSurface","LStonesEffectsBig"},
			{"FTDesertSurface","LDirtEffectsBig"},
			{"FTForestSurface","LDustEffects"},
			{"FTForestSurface","LDirtEffectsBig"},
			{"FTRockySurface","LDustEffects"},
			{"FTRockySurface","LDirtEffectsBig"},
			// Caribou
			{"CARIBOU_FOREST01","LDustEffects"},
			{"CARIBOU_FOREST01","LDirtEffectsBig"},
			{"CARIBOU_FOREST02","LDustEffects"},
			{"CARIBOU_FOREST02","LDirtEffectsBig"},
			{"CARIBOU_GRASS01","LGrassEffectsDryBig"},
			{"CARIBOU_GRASS01","LDustEffects"},
			{"CARIBOU_GRASS01","LDirtEffectsBig"},
			{"CARIBOU_GRASS02","LGrassEffects"},
			{"CARIBOU_GRASS02","LDustEffects"},
			{"CARIBOU_GRASS02","LDirtEffectsBig"},
			{"CARIBOU_GRAVEL01","LDirtEffectsBig"},
			{"CARIBOU_GRAVEL01","LDustEffects"},
			{"CARIBOU_GRAVEL02","LDirtEffectsBig"},
			{"CARIBOU_GRAVEL02","LDustEffects"},
			{"CARIBOU_ROCK01","LDirtEffectsBig"},
			{"CARIBOU_ROCK01","LDustEffects"},
			{"CARIBOU_ROCK02","LDirtEffectsBig"},
			{"CARIBOU_ROCK02","LDustEffects"},
			{"CARIBOU_BETON01","LDirtEffectsBig"},
			{"CARIBOU_BETON01","LDustEffects"},
			// Duala
			{"duala_grass","LDustEffects"},
			{"duala_grass","LDirtEffectsBig"},
			{"duala_grass","LStonesEffectsBig"},
			{"duala_grass","LGrassEffectsDryBig"},
			{"duala_rock","LDustEffects"},
			{"duala_rock","LDirtEffectsBig"},
			{"duala_rock","LStonesEffectsBig"},
			{"duala_stones","LDustEffects"},
			{"duala_stones","LGrassEffectsBig"},
			{"duala_stones","LDirtEffectsBig"},
			{"duala_stones","LStonesEffectsBig"},
			{"duala_wood","LDustEffects"},
			{"duala_wood","LDirtEffectsBig"},
			{"duala_wood","LStonesEffectsBig"},
			{"duala_sand","LDustEffects"},
			{"duala_sand","LDirtEffectsBig"},
			{"duala_sand","LStonesEffectsBig"},
			// Podagorsk
			{"FDF_Tex_1","LDirtEffectsBig"},
			{"FDF_Tex_1","LDustEffects"},
			{"FDF_Tex_2","LDustEffects"},
			{"FDF_Tex_2","LGrassEffectsBig"},
			{"FDF_Tex_3","LDirtEffectsBig"},
			{"FDF_Tex_3","LDustEffects"},
			{"FDF_Tex_4","LDirtEffectsBig"},
			{"FDF_Tex_4","LDustEffects"},
			{"FDF_Tex_5","LDirtEffectsBig"},
			{"FDF_Tex_5","LDustEffects"},
			{"FDF_Tex_6","LDirtEffectsBig"},
			{"FDF_Tex_7","LDustEffects"},
			{"FDF_Tex_7","LDirtEffectsBig"},
			{"FDF_Tex_7","LStonesEffectsBig"},
			{"FDF_Tex_8","LDustEffects"},
			{"FDF_Tex_8","LStonesEffectsBig"},
			{"FDF_Tex_9","LDustEffects"},
			{"FDF_Tex_9","LDirtEffectsBig"},
			{"FDF_Tex_9","LStonesEffectsBig"},
			{"FDF_Tex_10","LDustEffects"},
			{"FDF_Tex_11","LDirtEffectsBig"},
			// Zernovo
			{"gsep_creekbedsurface","LDustEffects"},
			{"gsepconcretegroundsurface","LDustEffects"},
			{"gsepdirtsurface","LDustEffects"},
			{"gsepdirtsurface","LDirtEffectsBig"},
			{"gsepforest1surface","LDustEffects"},
			{"gsepforest1surface","LDirtEffectsBig"},
			{"gseptallgrasssurface","LDustEffects"},
			{"gseptallgrasssurface","LDirtEffectsBig"},
			{"gseptallgrasssurface","LGrassEffects"},
			{"gsepshortgrasssurface","LDustEffects"},
			{"gsepshortgrasssurface","LDirtEffectsBig"},
			{"gsepshortgrasssurface","LGrassEffects"},
			{"gsepbarerocksurface","LDustEffects"},
			{"gsepbarerocksurface","LStonesEffectsBig"},
			{"gsepgravelsurface","LDustEffects"},
			{"gsepgravelsurface","LDirtEffectsBig"},
			{"gsephayfieldsurface","LDustEffects"},
			{"gsephayfieldsurface","LDirtEffectsBig"},
			{"gsephayfieldsurface","LGrassEffectsDryBig"},
			{"gsepcropsurface","LDustEffects"},
			{"gsepcropsurface","LDirtEffectsBig"},
			/*
			// Taunus
			{"xcam_grass_green_co","LStonesEffectsBig"},
			{"xcam_grass_green_co","LDirtEffectsBig"},
			{"xcam_grass_green_co","LGrassEffectsDryBig"},
			{"xcam_grass_green_co","LGrassEffectsBig"},
			{"xcam_grass_green_co","LDustEffects"},
			{"xcam_grassbravo_co","LStonesEffectsBig"},
			{"xcam_grassbravo_co","LDirtEffectsBig"},
			{"xcam_grassbravo_co","LGrassEffectsDryBig"},
			{"xcam_grassbravo_co","LGrassEffectsBig"},
			{"xcam_grassbravo_co","LDustEffects"},
			{"xcam_acker_co","LStonesEffectsBig"},
			{"xcam_acker_co","LDirtEffectsBig"},
			{"xcam_acker_co","LGrassEffectsDryBig"},
			{"xcam_acker_co","LGrassEffectsBig"},
			{"xcam_acker_co","LDustEffects"},
			{"xcam_dirt_co","LStonesEffectsBig"},
			{"xcam_dirt_co","LDirtEffectsBig"},
			{"xcam_dirt_co","LGrassEffectsDryBig"},
			{"xcam_dirt_co","LDustEffects"},
			{"xcam_forestground1_co","LStonesEffectsBig"},
			{"xcam_forestground1_co","LDirtEffectsBig"},
			{"xcam_forestground1_co","LGrassEffectsDryBig"},
			{"xcam_forestground1_co","LGrassEffectsBig"},
			{"xcam_forestground1_co","LDustEffects"},
			{"xcam_asfalt_co","LStonesEffectsBig"},
			{"xcam_asfalt_co","LDirtEffectsBig"},
			{"xcam_asfalt_co","LGrassEffectsDryBig"},
			{"xcam_asfalt_co","LDustEffects"},
			*/
			// Thirsk
			{"THgrass2","LDustEffects"},
			{"THgrass2","LDirtEffectsBig"},
			{"THgrass2","LGrassEffectsBig"},
			{"THgrass3","LDustEffects"},
			{"THgrass3","LDirtEffectsBig"},
			{"THgrass3","LGrassEffectsDryBig"},
			{"THForest1","LDustEffects"},
			{"THForest1","LDirtEffectsBig"},
			{"THForest1","LStonesEffectsBig"},
			{"THForest2","LDustEffects"},
			{"THForest2","LDirtEffectsBig"},
			{"THGrit1","LDustEffects"},
			{"THGrit1","LDirtEffectsBig"},
			{"THGrit1","LStonesEffectsBig"},
			{"THBetoni1","LDustEffects"},
			{"THRock","LDustEffects"},
			{"THRock","LStonesEffectsBig"},
			{"THTarmac","LDustEffects"},
			// PKL
			{"bludriver","LDirtEffectsBig"},
			{"bludjungle1","LDirtEffectsBig"},
			{"bludjungle2","LDirtEffectsBig"},
			{"bludjungle3","LDirtEffectsBig"},
			{"bludgressj","LDirtEffectsBig"},
			{"bludgressj","LDustEffects"},
			{"bludgressj","LGrassEffectsBig"},
			{"bludjunglerd1","LDirtEffectsBig"},
			{"bludjunglerd1","LDustEffects"},
			{"bludjunglerd2","LDirtEffectsBig"},
			{"bludjunglerd2","LDustEffects"},
			{"bludrivermaling","LDirtEffectsBig"},
			{"bludrivermaling","LDustEffects"},
			{"blud_sti","LDirtEffectsBig"},
			{"blud_sti","LDustEffects"},
			// Ndjenahoud
			{"mak319_desgrass","LDustEffects"},
			{"mak319_desgrass","LDirtEffectsBig"},
			{"mak319_desgrass","LStonesEffectsBig"},
			{"mak319_stony","LDustEffects"},
			{"mak319_stony","LDirtEffectsBig"},
			{"mak319_stony","LGrassEffectsBig"},
			{"mak308_Dirt","LDustEffects"},
			{"mak308_Dirt","LDirtEffectsBig"},
			{"mak308_Dirt","LGrassEffectsBig"},
			{"mak308_GrassDry","LDustEffects"},
			{"mak308_GrassDry","LDirtEffectsBig"},
			{"mak308_GrassDry","LGrassEffectsDryBig"},
			{"mak319_thorn","LDustEffects"},
			{"mak319_thorn","LDirtEffectsBig"},
			{"mak319_thorn","LGrassEffectsDryBig"},
			{"mak319_desert","LDustEffects"},
			{"mak319_desert","LDirtEffectsBig"},
			{"mak319_desert","LStonesEffectsBig"}
		};
	};
	class Air: AllVehicles
	{
		rightDustEffects[] =
		{
			{"GdtGrassShort","RDustEffectsAir"},
			{"GdtGrassShort","RGrassEffects"},
			{"GdtGrassTall","RDustEffectsAir"},
			{"GdtGrassTall","RGrassEffects"},
			{"GdtRedDirt","RDustEffectsAirRed"},
			{"GdtField","RDustEffectsAir"},
			{"GdtForest","RDustEffectsAir"},
			{"GdtVolcano","RDustEffectsAir"},
			{"GdtVolcano","RStonesEffects"},
			{"GdtCliff","RDustEffectsAir"},
			{"GdtVolcanoBeach","RDustEffectsAir"},
			{"SurfRoadDirt_exp","RDustEffectsAirRed"},
			{"SurfRoadConcrete_exp","RDustEffectsAir"},
			{"SurfRoadTarmac_exp","RDustEffectsAir"},
			{"GdtStratisConcrete","RDustEffectsAir"},
			{"GdtStratisConcrete","RDirtEffects"},
			{"GdtStratisBeach","RDustEffectsAir"},
			{"GdtStratisBeach","RStonesEffects"},
			{"GdtStratisDirt","RDustEffectsAir"},
			{"GdtStratisDirt","RDirtEffects"},
			{"GdtStratisSeabedCluttered","RDustEffectsAir"},
			{"GdtStratisSeabed","RDustEffectsAir"},
			{"GdtStratisDryGrass","RDustEffectsAir"},
			{"GdtStratisDryGrass","RGrassDryEffects"},
			{"GdtStratisDryGrass","RDirtEffects"},
			{"GdtStratisGreenGrass","RDustEffectsAir"},
			{"GdtStratisGreenGrass","RGrassEffects"},
			{"GdtStratisGreenGrass","RDirtEffects"},
			{"GdtStratisRocky","RDustEffectsAir"},
			{"GdtStratisRocky","RGrassEffects"},
			{"GdtStratisRocky","RDirtEffects"},
			{"GdtStratisThistles","RDustEffectsAir"},
			{"GdtStratisThistles","RGrassEffects"},
			{"GdtStratisThistles","RDirtEffects"},
			{"GdtConcrete","RDustEffectsAir"},
			{"GdtConcrete","RDirtEffects"},
			{"GdtAsphalt","RDustEffectsAir"},
			{"GdtAsphalt","RDirtEffects"},
			{"GdtRubble","RDustEffectsAir"},
			{"GdtRubble","RDirtEffects"},
			{"GdtSoil","RDustEffectsAir"},
			{"GdtSoil","RDirtEffects"},
			{"GdtBeach","RDustEffectsAir"},
			{"GdtBeach","RStonesEffects"},
			{"GdtRock","RDustEffectsAir"},
			{"GdtRock","RDirtEffects"},
			{"GdtDead","RDustEffectsAir"},
			{"GdtDead","RDirtEffects"},
			{"Default","RDustEffectsAir"},
			{"GdtDesert1","RDustEffectsAir"},
			{"GdtDesert1","RSandEffects"},
			{"GdtDesert1","RDirtEffects"},
			{"GdtDesert1","RStonesEffects"},
			{"GdtDesert2","RDustEffectsAir"},
			{"GdtDesert2","RSandEffects"},
			{"GdtDesert2","RGrassEffects"},
			{"GdtDesert2","RDirtEffects"},
			{"GdtDirt","RDustEffectsAir"},
			{"GdtDirt","RDirtEffects"},
			{"GdtGrassGreen","RDustEffectsAir"},
			{"GdtGrassGreen","RGrassEffects"},
			{"GdtGrassGreen","RDirtEffects"},
			{"GdtGrassDry","RDustEffectsAir"},
			{"GdtGrassDry","RGrassDryEffects"},
			{"GdtGrassDry","RDirtEffects"},
			{"GdtGrassWild","RDustEffectsAir"},
			{"GdtGrassWild","RGrassEffects"},
			{"GdtGrassWild","RDirtEffects"},
			{"GdtWildField","RDustEffectsAir"},
			{"GdtWildField","RGrassEffects"},
			{"GdtWildField","RDirtEffects"},
			{"GdtWeed1","RDustEffectsAir"},
			{"GdtWeed1","RGrassEffects"},
			{"GdtWeed1","RDirtEffects"},
			{"GdtWeed2","RDustEffectsAir"},
			{"GdtWeed2","RGrassEffects"},
			{"GdtWeed2","RDirtEffects"},
			{"GdtThorn","RDustEffectsAir"},
			{"GdtThorn","RGrassEffects"},
			{"GdtThorn","RDirtEffects"},
			{"GdtStony","RDustEffectsAir"},
			{"GdtStony","RGrassEffects"},
			{"GdtStony","RDirtEffects"},
			{"GdtStonyGreen","RDustEffectsAir"},
			{"GdtStonyGreen","RGrassEffects"},
			{"GdtStonyGreen","RDirtEffects"},
			{"GdtStonyThistle","RDustEffectsAir"},
			{"GdtStonyThistle","RGrassEffects"},
			{"GdtStonyThistle","RDirtEffects"},
			{"GdtSeabedDeep","RDustEffectsAir"},
			{"GdtSeabed","RDustEffectsAir"},
			{"SurfRoadDirt","RDustEffectsAir"},
			{"SurfRoadConcrete","RDustEffectsAir"},
			{"SurfRoadTarmac","RDustEffectsAir"},
			{"SurfWood","RDustEffectsAir"},
			{"SurfMetal","RDustEffectsAir"},
			{"SurfRoofTin","RDustEffectsAir"},
			{"SurfRoofTiles","RDustEffectsAir"},
			{"SurfIntWood","RDustEffectsAir"},
			{"SurfIntConcrete","RDustEffectsAir"},
			{"SurfIntTiles","RDustEffectsAir"},
			{"SurfIntMetal","RDustEffectsAir"},
			// CUP TP
			//N'ziwasogo (projeta 305)
			{"mak305_dirt","RDustEffectsAir"},
			{"mak305_dirt","RDustEffects"},
			{"mak305_dirt","RDirtEffects"},
			{"mak305_jungle","RDustEffectsAir"},
			{"mak305_jungle","RDustEffects"},
			{"mak305_jungle","RDirtEffects"},
			{"mak305_jungle","RGrassEffects"},
			{"mak305_dirtgrass","RDustEffectsAir"},
			{"mak305_dirtgrass","RDustEffects"},
			{"mak305_dirtgrass","RDirtEffects"},
			{"mak305_dirtgrass","RGrassEffects"},
			{"mak305_palm","RDustEffectsAir"},
			{"mak305_palm","RDustEffects"},
			{"mak305_palm","RDirtEffects"},
			{"mak305_palm","RGrassDryEffects"},
			{"mak305_palmbroken","RDustEffectsAir"},
			{"mak305_palmbroken","RDustEffects"},
			{"mak305_palmbroken","RDirtEffects"},
			{"mak305_palmbroken","RGrassDryEffects"},
			{"mak305_sand","RDustEffectsAir"},
			{"mak305_sand","RDustEffects"},
			{"mak305_sand","RDirtEffects"},
			{"mak305_sand","RSandEffects"},
			// Duala
			{"duala_grass","RDustEffectsAir"},
			{"duala_grass","RGrassDryEffects"},
			{"duala_grass","RDirtEffects"},
			{"duala_stones","RDustEffectsAir"},
			{"duala_stones","RGrassEffects"},
			{"duala_stones","RDirtEffects"},
			{"duala_rock","RDirtEffects"},
			{"duala_rock","RDustEffectsAir"},
			{"duala_rock","RStonesEffects"},
			{"duala_wood","RDustEffectsAir"},
			{"duala_wood","RSandEffects"},
			{"duala_wood","RDirtEffects"},
			{"duala_wood","RStonesEffects"},
			{"duala_sand","RDustEffectsAir"},
			{"duala_sand","RSandEffects"},
			{"duala_sand","RDirtEffects"},
			{"duala_sand","RStonesEffects"},
			// Ndjenahoud
			{"mak319_desgrass","RDustEffectsAir"},
			{"mak319_desgrass","RDustEffects"},
			{"mak319_desgrass","RDirtEffects"},
			{"mak319_desgrass","RStonesEffects"},
			{"mak319_stony","RDustEffectsAir"},
			{"mak319_stony","RDustEffects"},
			{"mak319_stony","RDirtEffects"},
			{"mak319_stony","RGrassEffects"},
			{"mak308_Dirt","RDustEffectsAir"},
			{"mak308_Dirt","RDustEffects"},
			{"mak308_Dirt","RDirtEffects"},
			{"mak308_Dirt","RGrassEffects"},
			{"mak308_GrassDry","RDustEffectsAir"},
			{"mak308_GrassDry","RDustEffects"},
			{"mak308_GrassDry","RDirtEffects"},
			{"mak308_GrassDry","RgrassdryEffects"},
			{"mak319_thorn","RDustEffectsAir"},
			{"mak319_thorn","RDustEffects"},
			{"mak319_thorn","RDirtEffects"},
			{"mak319_thorn","RgrassdryEffects"},
			{"mak319_desert","RDustEffectsAir"},
			{"mak319_desert","RDustEffects"},
			{"mak319_desert","RDirtEffects"}
		};
		leftDustEffects[] =
		{
			{"GdtGrassShort","LDustEffectsAir"},
			{"GdtGrassShort","LGrassEffects"},
			{"GdtGrassTall","LDustEffectsAir"},
			{"GdtGrassTall","LGrassEffects"},
			{"GdtRedDirt","LDustEffectsAirRed"},
			{"GdtField","LDustEffectsAir"},
			{"GdtForest","LDustEffectsAir"},
			{"GdtVolcano","LDustEffectsAir"},
			{"GdtVolcano","LStonesEffects"},
			{"GdtCliff","LDustEffectsAir"},
			{"GdtVolcanoBeach","LDustEffectsAir"},
			{"SurfRoadDirt_exp","LDustEffectsAirRed"},
			{"SurfRoadConcrete_exp","LDustEffectsAir"},
			{"SurfRoadTarmac_exp","LDustEffectsAir"},
			{"GdtStratisConcrete","LDustEffectsAir"},
			{"GdtStratisConcrete","LDirtEffects"},
			{"GdtStratisBeach","LDustEffectsAir"},
			{"GdtStratisBeach","LStonesEffects"},
			{"GdtStratisDirt","LDustEffectsAir"},
			{"GdtStratisDirt","LDirtEffects"},
			{"GdtStratisSeabedCluttered","LDustEffectsAir"},
			{"GdtStratisSeabed","LDustEffectsAir"},
			{"GdtStratisDryGrass","LDustEffectsAir"},
			{"GdtStratisDryGrass","LGrassDryEffects"},
			{"GdtStratisDryGrass","LDirtEffects"},
			{"GdtStratisGreenGrass","LDustEffectsAir"},
			{"GdtStratisGreenGrass","LGrassEffects"},
			{"GdtStratisGreenGrass","LDirtEffects"},
			{"GdtStratisRocky","LDustEffectsAir"},
			{"GdtStratisRocky","LGrassEffects"},
			{"GdtStratisRocky","LDirtEffects"},
			{"GdtStratisThistles","LDustEffectsAir"},
			{"GdtStratisThistles","LGrassEffects"},
			{"GdtStratisThistles","LDirtEffects"},
			{"GdtConcrete","LDustEffectsAir"},
			{"GdtConcrete","LDirtEffects"},
			{"GdtAsphalt","LDustEffectsAir"},
			{"GdtAsphalt","LDirtEffects"},
			{"GdtRubble","LDustEffectsAir"},
			{"GdtRubble","LGrassEffects"},
			{"GdtRubble","LDirtEffects"},
			{"GdtSoil","LDustEffectsAir"},
			{"GdtSoil","LDirtEffects"},
			{"GdtBeach","LDustEffectsAir"},
			{"GdtBeach","LStonesEffects"},
			{"GdtRock","LDustEffectsAir"},
			{"GdtRock","LDirtEffects"},
			{"GdtDead","LDustEffectsAir"},
			{"GdtDead","LDirtEffects"},
			{"Default","LDustEffectsAir"},
			{"GdtDesert1","LDustEffectsAir"},
			{"GdtDesert1","LSandEffects"},
			{"GdtDesert1","LDirtEffects"},
			{"GdtDesert1","LStonesEffects"},
			{"GdtDesert2","LDustEffectsAir"},
			{"GdtDesert2","LSandEffects"},
			{"GdtDesert2","LGrassEffects"},
			{"GdtDesert2","LDirtEffects"},
			{"GdtDirt","LDustEffectsAir"},
			{"GdtDirt","LDirtEffects"},
			{"GdtGrassGreen","LDustEffectsAir"},
			{"GdtGrassGreen","LGrassEffects"},
			{"GdtGrassGreen","LDirtEffects"},
			{"GdtGrassDry","LDustEffectsAir"},
			{"GdtGrassDry","LGrassDryEffects"},
			{"GdtGrassDry","LDirtEffects"},
			{"GdtGrassWild","LDustEffectsAir"},
			{"GdtGrassWild","LGrassEffects"},
			{"GdtGrassWild","LDirtEffects"},
			{"GdtWildField","LDustEffectsAir"},
			{"GdtWildField","LGrassEffects"},
			{"GdtWildField","LDirtEffects"},
			{"GdtWeed1","LDustEffectsAir"},
			{"GdtWeed1","LGrassEffects"},
			{"GdtWeed1","LDirtEffects"},
			{"GdtWeed2","LDustEffectsAir"},
			{"GdtWeed2","LGrassEffects"},
			{"GdtWeed2","LDirtEffects"},
			{"GdtThorn","LDustEffectsAir"},
			{"GdtThorn","LGrassEffects"},
			{"GdtThorn","LDirtEffects"},
			{"GdtStony","LDustEffectsAir"},
			{"GdtStony","LGrassEffects"},
			{"GdtStony","LDirtEffects"},
			{"GdtStonyGreen","LDustEffectsAir"},
			{"GdtStonyGreen","LGrassEffects"},
			{"GdtStonyGreen","LDirtEffects"},
			{"GdtStonyThistle","LDustEffectsAir"},
			{"GdtStonyThistle","LGrassEffects"},
			{"GdtStonyThistle","LDirtEffects"},
			{"GdtSeabedDeep","LDustEffectsAir"},
			{"GdtSeabed","LDustEffectsAir"},
			{"SurfRoadDirt","LDustEffectsAir"},
			{"SurfRoadConcrete","LDustEffectsAir"},
			{"SurfRoadTarmac","LDustEffectsAir"},
			{"SurfWood","LDustEffectsAir"},
			{"SurfMetal","LDustEffectsAir"},
			{"SurfRoofTin","LDustEffectsAir"},
			{"SurfRoofTiles","LDustEffectsAir"},
			{"SurfIntWood","LDustEffectsAir"},
			{"SurfIntConcrete","LDustEffectsAir"},
			{"SurfIntTiles","LDustEffectsAir"},
			{"SurfIntMetal","LDustEffectsAir"},
			// CUP TP
			//N'ziwasogo (projeta 305)
			{"mak305_dirt","LDustEffectsAir"},
			{"mak305_dirt","LDustEffects"},
			{"mak305_dirt","LDirtEffects"},
			{"mak305_jungle","LDustEffectsAir"},
			{"mak305_jungle","LDustEffects"},
			{"mak305_jungle","LDirtEffects"},
			{"mak305_jungle","LGrassEffects"},
			{"mak305_dirtgrass","LDustEffectsAir"},
			{"mak305_dirtgrass","LDustEffects"},
			{"mak305_dirtgrass","LDirtEffects"},
			{"mak305_dirtgrass","LGrassEffects"},
			{"mak305_palm","LDustEffectsAir"},
			{"mak305_palm","LDustEffects"},
			{"mak305_palm","LDirtEffects"},
			{"mak305_palm","LGrassDryEffects"},
			{"mak305_palmbroken","LDustEffectsAir"},
			{"mak305_palmbroken","LDustEffects"},
			{"mak305_palmbroken","LDirtEffects"},
			{"mak305_palmbroken","LGrassDryEffects"},
			{"mak305_sand","LDustEffectsAir"},
			{"mak305_sand","LDustEffects"},
			{"mak305_sand","LDirtEffects"},
			{"mak305_sand","LSandEffects"},
			// Duala
			{"duala_grass","LDustEffectsAir"},
			{"duala_grass","LGrassDryEffects"},
			{"duala_grass","LDirtEffects"},
			{"duala_stones","LDustEffectsAir"},
			{"duala_stones","LGrassEffects"},
			{"duala_stones","LDirtEffects"},
			{"duala_rock","LDirtEffects"},
			{"duala_rock","LDustEffectsAir"},
			{"duala_rock","LStonesEffects"},
			{"duala_wood","LDustEffectsAir"},
			{"duala_wood","LSandEffects"},
			{"duala_wood","LDirtEffects"},
			{"duala_wood","LStonesEffects"},
			{"duala_sand","LDustEffectsAir"},
			{"duala_sand","LSandEffects"},
			{"duala_sand","LDirtEffects"},
			{"duala_sand","LStonesEffects"},
			// Ndjenahoud
			{"mak319_desgrass","LDustEffectsAir"},
			{"mak319_desgrass","LDustEffects"},
			{"mak319_desgrass","LDirtEffects"},
			{"mak319_desgrass","LStonesEffects"},
			{"mak319_stony","LDustEffectsAir"},
			{"mak319_stony","LDustEffects"},
			{"mak319_stony","LDirtEffects"},
			{"mak319_stony","LGrassEffects"},
			{"mak308_Dirt","LDustEffectsAir"},
			{"mak308_Dirt","LDustEffects"},
			{"mak308_Dirt","LDirtEffects"},
			{"mak308_Dirt","LGrassEffects"},
			{"mak308_GrassDry","LDustEffectsAir"},
			{"mak308_GrassDry","LDustEffects"},
			{"mak308_GrassDry","LDirtEffects"},
			{"mak308_GrassDry","LgrassdryEffects"},
			{"mak319_thorn","LDustEffectsAir"},
			{"mak319_thorn","LDustEffects"},
			{"mak319_thorn","LDirtEffects"},
			{"mak319_thorn","LgrassdryEffects"},
			{"mak319_desert","LDustEffectsAir"},
			{"mak319_desert","LDustEffects"},
			{"mak319_desert","LDirtEffects"}
		};
	};
};