#include "stdafx.h"
#include "UnitGame.h"
#include "AutoGameHandler.h"
CAutoGameHandler::CAutoGameHandler()
{
}

CAutoGameHandler::~CAutoGameHandler()
{
	buffList.clear();
}

BOOL CAutoGameHandler::OnKeyDown(class CKeyboard* pcKeyboard)
{
	if (pcKeyboard->GetKey() == 'G' && pcKeyboard->GetEvent() == KeyDown)
	{
		usePotionDelay = 0;
		attackArea = 20;
		areaCount = 0;
		oldLife = 0;
		if ((Game::GetGameMode() == GAMEMODE_InGame) && !active)
		{
			SETTINGSHANDLER->GetModel()->ReadSettings();
			auto psItem = &INVENTORYITEMS[INVENTORYITEMSLOT[ITEMSLOT_Bracelets - 1].iItemIndex - 1].sItem;
			if (psItem)
			{
				potionSpace = psItem->iPotionStorage;
			}
			static vector<int> macros = {
				VK_F1,
				VK_F2,
				VK_F3,
				VK_F4,
				VK_F5,
				VK_F6,
				VK_F7,
				VK_F8,
				VK_F9,
			};

			int buffKeyIndex[6] = { 0 };

			for (size_t i = 0; i < 6; i++)
			{
				for (size_t j = 0; j < macros.size(); j++)
				{
					if (SETTINGSHANDLER->GetModel()->GetSettings().buff[i] == macros[j])
					{
						buffKeyIndex[i] = j + 1;
						break;
					}
				}
			}

			for (int j = 1; j <= 20; j++)
			{
				if (j == SKILL_INDEXBUTTON - 1)
					continue;
				auto psSkill = &SKILLSCHARACTER[j];
				for (size_t i = 0; i < 6; i++)
				{
					if (buffKeyIndex[i] && psSkill->iShortKey == buffKeyIndex[i])
					{
						buffList.push_back(*psSkill);
						break;
					}
				}
			}
			TITLEBOX("启动内挂!");
			active = TRUE;
		}
		else
		{
			buffList.clear();
			AttackMonster = nullptr;
			TITLEBOX("关闭内挂!");
			active = FALSE;
		}
	}
	
	return FALSE;
}

