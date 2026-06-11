#pragma once
class CRuthlessofZecramHandler
{
public:
	CRuthlessofZecramHandler();
	virtual ~CRuthlessofZecramHandler();


	bool							OnCastAnimationStart(struct Skill* psSkill, UnitData* pcUnitData);

	BOOL							OnBegin(class UnitData* pcThis, int iSkillID, int iLevel, class UnitData* pcUnitData, int iX, int iY, int iZ);

	BOOL							OnUse();

	BOOL							OnEvent(UnitData* pcUnitData);

	void							LoadParticle();

private:
	BOOL							CanUse(struct Skill* psSkill);


	int								iParticleID = -1;
};
