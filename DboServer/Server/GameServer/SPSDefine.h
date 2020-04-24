#ifndef _SPSCRIPTGLOBALDEFINE_H_
#define _SPSCRIPTGLOBALDEFINE_H_


enum eSPS_NODE
{
	SPS_NODE_STATE_SCENE,
	SPS_NODE_ACTION_POINT_MOVE,
	SPS_NODE_ACTION_PATH_MOVE,
	SPS_NODE_ACTION_ROTATE,
	SPS_NODE_ACTION_WAIT,
	SPS_NODE_ACTION_SITDOWN,
	SPS_NODE_ACTION_SAY,
	SPS_NODE_ACTION_DIRECT_PLAY,
	SPS_NODE_ACTION_DIRECT_TURNING,
	SPS_NODE_ACTION_SET_CHAR_CONDITION,
	SPS_NODE_ACTION_LEAVE,
	SPS_NODE_ACTION_ESCORT,
	SPS_NODE_ACTION_SPSEND,
	SPS_NODE_ACTION_TARGETFIXATTACK,
	SPS_NODE_ACTION_SKILLUSE,
	SPS_NODE_ACTION_CHANGEAIBITFLAG,
	SPS_NODE_ACTION_CHANGE_TIMID_ATTRIBUTE,
	SPS_NODE_ACTION_CHANGE_CHAR_ATTRIBUTE,
	SPS_NODE_ACTION_CHANGE_NPC_ATTRIBUTE,
	SPS_NODE_ACTION_DO_WANDER,
	SPS_NODE_ACTION_FUNCTION,
	SPS_NODE_ACTION_SEND_SPS_EVENT,
	SPS_NODE_ACTION_SEND_EVENT_TO_SPS,
	SPS_NODE_ACTION_SEND_ESCORT_EVENT_TO_TS,
	SPS_NODE_ACTION_SEND_EVENT_TO_TQS,
	SPS_NODE_ACTION_SEND_EVENT_TO_WPS,
	SPS_NODE_ACTION_SEND_EVENT_TO_TS,
	SPS_NODE_ACTION_SEND_EVENT,
	SPS_NODE_ACTION_CLEAR_EVENT,
	SPS_NODE_ACTION_CALCULATE,
	SPS_NODE_CONDITION_CHILD,
	SPS_NODE_CONDITION_RECV_EVENT_FROM_TS,
	SPS_NODE_CONDITION_RECV_EVENT_FROM_WPS,
	SPS_NODE_CONDITION_RECV_EVENT_FROM_ITEM,
	SPS_NODE_CONDITION_REGISTER_BATTLE_SCENE,
	SPS_NODE_CONDITION_BS_CONDITION,
	SPS_NODE_CONDITION_BS_CONDITION_GROUP,
	SPS_NODE_CONDITION_BS_FLOW,
	SPS_NODE_CONDITION_BS_CHECK_LP,
	SPS_NODE_CONDITION_BS_CHECK_MOBGROUP,
	SPS_NODE_CONDITION_BS_CHECK_NPC,

	MAX_SPS_NODE,
	INVALID_SPS_NODE = 0xFFFFFFFF,
};

enum eSPS_EVENT_TYPE
{
	SPS_EVENT_TYPE_TS,
	SPS_EVENT_TYPE_TQS,
	SPS_EVENT_TYPE_ESCORT,
	SPS_EVENT_TYPE_WPS,
	SPS_EVENT_TYPE_UNLOCKNPC,
	MAX_SPS_EVENT_TYPE,

	INVALID_SPS_EVENT_TYPE,
};

enum eSPS_BS_PLAY_TYPE
{
	SPS_BS_PLAY_UNLIMIT,
	SPS_BS_PLAY_ONCE,

	INVALID_SPS_BS_PLAY_TYPE = 0xFF,
};



#endif