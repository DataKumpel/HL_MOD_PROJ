//################################################################################//
//### TriggerPrint.cpp
//###-----------------------------------------------------------------------------
//### This programs a trigger entity to print a message to the console when some-
//### thing interacts with it. 
//###-----------------------------------------------------------------------------
//### NOTE: This is just for learning the basic entity-setup stuff...
//################################################################################//

// The order of the imports DOES matter, because they depend on each other...
#include "extdll.h" // Defines engine interface...
#include "util.h"   // Various utility functions...
#include "cbase.h"  // Defines base entity class...

class CTriggerPrint : public CBaseEntity
{
public:
    // Is called when the entity is triggered by some other entity:
    void Use  (CBaseEntity* pActivator, CBaseEntity* pCaller, USE_TYPE useType, float value) override;
};

LINK_ENTITY_TO_CLASS(trigger_print, CTriggerPrint); // Links C++ class and map-entity together...

//================================================================================//
//=== Following the weird style of defining class-behaviour outside the class...
//================================================================================//

void CTriggerPrint::Use(CBaseEntity* pActivator, CBaseEntity* pCaller, USE_TYPE useType, float value)
{
    ALERT(at_console, "%s\n", STRING(pev->message));
}