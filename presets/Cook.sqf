hint "This loadout costs $7000.";
sleep 5;
hint "Checking your balance...";
sleep 2;
if ([7000] call HG_fnc_hasEnoughMoney) then
{
	hint "You can afford this loadout...purchasing.";
	sleep 5;
    [7000,1] call HG_fnc_addOrSubCash;
	removeAllWeapons player;
	removeAllItems player;
	removeAllAssignedItems player;
	removeUniform player;
	removeVest player;
	removeBackpack player;
	removeHeadgear player;
	removeGoggles player;
	player forceAddUniform "TRYK_U_B_Denim_T_BG_BK";
	player addVest "VSM_JPC";
	player addBackpack "fatpack_coy";
	player addItemToUniform "ACE_EntrenchingTool";
	player addItemToUniform "ACE_RangeCard";
	player addItemToVest "ACE_SpraypaintBlack";
	player addItemToVest "ACE_fieldDressing";
	player addItemToVest "ACE_fieldDressing";
	player addItemToVest "ACE_fieldDressing";
	player addItemToVest "ACE_fieldDressing";
	player addItemToVest "ACE_fieldDressing";
	player addItemToVest "ACE_fieldDressing";
	player addItemToVest "ACE_fieldDressing";
	player addItemToVest "ACE_fieldDressing";
	player addItemToVest "ACE_fieldDressing";
	player addItemToVest "ACE_fieldDressing";
	player addItemToVest "ACE_packingBandage";
	player addItemToVest "ACE_packingBandage";
	player addItemToVest "ACE_packingBandage";
	player addItemToVest "ACE_packingBandage";
	player addItemToVest "ACE_packingBandage";
	player addItemToVest "ACE_packingBandage";
	player addItemToVest "ACE_packingBandage";
	player addItemToVest "ACE_packingBandage";
	player addItemToVest "ACE_packingBandage";
	player addItemToVest "ACE_elasticBandage";
	player addItemToVest "ACE_elasticBandage";
	player addItemToVest "ACE_elasticBandage";
	player addItemToVest "ACE_elasticBandage";
	player addItemToVest "ACE_elasticBandage";
	player addItemToVest "ACE_elasticBandage";
	player addItemToVest "ACE_elasticBandage";
	player addItemToVest "ACE_elasticBandage";
	player addItemToVest "ACE_elasticBandage";
	player addItemToVest "ACE_elasticBandage";
	player addItemToVest "ACE_tourniquet";
	player addItemToVest "ACE_tourniquet";
	player addItemToVest "ACE_morphine";
	player addItemToVest "ACE_morphine";
	player addItemToVest "ACE_morphine";
	player addItemToVest "ACE_morphine";
	player addItemToVest "ACE_morphine";
	player addItemToVest "ACE_morphine";
	player addItemToVest "ACE_morphine";
	player addItemToVest "ACE_morphine";
	player addItemToVest "ACE_morphine";
	player addItemToVest "ACE_morphine";
	player addItemToVest "ACE_morphine";
	player addItemToVest "ACE_morphine";
	player addItemToVest "ACE_morphine";
	player addItemToVest "ACE_morphine";
	player addItemToVest "ACE_morphine";
	player addItemToVest "ACE_morphine";
	player addItemToVest "ACE_epinephrine";
	player addItemToVest "ACE_epinephrine";
	player addItemToVest "ACE_epinephrine";
	player addItemToVest "ACE_epinephrine";
	player addItemToVest "ACE_epinephrine";
	player addItemToVest "ACE_epinephrine";
	player addItemToVest "ACE_epinephrine";
	player addItemToVest "ACE_epinephrine";
	player addItemToVest "ACE_epinephrine";
	player addItemToVest "ACE_epinephrine";
	player addItemToVest "RH_7Rnd_45cal_m1911";
	player addItemToVest "RH_7Rnd_45cal_m1911";
	player addItemToVest "RH_7Rnd_45cal_m1911";
	player addItemToVest "RH_7Rnd_45cal_m1911";
	player addItemToVest "RH_7Rnd_45cal_m1911";
	player addItemToVest "RH_7Rnd_45cal_m1911";
	player addItemToVest "RH_7Rnd_45cal_m1911";
	player addItemToVest "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addItemToVest "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addItemToVest "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addItemToVest "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addItemToVest "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addItemToVest "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addItemToBackpack "ACE_surgicalKit";
	player addItemToBackpack "ACE_bodyBag";
	player addItemToBackpack "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addItemToBackpack "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addItemToBackpack "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addItemToBackpack "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addItemToBackpack "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addItemToBackpack "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addItemToBackpack "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addItemToBackpack "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addItemToBackpack "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addItemToBackpack "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addItemToBackpack "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addItemToBackpack "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addItemToBackpack "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addItemToBackpack "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addItemToBackpack "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addItemToBackpack "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addItemToBackpack "rhs_mag_30Rnd_556x45_Mk262_Stanag";
	player addWeapon "RH_Mk12mod1";
	player addPrimaryWeaponItem "SPS_Optic_SnB_HP_1_8_Black";
	player addPrimaryWeaponItem "rhsusf_acc_anpeq15_bk";
	player addPrimaryWeaponItem "muzzle_snds_HX556_black_M";
	player addPrimaryWeaponItem "rhsusf_acc_harris_bipod";
	player addWeapon "RH_kimber";
	player addWeapon "ACE_VectorDay";
	player linkItem "ItemMap";
	player linkItem "tf_anprc152";
	player linkItem "ItemCompass";
	player linkItem "tf_microdagr";
	player addHeadgear "milgp_h_cap_backwards_01_CB";
	player addGoggles "milgp_f_tactical_khk";
}
else
{
	hint "You do not have enough money.";
};








