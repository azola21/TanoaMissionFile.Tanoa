/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com

    Defines available items shops
	
	class YourShopClass - Used as a param for the call, basically the shop you want to display
	{
		conditionToAccess - STRING - Condition that must return either true or false, if true the player will have access to the shop
		
		class YourShopCategory - Shop category, can be whatever you want
		{
			displayName - STRING - Category display name
			items - ARRAY OF ARRAYS - Shop content
			|- 0 - STRING - Classname
			|- 1 - INTEGER - Price
			|- 2 - STRING - Condition that must return either true or false, if true the item appears in the list else no
		};
	};
*/

class HG_WestAmmoShop // this addAction["<img image='HG\UI\Icons\money.paa' size='1.5'/><t color='#FF0000'>Rifle and SMG Ammunition Store</t>",{_this call HG_fnc_dialogOnLoadItems},"HG_WestAmmoShop",0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class 556Ammo
	{
	    displayName = "5.56/.223 Ammo";
		items[] =
		{
			{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,"true"},
			{"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",6,"true"},
			{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",6,"true"},
			{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",6,"true"},
			{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",6,"true"},
			{"rhs_mag_30Rnd_556x45_Mk318_Stanag",10,"true"},
			{"rhs_mag_30Rnd_556x45_Mk262_Stanag",20,"true"},
			{"rhs_mag_30Rnd_556x45_M855_Stanag",4,"true"},
			{"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",4,"true"},
			{"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green",4,"true"},
			{"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow",4,"true"},
			{"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange",4,"true"},
			{"SPS_60Rnd_556x45_Surefire_mag",12,"true"},
            {"SPS_60Rnd_556x45_Surefire_M995_AP_mag",50,"true"},
            {"SPS_60Rnd_556x45_Surefire_Mk262_mag",30,"true"},
            {"SPS_60Rnd_556x45_Surefire_Mk318_mag",20,"true"},
            {"SPS_60Rnd_556x45_Surefire_Tracer_Dim_mag",12,"true"},
            {"SPS_60Rnd_556x45_Surefire_Tracer_Red_mag",12,"true"},
            {"SPS_60Rnd_556x45_Surefire_RHS_Mk262_mag",30,"true"},
            {"SPS_60Rnd_556x45_Surefire_RHS_Mk318_mag",20,"true"},
            {"SPS_60Rnd_556x45_Surefire_M856A1_Trace_Yellow_mag",12,"true"},
            {"SPS_60Rnd_556x45_Surefire_M856A1_Trace_Green_mag",12,"true"},
            {"SPS_60Rnd_556x45_Surefire_M856A1_Trace_Red_mag",12,"true"},
            {"SPS_60Rnd_556x45_Surefire_M855A1_No_Tracer_mag",12,"true"},
            {"SPS_60Rnd_556x45_Surefire_M855A1_mag",12,"true"},
			{"CSW_XM8_30rnd_Mk318_SOST_mag",10,"true"},
			{"CSW_XM8_30rnd_M193_Ball_mag",3,"true"},
			{"CSW_XM8_30rnd_M855_FMJ_mag",4,"true"},
			{"CSW_XM8_30rnd_M855A1_LFS_mag",6,"true"},
			{"CSW_XM8_30rnd_Mk262_SPR_mag",20,"true"},
			{"CSW_XM8_30rnd_M995_AP_mag",25,"true"},
			{"CSW_XM8_30rnd_M196_Tracer_Red_mag",3,"true"},
			{"CSW_XM8_30rnd_M856_Tracer_Red_mag",4,"true"},
			{"CSW_XM8_30rnd_XM996_Dim_Tracer_mag",3,"true"},
			{"CSW_XM8_30rnd_Subsonic_mag",2,"true"},
			{"CSW_XM8_30rnd_Mk318_SOST_mag_G36",10,"true"},
			{"CSW_XM8_30rnd_M193_Ball_mag_G36",3,"true"},
			{"CSW_XM8_30rnd_M855_FMJ_mag_G36",4,"true"},
			{"CSW_XM8_30rnd_M855A1_LFS_mag_G36",6,"true"},
			{"CSW_XM8_30rnd_Mk262_SPR_mag_G36",20,"true"},
			{"CSW_XM8_30rnd_M995_AP_mag_G36",25,"true"},
			{"CSW_XM8_30rnd_M196_Tracer_Red_mag_G36",3,"true"},
			{"CSW_XM8_30rnd_M856_Tracer_Red_mag_G36",4,"true"},
			{"CSW_XM8_30rnd_XM996_Dim_Tracer_mag_G36",3,"true"},
			{"CSW_XM8_30rnd_Subsonic_mag_G36",2,"true"},
			{"hlc_30rnd_556x45_EPR_HK33",4,"true"},
            {"hlc_30rnd_556x45_SOST_HK33",10,"true"},
            {"hlc_30rnd_556x45_b_HK33",6,"true"},
            {"hlc_30rnd_556x45_t_HK33",6,"true"},
            {"rhssaf_30rnd_556x45_MDIM_G36",6,"true"},
            {"rhssaf_30rnd_556x45_Tracers_G36",6,"true"},
            {"rhssaf_30rnd_556x45_SPR_G36",20,"true"},
            {"rhssaf_30rnd_556x45_SOST_G36",10,"true"},
            {"rhssaf_30rnd_556x45_EPR_G36",6,"true"},
			{"hlc_30Rnd_556x45_EPR_sg550",6,"true"},
            {"hlc_30Rnd_556x45_SOST_sg550",10,"true"},
			{"30Rnd_556x45_Stanag",6,"true"},
            {"hlc_30rnd_556x45_EPR",6,"true"},
            {"hlc_30rnd_556x45_SOST",10,"true"},
            {"hlc_30rnd_556x45_SPR",20,"true"},
            {"30Rnd_556x45_Stanag_Tracer_Red",6,"true"},
            {"30Rnd_556x45_Stanag_Tracer_Green",6,"true"},
            {"hlc_30Rnd_556x45_SPR_sg550",20,"true"},
            {"hlc_30Rnd_556x45_T_sg550",6,"true"},
            {"hlc_30rnd_556x45_M_sg550",6,"true"},
            {"hlc_30Rnd_556x45_MDIM_sg550",6,"true"},
            {"hlc_30Rnd_556x45_TDIM_sg550",6,"true"},
			{"30Rnd_556x45_Stanag",6,"true"},
			{"30Rnd_556x45_Stanag_Tracer_Red",6,"true"},
			{"30Rnd_556x45_Stanag_Tracer_Green",6,"true"},
			{"30Rnd_556x45_Stanag_Tracer_Yellow",6,"true"}
		};
	};
	
	class M27Ammo
	{
	    displayName = "M27 IAR & XM8 DMAR Ammo";
		items[] =
		{
			{"CSW_XM8_100rnd_M855A1_LFS_Cmag",25,"true"},
			{"CSW_XM8_100rnd_Mk262_SPR_Cmag",35,"true"},
			{"CSW_XM8_100rnd_M995_AP_Cmag",100,"true"},
			{"CSW_XM8_100rnd_M196_Tracer_Red_Cmag",18,"true"},
			{"CSW_XM8_100rnd_M856_Tracer_Red_Cmag",18,"true"},
			{"CSW_XM8_100rnd_XM996_Dim_Tracer_Cmag",18,"true"},
			{"CSW_XM8_100rnd_Subsonic_Cmag",16,"true"}
		};
	};
	
	class 762Ammo
	{
	    displayName = "7.62x51 Ammo";
		items[] =
		{
		    {"SMA_20Rnd_762x51mm_M80A1_EPR",9,"true"},
			{"SMA_20Rnd_762x51mm_M80A1_EPR_Tracer",9,"true"},
			{"SMA_20Rnd_762x51mm_M80A1_EPR_IR",9,"true"},
			{"SMA_20Rnd_762x51mm_Mk316_Mod_0_Special_Long_Range",18,"true"},
			{"SMA_20Rnd_762x51mm_Mk316_Mod_0_Special_Long_Range_Tracer",18,"true"},
			{"SMA_20Rnd_762x51mm_Mk316_Mod_0_Special_Long_Range_IR",18,"true"},
			{"SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic",6,"true"},
			{"SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic_Tracer",6,"true"},
			{"SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic_IR",6,"true"},
			{"20Rnd_762x51_Mag",9,"true"},
			{"hlc_20Rnd_762x51_B_fal",9,"true"},
            {"hlc_20Rnd_762x51_mk316_fal",16,"true"},
            {"hlc_20Rnd_762x51_barrier_fal",9,"true"},
            {"hlc_20Rnd_762x51_t_fal",9,"true"},
            {"hlc_20Rnd_762x51_S_fal",9,"true"},
            {"hlc_50rnd_762x51_M_FAL",9,"true"},
            {"hlc_50rnd_762x51_MDIM_FAL",9,"true"},
			{"hlc_50Rnd_762x51_B_M14",9,"true"},
            {"hlc_20Rnd_762x51_T_M14",9,"true"},
            {"hlc_20Rnd_762x51_B_M14",9,"true"},
            {"hlc_20Rnd_762x51_barrier_M14",9,"true"},
            {"hlc_20Rnd_762x51_mk316_M14",16,"true"},
			{"hlc_20rnd_762x51_b_G3",9,"true"},
            {"hlc_20rnd_762x51_mk316_G3",16,"true"},
            {"hlc_20rnd_762x51_barrier_G3",9,"true"},
            {"hlc_20rnd_762x51_T_G3",9,"true"},
            {"hlc_50rnd_762x51_M_G3",9,"true"},
            {"hlc_20rnd_762x51_S_G3",9,"true"},
			{"ACE_20Rnd_762x51_Mag_SD",9,"true"},
            {"ACE_20Rnd_762x51_M993_AP_Mag",35,"true"},
            {"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",17,"true"},
            {"ACE_20Rnd_762x51_M118LR_Mag",22,"true"},
            {"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",16,"true"},
            {"ACE_20Rnd_762x51_Mag_Tracer_Dim",9,"true"},
            {"ACE_20Rnd_762x51_Mag_Tracer",9,"true"},
			{"rhsusf_20Rnd_762x51_m118_special_Mag",22,"true"},
			{"rhsusf_20Rnd_762x51_m993_Mag",35,"true"}
		};
	};
	
	class 300BlackoutAmmo
	{
	    displayName = ".300 Blackout Ammo";
		items[] =
		{
			{"29rnd_300BLK_STANAG",7,"true"},
			{"29rnd_300BLK_STANAG_S",7,"true"},
			{"29rnd_300BLK_STANAG_T",7,"true"},
			{"hlc_50rnd_300BLK_STANAG_EPR",15,"true"}
		};
	};
	
	class MP5Ammo
	{
	    displayName = "MP5 & MPX Ammo";
		items[] =
		{
			{"hlc_30Rnd_9x19_B_MP5",3,"true"},
			{"hlc_30Rnd_9x19_GD_MP5",4,"true"},
			{"hlc_30Rnd_9x19_SD_MP5",1,"true"}
		};
	};
	
	class MP7Ammo
	{
	    displayName = "MP7 Ammo";
		items[] =
		{
			{"rhsusf_mag_40Rnd_46x30_AP",8,"true"},
			{"rhsusf_mag_40Rnd_46x30_JHP",6,"true"},
			{"rhsusf_mag_40Rnd_46x30_FMJ",5,"true"}
		};
	};
	
	class SMGAmmo
	{
	    displayName = "9mm SMG Ammo";
		items[] =
		{
			{"30Rnd_9x21_Mag",2,"true"},
			{"30Rnd_9x21_Red_Mag",2,"true"},
			{"30Rnd_9x21_Yellow_Mag",2,"true"},
			{"30Rnd_9x21_Green_Mag",2,"true"},
			{"16Rnd_9x21_Mag",1,"true"},
			{"16Rnd_9x21_red_Mag",1,"true"},
			{"16Rnd_9x21_green_Mag",1,"true"},
			{"16Rnd_9x21_yellow_Mag",1,"true"}
		};
	};
	
	class P90Ammo
	{
	    displayName = "P90 Ammo";
		items[] =
		{
			{"50Rnd_570x28_SMG_03",5,"true"},
			{"KA_50Rnd_57x28_SS190",5,"true"},
			{"KA_50Rnd_57x28_SS198",5,"true"},
			{"KA_50Rnd_57x28_L191",5,"true"},
			{"KA_50Rnd_57x28_Sb193",5,"true"}
		};
	};
	
	class LEEAmmo
	{
	    displayName = ".303 Ammo";
		items[] =
		{
			{"10Rnd_303_Magazine",4,"true"}
		};
	};
	
	class SKSAmmo
	{
	    displayName = "SKS Ammo";
		items[] =
		{
			{"hlc_10rnd_762x39_m43",1,"true"}
		};
	};
	
	class MosinAmmo
	{
	    displayName = "Mosin Ammo";
		items[] =
		{
			{"rhsgref_5Rnd_762x54_m38",1,"true"}
		};
	};
	
	class AK74Ammo
	{
	    displayName = "5.45mm";
		items[] =
		{
			{"rhs_30Rnd_545x39_AK",3,"true"},
			{"rhs_30Rnd_545x39_AK_no_tracers",3,"true"},
			{"rhs_30Rnd_545x39_7N6_AK",3,"true"},
			{"rhs_30Rnd_545x39_7N10_AK",3,"true"},
			{"rhs_30Rnd_545x39_7N22_AK",3,"true"},
			{"rhs_30Rnd_545x39_AK_green",3,"true"},
			{"rhs_30Rnd_545x39_7U1_AK",3,"true"},
			{"rhs_45Rnd_545X39_AK",4,"true"},
			{"rhs_45Rnd_545X39_7N6_AK",4,"true"},
			{"rhs_45Rnd_545X39_7N10_AK",4,"true"},
			{"rhs_45Rnd_545X39_7N22_AK",4,"true"},
			{"rhs_45Rnd_545X39_AK_Green",4,"true"},
			{"rhs_45Rnd_545X39_7U1_AK",4,"true"}
		};
	};
	
	class AK47Ammo
	{
	    displayName = "7.62x39mm";
		items[] =
		{
			{"rhs_30Rnd_762x39mm_tracer",2,"true"},
			{"rhs_30Rnd_762x39mm_89",2,"true"},
			{"rhs_30Rnd_762x39mm_U",2,"true"},
			{"rhs_30Rnd_762x39mm",2,"true"}
		};
	};
	
	class SVDAmmo
	{
	    displayName = "SVD Ammo";
		items[] =
		{
			{"rhs_10Rnd_762x54mmR_7N1",2,"true"}
		};
	};
	
	class VSSAmmo
	{
	    displayName = "VSS Ammo";
		items[] =
		{
			{"rhs_10rnd_9x39mm_SP6",1,"true"},
			{"rhs_10rnd_9x39mm_SP5",1,"true"},
			{"rhs_20rnd_9x39mm_SP6",2,"true"},
			{"rhs_20rnd_9x39mm_SP5",2,"true"}
		};
	};
	
	class QBZ95Ammo
	{
	    displayName = "QBZ-95 Ammo";
		items[] =
		{
			{"30Rnd_580x42_Mag_F",4,"true"},
			{"30Rnd_580x42_Mag_Tracer_F",4,"true"}
		};
	};
	
	class QBZ3Ammo
	{
	    displayName = "QBZ-03 Ammo";
		items[] =
		{
			{"VME_QBZ95_1_30Rnd_DBP10",4,"true"},
			{"VME_QBZ95_1_30Rnd_DBP87",4,"true"},
			{"VME_QBZ95_1_30Rnd_DBP10_Tracer_Green",4,"true"},
			{"VME_QBZ95_1_30Rnd_DBP10_Tracer_Red",4,"true"},
			{"VME_QJB95_1_75Rnd_DBP10",12,"true"},
			{"VME_QJB95_1_75Rnd_DBP87",12,"true"},
			{"VME_QJB95_1_75Rnd_DBP10_Tracer_Green",12,"true"}
		};
	};
	
	class SG510Ammo
	{
	    displayName = "SG510/AMT Ammo";
		items[] =
		{
			{"hlc_20Rnd_762x51_b_amt",9,"true"},
			{"hlc_20Rnd_762x51_mk316_amt",9,"true"},
			{"hlc_20Rnd_762x51_bball_amt",9,"true"},
			{"hlc_20Rnd_762x51_T_amt",9,"true"}
		};
	};
	
	class STG57Ammo
	{
	    displayName = "StG-57 Ammo";
		items[] =
		{
			{"hlc_24Rnd_75x55_B_stgw",6,"true"},
			{"hlc_24Rnd_75x55_T_stgw",6,"true"},
			{"hlc_24Rnd_75x55_ap_stgw",6,"true"}
		};
	};
	
	class SG553RAmmo
	{
	    displayName = "SG553R Ammo";
		items[] =
		{
			{"hlc_30Rnd_762x39_b_ak",2,"true"},
			{"hlc_30Rnd_762x39_t_ak",2,"true"},
			{"hlc_30rnd_762x39_s_ak",2,"true"},
			{"hlc_30Rnd_762x39_AP_ak",2,"true"},
			{"30Rnd_762x39_Mag_F",2,"true"},
			{"30Rnd_762x39_Mag_Green_F",2,"true"},
			{"30Rnd_762x39_Mag_Tracer_F",2,"true"},
			{"30Rnd_762x39_Mag_Tracer_Green_F",2,"true"},
			{"hlc_45Rnd_762x39_m_rpk",3,"true"},
			{"hlc_45Rnd_762x39_t_rpk",3,"true"},
			{"hlc_45Rnd_762x39_AP_rpk",3,"true"},
			{"hlc_75Rnd_762x39_m_rpk",6,"true"},
			{"hlc_75Rnd_762x39_AP_rpk",6,"true"}
		};
	};
	
	class 12GauageAmmo
	{
	    displayName = "12 Gauge Ammo";
		items[] =
		{
			{"prpl_8Rnd_12Gauge_Pellets",2,"true"},
			{"prpl_8Rnd_12Gauge_Slug",2,"true"},
			{"prpl_6Rnd_12Gauge_Pellets",1,"true"},
			{"prpl_6Rnd_12Gauge_M17",1,"true"},
			{"prpl_6Rnd_12Gauge_HE",1,"true"},
			{"prpl_12Gauge_Pun",1,"true"},
			{"prpl_12Gauge_HEAT",1,"true"},
			{"prpl_8Rnd_12Gauge_M17",2,"true"},
			{"prpl_12Gauge_Stun",1,"true"},
			{"prpl_12Gauge_Flare",1,"true"},
			{"prpl_6Rnd_12Gauge_Slug",1,"true"}
		};
	};
};

class HG_SupportAmmoShop // this addAction["<img image='HG\UI\Icons\money.paa' size='1.5'/><t color='#FF0000'>Support Ammunition Store</t>",{_this call HG_fnc_dialogOnLoadItems},"HG_SupportAmmoShop",0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class 40mmAmmo
	{
	    displayName = "40mm Grenades";
		items[] =
		{
			{"1Rnd_HE_Grenade_shell",60,"true"},
			{"1Rnd_SmokeBlue_Grenade_shell",30,"true"},
			{"1Rnd_SmokeGreen_Grenade_shell",30,"true"},
			{"1Rnd_SmokeOrange_Grenade_shell",30,"true"},
			{"1Rnd_SmokePurple_Grenade_shell",30,"true"},
			{"1Rnd_SmokeRed_Grenade_shell",30,"true"},
			{"1Rnd_Smoke_Grenade_shell",30,"true"},
			{"1Rnd_SmokeYellow_Grenade_shell",30,"true"},
			{"rhs_mag_M441_HE",60,"true"},
			{"rhs_mag_M433_HEDP",60,"true"},
			{"rhs_mag_M781_Practice",1,"true"},
			{"rhs_mag_m4009",40,"true"},
			{"rhs_mag_m576",40,"true"},
			{"rhs_mag_M585_white",15,"true"},
			{"rhs_mag_m661_green",15,"true"},
			{"rhs_mag_m662_red",15,"true"},
			{"rhs_mag_m713_Red",15,"true"},
			{"rhs_mag_m714_White",15,"true"},
			{"rhs_mag_m715_Green",15,"true"},
			{"rhs_mag_m716_yellow",15,"true"},
			{"ACE_HuntIR_M203",80,"true"},
			{"UGL_FlareYellow_F",15,"true"},
			{"UGL_FlareWhite_F",15,"true"},
			{"UGL_FlareRed_F",15,"true"},
			{"UGL_FlareGreen_F",15,"true"},
			{"UGL_FlareCIR_F",15,"true"}
		};
	};
	
	class 12gaugeAmmo
	{
	    displayName = "XM8 Shotgun Ammo";
		items[] =
		{
			{"CSW_XM26_5Rnd_Buck",10,"true"},
			{"CSW_XM26_5Rnd_Slug",20,"true"},
			{"CSW_XM26_5Rnd_Stun",40,"true"},
			{"CSW_XM26_5Rnd_HE",110,"true"},
			{"CSW_XM26_5Rnd_PPA",35,"true"}
		};
	};
	
	class M107Amm
	{
	    displayName = "M82A1 & M107 Ammo";
		items[] =
		{
			{"rhsusf_mag_10Rnd_STD_50BMG_M33",50,"true"},
			{"rhsusf_mag_10Rnd_STD_50BMG_mk211",50,"true"}
		};
	};
	
	class M24Amm
	{
	    displayName = "M24 Sniper Ammo";
		items[] =
		{
			{"rhsusf_5Rnd_762x51_m118_special_Mag",4,"true"},
			{"rhsusf_5Rnd_762x51_m993_Mag",4,"true"},
			{"rhsusf_5Rnd_762x51_m62_Mag",4,"true"}
		};
	};
	
	class M40Amm
	{
	    displayName = "M40A5 Sniper Ammo";
		items[] =
		{
			{"rhsusf_10Rnd_762x51_m118_special_Mag",8,"true"},
			{"rhsusf_10Rnd_762x51_m993_Mag",8,"true"},
			{"rhsusf_10Rnd_762x51_m62_Mag",8,"true"}
		};
	};
	
	class AWMAmm
	{
	    displayName = "AWM Sniper Ammo";
		items[] =
		{
			{"hlc_5rnd_300WM_FMJ_AWM",8,"true"},
			{"hlc_5rnd_300WM_mk248_AWM",8,"true"},
			{"hlc_5rnd_300WM_BTSP_AWM",8,"true"},
			{"hlc_5rnd_300WM_AP_AWM",8,"true"},
			{"hlc_5rnd_300WM_SBT_AWM",8,"true"},
			{"hlc_5rnd_300WM_T_AWM",8,"true"}
		};
	};
	
	class 762machinegunAmmo
	{
	    displayName = "7.62 Machinegun Ammo";
		items[] =
		{
			{"SMA_150Rnd_762_M80A1_Tracer",60,"true"},
			{"SMA_150Rnd_762_M80A1_Mixed",60,"true"},
			{"hlc_100Rnd_762x51_B_M60E4",40,"true"},
			{"hlc_100Rnd_762x51_T_M60E4",40,"true"},
			{"hlc_100Rnd_762x51_M_M60E4",40,"true"},
			{"rhsusf_50Rnd_762x51",20,"true"},
			{"rhsusf_50Rnd_762x51_m61_ap",30,"true"},
			{"rhsusf_50Rnd_762x51_m62_tracer",35,"true"},
			{"rhsusf_50Rnd_762x51_m80a1epr",20,"true"},
			{"hlc_50Rnd_762x51_B_MG3",20,"true"},
			{"hlc_50Rnd_762x51_M_MG3",20,"true"},
			{"hlc_50Rnd_762x51_T_MG3",20,"true"},
			{"hlc_50Rnd_762x51_Barrier_MG3",20,"true"},
			{"hlc_100Rnd_762x51_B_MG3",40,"true"},
			{"hlc_100Rnd_762x51_M_MG3",40,"true"},
			{"hlc_100Rnd_762x51_T_MG3",40,"true"},
			{"hlc_100Rnd_762x51_Barrier_MG3",40,"true"},
			{"hlc_250Rnd_762x51_B_MG3",100,"true"},
			{"hlc_250Rnd_762x51_M_MG3",100,"true"},
			{"hlc_250Rnd_762x51_T_MG3",100,"true"},
			{"hlc_250Rnd_762x51_Barrier_MG3",100,"true"},
			{"rhsusf_100Rnd_762x51",40,"true"},
			{"rhsusf_100Rnd_762x51_m61_ap",40,"true"},
			{"rhsusf_100Rnd_762x51_m62_tracer",40,"true"},
			{"rhsusf_100Rnd_762x51_m80a1epr",40,"true"}
		};
	};
	
	class 556machinegunAmmo
	{
	    displayName = "5.56 Machinegun Ammo";
		items[] =
		{
			{"rhs_200rnd_556x45_B_SAW",40,"true"},
			{"rhs_200rnd_556x45_M_SAW",40,"true"},
			{"rhs_200rnd_556x45_T_SAW",45,"true"}
		};
	};
	
	class 792machinegunAmmo
	{
	    displayName = "MG42 Ammo";
		items[] =
		{
			{"hlc_50Rnd_792x57_B_MG42",15,"true"},
			{"hlc_50Rnd_792x57_M_MG42",15,"true"},
			{"hlc_50Rnd_792x57_T_MG42",15,"true"},
			{"hlc_50Rnd_792x57_AP_MG42",15,"true"},
			{"hlc_100Rnd_792x57_B_MG42",30,"true"},
			{"hlc_100Rnd_792x57_M_MG42",30,"true"},
			{"hlc_100Rnd_792x57_T_MG42",30,"true"},
			{"hlc_100Rnd_792x57_AP_MG42",30,"true"},
			{"hlc_200Rnd_792x57_B_MG42",60,"true"},
			{"hlc_200Rnd_792x57_M_MG42",60,"true"},
			{"hlc_200Rnd_792x57_T_MG42",60,"true"},
			{"hlc_200Rnd_792x57_AP_MG42",60,"true"}
		};
	};
	
	class PKMmachinegunAmmo
	{
	    displayName = "PKM Ammo";
		items[] =
		{
			{"rhs_100Rnd_762x54mmR_7BZ3",30,"true"},
			{"rhs_100Rnd_762x54mmR_7N26",30,"true"},
			{"rhs_100Rnd_762x54mmR_7N13",30,"true"},
			{"rhs_100Rnd_762x54mmR_green",30,"true"},
			{"rhs_100Rnd_762x54mmR",30,"true"}
		};
	};
	
	class HK121machinegunAmmo
	{
	    displayName = "HK121 MMG Ammo";
		items[] =
		{
			{"150Rnd_93x64_Mag",150,"true"}
		};
	};
};

class HG_PistolShop // this addAction["<img image='HG\UI\Icons\money.paa' size='1.5'/><t color='#FF0000'>Sidearm Store</t>",{_this call HG_fnc_dialogOnLoadItems},"HG_PistolShop",0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class Glock9
	{
	    displayName = "Glock 9mm Pistols";
		items[] =
		{
			{"RH_g17",750,"true"},
			{"RH_g18",800,"true"},
			{"RH_g19",700,"true"},
			{"RH_g19t",700,"true"},
			{"RH_17Rnd_9x19_g17",5,"true"},
			{"RH_19Rnd_9x19_g18",6,"true"},
			{"RH_33Rnd_9x19_g18",10,"true"},
			{"RH_gemtech9",20,"true"}
		};
	};
	
	class Glock40
	{
	    displayName = "Glock 40 S&W Pistols";
		items[] =
		{
			{"RH_g22",850,"true"},
			{"RH_g23",800,"true"},
			{"RH_15Rnd_40_g22_SUBS",6,"true"},
			{"RH_15Rnd_40_g22_JHP",9,"true"},
			{"RH_15Rnd_40_g22_FMJ",8,"true"},
			{"hlc_muzzle_Evo40",250,"true"},
		    {"ACE_muzzle_mzls_smg_01",250,"true"},
		    {"hlc_muzzle_Octane45",250,"true"},
		    {"muzzle_snds_acp",250,"true"}
		};
	};
	
	class CZ75
	{
	    displayName = "CZ75 Pistol";
		items[] =
		{
			{"RH_cz75",725,"true"},
			{"RH_16Rnd_9x19_CZ",4,"true"},
			{"RH_A26",10,"true"},
			{"RH_gemtech9",20,"true"}
		};
	};
	
	class SIGP226
	{
	    displayName = "P226 9mm Pistols";
		items[] =
		{
			{"hlc_pistol_P226WestGerman",750,"true"},
			{"hlc_Pistol_P228",700,"true"},
			{"hlc_Pistol_M11A1",700,"true"},
			{"hlc_Pistol_M11A1D",750,"true"},
			{"hlc_pistol_Mk25D",700,"true"},
			{"hlc_pistol_Mk25TR",700,"true"},
			{"hlc_pistol_P226US",750,"true"},
			{"hlc_pistol_P226R",700,"true"},
			{"hlc_pistol_P226R_Combat",700,"true"},
			{"hlc_pistol_P226R_Elite",750,"true"},
			{"hlc_pistol_P229R",700,"true"},
			{"hlc_pistol_P229R_Combat",700,"true"},
			{"hlc_pistol_P229R_Elite",700,"true"},
			{"hlc_15Rnd_9x19_B_P226",3,"true"},
			{"hlc_15Rnd_9x19_JHP_P226",4,"true"},
			{"hlc_15Rnd_9x19_SD_P226",2,"true"},
			{"HLC_optic_HP",30,"true"},
		    {"HLC_Optic_Romeo1_RX",30,"true"},
		    {"HLC_optic_Siglite",30,"true"},
		    {"HLC_optic_ATT",30,"true"},
		    {"HLC_optic_XS",30,"true"},
		    {"HLC_optic_VTAC",30,"true"},
			{"HLC_optic_RomeoV",30,"true"},
			{"acc_flashlight_pistol",10,"true"},
			{"hlc_acc_DBALPL",10,"true"},
			{"hlc_acc_DBALPL_FL",10,"true"},
			{"hlc_acc_TLR1",10,"true"},
			{"RH_tundra",20,"true"},
		    {"RH_tundra_des",20,"true"},
		    {"RH_tundra_tg",20,"true"},
		    {"RH_tundra_wdl",20,"true"},
		    {"hlc_muzzle_Octane9",20,"true"},
		    {"rhsusf_acc_omega9k",20,"true"},
		    {"RH_suppr9",20,"true"},
		    {"hlc_muzzle_TiRant9",20,"true"},
		    {"RH_sfn57",20,"true"},
		    {"RH_osprey",20,"true"},
		    {"hlc_muzzle_TiRant9S",20,"true"}
		};
	};
	
	class SIGP226357
	{
	    displayName = "P226 .357 Pistols";
		items[] =
		{
			{"hlc_pistol_P226R_357Combat",750,"true"},
			{"hlc_pistol_P226R_357Elite",700,"true"},
			{"hlc_pistol_P226R_Stainless",700,"true"},
			{"hlc_pistol_P226R_357",750,"true"},
			{"hlc_pistol_P229R_357Combat",700,"true"},
			{"hlc_pistol_P229R_357Stainless",700,"true"},
			{"hlc_pistol_P229R_357",750,"true"},
			{"hlc_pistol_P229R_357Elite",700,"true"},
			{"hlc_12Rnd_357SIG_B_P226",3,"true"},
			{"hlc_12Rnd_357SIG_JHP_P226",4,"true"},
			{"HLC_optic_HP",30,"true"},
		    {"HLC_Optic_Romeo1_RX",30,"true"},
		    {"HLC_optic_Siglite",30,"true"},
		    {"HLC_optic_ATT",30,"true"},
		    {"HLC_optic_XS",30,"true"},
		    {"HLC_optic_VTAC",30,"true"},
			{"HLC_optic_RomeoV",30,"true"},
			{"acc_flashlight_pistol",10,"true"},
			{"hlc_acc_DBALPL",10,"true"},
			{"hlc_acc_DBALPL_FL",10,"true"},
			{"hlc_acc_TLR1",10,"true"},
			{"hlc_muzzle_Evo40",250,"true"},
		    {"ACE_muzzle_mzls_smg_01",250,"true"},
		    {"hlc_muzzle_Octane45",250,"true"},
		    {"muzzle_snds_acp",250,"true"}
		};
	};
	
	class SIGP22640
	{
	    displayName = "P226 .40 Pistols";
		items[] =
		{
			{"hlc_pistol_P226R_40Combat",750,"true"},
			{"hlc_pistol_P226R_40Elite",700,"true"},
			{"hlc_pistol_P226R_40Enox",700,"true"},
			{"hlc_pistol_P226R_40",750,"true"},
			{"hlc_pistol_P229R_40Combat",700,"true"},
			{"hlc_pistol_P229R_40Enox",700,"true"},
			{"hlc_pistol_P229R_40",750,"true"},
			{"hlc_pistol_P229R_40Elite",700,"true"},
			{"hlc_12Rnd_40SW_B_P226",6,"true"},
			{"hlc_12Rnd_40sw_JHP_P226",6,"true"},
			{"hlc_12Rnd_40sw_SD_P226",4,"true"},
			{"HLC_optic_HP",30,"true"},
		    {"HLC_Optic_Romeo1_RX",30,"true"},
		    {"HLC_optic_Siglite",30,"true"},
		    {"HLC_optic_ATT",30,"true"},
		    {"HLC_optic_XS",30,"true"},
		    {"HLC_optic_VTAC",30,"true"},
			{"HLC_optic_RomeoV",30,"true"},
			{"HLC_optic228_HP",30,"true"},
		    {"HLC_optic228_Siglite",30,"true"},
		    {"HLC_Optic228_Romeo1_RX",30,"true"},
		    {"HLC_optic228_ATT",30,"true"},
		    {"HLC_optic228_XS",30,"true"},
		    {"HLC_optic228_VTAC",30,"true"},
			{"HLC_optic228_RomeoV",30,"true"},
			{"acc_flashlight_pistol",10,"true"},
			{"hlc_acc_DBALPL",10,"true"},
			{"hlc_acc_DBALPL_FL",10,"true"},
			{"hlc_acc_TLR1",10,"true"},
			{"RH_tundra",20,"true"},
		    {"RH_tundra_des",20,"true"},
		    {"RH_tundra_tg",20,"true"},
		    {"RH_tundra_wdl",20,"true"},
		    {"hlc_muzzle_Octane9",20,"true"},
		    {"rhsusf_acc_omega9k",20,"true"},
		    {"RH_suppr9",20,"true"},
		    {"hlc_muzzle_TiRant9",20,"true"},
		    {"RH_osprey",20,"true"},
		    {"hlc_muzzle_TiRant9S",20,"true"}
		};
	};
	
	class P226S
	{
	    displayName = "P226S";
		items[] =
		{
			{"RH_p226",600,"true"},
			{"RH_p226s",600,"true"},
			{"RH_15Rnd_9x19_SIG",5,"true"},
			{"RH_suppr9",20,"true"}
		};
	};
	
	class Mak
	{
	    displayName = "Makarov";
		items[] =
		{
			{"rhs_weap_makarov_pm",300,"true"},
			{"rhs_weap_pb_6p9",300,"true"},
			{"rhs_mag_9x18_8_57N181S",5,"true"},
			{"rhs_acc_6p9_suppressor",10,"true"}
		};
	};
	
	class M9Pistol
	{
	    displayName = "M9 Pistol";
		items[] =
		{
			{"RH_m9",600,"true"},
			{"RH_m9c",600,"true"},
			{"RH_15Rnd_9x19_M9",5,"true"},
			{"RH_m9qd",20,"true"}
		};
	};
	
	class Tok
	{
	    displayName = "Tokarev";
		items[] =
		{
			{"rhs_weap_tt33",600,"true"},
			{"rhs_mag_762x25_8",5,"true"}
		};
	};
	
	class R1E
	{
	    displayName = "Remington R1 Pistol";
		items[] =
		{
			{"bnae_r1_virtual",625,"true"},
			{"bnae_r1_c_virtual",625,"true"},
			{"bnae_r1_e_virtual",625,"true"},
			{"bnae_r1_m_virtual",625,"true"},
			{"bnae_r1_t_virtual",625,"true"},
			{"8Rnd_45GAP_Magazine",7,"true"},
			{"8Rnd_45Super_Magazine",7,"true"},
			{"bnae_reddot_virtual",10,"true"},
			{"bnae_suppressor_v4_virtual",20,"true"}
		};
	};
	
	class 1911
	{
	    displayName = "1911";
		items[] =
		{
			{"RH_m1911",600,"true"},
			{"RH_kimber",620,"true"},
			{"RH_kimber_nw",620,"true"},
			{"RH_7Rnd_45cal_m1911",5,"true"},
			{"RH_gemtech45",20,"true"},
			{"RH_osprey",20,"true"},
			{"muzzle_snds_acp",20,"true"}
		};
	};
	
	class QBZPistol
	{
	    displayName = "QSZ Pistol";
		items[] =
		{
			{"vme_pla_qsz92",780,"true"},
			{"VME_QSZ92_20Rnd_DAP92",15,"true"},
			{"VME_QSW06_20Rnd_DCV05",15,"true"}
		};
	};
	
	class FNP
	{
	    displayName = "FNP45";
		items[] =
		{
			{"RH_fnp45",600,"true"},
			{"RH_15Rnd_45cal_fnp",5,"true"},
			{"RH_docter",30,"true"},
			{"RH_osprey",20,"true"}
		};
	};
	
	class USP45
	{
	    displayName = "HK USP45";
		items[] =
		{
			{"RH_usp",600,"true"},
			{"RH_12Rnd_45cal_usp",5,"true"},
			{"RH_gemtech45",20,"true"},
			{"muzzle_snds_acp",20,"true"}
		};
	};
	
	class USP9
	{
	    displayName = "HK USP9";
		items[] =
		{
			{"RH_usp9",600,"true"},
			{"RH_15Rnd_9mm_usp_SUB",5,"true"},
			{"RH_15Rnd_9mm_usp_JHP",5,"true"},
			{"RH_15Rnd_9mm_usp",5,"true"},
			{"RH_tundra",20,"true"},
		    {"RH_tundra_des",20,"true"},
		    {"RH_tundra_tg",20,"true"},
		    {"RH_tundra_wdl",20,"true"},
		    {"hlc_muzzle_Octane9",20,"true"},
		    {"rhsusf_acc_omega9k",20,"true"},
		    {"RH_suppr9",20,"true"},
		    {"hlc_muzzle_TiRant9",20,"true"},
		    {"RH_osprey",20,"true"},
		    {"hlc_muzzle_TiRant9S",20,"true"}
		};
	};
	
	class PythonPistol
	{
	    displayName = "Colt Python";
		items[] =
		{
			{"RH_python",400,"true"},
			{"RH_6Rnd_357_Mag",6,"true"}
		};
	};
	
	class MatebaPistol
	{
	    displayName = "Meteba Revolver";
		items[] =
		{
			{"RH_mateba",400,"true"},
			{"RH_6Rnd_44_Mag",6,"true"}
		};
	};
	
	class MP412Pistol
	{
	    displayName = "MP412 Revolver";
		items[] =
		{
			{"RH_mp412",400,"true"},
			{"RH_6Rnd_357_Mag",6,"true"}
		};
	};
	
	class BullPistol
	{
	    displayName = "Raging Bull Revolver";
		items[] =
		{
			{"RH_bull",400,"true"},
			{"RH_bullb",400,"true"},
			{"RH_6Rnd_454_Mag",6,"true"}
		};
	};
	
	class TrackerPistol
	{
	    displayName = "Tracker Revolver";
		items[] =
		{
			{"RH_ttracker",400,"true"},
			{"RH_6Rnd_45ACP_Mag",6,"true"}
		};
	};
	
	class SW659
	{
	    displayName = "S&W 659 Pistol";
		items[] =
		{
			{"RH_sw659",500,"true"},
			{"RH_32Rnd_9x19_tec",3,"true"},
			{"RH_suppr9",20,"true"}
		};
	};
	
	class VP70P
	{
	    displayName = "HK VP70 Pistol";
		items[] =
		{
			{"RH_vp70",680,"true"},
			{"RH_18Rnd_9x19_VP",3,"true"},
			{"RH_vp70stock",20,"true"}
		};
	};
	
	class Mk2Pistol
	{
	    displayName = ".22 Pistol";
		items[] =
		{
			{"RH_mk2",70,"true"},
			{"RH_10Rnd_22LR_mk2",6,"true"}
		};
	};
	
	class DeaglePistol
	{
	    displayName = "Desert Eagle Pistol";
		items[] =
		{
			{"RH_deagle",600,"true"},
			{"RH_Deaglem",600,"true"},
			{"RH_Deagles",600,"true"},
			{"RH_7Rnd_50_AE",6,"true"}
		};
	};
	
	class TEC9
	{
	    displayName = "TEC-9 Pistol";
		items[] =
		{
			{"RH_tec9",750,"true"},
			{"RH_32Rnd_9x19_tec",12,"true"},
			{"RH_tecsd",20,"true"}
		};
	};
	
	class UZI
	{
	    displayName = "Micro Uzi";
		items[] =
		{
			{"RH_muzi",750,"true"},
			{"RH_30Rnd_9x19_UZI",12,"true"},
			{"RH_muzisd",20,"true"}
		};
	};
	
	class MP5K
	{
	    displayName = "HK MP5K";
		items[] =
		{
			{"hlc_smg_mp5k",850,"true"},
			{"hlc_30Rnd_9x19_SD_MP5",7,"true"},
			{"hlc_30Rnd_9x19_GD_MP5",9,"true"},
			{"hlc_30Rnd_9x19_B_MP5",9,"true"},
			{"hlc_muzzle_Agendasix",20,"true"},
		    {"ACE_muzzle_mzls_smg_02",20,"true"},
		    {"RH_tundra",20,"true"},
		    {"RH_tundra_des",20,"true"},
		    {"RH_tundra_tg",20,"true"},
			{"RH_tundra_wdl",20,"true"},
		    {"muzzle_snds_L",20,"true"}
		};
	};
	
	class PP2000
	{
	    displayName = "PP2000";
		items[] =
		{
			{"rhs_weap_pp2000_folded",800,"true"},
			{"rhs_mag_9x19mm_7n21_20",7,"true"},
			{"rhs_mag_9x19mm_7n31_20",7,"true"},
			{"rhs_mag_9x19mm_7n21_44",12,"true"},
			{"rhs_mag_9x19mm_7n31_44",12,"true"}
		};
	};
};