void CAutoGameHandler::AutoPlay(double fTime)
{
	if (!active)
		return;
	updateTime += static_cast<float>(fTime);
	if (updateTime < playTime)
	{
		return;
	}
	if (CHARACTERGAME->GetCurrentHP() < SETTINGSHANDLER->GetModel()->GetSettings().Life && usePotionDelay < updateTime)
	{
		ITEMDATA_USED_ITEM = &INVENTORYITEMS[INVENTORYITEMSLOT[ITEMSLOT_PotionOne - 1].iItemIndex - 1];
		if (ITEMDATA_USED_ITEM->bValid)
		{
			ItemHandler::UseItem(&ITEMDATA_USED_ITEM->sItem);
			ItemHandler::UsedPotion();
			UNITDATA->iPotionStatus = POTIONSTATUS_HP;
			CharacterGame::ResetPotionGraph(POTIONSTATUS_HP - 1);
		}
		usePotionDelay = updateTime + 20.0;
	}

	if (INVENTORYITEMS[INVENTORYITEMSLOT[ITEMSLOT_PotionOne - 1].iItemIndex - 1].iPotionCount < 3)
	{
		for (int i = 0; i < INVENTORY_DATACOUNT; i++)
		{
			//Valid Item?
			auto pcItemData = INVENTORYITEMS + i;
			if (pcItemData->bValid)
			{
				auto potionOne = &INVENTORYITEMS[INVENTORYITEMSLOT[ITEMSLOT_PotionOne - 1].iItemIndex - 1];
				//Using Item?
				if (!pcItemData->iItemSlot && pcItemData->sBaseItemID.ToItemID() == potionOne->sBaseItemID.ToItemID() && (pcItemData->sItem.bCanNotUse == FALSE))
				{
					int TempPotionCount = pcItemData->iPotionCount;
					for (int p = 0; p < TempPotionCount; p++)
					{
						if (potionSpace > potionOne->iPotionCount)
						{
							potionOne->iPotionCount++;
							pcItemData->iPotionCount--;
							if (pcItemData->iPotionCount <= 0)
							{
								ITEMHANDLER->DeleteItem(pcItemData);
								break;
							}
						}
					}
				}
			}
		}
	}

	if (CHARACTERGAME->GetCurrentMP() < SETTINGSHANDLER->GetModel()->GetSettings().Mana && usePotionDelay < updateTime)
	{
		ITEMDATA_USED_ITEM = &INVENTORYITEMS[INVENTORYITEMSLOT[ITEMSLOT_PotionTwo - 1].iItemIndex - 1];
		if (ITEMDATA_USED_ITEM->bValid)
		{
			ItemHandler::UseItem(&ITEMDATA_USED_ITEM->sItem);
			ItemHandler::UsedPotion();
			UNITDATA->iPotionStatus = POTIONSTATUS_MP;
			CharacterGame::ResetPotionGraph(POTIONSTATUS_MP - 1);
		}
		usePotionDelay = updateTime + 20.0;
	}

	if (INVENTORYITEMS[INVENTORYITEMSLOT[ITEMSLOT_PotionTwo - 1].iItemIndex - 1].iPotionCount < 3)
	{
		for (int i = 0; i < INVENTORY_DATACOUNT; i++)
		{
			//Valid Item?
			auto pcItemData = INVENTORYITEMS + i;
			if (pcItemData->bValid)
			{
				auto potionTwo = &INVENTORYITEMS[INVENTORYITEMSLOT[ITEMSLOT_PotionTwo - 1].iItemIndex - 1];
				//Using Item?
				if (!pcItemData->iItemSlot && pcItemData->sBaseItemID.ToItemID() == potionTwo->sBaseItemID.ToItemID() && (pcItemData->sItem.bCanNotUse == FALSE))
				{
					int TempPotionCount = pcItemData->iPotionCount;
					for (int p = 0; p < TempPotionCount; p++)
					{
						if (potionSpace > potionTwo->iPotionCount)
						{
							potionTwo->iPotionCount++;
							pcItemData->iPotionCount--;
							if (pcItemData->iPotionCount <= 0)
							{
								ITEMHANDLER->DeleteItem(pcItemData);
								break;
							}
						}
					}
				}
			}
		}
	}

	if (CHARACTERGAME->GetCurrentSP() < SETTINGSHANDLER->GetModel()->GetSettings().Stamina && usePotionDelay < updateTime)
	{
		ITEMDATA_USED_ITEM = &INVENTORYITEMS[INVENTORYITEMSLOT[ITEMSLOT_PotionThree - 1].iItemIndex - 1];
		if (ITEMDATA_USED_ITEM->bValid) 
		{
			ItemHandler::UseItem(&ITEMDATA_USED_ITEM->sItem);
			ItemHandler::UsedPotion();
			UNITDATA->iPotionStatus = POTIONSTATUS_SP;
			CharacterGame::ResetPotionGraph(POTIONSTATUS_SP - 1);
		}
		usePotionDelay = updateTime + 20.0;
	}

	if (INVENTORYITEMS[INVENTORYITEMSLOT[ITEMSLOT_PotionThree - 1].iItemIndex - 1].iPotionCount < 3)
	{
		for (int i = 0; i < INVENTORY_DATACOUNT; i++)
		{
			//Valid Item?
			auto pcItemData = INVENTORYITEMS + i;
			if (pcItemData->bValid)
			{
				auto potionThree = &INVENTORYITEMS[INVENTORYITEMSLOT[ITEMSLOT_PotionThree - 1].iItemIndex - 1];
				//Using Item?
				if (!pcItemData->iItemSlot && pcItemData->sBaseItemID.ToItemID() == potionThree->sBaseItemID.ToItemID() && (pcItemData->sItem.bCanNotUse == FALSE))
				{
					int TempPotionCount = pcItemData->iPotionCount;
					for (int p = 0; p < TempPotionCount; p++)
					{
						if (potionSpace > potionThree->iPotionCount)
						{
							potionThree->iPotionCount++;
							pcItemData->iPotionCount--;
							if (pcItemData->iPotionCount <= 0)
							{
								ITEMHANDLER->DeleteItem(pcItemData);
								break;
							}
						}
					}
				}
			}
		}
	}

	for (auto& skill : buffList)
	{
		Skill* psSkill = TIMERSKILLHANDLER->FindSkillTimer(skill.iID);
		if (!psSkill)
		{
			if (SKILLMANAGERHANDLER->CanUseSkill(&skill))
			{
				Skill sSkill;
				ZeroMemory(&sSkill, sizeof(sSkill));
				sSkill.iID = skill.iID;
				sSkill.iUseTime = skill.iUseTime;
				sSkill.iLevel = skill.iLevel;
				sSkill.MatIcon = skill.MatIcon;
				TIMERSKILLHANDLER->AddSkillTimer(&sSkill);

				CGameCharacterStatus::GetInstance()->UpdateCharacterStatusItem();
			}
		}
	}
	
	if (NULL != AttackMonster && AttackMonster->bRendered && AttackMonster->sCharacterData.iType & CHARACTERTYPE_Monster && AttackMonster->sCharacterData.sHP.sCur > 0 && AttackMonster->sCharacterData.iLevel > 0 && AttackMonster->sRenderPoint.x > 150 && AttackMonster->sRenderPoint.x < (UNITDATA->sRenderPoint.x * 2 - 150) && AttackMonster->sRenderPoint.y > 100 && AttackMonster->sRenderPoint.y < (UNITDATA->sRenderPoint.y * 2 - 100))
	{
		if (UNITDATA_SELECTED && UNITDATA_SELECTED->sCharacterData.iType & CHARACTERTYPE_Monster && AttackMonster != UNITDATA_SELECTED)
		{
			AttackMonster = UNITDATA_SELECTED;
			SendMessage(GAMEWINDOW->GetWindowHandle(), WM_MOUSEMOVE, 0, MAKELPARAM(AttackMonster->sRenderPoint.x, AttackMonster->sRenderPoint.y));
		}
		else if (!UNITDATA_SELECTED || !(UNITDATA_SELECTED->sCharacterData.iType & CHARACTERTYPE_Monster))
		{
			AttackMonster = NULL;
			return;
		}
		
		if (SETTINGSHANDLER->GetModel()->GetSettings().bUseRightClick)
		{
			SendMessage(GAMEWINDOW->GetWindowHandle(), WM_RBUTTONDOWN, 0, MAKELPARAM(AttackMonster->sRenderPoint.x, AttackMonster->sRenderPoint.y));
			updateTime = playTime + 20.0f;
			SendMessage(GAMEWINDOW->GetWindowHandle(), WM_RBUTTONUP, 0, MAKELPARAM(AttackMonster->sRenderPoint.x, AttackMonster->sRenderPoint.y));
			updateTime = playTime + 20.0f;
		}
		else
		{
			SendMessage(GAMEWINDOW->GetWindowHandle(), WM_LBUTTONDOWN, 0, MAKELPARAM(AttackMonster->sRenderPoint.x, AttackMonster->sRenderPoint.y));
			updateTime = playTime + 20.0f;
			SendMessage(GAMEWINDOW->GetWindowHandle(), WM_LBUTTONUP, 0, MAKELPARAM(AttackMonster->sRenderPoint.x, AttackMonster->sRenderPoint.y));
			updateTime = playTime + 20.0f;
		}
		if ( AttackMonster && oldLife && AttackMonster->sCharacterData.sHP.sCur && oldLife != AttackMonster->sCharacterData.sHP.sCur)
		{
			oldLife = AttackMonster->sCharacterData.sHP.sCur;
			areaCount = 0;
		}
		else
		{
			areaCount++;
		}
		if (areaCount > 30)
		{
			AttackMonster = NULL;
		}
		
		attackArea = 20;
	}
	else 
	{
		int minPos = 2000;
		for (UINT i = 0; i < MAX_UNITS; i++)
		{
			AttackMonster = &pcaUnitData[i];
			if (AttackMonster->bRendered && strlen(AttackMonster->sCharacterData.szName) && AttackMonster->sCharacterData.iType & CHARACTERTYPE_Monster && AttackMonster->sCharacterData.sHP.sCur > 0 && AttackMonster->sCharacterData.iLevel > 0 && AttackMonster->sRenderPoint.x > 150 && AttackMonster->sRenderPoint.x < (UNITDATA->sRenderPoint.x * 2 - 150) && AttackMonster->sRenderPoint.y > 100 && AttackMonster->sRenderPoint.y < (UNITDATA->sRenderPoint.y * 2 - 100))
			{
				int xsub = max(UNITDATA->sRenderPoint.x, AttackMonster->sRenderPoint.x) - min(UNITDATA->sRenderPoint.x, AttackMonster->sRenderPoint.x);
				if (minPos > xsub)
				{
					minPos = xsub;
				}
				int ysub = max(UNITDATA->sRenderPoint.y, AttackMonster->sRenderPoint.y) - min(UNITDATA->sRenderPoint.y, AttackMonster->sRenderPoint.y);
				if (xsub < attackArea && ysub < attackArea)
				{
					SendMessage(GAMEWINDOW->GetWindowHandle(), WM_MOUSEMOVE, 0, MAKELPARAM(AttackMonster->sRenderPoint.x, AttackMonster->sRenderPoint.y));
					playTime = updateTime + 100.0f;
					break;
				}
			}
		}
		attackArea += 10;
		if (attackArea > 550)
			attackArea = 20;
	}
}
