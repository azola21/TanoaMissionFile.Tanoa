hint "This will purchase a medical backpack for you.";
sleep 2;
hint "This loadout costs $1200.";
sleep 2;
hint "Checking your balance...";
sleep 2;
if ([1200] call HG_fnc_hasEnoughMoney) then
{
	hint "You can afford this loadout...purchasing.";
	sleep 5;
    [1200,1] call HG_fnc_addOrSubCash;
	player addBackpack "milgp_b_patrol_01_khk_frank";
	player addItemToBackpack "ACE_fieldDressing";
	player addItemToBackpack "ACE_fieldDressing";
	player addItemToBackpack "ACE_fieldDressing";
	player addItemToBackpack "ACE_fieldDressing";
	player addItemToBackpack "ACE_fieldDressing";
	player addItemToBackpack "ACE_fieldDressing";
	player addItemToBackpack "ACE_fieldDressing";
	player addItemToBackpack "ACE_fieldDressing";
	player addItemToBackpack "ACE_fieldDressing";
	player addItemToBackpack "ACE_fieldDressing";
	player addItemToBackpack "ACE_elasticBandage";
	player addItemToBackpack "ACE_elasticBandage";
	player addItemToBackpack "ACE_elasticBandage";
	player addItemToBackpack "ACE_elasticBandage";
	player addItemToBackpack "ACE_elasticBandage";
	player addItemToBackpack "ACE_elasticBandage";
	player addItemToBackpack "ACE_elasticBandage";
	player addItemToBackpack "ACE_elasticBandage";
	player addItemToBackpack "ACE_elasticBandage";
	player addItemToBackpack "ACE_elasticBandage";
	player addItemToBackpack "ACE_quikclot";
	player addItemToBackpack "ACE_quikclot";
	player addItemToBackpack "ACE_quikclot";
	player addItemToBackpack "ACE_quikclot";
	player addItemToBackpack "ACE_quikclot";
	player addItemToBackpack "ACE_quikclot";
	player addItemToBackpack "ACE_quikclot";
	player addItemToBackpack "ACE_quikclot";
	player addItemToBackpack "ACE_quikclot";
	player addItemToBackpack "ACE_quikclot";
	player addItemToBackpack "ACE_morphine";
	player addItemToBackpack "ACE_morphine";
	player addItemToBackpack "ACE_morphine";
	player addItemToBackpack "ACE_morphine";
	player addItemToBackpack "ACE_morphine";
	player addItemToBackpack "ACE_morphine";
	player addItemToBackpack "ACE_morphine";
	player addItemToBackpack "ACE_morphine";
	player addItemToBackpack "ACE_surgicalKit";
	player addItemToBackpack "ACE_bodyBag";
	player addItemToBackpack "ACE_bodyBag";
	player addItemToBackpack "ACE_bodyBag";
	player addItemToBackpack "ACE_bodyBag";
	player addItemToBackpack "adv_aceCPR_AED";
	player addItemToBackpack "ACE_morphine";
	player addItemToBackpack "ACE_morphine";
	player addItemToBackpack "ACE_epinephrine";
	player addItemToBackpack "ACE_epinephrine";
	player addItemToBackpack "ACE_epinephrine";
	player addItemToBackpack "ACE_epinephrine";
	player addItemToBackpack "ACE_epinephrine";
	player addItemToBackpack "ACE_epinephrine";
	player addItemToBackpack "ACE_epinephrine";
	player addItemToBackpack "ACE_epinephrine";
	player addItemToBackpack "ACE_epinephrine";
	player addItemToBackpack "ACE_epinephrine";
	player addItemToBackpack "ACE_tourniquet";
	player addItemToBackpack "ACE_tourniquet";
	player addItemToBackpack "ACE_tourniquet";
	player addItemToBackpack "ACE_tourniquet";
	player addItemToBackpack "ACE_tourniquet";
	player addItemToBackpack "ACE_tourniquet";
	player addItemToBackpack "ACE_tourniquet";
	player addItemToBackpack "ACE_tourniquet";
	player addItemToBackpack "ACE_salineIV_250";
	player addItemToBackpack "ACE_salineIV_250";
	player addItemToBackpack "ACE_salineIV_250";
	player addItemToBackpack "ACE_salineIV_250";
	player addItemToBackpack "ACE_salineIV_500";
	player addItemToBackpack "ACE_salineIV_500";
	player addItemToBackpack "ACE_salineIV_500";
	player addItemToBackpack "ACE_salineIV_500";
	player addItemToBackpack "ACE_salineIV";
	player addItemToBackpack "ACE_salineIV";
	player addItemToBackpack "ACE_salineIV";
	player addItemToBackpack "ACE_salineIV";
}
else
{
	hint "You do not have enough money.";
};






