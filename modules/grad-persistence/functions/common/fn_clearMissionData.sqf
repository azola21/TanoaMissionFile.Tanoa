#define PREFIX grad
#define COMPONENT persistence
#include "\x\cba\addons\main\script_macros_mission.hpp"

params ["_missionTag",["_worldName",worldName]];

if (!isServer) exitWith {};

private _isThisMission = false;
private _actualTag = if (isNil "_missionTag") then {
    _isThisMission = true;
    [] call grad_persistence_fnc_getMissionTag
} else {
    _isThisMission = _missionTag == ([missionConfigFile >> "CfgGradPersistence", "missionTag", ""] call BIS_fnc_returnConfigEntry);
    [_missionTag] call grad_persistence_fnc_getMissionTag
};

if (_isThisMission) then {
    ("Players will no longer be saved on disconnect.") remoteExec ["systemChat",0,false];
    missionNamespace setVariable [QGVAR(thisMissionCleared),true];
};

profileNamespace setVariable [_actualTag + "_groups",nil];
profileNamespace setVariable [_actualTag + "_vehicles",nil];
profileNamespace setVariable [_actualTag + "_containers",nil];
profileNamespace setVariable [_actualTag + "_statics",nil];
profileNamespace setVariable [_actualTag + "_players",nil];
profileNamespace setVariable [_actualTag + "_teamAccounts",nil];

INFO_1("Missiondata for missiontag %1 deleted.",_actualTag);
(format ["Missiondata for missiontag %1 deleted.",_actualTag]) remoteExec ["systemChat",0,false];

saveProfileNamespace;
