#pragma once
class CAutoGameHandler
{
public:
	CAutoGameHandler();
	~CAutoGameHandler();
	BOOL OnKeyDown(class CKeyboard* pcKeyboard);
	void AutoPlay(double fTime);
private:
	BOOL active = FALSE;
	int potionSpace = 2;
	double usePotionDelay = 0;
	double useSkillDelay = 0;
	int attackArea = 20;
	int areaCount = 0;
	int oldLife = 0;
	double playTime = 0.0f;
	double updateTime = 0.0f;
	UnitData* pcaUnitData = (UnitData*)0x0D16888;
	UnitData* AttackMonster = NULL;
	std::vector<Skill> buffList;
};