class HG_GrenadeShop // this addAction["<img image='HG\UI\Icons\money.paa' size='1.5'/><t color='#FF0000'>Grenades</t>",{_this call HG_fnc_dialogOnLoadItems},"HG_GrenadeShop",0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class FragGrenades
	{
	    displayName = "Frag Grenades";
		items[] =
		{
			{"rhs_mag_f1",95,"true"},
			{"HandGrenade",100,"true"},
			{"rhs_mag_m67",100,"true"},
			{"MiniGrenade",75,"true"}
		};
	};
	
	class StunGrenades
	{
	    displayName = "Stun Grenades";
		items[] =
		{
			{"ACE_M84",100,"true"}
		};
	};
	
	class SmokeGrenades
	{
	    displayName = "Smoke Grenades";
		items[] =
		{
			{"SmokeShell",25,"true"},
			{"SmokeShellBlue",25,"true"},
			{"SmokeShellGreen",25,"true"},
			{"SmokeShellOrange",25,"true"},
			{"SmokeShellPurple",25,"true"},
			{"SmokeShellRed",25,"true"},
			{"SmokeShellYellow",25,"true"}
		};
	};
	
	class FlareGrenades
	{
	    displayName = "Flares";
		items[] =
		{
			{"ACE_HandFlare_Green",1,"true"},
			{"ACE_HandFlare_Red",1,"true"},
			{"ACE_HandFlare_White",1,"true"},
			{"ACE_HandFlare_Yellow",1,"true"}
		};
	};
	
	class ChemGrenades
	{
	    displayName = "Glowsticks";
		items[] =
		{
			{"Chemlight_blue",1,"true"},
			{"Chemlight_green",1,"true"},
			{"ACE_Chemlight_HiOrange",1,"true"},
			{"ACE_Chemlight_HiRed",1,"true"},
			{"ACE_Chemlight_HiWhite",1,"true"},
			{"ACE_Chemlight_HiYellow",1,"true"},
			{"ACE_Chemlight_IR",1,"true"},
			{"ACE_Chemlight_Orange",1,"true"},
			{"Chemlight_red",1,"true"},
			{"ACE_Chemlight_White",1,"true"},
			{"Chemlight_yellow",1,"true"},
			{"ACE_HandFlare_Yellow",1,"true"}
		};
	};
};

