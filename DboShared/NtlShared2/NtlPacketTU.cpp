#include "StdAfx.h"
#include "NtlPacketTU.h"

const char * s_packetName_TU[] =
{
	
	DECLARE_PACKET_NAME( TU_ENTER_CHAT_RES ),
	DECLARE_PACKET_NAME( TU_DISCONNECT ),
	DECLARE_PACKET_NAME( TU_DISCONNECTED_NFY ),
	DECLARE_PACKET_NAME( TU_HEARTBEAT ),
	DECLARE_PACKET_NAME( TU_SYSTEM_DISPLAY_TEXT ),
	DECLARE_PACKET_NAME( TU_CHAT_MESSAGE_SAY ),
	DECLARE_PACKET_NAME( TU_CHAT_MESSAGE_SHOUT ),
	DECLARE_PACKET_NAME( TU_CHAT_MESSAGE_WHISPER ),
	DECLARE_PACKET_NAME( TU_CHAT_MESSAGE_WHISPER_FAILED_NFY ),
	DECLARE_PACKET_NAME( TU_CHAT_MESSAGE_PARTY ),
	DECLARE_PACKET_NAME( TU_CHAT_MESSAGE_GUILD ),
	DECLARE_PACKET_NAME( TU_CHAT_MESSAGE_TRADE ),
	DECLARE_PACKET_NAME( TU_CHAT_MESSAGE_FIND_PARTY ),
	DECLARE_PACKET_NAME( TU_GUILD_CREATED_NFY ),
	DECLARE_PACKET_NAME( TU_GUILD_INFO ),
	DECLARE_PACKET_NAME( TU_GUILD_MEMBER_INFO ),
	DECLARE_PACKET_NAME( TU_GUILD_DISBAND_RES ),
	DECLARE_PACKET_NAME( TU_GUILD_BEING_DISBANDED_NFY ),
	DECLARE_PACKET_NAME( TU_GUILD_DISBAND_CANCEL_RES ),
	DECLARE_PACKET_NAME( TU_GUILD_DISBAND_CANCELED_NFY ),
	DECLARE_PACKET_NAME( TU_GUILD_DISBANDED_NFY ),
	DECLARE_PACKET_NAME( TU_GUILD_INVITED_NFY ),
	DECLARE_PACKET_NAME( TU_GUILD_RESPONSE_INVITATION_RES ),
	DECLARE_PACKET_NAME( TU_GUILD_MEMBER_JOINED_NFY ),
	DECLARE_PACKET_NAME( TU_GUILD_INVITATION_DECLINED_NFY ),
	DECLARE_PACKET_NAME( TU_GUILD_INVITATION_EXPIRED_NFY ),
	DECLARE_PACKET_NAME( TU_GUILD_LEAVE_RES ),
	DECLARE_PACKET_NAME( TU_GUILD_MEMBER_LEFT_NFY ),
	DECLARE_PACKET_NAME( TU_GUILD_KICK_OUT_RES ),
	DECLARE_PACKET_NAME( TU_GUILD_MEMBER_KICKED_OUT_NFY ),
	DECLARE_PACKET_NAME( TU_GUILD_APPOINT_SECOND_MASTER_RES ),
	DECLARE_PACKET_NAME( TU_GUILD_SECOND_MASTER_APPOINTED_NFY ),
	DECLARE_PACKET_NAME( TU_GUILD_DISMISS_SECOND_MASTER_RES ),
	DECLARE_PACKET_NAME( TU_GUILD_SECOND_MASTER_DISMISSED_NFY ),
	DECLARE_PACKET_NAME( TU_GUILD_CHANGE_GUILD_MASTER_RES ),
	DECLARE_PACKET_NAME( TU_GUILD_GUILD_MASTER_CHANGED_NFY ),
	DECLARE_PACKET_NAME( TU_GUILD_MEMBER_POSITION_CHANGED_NFY ),
	DECLARE_PACKET_NAME( TU_GUILD_MEMBER_CLASS_CHANGED_NFY ),
	DECLARE_PACKET_NAME( TU_GUILD_MEMBER_LEVEL_CHANGED_NFY ),
	DECLARE_PACKET_NAME( TU_GUILD_MEMBER_REPUTATION_CHANGED_NFY ),
	DECLARE_PACKET_NAME( TU_GUILD_MEMBER_ONLINE_NFY ),
	DECLARE_PACKET_NAME( TU_GUILD_MEMBER_OFFLINE_NFY ),
	DECLARE_PACKET_NAME( TU_FRIEND_ADD_RES ),
	DECLARE_PACKET_NAME( TU_FRIEND_DEL_RES ),
	DECLARE_PACKET_NAME( TU_FRIEND_MOVE_RES ),
	DECLARE_PACKET_NAME( TU_FRIEND_LIST_INFO ),
	DECLARE_PACKET_NAME( TU_FRIEND_BLACK_ADD_RES ),
	DECLARE_PACKET_NAME( TU_FRIEND_BLACK_DEL_RES ),
	DECLARE_PACKET_NAME( TU_FRIEND_INFO ),
	DECLARE_PACKET_NAME( TU_FRIEND_INFO_CHANGE ),
	DECLARE_PACKET_NAME( TU_RANKBATTLE_RANK_LIST_RES ),
	DECLARE_PACKET_NAME( TU_RANKBATTLE_RANK_FIND_CHARACTER_RES ),
	DECLARE_PACKET_NAME( TU_RANKBATTLE_RANK_COMPARE_DAY_RES ),
	DECLARE_PACKET_NAME( TU_GUILD_REPUTATION_CHANGE_NFY ),
	DECLARE_PACKET_NAME( TU_GUILD_FUNCTION_CHANGE_NFY ),
	DECLARE_PACKET_NAME( TU_GUILD_CHANGE_NOTICE_NFY ),
	DECLARE_PACKET_NAME( TU_GUILD_CHANGE_NOTICE_RES ),
	DECLARE_PACKET_NAME( TU_GUILD_GIVE_ZENNY_NFY ),
	DECLARE_PACKET_NAME( TU_TMQ_RECORD_LIST_RES ),
	DECLARE_PACKET_NAME( TU_TMQ_MEMBER_LIST_RES ),
	DECLARE_PACKET_NAME( TU_BUDOKAI_NOTICE_NFY ),
	DECLARE_PACKET_NAME( TU_BUDOKAI_TOURNAMENT_INDIVIDUAL_LIST_RES ),
	DECLARE_PACKET_NAME( TU_BUDOKAI_TOURNAMENT_INDIVIDUAL_INFO_RES ),
	DECLARE_PACKET_NAME( TU_BUDOKAI_TOURNAMENT_TEAM_LIST_RES ),
	DECLARE_PACKET_NAME( TU_BUDOKAI_TOURNAMENT_TEAM_INFO_RES ),
	DECLARE_PACKET_NAME( TU_PETITION_CHAT_START_REQ ),
	DECLARE_PACKET_NAME( TU_PETITION_CHAT_GM_SAY_REQ ),
	DECLARE_PACKET_NAME( TU_PETITION_CHAT_USER_SAY_RES ),
	DECLARE_PACKET_NAME( TU_PETITION_CHAT_GM_END_NFY ),
	DECLARE_PACKET_NAME( TU_PETITION_USER_INSERT_RES ),
	DECLARE_PACKET_NAME( TU_PETITION_CONTENT_MODIFY_RES ),
	DECLARE_PACKET_NAME( TU_PETITION_USER_CANCEL_RES ),
	DECLARE_PACKET_NAME( TU_PETITION_FINISH_NFY ),
	DECLARE_PACKET_NAME( TU_DOJO_CREATED_NFY ),
	DECLARE_PACKET_NAME( TU_DOJO_DESTROYED_NFY ),
	DECLARE_PACKET_NAME( TU_DOJO_BRIEF_NFY ),
	DECLARE_PACKET_NAME( TU_DOJO_SCRAMBLE_NFY ),
	DECLARE_PACKET_NAME( TU_DOJO_SCRAMBLE_INFORM_NFY ),
	DECLARE_PACKET_NAME( TU_DOJO_SCRAMBLE_REJECT_NFY ),
	DECLARE_PACKET_NAME( TU_DOJO_BUDOKAI_SEED_ADD_RES ),
	DECLARE_PACKET_NAME( TU_DOJO_BUDOKAI_SEED_DEL_RES ),
	DECLARE_PACKET_NAME( TU_DOJO_SCRAMBLE_POINT_NFY ),
	DECLARE_PACKET_NAME( TU_DOJO_SCRAMBLE_SHIEFT_SEAL_STATE_NFY ),
	DECLARE_PACKET_NAME( TU_DOJO_NOTICE_CHANGE_RES ),
	DECLARE_PACKET_NAME( TU_DOJO_NOTICE_CHANGE_NFY ),
	DECLARE_PACKET_NAME( TU_DOJO_SCRAMBLE_RECEIVE_NFY ),
	DECLARE_PACKET_NAME( TU_DOJO_SCRAMBLE_RECEIVE_INFO_NFY ),
	DECLARE_PACKET_NAME( TU_DOJO_SCRAMBLE_REWARD_NFY ),
	DECLARE_PACKET_NAME( TU_DOJO_SCRAMBLE_RESULT_NFY ),
	DECLARE_PACKET_NAME( TU_CHAR_NAME_CHANGED_NFY ),
	DECLARE_PACKET_NAME( TU_HLS_SLOT_MACHINE_INFO_RES ),
	DECLARE_PACKET_NAME( TU_HLS_SLOT_MACHINE_EXTRACT_RES ),
	DECLARE_PACKET_NAME( TU_HLS_SLOT_MACHINE_WINNER_INFO_RES ),
	DECLARE_PACKET_NAME( TU_BROADCASTING_SYSTEM_NFY ),
	DECLARE_PACKET_NAME( TU_WAGUWAGUCOIN_UPDATE_INFO ),
	DECLARE_PACKET_NAME( TU_EVENTCOIN_UPDATE_INFO ),

};


//------------------------------------------------------------------
//
//------------------------------------------------------------------
const char * NtlGetPacketName_TU(WORD wOpCode)
{
	if( wOpCode < TU_OPCODE_BEGIN )
	{
		return "NOT DEFINED PACKET NAME : OPCODE LOW";
	}

	if( wOpCode > TU_OPCODE_END )
	{
		return "NOT DEFINED PACKET NAME : OPCODE HIGH";
	}

	int nIndex = wOpCode - TU_OPCODE_BEGIN;
	if( nIndex >= _countof( s_packetName_TU ) )
	{
		return "OPCODE BUFFER OVERFLOW";
	}

	return s_packetName_TU[ nIndex ];
}