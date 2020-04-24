#include "StdAfx.h"
#include "SlotMachineTable.h"
#include "NtlDebug.h"
#include "NtlSerializer.h"



WCHAR* CSlotMachineTable::m_pwszSheetList[] =
{
	L"Table_Data_KOR",
	NULL
};

CSlotMachineTable::CSlotMachineTable(void)
{
	Init();
}

CSlotMachineTable::~CSlotMachineTable(void)
{
	Destroy();
}

bool CSlotMachineTable::Create(DWORD dwCodePage)
{
	return CTable::Create(dwCodePage);
}

void CSlotMachineTable::Destroy()
{
}

void CSlotMachineTable::Init()
{
}

void* CSlotMachineTable::AllocNewTable(WCHAR* pwszSheetName, DWORD dwCodePage)
{
	if (0 == wcscmp(pwszSheetName, L"Table_Data_KOR"))
	{
		sHLS_SLOT_MACHINE_TBLDAT* pNewHelp = new sHLS_SLOT_MACHINE_TBLDAT;
		if (NULL == pNewHelp)
			return NULL;

		CPINFO cpInfo;
		if(false == GetCPInfo(dwCodePage, &cpInfo))
		{
			delete pNewHelp;
			return NULL;
		}
		
		m_dwCodePage = dwCodePage;
		return pNewHelp;
	}

	return NULL;
}

bool CSlotMachineTable::DeallocNewTable(void* pvTable, WCHAR* pwszSheetName)
{
	if (0 == wcscmp(pwszSheetName, L"Table_Data_KOR"))
	{
		sHLS_SLOT_MACHINE_TBLDAT* pHelp = (sHLS_SLOT_MACHINE_TBLDAT*)pvTable;
		if (FALSE != IsBadReadPtr(pHelp, sizeof(*pHelp)))
			return false;

		delete pHelp;

		return true;
	}

	return false;
}

bool CSlotMachineTable::AddTable(void * pvTable, bool bReload, bool bUpdate)
{
	UNREFERENCED_PARAMETER(bReload);
	UNREFERENCED_PARAMETER(bUpdate);

	sHLS_SLOT_MACHINE_TBLDAT* pTbldat = (sHLS_SLOT_MACHINE_TBLDAT*) pvTable;

	if ( false == m_mapTableList.insert(std::pair<TBLIDX, sTBLDAT*>(pTbldat->tblidx, pTbldat)).second )
	{
		CTable::CallErrorCallbackFunction(L"[File] : %s\r\n Table Tblidx[%u] is Duplicated ",m_wszXmlFileName, pTbldat->tblidx );
		_ASSERTE( 0 );
		return false;
	}


	return true;
}

bool CSlotMachineTable::SetTableData(void* pvTable, WCHAR* pwszSheetName, std::wstring* pstrDataName, BSTR bstrData)
{
	if (0 == wcscmp(pwszSheetName, L"Table_Data_KOR"))
	{
		sHLS_SLOT_MACHINE_TBLDAT* pHelp = (sHLS_SLOT_MACHINE_TBLDAT*)pvTable;

		if (0 == wcscmp(pstrDataName->c_str(), L"Tblidx"))
		{
			pHelp->tblidx = READ_DWORD( bstrData );
		}


		else
		{
			CTable::CallErrorCallbackFunction(L"[File] : %s\n[Error] : Unknown field name found!(Field Name = %s)", m_wszXmlFileName, pstrDataName->c_str());
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}


sTBLDAT* CSlotMachineTable::FindData(TBLIDX tblidx)
{
	if (0 == tblidx)
		return NULL;

	TABLEIT iter;
	iter = m_mapTableList.find(tblidx);
	if (End() == iter)
		return NULL;

	return (sTBLDAT*)(iter->second); 
}

#include "NtlStringHandler.h"
bool CSlotMachineTable::LoadFromBinary(CNtlSerializer& serializer, bool bReload, bool bUpdate)
{
	if( false == bReload )
	{
		Reset();
	}

	BYTE byMargin = 1;
	serializer >> byMargin;

	bool bLoop = true;
	do
	{
		sHLS_SLOT_MACHINE_TBLDAT* pTableData = new sHLS_SLOT_MACHINE_TBLDAT;
		if (NULL == pTableData)
		{
			Destroy();
			return false;
		}

		if (false == pTableData->LoadFromBinary(serializer))
		{
			delete pTableData;
			bLoop = false;
			break;
		}

		char* wszNameText = Ntl_WC2MB(pTableData->wszNameText);
		std::string stringName = pTableData->szFile_Name;

	//	printf("%u|%u|%s|%s|%u|%u|%u|%u|%u \n", pTableData->tblidx, pTableData->dwName, wszNameText, stringName.c_str(), pTableData->byCoin, pTableData->byType, pTableData->bOnOff, pTableData->byfirstWinCoin, pTableData->aItemTblidx[0]);
		if( false == AddTable(pTableData, bReload, bUpdate) )
		{
			delete pTableData;
		}

		Ntl_CleanUpHeapString(wszNameText);

	} while (false != bLoop);

	return true;
}

bool CSlotMachineTable::SaveToBinary(CNtlSerializer& serializer)
{
	serializer.Refresh();

	BYTE byMargin = 1;
	serializer << byMargin;

	TABLE::iterator iter;
	for (iter = Begin() ; End() != iter ; iter++)
	{
		sHLS_SLOT_MACHINE_TBLDAT* pTableData = (sHLS_SLOT_MACHINE_TBLDAT*)(iter->second);

		pTableData->SaveToBinary(serializer);
	}

	return true;
}