class HG_ExplosiveShop // this addAction["<img image='HG\UI\Icons\money.paa' size='1.5'/><t color='#FF0000'>Explosives</t>",{_this call HG_fnc_dialogOnLoadItems},"HG_ExplosiveShop",0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class Detonator
	{
	    displayName = "Detonator";
		items[] =
		{
			{"ACE_Clacker",115,"true"}
		};
	};
	
	class Explosives
	{
	    displayName = "Charges";
		items[] =
		{
			{"DemoCharge_Remote_Mag",185,"true"},
			{"SatchelCharge_Remote_Mag",200,"true"}
		};
	};
	
	class APMines
	{
	    displayName = "Anti-personel Devices";
		items[] =
		{
			{"APERSMineDispenser_Mag",300,"true"},
			{"APERSBoundingMine_Range_Mag",185,"true"},
			{"APERSTripMine_Wire_Mag",185,"true"},
			{"APERSMine_Range_Mag",185,"true"},
			{"ClaymoreDirectionalMine_Remote_Mag",125,"true"}
		};
	};
	
	class ATMines
	{
	    displayName = "Anti-tank Mines";
		items[] =
		{
			{"ATMine_Range_Mag",190,"true"},
			{"SLAMDirectionalMine_Wire_Mag",155,"true"}
		};
	};
	
	class Flare
	{
	    displayName = "Other Devices";
		items[] =
		{
			{"ACE_FlareTripMine_Mag",15,"true"}
		};
	};
};

