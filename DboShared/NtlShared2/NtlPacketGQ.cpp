#include "StdAfx.h"
#include "NtlPacketGQ.h"


const char * s_packetName_GQ[] =
{
	DECLARE_PACKET_NAME( GQ_NOTIFY_SERVER_BEGIN ),

	DECLARE_PACKET_NAME( GQ_LOAD_PC_DATA_REQ ),
	DECLARE_PACKET_NAME( GQ_ITEM_CREATE_REQ ),
	DECLARE_PACKET_NAME( GQ_ITEM_MOVE_REQ ),
	DECLARE_PACKET_NAME( GQ_ITEM_MOVE_STACK_REQ ),
	DECLARE_PACKET_NAME( GQ_ITEM_UPDATE_REQ ),
	DECLARE_PACKET_NAME( GQ_ITEM_DELETE_REQ ),
	DECLARE_PACKET_NAME( GQ_ITEM_EQUIP_REPAIR_REQ ),
	DECLARE_PACKET_NAME( GQ_ITEM_REPAIR_REQ ),
	DECLARE_PACKET_NAME( GQ_ITEM_DUR_DOWN ),
	DECLARE_PACKET_NAME( GQ_ITEM_DUR_UPDATE_REQ ),
	DECLARE_PACKET_NAME( GQ_ITEM_USE_REQ ),
	DECLARE_PACKET_NAME( GQ_ITEM_UPGRADE_REQ ),
	DECLARE_PACKET_NAME( GQ_ITEM_IDENTIFY_REQ ),
	DECLARE_PACKET_NAME( GQ_ITEM_CREATE_EX_REQ ),
	DECLARE_PACKET_NAME( GQ_ITEM_DELETE_EX_REQ ),
	DECLARE_PACKET_NAME( GQ_ITEM_AUTO_EQUIP_REQ ),
	DECLARE_PACKET_NAME( GQ_ITEM_AUTO_EQUIP_ROLLBACK_REQ ),

	DECLARE_PACKET_NAME( GQ_ITEM_PICK_REQ ),
	DECLARE_PACKET_NAME( GQ_ZENNY_PICK_REQ ),

	DECLARE_PACKET_NAME( GQ_SKILL_ADD_REQ ),
	DECLARE_PACKET_NAME( GQ_SKILL_DEL_REQ ),
	DECLARE_PACKET_NAME( GQ_SKILL_UPDATE_REQ ),
	DECLARE_PACKET_NAME( GQ_SKILL_UPGRADE_REQ ),
	DECLARE_PACKET_NAME( GQ_SKILL_RP_BONUS_SETTING_REQ ),
	DECLARE_PACKET_NAME( GQ_SKILL_LOAD_REQ ),
	DECLARE_PACKET_NAME( GQ_BUFF_ADD_REQ ),
	DECLARE_PACKET_NAME( GQ_BUFF_DEL_REQ ),
	DECLARE_PACKET_NAME( GQ_BUFF_UPDATE_REQ ),
	DECLARE_PACKET_NAME( GQ_BUFF_LOAD_REQ ),
	DECLARE_PACKET_NAME( GQ_HTB_SKILL_LOAD_REQ ),
	DECLARE_PACKET_NAME( GQ_HTB_SKILL_ADD_REQ ),

	DECLARE_PACKET_NAME( GQ_PC_UPDATE_POSITION_REQ ),
	DECLARE_PACKET_NAME( GQ_PC_UPDATE_EXP_REQ ),
	DECLARE_PACKET_NAME( GQ_PC_UPDATE_LPEPRP_REQ ),
	DECLARE_PACKET_NAME( GQ_PC_UPDATE_LEVEL_REQ ),
	DECLARE_PACKET_NAME( GQ_SAVE_PC_DATA_REQ ),
	DECLARE_PACKET_NAME( GQ_SAVE_SKILL_DATA_REQ ),
	DECLARE_PACKET_NAME( GQ_SAVE_HTB_DATA_REQ ),
	DECLARE_PACKET_NAME( GQ_SAVE_BUFF_DATA_REQ ),

	DECLARE_PACKET_NAME( GQ_PC_EXIT ),
	//DECLARE_PACKET_NAME( GQ_MAKE_AUTH_KEY_REQ ),

	DECLARE_PACKET_NAME( GQ_SHOP_BUY_REQ ),
	DECLARE_PACKET_NAME( GQ_SHOP_SELL_REQ ),

	DECLARE_PACKET_NAME( GQ_LOAD_PC_BANK_DATA_REQ ),
	DECLARE_PACKET_NAME( GQ_BANK_MOVE_REQ ),
	DECLARE_PACKET_NAME( GQ_BANK_MOVE_STACK_REQ ),
	DECLARE_PACKET_NAME( GQ_BANK_ZENNY_REQ ),
	DECLARE_PACKET_NAME( GQ_BANK_BUY_REQ ),
	DECLARE_PACKET_NAME( GQ_BANK_ITEM_DELETE_REQ ),

	DECLARE_PACKET_NAME( GQ_PARTY_LOOTING_ITEM_REQ ),
	DECLARE_PACKET_NAME( GQ_PARTY_LOOTING_ZENNY_REQ ),

	DECLARE_PACKET_NAME( GQ_PC_UPDATE_BIND_REQ ),
	DECLARE_PACKET_NAME( GQ_CHAR_CONVERT_CLASS_REQ ),

	DECLARE_PACKET_NAME( GQ_UPDATE_CHAR_ZENNY_REQ ),

	DECLARE_PACKET_NAME( GQ_QUEST_ITEM_CREATE_REQ ),
	DECLARE_PACKET_NAME( GQ_QUEST_ITEM_DELETE_REQ ),
	DECLARE_PACKET_NAME( GQ_QUEST_ITEM_MOVE_REQ ),
	DECLARE_PACKET_NAME( GQ_QUEST_PROGRESS_DATA_CREATE_REQ ),
	DECLARE_PACKET_NAME( GQ_QUEST_PROGRESS_DATA_DELETE_REQ ),
	DECLARE_PACKET_NAME( GQ_QUEST_COMPLETE_DATA_UPDATE_REQ ),
	DECLARE_PACKET_NAME( GQ_QUEST_DATA_RESET_REQ ),
	DECLARE_PACKET_NAME( GQ_QUEST_STATE_UPDATE_REQ ),
	DECLARE_PACKET_NAME( GQ_QUEST_TSP_UPDATE_REQ ),
	DECLARE_PACKET_NAME( GQ_QUEST_EXCEPTION_TIMER_UPDATE_REQ ),
	DECLARE_PACKET_NAME( GQ_QUEST_SSM_UPDATE_REQ ),
	DECLARE_PACKET_NAME( GQ_QUEST_SERVER_EVENT_UPDATE_REQ ),
	DECLARE_PACKET_NAME( GQ_QUEST_EXC_CLIENT_GROUP_REQ ),
	DECLARE_PACKET_NAME( GQ_QUEST_INFO_UPDATE_REQ ),
	
	DECLARE_PACKET_NAME( GQ_QUICK_SLOT_UPDATE_REQ ),
	DECLARE_PACKET_NAME( GQ_QUICK_SLOT_DEL_REQ ),

	DECLARE_PACKET_NAME( GQ_SAVE_SPAWNED_SUMMON_PET_DATA_REQ ),
	DECLARE_PACKET_NAME( GQ_SAVE_SPAWNED_ITEM_PET_DATA_REQ ),
	DECLARE_PACKET_NAME( GQ_DELETE_SPAWNED_SUMMON_PET_DATA_REQ ),
	DECLARE_PACKET_NAME( GQ_DELETE_SPAWNED_ITEM_PET_DATA_REQ ),
	DECLARE_PACKET_NAME( GQ_LOAD_SPAWNED_PET_DATA_REQ ),
	DECLARE_PACKET_NAME( GQ_DELETE_ALL_TEMPORARY_PET_DATA_REQ ),

	DECLARE_PACKET_NAME( GQ_CHAR_PUNISH_REQ ),

	DECLARE_PACKET_NAME( GQ_TRADE_REQ ),
	DECLARE_PACKET_NAME( GQ_TUTORIAL_HINT_UPDATE_REQ ),

	DECLARE_PACKET_NAME( GQ_BALL_ITEM_PICK_REQ ),
	DECLARE_PACKET_NAME( GQ_BALL_ITEM_PARTY_PICK_REQ ),
	DECLARE_PACKET_NAME( GQ_BALL_ITEM_REWARD_REQ ),

	DECLARE_PACKET_NAME( GQ_PRIVATESHOP_ITEM_BUYING_REQ ),	//  [7/2/2007 SGpro]
	DECLARE_PACKET_NAME( GQ_PRIVATESHOP_ITEM_INSERT_REQ ),	//  [7/2/2007 SGpro]
	DECLARE_PACKET_NAME( GQ_PRIVATESHOP_ITEM_DELETE_REQ ),	//  [7/2/2007 SGpro]
	DECLARE_PACKET_NAME( GQ_PRIVATESHOP_ITEM_UPDATE_REQ ),	//  [7/2/2007 SGpro]
	DECLARE_PACKET_NAME( GQ_PRIVATESHOP_SHOP_LOADING_REQ ),	//  [7/2/2007 SGpro]
	DECLARE_PACKET_NAME( GQ_PRIVATESHOP_CREATE_REQ ),		//  [7/4/2007 SGpro]
	DECLARE_PACKET_NAME( GQ_PRIVATESHOP_UPDATE_REQ ),		//  [7/4/2007 SGpro]

	DECLARE_PACKET_NAME( GQ_RANKBATTLE_SCORE_UPDATE_REQ ),
	DECLARE_PACKET_NAME( GQ_TUTORIAL_DATA_UPDATE_REQ ),

	DECLARE_PACKET_NAME( GQ_TMQ_DAYRECORD_RESET_REQ ),
	DECLARE_PACKET_NAME( GQ_TMQ_DAYRECORD_UPDATE_REQ ),
	DECLARE_PACKET_NAME( GQ_TMQ_DAYRECORD_LIST_REQ ),
	DECLARE_PACKET_NAME( GQ_TMQ_DAYRECORD_REQ ),

	DECLARE_PACKET_NAME( GQ_MAIL_START_REQ ),
	DECLARE_PACKET_NAME( GQ_MAIL_SEND_REQ ),
	DECLARE_PACKET_NAME( GQ_MAIL_READ_REQ ),
	DECLARE_PACKET_NAME( GQ_MAIL_DEL_REQ ),
	DECLARE_PACKET_NAME( GQ_MAIL_RETURN_REQ ),
	DECLARE_PACKET_NAME( GQ_MAIL_RELOAD_REQ ),
	DECLARE_PACKET_NAME( GQ_MAIL_LOAD_REQ ),
	DECLARE_PACKET_NAME( GQ_MAIL_ITEM_RECEIVE_REQ ),
	DECLARE_PACKET_NAME( GQ_MAIL_LOCK_REQ ),
	DECLARE_PACKET_NAME( GQ_MAIL_EVENT_SEND_REQ ),
	DECLARE_PACKET_NAME( GQ_MAIL_MULTI_DEL_REQ ),

	DECLARE_PACKET_NAME( GQ_CHAR_AWAY_REQ ),
	
	DECLARE_PACKET_NAME( GQ_CHAR_KEY_UPDATE_REQ ),

	DECLARE_PACKET_NAME( GQ_PORTAL_START_REQ ),
	DECLARE_PACKET_NAME( GQ_PORTAL_ADD_REQ ),

	DECLARE_PACKET_NAME( GQ_WAR_FOG_UPDATE_REQ ),
	
	DECLARE_PACKET_NAME( GQ_ITEM_UPGRADE_ALL_REQ ),
	DECLARE_PACKET_NAME( GQ_UPDATE_PLAYER_REPUTATION_REQ ),
	DECLARE_PACKET_NAME( GQ_GUILD_BANK_LOAD_REQ ),
	DECLARE_PACKET_NAME( GQ_GUILD_BANK_MOVE_REQ ),
	DECLARE_PACKET_NAME( GQ_GUILD_BANK_MOVE_STACK_REQ ),
	DECLARE_PACKET_NAME( GQ_GUILD_BANK_ZENNY_REQ ),

	DECLARE_PACKET_NAME( GQ_SHOP_ITEM_IDENTIFY_REQ ),

	DECLARE_PACKET_NAME( GQ_BUDOKAI_DATA_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_INIT_DATA_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_UPDATE_STATE_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_UPDATE_MATCH_STATE_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_UPDATE_CLEAR_REQ ),
	DECLARE_PACKET_NAME( GQ_RANKPOINT_RESET_REQ ),
	DECLARE_PACKET_NAME( GQ_RANKBATTLE_ALLOW_REQ ),

	DECLARE_PACKET_NAME( GQ_BUDOKAI_INDIVIDUAL_ALLOW_REGISTER_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_JOIN_INDIVIDUAL_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_LEAVE_INDIVIDUAL_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_INDIVIDUAL_SELECTION_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_INDIVIDUAL_LIST_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_TOURNAMENT_INDIVIDUAL_ADD_ENTRY_LIST_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_TOURNAMENT_INDIVIDUAL_ENTRY_LIST_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_TOURNAMENT_INDIVIDUAL_ADD_MATCH_RESULT_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_TOURNAMENT_INDIVIDUAL_MATCH_RESULT_REQ ),

	DECLARE_PACKET_NAME( GQ_BUDOKAI_TEAM_ALLOW_REGISTER_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_JOIN_TEAM_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_LEAVE_TEAM_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_LEAVE_TEAM_MEMBER_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_TEAM_SELECTION_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_TEAM_LIST_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_TOURNAMENT_TEAM_ADD_ENTRY_LIST_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_TOURNAMENT_TEAM_ENTRY_LIST_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_TOURNAMENT_TEAM_ADD_MATCH_RESULT_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_TOURNAMENT_TEAM_MATCH_RESULT_REQ ),

	DECLARE_PACKET_NAME( GQ_BUDOKAI_JOIN_INFO_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_JOIN_STATE_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_HISTORY_WRITE_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_HISTORY_WINNER_PLAYER_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_JOIN_STATE_LIST_REQ ),
	DECLARE_PACKET_NAME( GQ_BUDOKAI_SET_OPEN_TIME_REQ ),

	DECLARE_PACKET_NAME( GQ_MATCH_REWARD_REQ ),

	DECLARE_PACKET_NAME( GQ_SCOUTER_ITEM_SELL_REQ ),

	DECLARE_PACKET_NAME( GQ_SHOP_EVENTITEM_BUY_REQ ),	// [7/14/2008 SGpro]
	DECLARE_PACKET_NAME( GQ_SHOP_GAMBLE_BUY_REQ ),	// [7/14/2008 SGpro]

	DECLARE_PACKET_NAME( GQ_BUDOKAI_UPDATE_MUDOSA_POINT_REQ ),
	DECLARE_PACKET_NAME( GQ_ITEM_REPLACE_REQ ),// [7/23/2008 SGpro]

	DECLARE_PACKET_NAME( GQ_UPDATE_SP_POINT_REQ ),

	DECLARE_PACKET_NAME( GQ_UPDATE_MARKING_REQ ),// Īȣ [9/10/2008 SGpro]
	
	DECLARE_PACKET_NAME( GQ_SKILL_BUY_REQ ),
	DECLARE_PACKET_NAME( GQ_SKILL_INIT_REQ ),
	
	DECLARE_PACKET_NAME( GQ_RECIPE_REG_REQ ),
	DECLARE_PACKET_NAME( GQ_HOIPOIMIX_JOB_SET_REQ ),
	DECLARE_PACKET_NAME( GQ_HOIPOIMIX_JOB_RESET_REQ ),
	DECLARE_PACKET_NAME( GQ_HOIPOIMIX_ITEM_MAKE_REQ ),

	DECLARE_PACKET_NAME( GQ_RUNTIME_PCDATA_SAVE_NFY ),

	DECLARE_PACKET_NAME( GQ_ITEM_STACK_UPDATE_REQ ),	
	DECLARE_PACKET_NAME( GQ_DOJO_BANK_HISTORY_REQ ),
	DECLARE_PACKET_NAME( GQ_DOJO_BANK_ZENNY_UPDATE_REQ ),

	DECLARE_PACKET_NAME( GQ_WORLD_SCHEDULE_SET_REQ ),

	DECLARE_PACKET_NAME( GQ_SWITCH_CHILD_ADULT ),
	DECLARE_PACKET_NAME( GQ_SET_CHANGE_CLASS_AUTHORITY ),
	DECLARE_PACKET_NAME( GQ_ITEM_CHANGE_ATTRIBUTE_REQ ),
	DECLARE_PACKET_NAME( GQ_CHANGE_NETP_REQ ),

	DECLARE_PACKET_NAME( GQ_ITEM_CHANGE_DURATIONTIME_REQ ),

	DECLARE_PACKET_NAME( GQ_SHOP_NETPYITEM_BUY_REQ ),

	DECLARE_PACKET_NAME( GQ_GM_COMMAND_LOG_REQ ),

	DECLARE_PACKET_NAME( GQ_DURATION_ITEM_BUY_REQ ),
	DECLARE_PACKET_NAME( GQ_DURATION_RENEW_REQ ),
	DECLARE_PACKET_NAME( GQ_GMT_UPDATE_REQ ),

	DECLARE_PACKET_NAME( GQ_CASHITEM_INFO_REQ ),
	DECLARE_PACKET_NAME( GQ_CASHITEM_MOVE_REQ ),
	DECLARE_PACKET_NAME( GQ_CASHITEM_DEL_REQ ),
	DECLARE_PACKET_NAME( GQ_CASHITEM_UNPACK_REQ ),
	DECLARE_PACKET_NAME( GQ_CASHITEM_BUY_REQ ),

	DECLARE_PACKET_NAME( GQ_PC_DATA_LOAD_REQ ),
	DECLARE_PACKET_NAME( GQ_PC_ITEM_LOAD_REQ ),
	DECLARE_PACKET_NAME( GQ_PC_SKILL_LOAD_REQ ),		
	DECLARE_PACKET_NAME( GQ_PC_BUFF_LOAD_REQ ),
	DECLARE_PACKET_NAME( GQ_PC_HTB_LOAD_REQ ),
	DECLARE_PACKET_NAME( GQ_PC_QUEST_ITEM_LOAD_REQ ),		
	DECLARE_PACKET_NAME( GQ_PC_QUEST_COMPLETE_LOAD_REQ ),
	DECLARE_PACKET_NAME( GQ_PC_QUEST_PROGRESS_LOAD_REQ ),	
	DECLARE_PACKET_NAME( GQ_PC_QUICK_SLOT_LOAD_REQ ),
	DECLARE_PACKET_NAME( GQ_PC_SHORTCUT_LOAD_REQ ),
	DECLARE_PACKET_NAME( GQ_PC_ITEM_RECIPE_LOAD_REQ ),	
	DECLARE_PACKET_NAME( GQ_PC_GMT_LOAD_REQ ),

	DECLARE_PACKET_NAME(GQ_QUICK_TELEPORT_INFO_LOAD_REQ),
	DECLARE_PACKET_NAME(GQ_QUICK_TELEPORT_UPDATE_REQ),
	DECLARE_PACKET_NAME(GQ_QUICK_TELEPORT_DEL_REQ),
	DECLARE_PACKET_NAME(GQ_QUICK_TELEPORT_USE_REQ),

	DECLARE_PACKET_NAME(GQ_PC_ITEM_COOL_TIME_LOAD_REQ),
	DECLARE_PACKET_NAME(GQ_SAVE_ITEM_COOL_TIME_DATA_REQ),

	DECLARE_PACKET_NAME(GQ_ACCOUNT_BANN),

	DECLARE_PACKET_NAME(GQ_CHARTITLE_SELECT_REQ),
	DECLARE_PACKET_NAME(GQ_CHARTITLE_ADD_REQ),
	DECLARE_PACKET_NAME(GQ_CHARTITLE_DELETE_REQ),

	DECLARE_PACKET_NAME(GQ_CASHINFOREFRESH_REQ),
	DECLARE_PACKET_NAME(GQ_CASHITEM_SEND_GIFT_REQ),

	DECLARE_PACKET_NAME(GQ_MATERIAL_DISASSEMBLE_REQ),

	DECLARE_PACKET_NAME(GQ_ITEM_SOCKET_INSERT_BEAD_REQ),
	DECLARE_PACKET_NAME(GQ_ITEM_SOCKET_DESTROY_BEAD_REQ),
};


//------------------------------------------------------------------
//
//------------------------------------------------------------------
const char * NtlGetPacketName_GQ(WORD wOpCode)
{
	if( wOpCode < GQ_OPCODE_BEGIN )
	{
		return "NOT DEFINED PACKET NAME : OPCODE LOW";
	}

	if( wOpCode > GQ_OPCODE_END )
	{
		return "NOT DEFINED PACKET NAME : OPCODE HIGH";
	}

	int nIndex = wOpCode - GQ_OPCODE_BEGIN;
	if( nIndex >= _countof( s_packetName_GQ) )
	{
		return "OPCODE BUFFER OVERFLOW";
	}

	return s_packetName_GQ[ nIndex ];
}

