#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_common"};
        author[] = {"NouberNou", "esteldunedain"};
        authorUrl = "";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

#include "CursorMenus.hpp"

class ACE_Settings {
    class GVAR(AlwaysUseCursorSelfInteraction) {
        value = 0;
        typeName = "BOOL";
        isClientSetable = 1;
        displayName = "$STR_ACE_Interact_Menu_AlwaysUseCursorSelfInteraction";
    };
};
