#ifndef _SPSSCRIPT_LUA_H__
#define _SPSSCRIPT_LUA_H__

struct lua_State;
class CNtlLuaState;
class CServerPlayScript;
class CControlScriptNode;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CNtlLuaState* GetSPSLuaState(void);

void	SPSLua_CreateState(void);

void	SPSLua_Setup(void);
void	SPSLua_Release(void);


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
extern CServerPlayScript* s_pCurScriptSPS;
extern CControlScriptNode* s_pCurNodeSPS;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


extern "C" {


	int luabind_PlayScript_Scene(lua_State *L);
	int luabind_PlayScript_Action(lua_State *L);
	int luabind_PlayScript_Condition(lua_State *L);
	int luabind_PlayScript_Param(lua_State *L);
	int luabind_PlayScript_End(lua_State *L);



}



#endif