class HG_AKATTShop // this addAction["<img image='HG\UI\Icons\money.paa' size='1.5'/><t color='#FF0000'>AK Attachments</t>",{_this call HG_fnc_dialogOnLoadItems},"HG_AKATTShop",0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class ScopesRUS
	{
	    displayName = "AK Scopes";
		items[] =
		{
			{"rhs_acc_1p29",150,"true"},
			{"rhs_acc_1p63",150,"true"},
			{"rhs_acc_1p78",150,"true"},
			{"rhs_acc_1pn93_1",150,"true"},
			{"rhs_acc_1pn93_2",150,"true"},
			{"rhs_acc_ekp1",150,"true"},
			{"rhs_acc_ekp8_02",150,"true"},
			{"rhs_acc_nita",150,"true"},
			{"rhs_acc_pgo7v",150,"true"},
			{"rhs_acc_pgo7v2",150,"true"},
			{"rhs_acc_pgo7v3",150,"true"},
			{"rhs_acc_pkas",150,"true"},
			{"rhs_acc_pso1m2",150,"true"},
			{"rhs_acc_pso1m21",150,"true"}
		};
	};
	
	class MuzzleRUSAKM
	{
	    displayName = "AKM Muzzle Attachments";
		items[] =
		{
			{"rhs_acc_dtk1l",150,"true"},
			{"rhs_acc_dtkakm",150,"true"},
			{"rhs_acc_pbs1",150,"true"}
		};
	};
	
	class MuzzleRUSAK74
	{
	    displayName = "AK-74 Muzzle Attachments";
		items[] =
		{
			{"rhs_acc_uuk",120,"true"},
			{"rhs_acc_ak5",120,"true"},
			{"rhs_acc_dtk",120,"true"},
			{"rhs_acc_dtk1",120,"true"},
			{"rhs_acc_dtk2",120,"true"},
			{"rhs_acc_dtk3",120,"true"},
			{"rhs_acc_dtk4short",120,"true"},
			{"rhs_acc_dtk1983",120,"true"},
			{"rhs_acc_tgpa",120,"true"}
		};
	};
};

