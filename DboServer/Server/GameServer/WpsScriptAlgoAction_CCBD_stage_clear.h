#ifndef __SCRIPT_ALGO_DBOG_ACTION_CCBD_STAGE_CLEAR_H__
#define __SCRIPT_ALGO_DBOG_ACTION_CCBD_STAGE_CLEAR_H__

#include "ScriptAlgoAction.h"


class CWpsScriptAlgoAction_CCBD_stage_clear : public CScriptAlgoAction
{

public:

	CWpsScriptAlgoAction_CCBD_stage_clear(CWpsAlgoObject* pObject);
	virtual	~CWpsScriptAlgoAction_CCBD_stage_clear();

public:

	virtual int					OnUpdate(DWORD dwTickDiff, float fMultiple);

};

#endif