/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
    Player initialization
*/
if(!hasInterface) exitWith {}; // If headless then exit
[] execVM "HG\Setup\fn_clientInitialization.sqf";
player enableFatigue false;
player forceWalk false;

_action = ["fix_stamina", "Fix Stamina Bug", "", {[] execVM "scripts\stamfix.sqf"}, {true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action] call ace_interact_menu_fnc_addActionToObject;
