/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com
	
    Defines available vehicle shops
	
	class YourShopClass - Used as a param for the call, basically the shop you want to display
	{
		conditionToAccess - STRING - Condition that must return either true or false, if true the player will have access to the shop
		
		class YourShopCategory - Shop category, can be whatever you want
		{
			displayName - STRING - Category display name
			vehicles - ARRAY OF ARRAYS - Shop content
			|- 0 - STRING - Classname
			|- 1 - INTEGER - Price
			|- 2 - STRING - Condition that must return either true or false, if true the vehicle appears in the list else no
			spawnPoints - ARRAY OF ARRAYS - Spawn positions (markers/positions)
			|- 0 - STRING - Display name in the dialog
			|- 1 - ARRAY OF MIXED - Markers/positions
		};
	};
*/

class HG_DefaultShop // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
    conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
    class BUDGET
	{
	    displayName = "Budget Cars";
		vehicles[] =
		{
		    {"walker_a3_c_datsun",11000,"true"},
			{"walker_a3_datsun",11000,"true"},
			{"walker_a3_gaz",11000,"true"},
			{"walker_a3_gazblue",11000,"true"},
			{"walker_a3_gaztblack",11000,"true"},
			{"walker_a3_gaztblue",11000,"true"},
			{"walker_a3_gaztorange",11000,"true"},
			{"walker_a3_gaztred",11000,"true"},
			{"walker_a3_gaztwhite",11000,"true"},
			{"walker_a3_golfblue",11000,"true"},
			{"walker_a3_golfgreen",11000,"true"},
			{"walker_a3_golf",11000,"true"},
			{"walker_a3_gtigolf",16000,"true"},
			{"walker_a3_golfgtiblue",16000,"true"},
			{"walker_a3_golfgtired",16000,"true"},
			{"walker_a3_lada_red",10000,"true"},
			{"walker_a3_lada",10000,"true"},
			{"walker_a3_octavia_black",10000,"true"},
			{"walker_a3_octavia_blue",10000,"true"},
			{"walker_a3_octavia_or",10000,"true"},
			{"walker_a3_octavia_red",10000,"true"},
			{"walker_a3_octavia",10000,"true"},
			{"walker_a3_sedan",10000,"true"},
			{"walker_a3_sedan_blue",10000,"true"},
			{"walker_a3_sedan_green",10000,"true"},
			{"walker_a3_sedan_red",10000,"true"},
			{"walker_a3_skodovka",10000,"true"},
			{"walker_a3_skodovka_2",10000,"true"}
		};
	    spawnPoints[] =
		{
			{"Spawn Point #1",{"civilian_vehicles_spawn_1"}}
		};
	};
	
	class ALFA
	{
	    displayName = "Alfa Romeo";
		vehicles[] =
		{
		    {"AlessioQuadrifoglio",30000,"true"},
			{"AlessioQuadrifoglioC",30000,"true"},
			{"AlessioQuadrifoglioG",30000,"true"},
			{"AlessioQuadrifoglioM",30000,"true"}
		};
	    spawnPoints[] =
		{
			{"Spawn Point #1",{"civilian_vehicles_spawn_1"}}
		};
	};
	
	class AUDI
	{
	    displayName = "Audi";
		vehicles[] =
		{
		    {"AlessioRS4",25000,"true"},
			{"AlessioRS4Chrome",25000,"true"},
			{"AlessioRS4Gold",25000,"true"},
			{"AlessioRS4Mat",25000,"true"},
			{"V12_RS609_BLEU",30000,"true"},
			{"V12_RS609_GRIS",30000,"true"},
			{"V12_RS609_NOIR",30000,"true"},
			{"V12_RS609_ORANGE",30000,"true"},
			{"V12_RS609",30000,"true"}
		};
	    spawnPoints[] =
		{
			{"Spawn Point #1",{"civilian_vehicles_spawn_1"}}
		};
	};
	
	class Blackmanswilly
	{
	    displayName = "BMW";
		vehicles[] =
		{
		    {"zorak_bmw_x6m",28000,"true"},
			{"AlessioBM4",28000,"true"},
			{"AlessioBMC",28000,"true"},
			{"AlessioBMG",28000,"true"},
			{"AlessioBM4M",28000,"true"},
			{"AlessioM5",28000,"true"},
			{"AlessioM5_Chrome",28000,"true"},
			{"AlessioM5_Gold",28000,"true"},
			{"AlessioM5Mat",28000,"true"}
		};
	    spawnPoints[] =
		{
			{"Spawn Point #1",{"civilian_vehicles_spawn_1"}}
		};
	};
	
	class PORSCE
	{
	    displayName = "Porsche";
		vehicles[] =
		{
		    {"zorak_porsche_cayenne",28000,"true"},
			{"AlessioPanamera",28000,"true"},
			{"AlessioPanamera_MAT",28000,"true"}
		};
	    spawnPoints[] =
		{
			{"Spawn Point #1",{"civilian_vehicles_spawn_1"}}
		};
	};
	
	class CHEV
	{
	    displayName = "Chevrolet";
		vehicles[] =
		{
		    {"3A_ZL1_18_base_blue_metal",22000,"true"},
			{"3A_ZL1_18_base_brown_metal",22000,"true"},
			{"3A_ZL1_18_base_dark_green_metal",22000,"true"},
			{"3A_ZL1_18_base_dark_red_metal",22000,"true"},
			{"3A_ZL1_18_base_Yellow_metal",22000,"true"},
			{"3A_ZL1_18_base_green_metal",22000,"true"},
			{"3A_ZL1_18_base_grey_metal",22000,"true"},
			{"3A_ZL1_18_base_light_blue_metal",22000,"true"},
			{"3A_ZL1_18_base_light_grey_metal",22000,"true"},
			{"3A_ZL1_18_base_lila_metal",22000,"true"},
			{"3A_ZL1_18_base_orange_metal",22000,"true"},
			{"3A_ZL1_18_base_Pink_metal",22000,"true"},
			{"3A_ZL1_18__red_metal",22000,"true"},
			{"3A_ZL1_18_base_black_metal",22000,"true"},
			{"3A_ZL1_18_base_turkis_metal",22000,"true"},
			{"3A_ZL1_18_base_Violett_metal",22000,"true"},
			{"3A_ZL1_18_base_withe_metal",22000,"true"}
		};
	    spawnPoints[] =
		{
			{"Spawn Point #1",{"civilian_vehicles_spawn_1"}}
		};
	};
	
	class HOLDEN
	{
	    displayName = "Holden";
		vehicles[] =
		{
		    {"Jonzie_HSV_GTS",23500,"true"},
			{"Jonzie_W427",23500,"true"}
		};
	    spawnPoints[] =
		{
			{"Spawn Point #1",{"civilian_vehicles_spawn_1"}}
		};
	};
	
	class FORD
	{
	    displayName = "Ford";
		vehicles[] =
		{
		    {"V12_VELOCIRAPTOR",26000,"true"}
		};
	    spawnPoints[] =
		{
			{"Spawn Point #1",{"civilian_vehicles_spawn_1"}}
		};
	};
	
	class LANDCRUI
	{
	    displayName = "Toyota Land Cruiser";
		vehicles[] =
		{
		    {"C_Sal_LandCrusierVXR_alt_V2_F",20000,"true"},
			{"C_Sal_LandCrusierVXR_Black_F",20000,"true"},
			{"C_Sal_LandCrusierVXR_whiteD_F",20000,"true"},
			{"C_Sal_LandCrusierVXR_redW_F",20000,"true"},
			{"C_Sal_LandCrusierVXR_spe_F",20000,"true"},
			{"C_Sal_LandCrusierVXR_alt_F",20000,"true"},
			{"C_Toyota_LandCruiser_F",20000,"true"},
			{"C_Toyota_LandCruiser_alt_V2_F",20000,"true"},
			{"C_Toyota_LandCruiser_Black_F",20000,"true"},
			{"C_Toyota_LandCruiser_whiteD_F",20000,"true"},
			{"C_Toyota_LandCruiser_redW_F",20000,"true"},
			{"C_Toyota_LandCruiser_spe_F",20000,"true"},
			{"C_Toyota_LandCruiser_alt_F",20000,"true"}
		};
	    spawnPoints[] =
		{
			{"Spawn Point #1",{"civilian_vehicles_spawn_1"}}
		};
	};
	
	class MERCEDES
	{
	    displayName = "Mercedes";
		vehicles[] =
		{
		    {"CarlosG65",21000,"true"},
			{"CarlosG65Mat",21000,"true"}
		};
	    spawnPoints[] =
		{
			{"Spawn Point #1",{"civilian_vehicles_spawn_1"}}
		};
	};
	
	class LANDROV
	{
	    displayName = "Land Rover";
		vehicles[] =
		{
		    {"UK3CB_Civ_LandRover_Hard_Blue_A",17500,"true"},
			{"UK3CB_Civ_LandRover_Hard_Green_A",17500,"true"},
			{"UK3CB_Civ_LandRover_Hard_Red_A",17500,"true"},
			{"UK3CB_Civ_LandRover_Soft_Blue_A",17500,"true"},
			{"UK3CB_Civ_LandRover_Soft_Red_A",17500,"true"},
			{"UK3CB_Civ_LandRover_Soft_Green_A",17500,"true"}
		};
	    spawnPoints[] =
		{
			{"Spawn Point #1",{"civilian_vehicles_spawn_1"}}
		};
	};
	
	class MUSCLE
	{
	    displayName = "Muscle Cars";
		vehicles[] =
		{
		    {"SIG_SuperBeeB",19500,"true"},
			{"SIG_SuperBeeG",19500,"true"},
			{"SIG_SuperBeeL",19500,"true"},
			{"SIG_SuperBeeM",19500,"true"},
			{"SIG_SuperBee",19500,"true"},
			{"SIG_SuperBeeY",19500,"true"},
			{"SIG_Magnums",19500,"true"},
			{"SIG_Hubcaps",19500,"true"},
			{"SIG_Hcode",19500,"true"},
			{"SIG_Roadrunner",19500,"true"}
		};
	    spawnPoints[] =
		{
			{"Spawn Point #1",{"civilian_vehicles_spawn_1"}}
		};
	};
};