class HG_EquipmentShop // this addAction["<img image='HG\UI\Icons\money.paa' size='1.5'/><t color='#FF0000'>Equipment</t>",{_this call HG_fnc_dialogOnLoadItems},"HG_EquipmentShop",0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class NightVision
	{
	    displayName = "NVG's";
		items[] =
		{
			{"rhs_1PN138",1000,"true"},
			{"rhsusf_ANPVS_14",1000,"true"},
			{"rhsusf_ANPVS_15",2500,"true"},
			{"A3_GPNVG18_F",6500,"true"},
			{"A3_GPNVG18b_F",6500,"true"},
			{"A3_GPNVG18_BLK_F",6500,"true"},
			{"A3_GPNVG18b_BLK_F",6500,"true"}
		};
	};
	
	class RADIO
	{
	    displayName = "Radio";
		items[] =
		{
			{"tf_anprc152",5,"true"}
		};
	};
	
	class ACESUPPLIES
	{
	    displayName = "Military Supplies";
		items[] =
		{
			{"ACE_EarPlugs",0},
			{"ItemcTab",200,"true"},
			{"ACE_IR_Strobe_Item",2,"true"},
			{"ACE_CableTie",1,"true"},
			{"ACE_DAGR",5,"true"},
			{"ACE_DefusalKit",50,"true"},
			{"ACE_MapTools",0,"true"},
			{"ACE_microDAGR",5,"true"},
			{"ACE_Vector",85,"true"},
			{"ACE_VectorDay",85,"true"},
			{"ACE_Yardage420",85,"true"},
			{"ACE_SpottingScope",80,"true"},
			{"ACE_SpraypaintBlack",1,"true"},
			{"ACE_SpraypaintBlue",1,"true"},
			{"ACE_SpraypaintGreen",1,"true"},
			{"ACE_SpraypaintRed",1,"true"},
			{"ACE_Tripod",5,"true"},
			{"ACE_EntrenchingTool",20,"true"}
		};
	};
};

