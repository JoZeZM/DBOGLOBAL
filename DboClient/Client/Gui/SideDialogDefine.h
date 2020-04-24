#pragma once

// Dilaog의 인덱스와 겹치지 않도록 주의한다
enum eSideDialogType
{
	SDIALOG_FIRST = 500,
	

	// 기본적으로 상황이 맞다면 항상 보여줘야할 다이얼로그
	SDIALOG_DEFAULT_FIRST = SDIALOG_FIRST,

	SDIALOG_RANKBATTLE_INFO = SDIALOG_DEFAULT_FIRST,	///< 랭크배틀 정보창
	SDIALOG_BUDOKAI_MINORMATCH_INFO,			///< 천하제일 무도회 예선정보창
	SDIALOG_BUDOKAI_MAJORMATCH_INFO,			///< 천하제일 무도회 본선정보창
	SDIALOG_BUDOKAI_FINALMATCH_INFO,			///< 천하제일 무도회 결선정보창
	SDIALOG_QUEST_INDICATOR,					///< 기본 퀘스트 인디케이터
	SDIALOG_TMQ_STATUS,							///< TMQ 상태 진행창
	SDIALOG_SCRAMBLE_STATUS,					///< 도장 쟁탈 진행창
	SDIALOG_SCS_AUTOCHECK,						///< AutoCheck 진행창
	SDIALOG_CCBD_STATUS,

	SDIALOG_DEFAULT_LAST = SDIALOG_CCBD_STATUS,
	

	// Event Dialog
	SDIALOG_EVENT_FIRST,

    SDIALOG_SCOUTER_PC_VIEWER = SDIALOG_EVENT_FIRST, ///< 스카우터 PC 장비보기
	
	SDIALOG_EVENT_LAST = SDIALOG_SCOUTER_PC_VIEWER,    


	// 유저의 조작에 의해 화면에 그려지는 다이얼로그
	SDIALOG_NORMAL_FIRST = SDIALOG_EVENT_LAST,	///< 이곳에 다이얼로그가 정의될 때까지
	//SDIALOG_NORMAL_FIRST,

	SDIALOG_NORMAL_LAST = SDIALOG_NORMAL_FIRST,


	SDIALOG_LAST = SDIALOG_NORMAL_LAST,

	SDIALOG_UNKNOWN								///< 잘못된 다이얼로그 인덱스
};

// side dialog attribute
#define dSDA_NONE							0x00000000
#define dSDA_INDEPENDENTLY					0x00000001	///< 다른 사이드 다이얼로그와 자리에 대한 영향을 서로 주지 않는다
#define dSDA_FREE_Y_POSITION				0x00000002	///< 사이드 다이얼로그에 의해서 Y좌표를 조정하지 않고 본래 다이얼로그의 높이로 조절한다

// side dialog default font color
#define SIDE_DIALOG_FONT_GREEN_COLOR_RED	131
#define SIDE_DIALOG_FONT_GREEN_COLOR_GREEN	255
#define SIDE_DIALOG_FONT_GREEN_COLOR_BLUE	143
#define SIDE_DIALOG_FONT_GREEN_COLOR		RGB(SIDE_DIALOG_FONT_GREEN_COLOR_RED,SIDE_DIALOG_FONT_GREEN_COLOR_GREEN,SIDE_DIALOG_FONT_GREEN_COLOR_BLUE)

#define SIDE_DIALOG_FONT_YELLOW_COLOR_RED	253
#define SIDE_DIALOG_FONT_YELLOW_COLOR_GREEN	243
#define SIDE_DIALOG_FONT_YELLOW_COLOR_BLUE	107
#define SIDE_DIALOG_FONT_YELLOW_COLOR		RGB(SIDE_DIALOG_FONT_YELLOW_COLOR_RED,SIDE_DIALOG_FONT_YELLOW_COLOR_GREEN,SIDE_DIALOG_FONT_YELLOW_COLOR_BLUE)