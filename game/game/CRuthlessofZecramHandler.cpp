#include "stdafx.h"
#include "CRuthlessofZecramHandler.h"

CRuthlessofZecramHandler::CRuthlessofZecramHandler()
{
}

CRuthlessofZecramHandler::~CRuthlessofZecramHandler()
{
}

bool CRuthlessofZecramHandler::OnCastAnimationStart(struct Skill* psSkill, UnitData* pcUnitData)
{
	if (USESKILL(psSkill))
	{
		UNITDATA->sActiveSkill.cSkillTinyID = SKILLPLAYID_T53;
		UNITDATA->sActiveSkill.cLevel = psSkill->iLevel;

		UNITDATA->Animate(ANIMATIONTYPE_Skill);

		UNITDATA->iNewFPS = (int)((float)SKILLMANAGERHANDLER->GetAttackFrameSpeed(UNITDATA->sCharacterData.iAttackSpeed));
		UNITDATA->bOverrideFPS = TRUE;

		return true;
	}

	return false;
}

BOOL CRuthlessofZecramHandler::OnEvent(UnitData* pcUnitData)
{
	Point3D s;

	if (pcUnitData->GetAnimationAttackPosition(&s.iX, &s.iY, &s.iZ))
	{
		SetDynamicLight(s.iX, s.iY, s.iZ, 200, 0, 0, 0, 400);

		if (pcUnitData->iAnimationEvent == 3)
			SOUNDHANDLER->SetWeaponSound(WEAPONSOUND_TwoHandMiss, pcUnitData->sPosition.iX, pcUnitData->sPosition.iY, pcUnitData->sPosition.iZ);
		else
		{
			SOUNDHANDLER->SetSkillSound(SKILLSOUND_AvengingCrash, pcUnitData->sPosition.iX, pcUnitData->sPosition.iY, pcUnitData->sPosition.iZ);

			if (pcUnitData == UNITDATA)
			{
				if (pcUnitData->pcTarget)
				{
					if (pcUnitData->iAnimationEvent == 4)
					{
						SKILLMANAGERHANDLER->SetUnitsRange(pcUnitData->pcTarget->sPosition, iaFighterT52Area[UNITDATA->sActiveSkill.cLevel - 1]);

						SKILLMANAGERHANDLER->DamageAreaHandle(pcUnitData->pcTarget, pcUnitData->pcTarget->sPosition, 0, 0, 0, 0, UNITDATA->sActiveSkill.iValue);
					}
					else
					{
						SKILLMANAGERHANDLER->DamageUnitHandle(pcUnitData->pcTarget, 0, 0, 0, 0, UNITDATA->sActiveSkill.iValue, TRUE);
					}
				}
			}

			if (pcUnitData->iAnimationEvent == 4)
			{
				CParticleScript* pc = PARTICLEFACTORY->LoadScript("game\\scripts\\particles\\SkillFighterT5SesmicImpact.lua");

				pc->SetOwner(new Engine::ObjectOwnerPosition(Point3D(s.iX, s.iY - (28 << 8), s.iZ)));

				PARTICLEENGINE->AddScript(pc);
			}

			//Particle every hit
			PARTICLE->Start(iParticleID, s.iX, s.iY, s.iZ);
		}
	}

	return TRUE;
}

BOOL CRuthlessofZecramHandler::OnBegin(UnitData* pcThis, int iSkillID, int iLevel, UnitData* pcUnitData, int iX, int iY, int iZ)
{
	return FALSE;
}

BOOL CRuthlessofZecramHandler::OnUse()
{
	return TRUE;
}

void CRuthlessofZecramHandler::LoadParticle()
{
	iParticleID = PARTICLE->Load("game\\scripts\\particles\\R5SesmicImpact.part");
}

BOOL CRuthlessofZecramHandler::CanUse(Skill* psSkill)
{
	SKILLMANAGERHANDLER->UseManaStamina(psSkill);

	return TRUE;
}