class HG_WeaponAttachments // this addAction["<img image='HG\UI\Icons\optic.paa' size='1.5'/><t color='#FF0000'>Weapon Accesories</t>",{_this call HG_fnc_dialogOnLoadItems},"HG_WeaponAttachments",0,false,false,"",'(alive player) && !dialog && player distance _target < 3'];
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class 556Muzzle
	{
	    displayName = "5.56 Muzzle Devices";
		items[] =
		{
		    {"muzzle_snds_Shield_black_M",400,"true"},
		    {"muzzle_snds_Shield_FDE_M",400,"true"},
		    {"muzzle_snds_Shield_sand_M",400,"true"},
		    {"muzzle_snds_Shield_temperate_M",400,"true"},
		    {"muzzle_snds_HX556_black_M",400,"true"},
		    {"muzzle_snds_HX556_FDE_M",400,"true"},
		    {"muzzle_snds_HX556_grey_M",400,"true"},
		    {"muzzle_snds_HX556_RAL8000_M",400,"true"},
		    {"muzzle_snds_HX556_raw_M",400,"true"},
		    {"muzzle_snds_HX556_temperate_M",400,"true"},
		    {"rhsusf_acc_nt4_black",400,"true"},
		    {"rhsusf_acc_nt4_tan",400,"true"},
		    {"rhsusf_acc_rotex5_grey",400,"true"},
		    {"rhsusf_acc_rotex5_tan",400,"true"},
		    {"rhsusf_acc_SF3P556",400,"true"},
		    {"rhsusf_acc_SFMB556",400,"true"},
		    {"RH_qdss_nt4",400,"true"},
		    {"RH_qdss_nt4_des",400,"true"},
		    {"RH_qdss_nt4_tg",400,"true"},
		    {"RH_qdss_nt4_wdl",400,"true"},
		    {"RH_spr_mbs",400,"true"},
		    {"RH_spr_mbs_des",400,"true"},
		    {"RH_spr_mbs_tg",400,"true"},
		    {"RH_spr_mbs_wdl",400,"true"},
		    {"RH_saker",400,"true"},
		    {"RH_Saker_des",400,"true"},
		    {"RH_Saker_tg",400,"true"},
		    {"RH_Saker_wdl",400,"true"},
		    {"RH_fa556",400,"true"},
		    {"RH_fa556_des",400,"true"},
		    {"RH_fa556_tg",400,"true"},
		    {"RH_fa556_wdl",400,"true"}
		};
	};
	
	class SMAMuzzle
	{
	    displayName = "SMA 5.56 Muzzle Devices";
		items[] =
		{
		    {"sma_gemtech_one_blk",450,"true"},
		    {"sma_gemtech_one_des",450,"true"},
		    {"sma_gemtech_one_wdl",450,"true"},
		    {"SMA_rotex_blk",450,"true"},
		    {"SMA_rotex_gry",450,"true"},
		    {"SMA_rotex_tan",450,"true"},
			{"SMA_supp1b_556",450,"true"},
		    {"SMA_supp1BB_556",450,"true"},
		    {"SMA_supp1BOD_556",450,"true"},
		    {"SMA_supp1BT_556",450,"true"},
		    {"SMA_supp1Bwht_556",450,"true"},
		    {"SMA_supp1tan_556",450,"true"},
		    {"SMA_supp1TB_556",450,"true"},
		    {"SMA_supp1TOD_556",450,"true"},
		    {"SMA_supp1TOD_556",450,"true"},
		    {"SMA_supp1TT_556",450,"true"},
		    {"SMA_supp1TW_556",450,"true"},
		    {"SMA_supp2b_556",450,"true"},
		    {"SMA_supp2BOD_556",450,"true"},
		    {"SMA_supp2BT_556",450,"true"},
		    {"SMA_supp2btan_556",450,"true"},
		    {"SMA_supp2BW_556",450,"true"},
		    {"SMA_supp2smaB_556",450,"true"},
		    {"SMA_supp2smaT_556",450,"true"},
		    {"SMA_supp2T_556",450,"true"},
		    {"SMA_supp2TB_556",450,"true"},
		    {"SMA_supp2TOD_556",450,"true"},
		    {"SMA_supp2TWH_556",450,"true"},
		    {"sma_gemtech_one_blk",450,"true"},
		    {"SMA_Silencer_556",450,"true"},
		    {"SMA_Silencer_556_Bronze",450,"true"},
		    {"SMA_Silencer_556_Silver",450,"true"}
		};
	};
	
	class 762Muzzle
	{
	    displayName = "7.62 Muzzle Devices";
		items[] =
		{
		    {"muzzle_snds_One_FDE_H",650,"true"},
		    {"RH_Saker762",600,"true"},
		    {"RH_Saker762_des",650,"true"},
		    {"RH_Saker762_tg",650,"true"},
		    {"RH_Saker762_wdl",650,"true"},
		    {"RH_fa762",600,"true"},
		    {"RH_fa762_des",650,"true"},
		    {"RH_fa762_tg",650,"true"},
		    {"RH_fa762_wdl",650,"true"},
		    {"muzzle_snds_One_black_H",600,"true"},
		    {"muzzle_snds_One_jungle_H",650,"true"},
		    {"muzzle_snds_One_Sand_H",650,"true"},
		    {"muzzle_snds_One_temperate_H",650,"true"}
		};
	};
	
	class SMA762Muzzle
	{
	    displayName = "SMA 7.62 Muzzle Devices";
		items[] =
		{
		    {"SMA_supp_762",600,"true"},
		    {"SMA_supptan_762",650,"true"}
		};
	};
	
	class reddotScopes
	{
	    displayName = "Red Dots";
		items[] =
		{
		    {"RH_LTdocterl",200,"true"},
		    {"RH_LTdocter",200,"true"},
			{"RH_reflex",200,"true"},
			{"optic_Holosight",200,"true"},
		    {"optic_Holosight_smg",200,"true"},
			{"optic_Aco",200,"true"},
		    {"optic_ACO_grn",200,"true"},
			{"FHQ_optic_AC12136_tan",200,"true"},
		    {"FHQ_optic_AC12136",200,"true"},
			{"RH_docter",200,"true"},
		    {"optic_ACO_grn_smg",200,"true"},
			{"SMA_AIMPOINT_GLARE",200,"true"},
		    {"SMA_BARSKA",200,"true"},
		    {"SMA_CMORE",200,"true"},
		    {"optic_Aco_smg",200,"true"},
			{"FHQ_optic_AimM_BLK",200,"true"},
		    {"FHQ_optic_AimM_TAN",200,"true"},
			{"sps_aimpoint_T1_Black",200,"true"},
		    {"sps_aimpoint_T1_Sand",200,"true"},
		    {"sps_aimpoint_T1_3xMAG_up_Black",200,"true"},
		    {"sps_aimpoint_T1_3xMAG_up",200,"true"},
		    {"sps_aimpoint_T1_3xMAG_up_temperate",200,"true"},
		    {"sps_aimpoint_T1_Black_High",200,"true"},
		    {"sps_aimpoint_T1_High",200,"true"},
		    {"SMA_AIMPOINT",200,"true"},
		    {"rhsusf_acc_compm4",200,"true"},
            {"rhs_acc_rakursPM",200,"true"},
			{"SMA_CMOREGRN",200,"true"},
			{"rhsusf_acc_RX01",200,"true"},
		    {"rhsusf_acc_RX01_NoFilter",200,"true"},
			{"FHQ_optic_AC11704_tan",200,"true"},
		    {"FHQ_optic_AC11704",200,"true"},
		    {"rhsusf_acc_RM05",200,"true"},
		    {"rhsusf_acc_RM05_fwd",200,"true"},
		    {"rhsusf_acc_T1_low_fwd",200,"true"},
		    {"RH_zpoint",200,"true"},
		    {"sps_aimpoint_T1_temperate_High",200,"true"},
		    {"rhsusf_acc_compm4",200,"true"},
		    {"RH_t1_tan",200,"true"},
		    {"RH_compM2l_tan",200,"true"},
		    {"RH_compm4s",200,"true"},
		    {"RH_compM2_tan",200,"true"},
		    {"RH_compM2l",200,"true"},
		    {"SMA_MICRO_T2",200,"true"},
		    {"SMA_MICRO_T2_3XDOWN",200,"true"},
		    {"SMA_MICRO_T2_LM",200,"true"},
		    {"FHQ_optic_MARS_tan",200,"true"},
		    {"FHQ_optic_MARS",200,"true"},
		    {"Sma_spitfire_01_black",200,"true"},
		    {"Sma_spitfire_01_sc_black",200,"true"},
		    {"Sma_spitfire_03_black",200,"true"},
		    {"Sma_spitfire_03_rds_black",200,"true"},
		    {"Sma_spitfire_03_rds_low_ard_black",200,"true"},
		    {"Sma_spitfire_03_rds_low_black",200,"true"},
		    {"Sma_spitfire_03_sc_black",200,"true"},
			{"optic_MRD",200,"true"},
		    {"FHQ_optic_MicroCCO_low_tan",200,"true"},
		    {"FHQ_optic_MicroCCO_low",200,"true"},
		    {"FHQ_optic_MCCO_M_TAN",200,"true"},
		    {"FHQ_optic_MCCO_M_BLK",200,"true"},
		    {"FHQ_optic_MicroCCO_tan",200,"true"},
		    {"FHQ_optic_MicroCCO",200,"true"},
		    {"optic_Yorris",600,"true"},
			{"RH_cmore",200,"true"},
		    {"rhsusf_acc_M2A1",200,"true"}
		};
	};
	
	class EoTech
	{
	    displayName = "EoTech Optics";
		items[] =
		{
		    {"SMA_eotech",200,"true"},
		    {"SMA_eotech552",200,"true"},
		    {"SMA_eotech552_3XDOWN",200,"true"},
		    {"SMA_eotech552_3XDOWN_des",200,"true"},
		    {"SMA_eotech552_3XDOWN_wdl",200,"true"},
		    {"SMA_eotech552_kf",200,"true"},
		    {"SMA_eotech552_kf_des",200,"true"},
		    {"SMA_eotech552_kf_wdl",200,"true"},
		    {"SMA_eotech_G",200,"true"},
		    {"SMA_eotech_T",200,"true"},
		    {"SMA_eotechG33_3XDOWN",200,"true"},
		    {"SMA_eotechG33_grn_3XDOWN",200,"true"},
		    {"SMA_eotechG33_tan_3XDOWN",200,"true"},
			{"FHQ_optic_HWS",200,"true"},
		    {"FHQ_optic_HWS_G33_tan",200,"true"},
		    {"FHQ_optic_HWS_G33",200,"true"},
		    {"RH_eotexps3_tan",200,"true"},
		    {"RH_eothhs1_tan",200,"true"},
		    {"RH_eothhs1",200,"true"},
		    {"RH_eotexps3",200,"true"},
		    {"rhsusf_acc_EOTECH",200,"true"},
		    {"rhsusf_acc_eotech_552",200,"true"},
		    {"rhsusf_acc_eotech_552_d",200,"true"},
		    {"rhsusf_acc_eotech_xps3",200,"true"},
		    {"rhsusf_acc_g33_xps3_tan",200,"true"},
		    {"rhsusf_acc_g33_xps3",200,"true"},
		    {"rhsusf_acc_g33_T1",200,"true"},
			{"rhsusf_acc_eotech_552_wd",600,"true"},
		    {"FHQ_optic_HWS_tan",200,"true"},
		    {"RH_eotexps3",200,"true"},
		    {"RH_eotech553",200,"true"},
		    {"RH_eotech553_tan",200,"true"},
		    {"RH_eotech553mag_tan",200,"true"},
		    {"RH_eotech553mag",200,"true"},
			{"SMA_eotech",200,"true"}
		};
	};
	
	class ACOGScopes
	{
	    displayName = "ACOG's";
		items[] =
		{
		    {"rhsusf_acc_ACOG3",600,"true"},
			{"FHQ_optic_ACOG_tan",600,"true"},
		    {"rhsusf_acc_ACOG3_USMC",600,"true"},
			{"RH_ta01nsn_tan_2D",600,"true"},
		    {"RH_ta01nsn_tan",600,"true"},
		    {"RH_ta01nsn_2D",600,"true"},
			{"RH_ta648",800,"true"},
		    {"RH_ta01nsn",600,"true"},
			{"RH_ta31rco_tan_2D",600,"true"},
		    {"RH_ta31rco_tan",600,"true"},
		    {"RH_ta31rco_2D",600,"true"},
		    {"RH_ta31rco",600,"true"},
		    {"RH_ta31rmr_tan_2D",600,"true"},
		    {"RH_ta31rmr_tan",600,"true"},
		    {"RH_ta31rmr_2D",600,"true"},
		    {"RH_ta31rmr",600,"true"},
			{"FHQ_optic_ACOG",600,"true"},
		    {"rhsusf_acc_ACOG_d",600,"true"},
			{"rhsusf_acc_ACOG",600,"true"},
		    {"rhsusf_acc_ACOG2",600,"true"},
		    {"rhsusf_acc_ACOG2_USMC",600,"true"},
		    {"rhsusf_acc_ACOG_MDO",600,"true"},
		    {"rhsusf_acc_ACOG_RMR",600,"true"},
		    {"rhsusf_acc_ACOG_USMC",600,"true"},
		    {"rhsusf_acc_ACOG_wd",600,"true"}
		};
	};
	
	class ELCANScopes
	{
	    displayName = "ELCAN Scope's";
		items[] =
		{
		    {"rhsusf_acc_SpecterDR",400,"true"},
			{"rhsusf_acc_ELCAN",600,"true"},
		    {"rhsusf_acc_ELCAN_ard",600,"true"},
			{"SMA_ELCAN_SPECTER",600,"true"},
		    {"SMA_ELCAN_SPECTER_4z",600,"true"},
		    {"SMA_ELCAN_SPECTER_ARDRDS",600,"true"},
		    {"SMA_ELCAN_SPECTER_ARDRDS_4z",600,"true"},
		    {"SMA_ELCAN_SPECTER_GREEN",600,"true"},
		    {"SMA_ELCAN_SPECTER_GREEN_4z",600,"true"},
		    {"SMA_ELCAN_SPECTER_GREEN_ARDRDS",600,"true"},
		    {"SMA_ELCAN_SPECTER_GREEN_ARDRDS_4z",600,"true"},
		    {"SMA_ELCAN_SPECTER_GREEN_RDS",600,"true"},
		    {"SMA_ELCAN_SPECTER_GREEN_RDS_4z",600,"true"},
		    {"SMA_ELCAN_SPECTER_RDS",600,"true"},
		    {"SMA_ELCAN_SPECTER_RDS_4z",600,"true"},
		    {"SMA_ELCAN_SPECTER_TAN",600,"true"},
		    {"SMA_ELCAN_SPECTER_TAN_4z",600,"true"},
		    {"SMA_ELCAN_SPECTER_TAN_ARDRDS",600,"true"},
		    {"SMA_ELCAN_SPECTER_TAN_ARDRDS_4z",600,"true"},
		    {"SMA_ELCAN_SPECTER_TAN_RDS",600,"true"},
		    {"SMA_ELCAN_SPECTER_TAN_RDS_4z",600,"true"},
		    {"rhsusf_acc_SpecterDR_A",400,"true"},
		    {"rhsusf_acc_SpecterDR_D",400,"true"},
		    {"rhsusf_acc_SpecterDR_OD",400,"true"}
		};
	};
	
	class SniperScopes
	{
	    displayName = "Sniper Scope's";
		items[] =
		{
		    {"rhsusf_acc_LEUPOLDMK4",800,"true"},
			{"optic_LRPS",800,"true"},
			{"RH_accupoint",400,"true"},
			{"optic_SOS",600,"true"},
			{"SPS_Optic_SnB_HP_1_8_Black",800,"true"},
		    {"SPS_Optic_SnB_HP_1_8_FDE",800,"true"},
		    {"SPS_Optic_SnB_HP_1_8_jungle",800,"true"},
		    {"SPS_Optic_SnB_HP_1_8_RAL8000",800,"true"},
		    {"SPS_Optic_SnB_HP_1_8_temperate",800,"true"},
		    {"SPS_Optic_SnB_HP_3_27_Black",800,"true"},
		    {"SPS_Optic_SnB_HP_3_27_FDE",800,"true"},
		    {"SPS_Optic_SnB_HP_3_27_jungle",800,"true"},
		    {"SPS_Optic_SnB_HP_3_27_RAL8000",800,"true"},
		    {"SPS_Optic_SnB_HP_3_27_temperate",800,"true"},
			{"FHQ_optic_LeupoldERT",800,"true"},
		    {"FHQ_optic_LeupoldERT_tan",800,"true"},
			{"optic_DMS",800,"true"},
			{"optic_AMS",800,"true"},
		    {"optic_AMS_khk",800,"true"},
		    {"optic_AMS_snd",800,"true"},
		    {"optic_KHS_blk",800,"true"},
		    {"optic_KHS_hex",800,"true"},
		    {"optic_KHS_old",800,"true"},
		    {"optic_KHS_tan",800,"true"},
		    {"rhsusf_acc_LEUPOLDMK4_2",800,"true"},
		    {"rhsusf_acc_LEUPOLDMK4_2_d",800,"true"},
		    {"rhsusf_acc_M8541",800,"true"},
		    {"rhsusf_acc_M8541_low",800,"true"},
		    {"rhsusf_acc_M8541_low_d",800,"true"},
		    {"rhsusf_acc_M8541_low_wd",800,"true"},
		    {"rhsusf_acc_premier",800,"true"},
		    {"rhsusf_acc_premier_anpvs27",800,"true"},
		    {"rhsusf_acc_premier_low",800,"true"}
		};
	};
	
	class OtherScopes
	{
	    displayName = "Other Scope's";
		items[] =
		{
			{"rhsusf_acc_ACOG_anpvs27",1200,"true"},
			{"optic_Arco",600,"true"},
			{"optic_MRCO",200,"true"},
			{"RH_shortdot",200,"true"},
			{"FHQ_optic_VCOG",300,"true"},
		    {"optic_Hamr",600,"true"},
		    {"rhsusf_acc_anpas13gv1",800,"true"}
		};
	};
	
	class Lights
	{
	    displayName = "Rifle Light's & Laser's";
		items[] =
		{
		    {"rhsusf_acc_wmx_bk",100,"true"},
			{"rhsusf_acc_wmx",100,"true"},
			{"acc_flashlight",100,"true"},
			{"RH_SFM952V_tan",100,"true"},
			{"RH_SFM952V",100,"true"},
			{"SMA_SFFL_TAN",100,"true"},
			{"SMA_SFFL_BLK",100,"true"},
			{"rhs_acc_perst3",100,"true"},
			{"rhs_acc_perst1ik_ris",100,"true"},
			{"RH_peq2_top",100,"true"},
			{"RH_peq2",100,"true"},
			{"RH_peq15_top",100,"true"},
			{"RH_peq15b_top",100,"true"},
			{"RH_peq15b",100,"true"},
			{"RH_peq15",100,"true"},
			{"rhsusf_acc_M952V",100,"true"},
			{"FHQ_acc_LLM01F",100,"true"},
			{"FHQ_acc_LLM01L",100,"true"},
			{"ACE_acc_pointer_green",100,"true"},
			{"acc_pointer_IR",100,"true"},
			{"SMA_ANPEQ15_BLK",100,"true"},
			{"SMA_ANPEQ15_TAN",100,"true"},
			{"KA_ANPEQ15_Tan_IR",100,"true"},
			{"KA_ANPEQ15_Black_IR",100,"true"},
			{"rhsusf_acc_anpeq16a_light_top",100,"true"},
			{"rhsusf_acc_anpeq16a_top",100,"true"},
			{"rhsusf_acc_anpeq16a_light",100,"true"},
			{"rhsusf_acc_anpeq16a",100,"true"},
			{"rhsusf_acc_anpeq15A",100,"true"},
			{"rhsusf_acc_anpeq15_bk_light",100,"true"},
			{"rhsusf_acc_anpeq15_bk",100,"true"},
			{"rhsusf_acc_anpeq15_light",100,"true"},
			{"rhsusf_acc_anpeq15",100,"true"},
			{"FHQ_acc_ANPEQ15",100,"true"},
			{"FHQ_acc_ANPEQ15_black",100,"true"},
			{"rhsusf_acc_anpeq15_bk_top",100,"true"},
			{"rhsusf_acc_anpeq15side_bk",100,"true"},
			{"rhsusf_acc_anpeq15_wmx_light",100,"true"},
			{"rhsusf_acc_anpeq15_wmx",100,"true"},
			{"rhsusf_acc_anpeq15_top",100,"true"},
			{"rhsusf_acc_anpeq15side",100,"true"},
			{"rhs_acc_2dpZenit_ris",100,"true"}
		};
	};
	
	class BIP
	{
	    displayName = "Bipods";
		items[] =
		{
		    {"bipod_03_F_blk",120,"true"},
			{"bipod_02_F_blk",120,"true"},
			{"bipod_01_F_blk",120,"true"},
			{"bipod_02_F_hex",120,"true"},
			{"bipod_01_F_khk",120,"true"},
			{"bipod_01_F_mtp",120,"true"},
			{"bipod_03_F_oli",120,"true"},
			{"bipod_01_F_snd",120,"true"},
			{"bipod_02_F_tan",120,"true"},
			{"rhsusf_acc_harris_bipod",120,"true"},
			{"rhs_acc_harris_swivel",120,"true"},
			{"RH_HBLM",120,"true"},
			{"RH_HBLM_des",120,"true"},
			{"RH_HBLM_tg",120,"true"},
			{"RH_HBLM_wdl",120,"true"},
			{"RH_TD_ACB",120,"true"},
			{"RH_TD_ACB_b",120,"true"},
			{"RH_TD_ACB_g",120,"true"},
			{"HLC_bipod_UTGShooters",120,"true"}
		};
	};
};
