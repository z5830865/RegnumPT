#include "stdafx.h"
#include "CItemBoxHandler.h"


CItemBoxHandler::CItemBoxHandler()
{
	pcWindow = new CItemBoxWindowHandler();
}


CItemBoxHandler::~CItemBoxHandler()
{
	DELET( pcWindow );
}

void CItemBoxHandler::Init()
{
	pcWindow->Init();
}

void CItemBoxHandler::HandlePacket( PacketNPCItemBox * psPacket )
{
	if ( psPacket->bItem )
	{
		CGameInventory::GetInstance()->SetInventoryItem( &psPacket->cItemData.sItem );
		ITEMHANDLER->ResetInventoryItemChecksum();

		if ( psPacket->cItemData.sItem.sItemID.ToItemBase() == ITEMBASE_Potion )
			CGameInventory::ResetPotion();

		SAVE;

		GetWindow()->Open( CItemBoxWindowHandler::EWindowItemBoxID::WINDOWID_Receive );

		psPacket->bItem = FALSE;
		ProcessPacket( psPacket );
	}
	else
	{
		GetWindow()->ShowEmptyReceiveWindow();

		if ( psPacket->cItemData.sItem.sItemID.ToItemID() != ITEMID_None )
		{
			WINDOW_INVENTORY = TRUE;

			if ( psPacket->cItemData.sItem.sItemID.ToItemType() == ITEMTYPE_GoldAndExp )
			{
				//Gold? Set Price
				if ( psPacket->cItemData.sItem.sItemID.ToItemID() == ITEMID_Gold )
					psPacket->cItemData.sItem.iSalePrice = psPacket->Gold.iValue;

				//Exp? Set Exp on old X Position
				if ( psPacket->cItemData.sItem.sItemID.ToItemID() == ITEMID_Experience )
				{
					psPacket->cItemData.sOldPosition.iX = psPacket->EXP.liEXP.LowPart;
					psPacket->cItemData.sOldPosition.iY = psPacket->EXP.liEXP.HighPart;
				}
			}

			GetWindow()->AddItemReceive( psPacket->szSenderName, psPacket->sDate, &psPacket->cItemData );
		}
	}
}

void CItemBoxHandler::HandlePacket( PacketNPCItemBoxSendResponse * psPacket )
{
	for ( int i = 0; i < psPacket->iCount; i++ )
		GetWindow()->RemoveItem( psPacket->iaItemID[i], psPacket->iaChk1[i], psPacket->iaChk2[i] );

	if ( psPacket->iResult == -1 )
		TITLEBOX( "角色装备盒子已经满了" );
	else if ( psPacket->iResult == -2 )
		TITLEBOX( "你不能把装备赠送给自己" );
	else if ( psPacket->iResult == -3 )
		TITLEBOX( "角色名不存在" );
	else if ( psPacket->iResult == 1 )
		TITLEBOX( "装备赠送成功" );

	GetWindow()->ItemBoxSendBlock( FALSE );

	SAVE;
}

void CItemBoxHandler::ProcessPacket( PacketNPCItemBox * psPacket )
{
	psPacket->iLength = sizeof( PacketNPCItemBox );
	psPacket->iHeader = PKTHDR_NPCItemBox;
	SENDPACKETL( psPacket, TRUE );
}

void CItemBoxHandler::ProcessPacket( PacketNPCItemBoxSend * psPacket )
{
	psPacket->iLength = sizeof( PacketNPCItemBoxSend );
	psPacket->iHeader = PKTHDR_NPCItemBoxSend;
	SENDPACKETL( psPacket, TRUE );
}
