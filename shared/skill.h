#pragma once

#include "PSkill.h"

#include "item.h"

#define SKILLCONTAINER_LENGTH	(MAX_PKTSIZ - 0x20)
#define MAX_SKILLS				230

#define MAX_MASTERY				1000

struct TwoArraySkill
{
	union
	{
		int				iaValue[10][2];
		int				faValue[10][2];
	};
};

struct SkillTable
{
	int			iaFighterT11WeaponAttackPowerAdd[10];

	int			iaFighterT12FireResistanceIncrease[10];

	int			iaFighterT13DamageBoost[10];
	int			iaFighterT13NumberofHits[10];
	float			faFighterT13HPDecrease[10];
	int			iaFighterT13MPCost[10];
	int			iaFighterT13SPCost[10];

	int			iaFighterT14AddAttackRating[10];
	int			iaFighterT14DamageBoost[10];
	int			iaFighterT14MPCost[10];
	int			iaFighterT14SPCost[10];

	int			iaFighterT21DamageBoost[10];
	int			iaFighterT21NumberofHits[10];
	int			iaFighterT21MPCost[10];
	int			iaFighterT21SPCost[10];

	int			iaFighterT22DamageBoost[10];
	int			iaFighterT22AddCritical[10];
	int			iaFighterT22MPCost[10];
	int			iaFighterT22SPCost[10];

	int			iaFighterT23AreaofEffect[10];
	int			iaFighterT23Duration[10];
	int			iaFighterT23MPCost[10];
	int			iaFighterT23SPCost[10];

	int			iaFighterT24DamageBoost[10];
	int			iaFighterT24AreaofEffect[10];
	int			iaFighterT24MPCost[10];
	int			iaFighterT24SPCost[10];

	int			iaFighterT31AddAttackRating[10];
	int			iaFighterT31Duration[10];
	int			iaFighterT31MPCost[10];
	int			iaFighterT31SPCost[10];

	int			iaFighterT32AddAttackRating[10];
	int			iaFighterT32DamageBoost[10];
	int			iaFighterT32MPCost[10];
	int			iaFighterT32SPCost[10];

	int			iaFighterT33AttackSpeedBoost[10];
	int			iaFighterT33Duration[10];
	int			iaFighterT33MPCost[10];
	int			iaFighterT33SPCost[10];

	int			iaFighterT34DamageBoost[10];
	int			iaFighterT34DamageBoostvsDemons[10];
	int			iaFighterT34MPCost[10];
	int			iaFighterT34SPCost[10];

	int			iaFighterT41DamageBoost[10];
	int			iaFighterT41AddCritical[10];
	int			iaFighterT41MPCost[10];
	int			iaFighterT41SPCost[10];

	int			iaFighterT42AddBaseAttackPower[10];
	int			iaFighterT42DecreaseAbsorption[10];
	int			iaFighterT42Duration[10];
	int			iaFighterT42MPCost[10];
	int			iaFighterT42SPCost[10];

	int			iaFighterT43DamageBoost[10];
	int			iaFighterT43MaximumHits[10];
	int			iaFighterT43Range[10];
	int			iaFighterT43MPCost[10];
	int			iaFighterT43SPCost[10];

	int			iaFighterT44HPIncrease[10];

	float			faFighterT51AddHPRegen[10];
	int			iaFighterT51BoostHPPotionRecovery[10];
	int			iaFighterT51BoostHPCapacity[10];

	int			iaFighterT52DamageBoost[10];
	int			iaFighterT52ImpactArea[10];
	int			iaFighterT52MPCost[10];
	int			iaFighterT52SPCost[10];

	int			iaFighterT53HPDecrease[10];
	int			iaFighterT53HitsNeededtoTrigger[10];
	int			iaFighterT53FinalDamageBoostIncrease[10];
	int			iaFighterT53Duration[10];
	int			iaFighterT53MPCost[10];
	int			iaFighterT53SPCost[10];

	int			iaFighterT54DamageBoost[10];
	int			iaFighterT54Duration[10];
	int			iaFighterT54MPDrain[10];
	int			iaFighterT54SPDrain[10];

	//Mechanician
	int			iaMechanicianT11ShieldBlockBoost[10];
	int			iaMechanicianT11Duration[10];
	int			iaMechanicianT11MPCost[10];
	int			iaMechanicianT11SPCost[10];

	int			iaMechanicianT12StaticDamage[10];
	int			iaMechanicianT12AddAttackPower[10];
	int			iaMechanicianT12AreaofEffect[10];
	int			iaMechanicianT12MPCost[10];
	int			iaMechanicianT12SPCost[10];

	int			iaMechanicianT13PoisonResistanceIncrease[10];

	int			iaMechanicianT14AbsorptionBoost[10];
	int			iaMechanicianT14Duration[10];
	int			iaMechanicianT14MPCost[10];
	int			iaMechanicianT14SPCost[10];

	int			iaMechanicianT21CalculatedDamage[10];
	int			iaMechanicianT21AreaofEffect[10];
	int			iaMechanicianT21MPCost[10];
	int			iaMechanicianT21SPCost[10];

	int			iaMechanicianT22AddAttackPower[10];
	int			iaMechanicianT22AddAttackRating[10];
	int			iaMechanicianT22Duration[10];
	int			iaMechanicianT22MPCost[10];
	int			iaMechanicianT22SPCost[10];

	int			iaMechanicianT23DamageBoost[10];
	int			iaMechanicianT23AddAttackSpeed[10];
	float			faMechanicianT23MPDrainperhit[10];
	float			faMechanicianT23SPDrainperhit[10];
	int			iaMechanicianT23MPCost[10];
	int			iaMechanicianT23SPCost[10];

	int			iaMechanicianT24DamageBoost[10];
	int			iaMechanicianT24AreaofEffect[10];
	int			iaMechanicianT24MPCost[10];
	int			iaMechanicianT24SPCost[10];

	int			iaMechanicianT31ArmorDefenseRatingBoost[10];
	int			iaMechanicianT31Duration[10];
	int			iaMechanicianT31MPCost[10];
	int			iaMechanicianT31SPCost[10];

	int			iaMechanicianT32AttackRatingBoost[10];
	int			iaMechanicianT32DamageBoost[10];
	int			iaMechanicianT32MPCost[10];
	int			iaMechanicianT32SPCost[10];

	int			iaMechanicianT33BaseAttackPowerIncrease[10];

	int			iaMechanicianT34SparkDamage[10];
	int			iaMechanicianT34AddDefenseRating[10];
	int			iaMechanicianT34Duration[10];
	int			iaMechanicianT34MPCost[10];
	int			iaMechanicianT34SPCost[10];

	int			iaMechanicianT41DamageBoost[10];
	int			iaMechanicianT41AreaofEffect[10];
	int			iaMechanicianT41MaxHits[10];
	int			iaMechanicianT41MPCost[10];
	int			iaMechanicianT41SPCost[10];

	int			iaMechanicianT42IncreaseAbsorption[10];
	int			iaMechanicianT42BoostAbsorption[10];
	int			iaMechanicianT42MonsterSightRangeIncrease[10];
	int			iaMechanicianT42Duration[10];
	int			iaMechanicianT42MPCost[10];
	int			iaMechanicianT42SPCost[10];

	int			iaMechanicianT43SpheresDamage[10];
	int			iaMechanicianT43SpheresAttackRange[10];
	int			iaMechanicianT43SpheresAttackDelay[10];
	int			iaMechanicianT43Duration[10];
	int			iaMechanicianT43MPCost[10];
	int			iaMechanicianT43SPCost[10];

	int			iaMechanicianT44SummonDuration[10];
	int			iaMechanicianT44SummonAttackPowerMin[10];
	int			iaMechanicianT44SummonAttackPowerMax[10];
	int			iaMechanicianT44SummonAttackRating[10];
	int			iaMechanicianT44SummonDefense[10];
	int			iaMechanicianT44SummonHP[10];
	int			iaMechanicianT44MPCost[10];
	int			iaMechanicianT44SPCost[10];

	int			iaMechanicianT51DamageBoost[10];
	int			iaMechanicianT51MPCost[10];
	int			iaMechanicianT51SPCost[10];

	int			iaMechanicianT52DamageBoost[10];
	int			iaMechanicianT52MPCost[10];
	int			iaMechanicianT52SPCost[10];

	int			iaMechanicianT53ReceivedDamageReduction[10];
	int			iaMechanicianT53AttackRatingReduction[10];
	int			iaMechanicianT53Duration[10];
	int			iaMechanicianT53MPCost[10];
	int			iaMechanicianT53SPCost[10];

	int			iaMechanicianT54DamageBoost[10];
	int			iaMechanicianT54PoisonDuration[10];
	int			iaMechanicianT54MPCost[10];
	int			iaMechanicianT54SPCost[10];

	//Archer
	int			iaArcherT11AddAttackRating[10];
	int			iaArcherT11HawkRotations[10];
	int			iaArcherT11MPCost[10];
	int			iaArcherT11SPCost[10];

	int			iaArcherT12AddAttackPower[10];

	int			iaArcherT13AddAttackSpeed[10];
	int			iaArcherT13DamageBoost[10];
	int			iaArcherT13MPCost[10];
	int			iaArcherT13SPCost[10];

	int			iaArcherT14AddAttackRating[10];
	int			iaArcherT14DamageBoost[10];
	int			iaArcherT14MPCost[10];
	int			iaArcherT14SPCost[10];

	int			iaArcherT21AddAttackRating[10];

	int			iaArcherT22StaticDamage[10];
	int			iaArcherT22FormulaDamage[10];
	int			iaArcherT22Duration[10];
	int			iaArcherT22MPCost[10];
	int			iaArcherT22SPCost[10];

	int			iaArcherT23DamageBoost[10];
	int			iaArcherT23AreaofEffect[10];
	int			iaArcherT23MPCost[10];
	int			iaArcherT23SPCost[10];

	int			iaArcherT24AddAttackSpeed[10];
	int			iaArcherT24DamageBoost[10];
	int			iaArcherT24NumberofArrows[10];
	int			iaArcherT24MPCost[10];
	int			iaArcherT24SPCost[10];

	int			iaArcherT31FireDamageStatic[10];
	int			iaArcherT31FireDamageCalculated[10];
	int			iaArcherT31LightningDamageStatic[10];
	int			iaArcherT31LightningDamageCalculated[10];
	int			iaArcherT31MPCost[10];
	int			iaArcherT31SPCost[10];

	int			iaArcherT32FalconDamage[10];
	float			faArcherT32HPRegen[10];
	int			iaArcherT32Duration[10];
	int			iaArcherT32MPCost[10];
	int			iaArcherT32SPCost[10];

	int			iaArcherT33DamageBoost[10];
	int			iaArcherT33DamageBoostvsDemonMonsters[10];
	int			iaArcherT33AreaofEffect[10];
	int			iaArcherT33MPCost[10];
	int			iaArcherT33SPCost[10];

	int			iaArcherT34IncreasedShotRange[10];
	int			iaArcherT34DamageBoost[10];
	int			iaArcherT34MPCost[10];
	int			iaArcherT34SPCost[10];

	int			iaArcherT41Duration[10];
	int			iaArcherT41SummonAttackPowerMin[10];
	int			iaArcherT41SummonAttackPowerMax[10];
	int			iaArcherT41SummonAttackRating[10];
	int			iaArcherT41SummonDefense[10];
	int			iaArcherT41SummonHP[10];
	int			iaArcherT41MPCost[10];
	int			iaArcherT41SPCost[10];

	int			iaArcherT42IncreaseEvasion[10];

	int			iaArcherT43ShotRangeIncrease[10];
	int			iaArcherT43DamageBoost[10];
	float			faArcherT43ChargeRaiseSpeed[10];
	int			iaArcherT43MPCost[10];
	int			iaArcherT43SPCost[10];

	int			iaArcherT44AddAttackPower[10];
	int			iaArcherT44AddAttackRating[10];
	int			iaArcherT44Duration[10];
	int			iaArcherT44MPCost[10];
	int			iaArcherT44SPCost[10];

	int			iaArcherT51AddRange[10];
	int			iaArcherT51CriticalRateIncrease[10];
	int			iaArcherT51AfterDamage[10];
	int			iaArcherT51MPCost[10];
	int			iaArcherT51SPCost[10];

	int			iaArcherT52DamageBoost[10];
	int			iaArcherT52CriticalDamageBoost[10];
	int			iaArcherT52MPCost[10];
	int			iaArcherT52SPCost[10];

	int			iaArcherT53EffectDuration[10];
	int			iaArcherT53MPCost[10];
	int			iaArcherT53SPCost[10];

	int			iaArcherT54DamageBoost[10];
	int			iaArcherT54EffectDuration[10];
	int			iaArcherT54MPDrain[10];
	int			iaArcherT54SPDrain[10];

	//Pikeman
	int			iaPikemanT11AttackPowerMin[10];
	int			iaPikemanT11AttackPowerMax[10];
	int			iaPikemanT11PushbackRange[10];
	int			iaPikemanT11MPCost[10];
	int			iaPikemanT11SPCost[10];

	int			iaPikemanT12FrostResistanceIncrease[10];

	int			iaPikemanT13AddCriticalDamage[10];
	int			iaPikemanT13MPCost[10];
	int			iaPikemanT13SPCost[10];

	int			iaPikemanT14WeaponAttackRatingBoost[10];
	int			iaPikemanT14DamageBoost[10];
	int			iaPikemanT14MPCost[10];
	int			iaPikemanT14SPCost[10];

	int			iaPikemanT21FreezeDuration[10];
	int			iaPikemanT21FreezeAttackPowerMin[10];
	int			iaPikemanT21FreezeAttackPowerMax[10];
	int			iaPikemanT21FreezeAttackRange[10];
	int			iaPikemanT21MPCost[10];
	int			iaPikemanT21SPCost[10];

	int			iaPikemanT22DamageBoost[10];
	int			iaPikemanT22Range[10];
	int			iaPikemanT22MPCost[10];
	int			iaPikemanT22SPCost[10];

	int			iaPikemanT23WeaponCurrentBlockBoost[10];

	int			iaPikemanT24AddSize[10];
	int			iaPikemanT24DamageBoost[10];
	int			iaPikemanT24MPCost[10];
	int			iaPikemanT24SPCost[10];

	int			iaPikemanT31DamageBoost[10];
	int			iaPikemanT31NumberofSpears[10];
	int			iaPikemanT31EffectDuration[10];
	int			iaPikemanT31EffectRange[10];
	int			iaPikemanT31MPCost[10];
	int			iaPikemanT31SPCost[10];

	int			iaPikemanT32AfterDamage[10];
	int			iaPikemanT32MonsterSightDecrease[10];
	int			iaPikemanT32Duration[10];
	int			iaPikemanT32MPCost[10];
	int			iaPikemanT32SPCost[10];

	int			iaPikemanT33WeaponCriticalRatingBoost[10];

	int			iaPikemanT34DamageBoost[10];
	int			iaPikemanT34MPCost[10];
	int			iaPikemanT34SPCost[10];

	int			iaPikemanT41AddCriticalDamage[10];
	int			iaPikemanT41TargetCriticalDecrease[10];
	int			iaPikemanT41DebuffDuration[10];
	int			iaPikemanT41MPCost[10];
	int			iaPikemanT41SPCost[10];

	int			iaPikemanT42DamageBoost[10];
	int			iaPikemanT42ChargedDamageBoost[10];
	int			iaPikemanT42RaiseChargingSpeed[10];
	int			iaPikemanT42MPCost[10];
	int			iaPikemanT42SPCost[10];

	int			iaPikemanT43AddEvasion[10];
	int			iaPikemanT43Duration[10];
	int			iaPikemanT43MPCost[10];
	int			iaPikemanT43SPCost[10];

	int			iaPikemanT44DamageBoost[10];
	int			iaPikemanT44NumberofHits[10];
	int			iaPikemanT44MPCost[10];
	int			iaPikemanT44SPCost[10];

	int			iaPikemanT51Duration[10];
	int			iaPikemanT51MPCost[10];
	int			iaPikemanT51SPCost[10];

	int			iaPikemanT52DamageBoost[10];
	float			faPikemanT52Cooldown[10];
	int			iaPikemanT52MPCost[10];
	int			iaPikemanT52SPCost[10];

	int			iaPikemanT53DamageBoost[10];
	int			iaPikemanT53WeaponAttackRatingBoost[10];
	int			iaPikemanT53MPCost[10];
	int			iaPikemanT53SPCost[10];

	int			iaPikemanT54DamageBoost[10];
	int			iaPikemanT54MPCost[10];
	int			iaPikemanT54SPCost[10];

	//Atalanta
	int			iaAtalantaT11AttackPowerMin[10];
	int			iaAtalantaT11AttackPowerMax[10];
	int			iaAtalantaT11MPCost[10];
	int			iaAtalantaT11SPCost[10];

	int			iaAtalantaT12DamageBoost[10];
	int			iaAtalantaT12AddAttackSpeed[10];
	int			iaAtalantaT12AddAttackRating[10];
	int			iaAtalantaT12MPCost[10];
	int			iaAtalantaT12SPCost[10];

	int			iaAtalantaT13AddAttackPower[10];

	int			iaAtalantaT14DamageBoost[10];
	int			iaAtalantaT14MPCost[10];
	int			iaAtalantaT14SPCost[10];

	int			iaAtalantaT21AttackRatingBoost[10];
	int			iaAtalantaT21AddRange[10];
	int			iaAtalantaT21Duration[10];
	int			iaAtalantaT21MPCost[10];
	int			iaAtalantaT21SPCost[10];

	int			iaAtalantaT22DamageBoost[10];
	int			iaAtalantaT22AttackRatingBoost[10];
	int			iaAtalantaT22MPCost[10];
	int			iaAtalantaT22SPCost[10];

	int			iaAtalantaT23MonsterLifeAbsorption[10];
	int			iaAtalantaT23MPCost[10];
	int			iaAtalantaT23SPCost[10];

	int			iaAtalantaT24DamageBoost[10];
	int			iaAtalantaT24MPCost[10];
	int			iaAtalantaT24SPCost[10];

	int			iaAtalantaT31NumberofHits[10];
	int			iaAtalantaT31DamageBoost[10];
	int			iaAtalantaT31AttackRatingBoost[10];
	int			iaAtalantaT31MPCost[10];
	int			iaAtalantaT31SPCost[10];

	int			iaAtalantaT32MaxAttackPower[10];
	int			iaAtalantaT32Duration[10];
	int			iaAtalantaT32MPCost[10];
	int			iaAtalantaT32SPCost[10];

	int			iaAtalantaT33DamageBoost[10];
	int			iaAtalantaT33MPCost[10];
	int			iaAtalantaT33SPCost[10];

	int			iaAtalantaT34DamageBoost[10];
	int			iaAtalantaT34MPCost[10];
	int			iaAtalantaT34SPCost[10];

	int			iaAtalantaT41AddEvasion[10];
	int			iaAtalantaT41Duration[10];
	int			iaAtalantaT41MPCost[10];
	int			iaAtalantaT41SPCost[10];

	int			iaAtalantaT42DamageBoost[10];
	int			iaAtalantaT42AreaofEffect[10];
	int			iaAtalantaT42MPCost[10];
	int			iaAtalantaT42SPCost[10];

	int			iaAtalantaT43AddAttackPowerMin[10];
	int			iaAtalantaT43AddAttackPowerMax[10];
	int			iaAtalantaT43TargetRunningSpeedReduction[10];
	int			iaAtalantaT43TargetFreezeEffectDuration[10];
	int			iaAtalantaT43Duration[10];
	int			iaAtalantaT43MPCost[10];
	int			iaAtalantaT43SPCost[10];

	int			iaAtalantaT44DamageBoost[10];
	int			iaAtalantaT44AddRange[10];
	int			iaAtalantaT44MPCost[10];
	int			iaAtalantaT44SPCost[10];

	int			iaAtalantaT51SummonAttackPowerMin[10];
	int			iaAtalantaT51SummonAttackPowerMax[10];
	int			iaAtalantaT51SummonAttackRating[10];
	int			iaAtalantaT51SummonHP[10];
	int			iaAtalantaT51SummonDuration[10];
	int			iaAtalantaT51MPCost[10];
	int			iaAtalantaT51SPCost[10];

	int			iaAtalantaT52SpeedIncrease[10];
	int			iaAtalantaT52AddEvasion[10];

	int			iaAtalantaT53DamageBoost[10];
	int			iaAtalantaT53Targets[10];
	int			iaAtalantaT53PoisonDuration[10];
	int			iaAtalantaT53MPCost[10];
	int			iaAtalantaT53SPCost[10];

	int			iaAtalantaT54DamageBoost[10];
	int			iaAtalantaT54MPCost[10];
	int			iaAtalantaT54SPCost[10];

	//Knight
	int			iaKnightT11StaticDamage[10];
	int			iaKnightT11DamageBoost[10];
	int			iaKnightT11LinearAreaofEffect[10];
	int			iaKnightT11MPCost[10];
	int			iaKnightT11SPCost[10];

	int			iaKnightT12DamageBoostvsUndeadMonsters[10];
	int			iaKnightT12Duration[10];
	int			iaKnightT12MPCost[10];
	int			iaKnightT12SPCost[10];

	int			iaKnightT13SPBoost[10];

	int			iaKnightT14DamageBoost[10];
	int			iaKnightT14AddCritical[10];
	int			iaKnightT14MPCost[10];
	int			iaKnightT14SPCost[10];

	int			iaKnightT21PartyArea[10];
	int			iaKnightT21FinalDamageBoostvsUndeadEnemies[10];
	int			iaKnightT21Duration[10];
	int			iaKnightT21MPCost[10];
	int			iaKnightT21SPCost[10];

	int			iaKnightT22AreaofEffect[10];
	int			iaKnightT22DamageBoost[10];
	int			iaKnightT22MPCost[10];
	int			iaKnightT22SPCost[10];

	int			iaKnightT23DamageBoost[10];
	int			iaKnightT23AreaofEffect[10];
	int			iaKnightT23PierceRange[10];
	int			iaKnightT23MPCost[10];
	int			iaKnightT23SPCost[10];

	int			iaKnightT24DefenseBoost[10];
	int			iaKnightT24Duration[10];
	int			iaKnightT24MPCost[10];
	int			iaKnightT24SPCost[10];

	int			iaKnightT31BaseAttackPowerIncrease[10];

	int			iaKnightT32AddBlockRating[10];
	int			iaKnightT32MonsterDamageIntoHP[10];
	int			iaKnightT32Duration[10];
	int			iaKnightT32MPCost[10];
	int			iaKnightT32SPCost[10];

	int			iaKnightT33SuccessRate[10];
	int			iaKnightT33MonsterLifeIncrease[10];
	int			iaKnightT33EnslaveEffectDuration[10];
	int			iaKnightT33MPCost[10];
	int			iaKnightT33SPCost[10];

	int			iaKnightT34AttackRatingBoost[10];
	int			iaKnightT34DamageBoost[10];
	int			iaKnightT34DamageBoostvsUndeadEnemies[10];
	int			iaKnightT34MPCost[10];
	int			iaKnightT34SPCost[10];

	int			iaKnightT41DamageBoost[10];
	int			iaKnightT41AreaofEffect[10];
	int			iaKnightT41MPCost[10];
	int			iaKnightT41SPCost[10];

	int			iaKnightT42ShieldAbsorptionBoost[10];
	int			iaKnightT42Duration[10];
	int			iaKnightT42MPCost[10];
	int			iaKnightT42SPCost[10];

	int			iaKnightT43AddAttackPower[10];
	int			iaKnightT43Duration[10];
	int			iaKnightT43MPCost[10];
	int			iaKnightT43SPCost[10];

	int			iaKnightT44AddCritical[10];
	int			iaKnightT44DamageBoost[10];
	int			iaKnightT44NumberofHits[10];
	int			iaKnightT44MPCost[10];
	int			iaKnightT44SPCost[10];

	int			iaKnightT51UndeadDamageBoost[10];
	int			iaKnightT51MPCost[10];
	int			iaKnightT51SPCost[10];

	int			iaKnightT52DamageBoost[10];
	int			iaKnightT52AreaofEffect[10];
	int			iaKnightT52AddAtkRtgBoost[10];
	int			iaKnightT52Duration[10];
	int			iaKnightT52MPCost[10];
	int			iaKnightT52SPCost[10];
	float			faKnightT52Cooldown[10];

	int			iaKnightT53ShieldDefenseBoost[10];
	int			iaKnightT53MPCost[10];
	int			iaKnightT53SPCost[10];

	int			iaKnightT54DamageBoost[10];
	int			iaKnightT54MPCost[10];
	int			iaKnightT54SPCost[10];

	//Magician
	int			iaMagicianT11HPSacrificed[10];
	int			iaMagicianT11MPIncreased[10];
	int			iaMagicianT11MPCost[10];
	int			iaMagicianT11SPCost[10];

	int			iaMagicianT12StaticDamage[10];
	int			iaMagicianT12DamageBoost[10];
	int			iaMagicianT12AttackRange[10];
	int			iaMagicianT12MPCost[10];
	int			iaMagicianT12SPCost[10];

	int			iaMagicianT13AddAbsorption[10];
	int			iaMagicianT13AddElementalResistance[10];
	int			iaMagicianT13Duration[10];
	int			iaMagicianT13MPCost[10];
	int			iaMagicianT13SPCost[10];

	int			iaMagicianT14StaticDamage[10];
	int			iaMagicianT14DamageBoost[10];
	int			iaMagicianT14AttackRange[10];
	int			iaMagicianT14AreaofEffect[10];
	int			iaMagicianT14MPCost[10];
	int			iaMagicianT14SPCost[10];

	int			iaMagicianT21MPPotionRecoveryBoost[10];
	int			iaMagicianT21MPCapacityIncrease[10];

	int			iaMagicianT22DamageBoost[10];
	int			iaMagicianT22AttackRange[10];
	int			iaMagicianT22AreaofEffect[10];
	int			iaMagicianT22MPCost[10];
	int			iaMagicianT22SPCost[10];

	int			iaMagicianT23FireAttackPowerMin[10];
	int			iaMagicianT23FireAttackPowerMax[10];
	int			iaMagicianT23IceAttackPowerMin[10];
	int			iaMagicianT23IceAttackPowerMax[10];
	int			iaMagicianT23LightningAttackPowerMin[10];
	int			iaMagicianT23LightningAttackPowerMax[10];
	int			iaMagicianT23Duration[10];
	int			iaMagicianT23MPCost[10];
	int			iaMagicianT23SPCost[10];

	int			iaMagicianT24DamageBoost[10];
	int			iaMagicianT24AttackRange[10];
	int			iaMagicianT24MPCost[10];
	int			iaMagicianT24SPCost[10];

	int			iaMagicianT31ReduceDamage[10];
	int			iaMagicianT31Duration[10];
	int			iaMagicianT31MPCost[10];
	int			iaMagicianT31SPCost[10];

	int			iaMagicianT32DamageBoost[10];
	int			iaMagicianT32AreaofEffect[10];
	int			iaMagicianT32MPCost[10];
	int			iaMagicianT32SPCost[10];

	int			iaMagicianT33AddAttackPowerMin[10];
	int			iaMagicianT33AddAttackPowerMax[10];
	int			iaMagicianT33Duration[10];
	int			iaMagicianT33MPCost[10];
	int			iaMagicianT33SPCost[10];

	int			iaMagicianT34FireDamage[10];
	int			iaMagicianT34IceDamage[10];
	int			iaMagicianT34SwordAttackDelay[10];
	int			iaMagicianT34Duration[10];
	int			iaMagicianT34MPCost[10];
	int			iaMagicianT34SPCost[10];

	int			iaMagicianT41SummonDuration[10];
	int			iaMagicianT41SummonAttackPowerMin[10];
	int			iaMagicianT41SummonAttackPowerMax[10];
	int			iaMagicianT41SummonAttackRating[10];
	int			iaMagicianT41SummonHP[10];
	int			iaMagicianT41MPCost[10];
	int			iaMagicianT41SPCost[10];

	int			iaMagicianT42DamageBoost[10];
	int			iaMagicianT42AreaofEffect[10];
	int			iaMagicianT42MPCost[10];
	int			iaMagicianT42SPCost[10];

	int			iaMagicianT43TargetSpeedReduction[10];
	int			iaMagicianT43AreaofEffect[10];
	int			iaMagicianT43EffectDuration[10];
	int			iaMagicianT43MPCost[10];
	int			iaMagicianT43SPCost[10];

	int			iaMagicianT44DamageBoost[10];
	int			iaMagicianT44AreaofEffect[10];
	int			iaMagicianT44MPCost[10];
	int			iaMagicianT44SPCost[10];

	int			iaMagicianT51OrbBlockBoost[10];
	int			iaMagicianT51AttackRateReduced[10];
	int			iaMagicianT51MPCost[10];
	int			iaMagicianT51SPCost[10];

	int			iaMagicianT52EffectDuration[10];
	int			iaMagicianT52RunSpeedReduction[10];
	int			iaMagicianT52MPCost[10];
	int			iaMagicianT52SPCost[10];

	int			iaMagicianT53DamageBoost[10];
	int			iaMagicianT53IncreasedAttackRange[10];
	int			iaMagicianT53MPCost[10];
	int			iaMagicianT53SPCost[10];

	int			iaMagicianT54DamageBoost[10];
	int			iaMagicianT54AttackDuration[10];
	int			iaMagicianT54MPDrain[10];
	int			iaMagicianT54SPDrain[10];

	//Priestess
	int			iaPriestessT11FormulaBasedLifeRecovery[10];
	int			iaPriestessT11AttackPowerBasedLifeRecovery[10];
	int			iaPriestessT11MPCost[10];
	int			iaPriestessT11SPCost[10];

	int			iaPriestessT12FormulaBasedDamage[10];
	int			iaPriestessT12DamageBoost[10];
	int			iaPriestessT12MPCost[10];
	int			iaPriestessT12SPCost[10];

	int			iaPriestessT13FormulaBasedDamageperHit[10];
	int			iaPriestessT13AttackPowerBasedDamageperHit[10];
	int			iaPriestessT13MinNumberofSparks[10];
	int			iaPriestessT13MaxNumberofSparks[10];
	int			iaPriestessT13MPCost[10];
	int			iaPriestessT13SPCost[10];

	int			iaPriestessT14TargetReduceDamage[10];
	int			iaPriestessT14EffectDuration[10];
	int			iaPriestessT14MPCost[10];
	int			iaPriestessT14SPCost[10];

	int			iaPriestessT21AddMPPotionBoostRecovery[10];
	int			iaPriestessT21AddMPRegeneration[10];

	int			iaPriestessT22AttackRange[10];
	int			iaPriestessT22DamageBoost[10];
	int			iaPriestessT22NumberofBolts[10];
	int			iaPriestessT22MPCost[10];
	int			iaPriestessT22SPCost[10];

	int			iaPriestessT23MonsterDamageReflected[10];
	int			iaPriestessT23Duration[10];
	int			iaPriestessT23MPCost[10];
	int			iaPriestessT23SPCost[10];

	int			iaPriestessT24FormulaBasedLifeRecovery[10];
	int			iaPriestessT24AttackPowerBasedLifeRecovery[10];
	int			iaPriestessT24Range[10];
	int			iaPriestessT24MPCost[10];
	int			iaPriestessT24SPCost[10];

	int			iaPriestessT31AttackRatingBoost[10];
	int			iaPriestessT31DamageBoost[10];
	int			iaPriestessT31MPCost[10];
	int			iaPriestessT31SPCost[10];

	int			iaPriestessT32AttainableSuccessRate[10];
	int			iaPriestessT32MaxPlayersResurrected[10];
	int			iaPriestessT32MPCost[10];
	int			iaPriestessT32SPCost[10];

	int			iaPriestessT33AttainableSuccessRate[10];
	int			iaPriestessT33MonsterHealthReduction[10];
	int			iaPriestessT33MPCost[10];
	int			iaPriestessT33SPCost[10];

	int			iaPriestessT34IncreaseLife[10];
	int			iaPriestessT34Duration[10];
	int			iaPriestessT34MPCost[10];
	int			iaPriestessT34SPCost[10];

	int			iaPriestessT41AttackPowerMin[10];
	int			iaPriestessT41AttackPowerMax[10];
	int			iaPriestessT41AttackRange[10];
	int			iaPriestessT41FreezeDuration[10];
	int			iaPriestessT41MPCost[10];
	int			iaPriestessT41SPCost[10];

	int			iaPriestessT42AddHPRegen[10];
	int			iaPriestessT42AddMPRegen[10];
	int			iaPriestessT42Duration[10];
	int			iaPriestessT42Range[10];
	int			iaPriestessT42MPCost[10];
	int			iaPriestessT42SPCost[10];

	int			iaPriestessT43DamageBoost[10];
	int			iaPriestessT43NumberofBolts[10];
	int			iaPriestessT43Range[10];
	int			iaPriestessT43MPCost[10];
	int			iaPriestessT43SPCost[10];

	int			iaPriestessT44MuspellDamage[10];
	int			iaPriestessT44AddAttackPowerMin[10];
	int			iaPriestessT44AddAttackPowerMax[10];
	int			iaPriestessT44VirtualLifeEffectReduction[10];
	int			iaPriestessT44MuspellAttackDelay[10];
	int			iaPriestessT44AddUndeadAbsorption[10];
	int			iaPriestessT44AddEvasion[10];
	int			iaPriestessT44MPCost[10];
	int			iaPriestessT44SPCost[10];

	int			iaPriestessT51SummonAttackPowerMin[10];
	int			iaPriestessT51SummonAttackPowerMax[10];
	int			iaPriestessT51SummonAttackRating[10];
	int			iaPriestessT51SummonHealthPoints[10];
	int			iaPriestessT51SummonDuration[10];
	int			iaPriestessT51MPCost[10];
	int			iaPriestessT51SPCost[10];

	int			iaPriestessT52DamageBoost[10];
	int			iaPriestessT52AreaofEffect[10];
	int			iaPriestessT52Meteorites[10];
	int			iaPriestessT52MPCost[10];
	int			iaPriestessT52SPCost[10];

	int			iaPriestessT53TargetAttackRatingReduction[10];
	int			iaPriestessT53DebuffEffectDuration[10];
	int			iaPriestessT53ChargedArea[10];
	int			iaPriestessT53MPCost[10];
	int			iaPriestessT53SPCost[10];

	int			iaPriestessT54IncreaseDefense[10];
	int			iaPriestessT54IncreaseAbsorption[10];
	int			iaPriestessT54MPCost[10];
	int			iaPriestessT54SPCost[10];

	//Assassin
	int			iaAssassinT11DamageBoost[10];
	int			iaAssassinT11MPCost[10];
	int			iaAssassinT11SPCost[10];

	int			iaAssassinT12DamageBoost[10];
	int			iaAssassinT12MPCost[10];
	int			iaAssassinT12SPCost[10];

	int			iaAssassinT13WeaponAttackPowerAdd[10];

	int			iaAssassinT14ReduceReceivedDamageFromTarget[10];
	int			iaAssassinT14AttackRange[10];
	int			iaAssassinT14EffectDuration[10];
	int			iaAssassinT14MPCost[10];
	int			iaAssassinT14SPCost[10];

	int			iaAssassinT21DamageBoost[10];
	int			iaAssassinT21MPCost[10];
	int			iaAssassinT21SPCost[10];

	int			iaAssassinT22AddEvasion[10];
	int			iaAssassinT22Duration[10];
	int			iaAssassinT22MPCost[10];
	int			iaAssassinT22SPCost[10];

	int			iaAssassinT23RadiusAreaofEffect[10];
	int			iaAssassinT23StunEffectDuration[10];
	int			iaAssassinT23MPCost[10];
	int			iaAssassinT23SPCost[10];

	int			iaAssassinT24WeaponAttackRatingBoost[10];
	int			iaAssassinT24WeaponBlockRatingBoost[10];

	int			iaAssassinT31DamageBoost[10];
	int			iaAssassinT31MPCost[10];
	int			iaAssassinT31SPCost[10];

	int			iaAssassinT32AreaofEffect[10];
	int			iaAssassinT32DamageBoost[10];
	int			iaAssassinT32MPCost[10];
	int			iaAssassinT32SPCost[10];

	int			iaAssassinT33AttackSpeedBoost[10];
	int			iaAssassinT33Duration[10];
	int			iaAssassinT33MPCost[10];
	int			iaAssassinT33SPCost[10];

	int			iaAssassinT34AfterDamage[10];
	int			iaAssassinT34MonsterSightDecrease[10];
	int			iaAssassinT34Duration[10];
	int			iaAssassinT34MPCost[10];
	int			iaAssassinT34SPCost[10];

	int			iaAssassinT41DamageBoost[10];
	int			iaAssassinT41MPCost[10];
	int			iaAssassinT41SPCost[10];

	int			iaAssassinT42WeaponCriticalRatingBoost[10];

	int			iaAssassinT43DamageBoost[10];
	int			iaAssassinT43MaximumHits[10];
	int			iaAssassinT43EffectDuration[10];
	int			iaAssassinT43EffectRange[10];
	int			iaAssassinT43MPCost[10];
	int			iaAssassinT43SPCost[10];

	int			iaAssassinT44DamageBoost[10];
	int			iaAssassinT44MPCost[10];
	int			iaAssassinT44SPCost[10];

	int			iaAssassinT51CriticalDamageBoost[10];
	int			iaAssassinT51AttainableMovementTeleportRange[10];
	int			iaAssassinT51MPCost[10];
	int			iaAssassinT51SPCost[10];

	int			iaAssassinT52DamageBoost[10];
	int			iaAssassinT52PoisonDamage[10];
	int			iaAssassinT52PoisonDuration[10];
	int			iaAssassinT52MPCost[10];
	int			iaAssassinT52SPCost[10];

	int			iaAssassinT53DamageBoost[10];
	int			iaAssassinT53MPCost[10];
	int			iaAssassinT53SPCost[10];

	int			iaAssassinT54DamageBoost[10];
	int			iaAssassinT54MPCost[10];
	int			iaAssassinT54SPCost[10];

	//Shaman
	int			iaShamanT11DamageBoost[10];
	int			iaShamanT11AttackRange[10];
	int			iaShamanT11MPCost[10];
	int			iaShamanT11SPCost[10];

	int			iaShamanT12DamageBoost[10];
	int			iaShamanT12AttackRange[10];
	int			iaShamanT12AttackArea[10];
	int			iaShamanT12MPCost[10];
	int			iaShamanT12SPCost[10];

	int			iaShamanT13EnemySpeedReduction[10];
	int			iaShamanT13EffectArea[10];
	int			iaShamanT13EffectDuration[10];
	int			iaShamanT13MPCost[10];
	int			iaShamanT13SPCost[10];

	int			iaShamanT14MPPotionRecoveryBoost[10];
	int			iaShamanT14MPCapacityBoost[10];

	int			iaShamanT21DamageBoost[10];
	int			iaShamanT21AttackRange[10];
	int			iaShamanT21AttackArea[10];
	int			iaShamanT21MPCost[10];
	int			iaShamanT21SPCost[10];

	int			iaShamanT22StunDuration[10];
	int			iaShamanT22MPCost[10];
	int			iaShamanT22SPCost[10];

	int			iaShamanT23BaseAddAttackPowerMin[10];
	int			iaShamanT23BaseAddAttackPowerMax[10];
	int			iaShamanT23IncreaseMonsterSightRange[10];
	int			iaShamanT23Duration[10];
	int			iaShamanT23MPCost[10];
	int			iaShamanT23SPCost[10];

	int			iaShamanT24AddAttackPowerMin[10];
	int			iaShamanT24AddAttackPowerMax[10];
	int			iaShamanT24Duration[10];
	int			iaShamanT24MPCost[10];
	int			iaShamanT24SPCost[10];

	int			iaShamanT31ReduceReceivedDamage[10];
	int			iaShamanT31AddEvasionRating[10];
	int			iaShamanT31ReduceMPPoints[10];
	int			iaShamanT31Duration[10];
	int			iaShamanT31MPCost[10];
	int			iaShamanT31SPCost[10];

	int			iaShamanT32DamageBoost[10];
	int			iaShamanT32AreaofEffect[10];
	int			iaShamanT32MPCost[10];
	int			iaShamanT32SPCost[10];

	int			iaShamanT33MonsterLifeAbsorption[10];
	int			iaShamanT33MPCost[10];
	int			iaShamanT33SPCost[10];

	int			iaShamanT34DamageBoost[10];
	int			iaShamanT34MPCost[10];
	int			iaShamanT34SPCost[10];

	int			iaShamanT41SummonDuration[10];
	int			iaShamanT41SummonAttackPowerMin[10];
	int			iaShamanT41SummonAttackPowerMax[10];
	int			iaShamanT41SummonAttackRating[10];
	int			iaShamanT41SummonHP[10];
	int			iaShamanT41MPCost[10];
	int			iaShamanT41SPCost[10];

	int			iaShamanT42DamageBoost[10];
	int			iaShamanT42AddCriticalChance[10];
	int			iaShamanT42AttackRange[10];
	int			iaShamanT42MPCost[10];
	int			iaShamanT42SPCost[10];

	int			iaShamanT43AttackSpeedBoost[10];
	int			iaShamanT43Duration[10];
	int			iaShamanT43MPCost[10];
	int			iaShamanT43SPCost[10];

	int			iaShamanT44DamageBoost[10];
	int			iaShamanT44AreaofEffect[10];
	int			iaShamanT44MPCost[10];
	int			iaShamanT44SPCost[10];

	int			iaShamanT51MPBoost[10];
	int			iaShamanT51SPBoost[10];
	int			iaShamanT51Duration[10];
	int			iaShamanT51MPCost[10];
	int			iaShamanT51SPCost[10];

	int			iaShamanT52DamageBoostMainTarget[10];
	int			iaShamanT52DamageBoostSurroundings[10];
	int			iaShamanT52SurroundingImpactArea[10];
	int			iaShamanT52MPCost[10];
	int			iaShamanT52SPCost[10];

	int			iaShamanT53DamageBoost[10];
	int			iaShamanT53AttackRange[10];
	int			iaShamanT53MPCost[10];
	int			iaShamanT53SPCost[10];

	int			iaShamanT54HPIncrease[10];
	int			iaShamanT54MPDecrease[10];
};

extern SkillTable sSkillTable;

//武士T1
static const int* iaFighterT11WeaponAttackPowerAdd = (int*)0x00995230;

static const int* iaFighterT12FireResistanceIncrease = (int*)0x00995258;

const int iaFighterT13DamageBoost[10] = { 13, 16, 19, 22, 25, 28, 31, 34, 37, 40 };
const int iaFighterT13NumberofHits[10] = { 2,2,2,3,3,3,4,4,4,4 };
const float faFighterT13HPDecrease[10] = { 1,1,1,2,2,2,3,3,3,3 };

const int iaFighterT14AddAttackRating[10] = { 20,40,60,80,100,120,140,160,180,200 };
const int iaFighterT14DamageBoost[10] = { 20,25,29,33,37,41,44,47,50,55 };
//武士T2
const int iaFighterT21DamageBoost[10] = { 10,15,20,25,30,35,40,45,50,55 };
const int iaFighterT21NumberofHits[10] = { 1,1,2,2,2,3,3,3,3,3 };

const int iaFighterT22DamageBoost[10] = { 10,16,22,28,34,40,45,50,55,60 };
const int iaFighterT22AddCritical[10] = { 3,7,10,13,16,19,21,24,27,30 };

const int iaFighterT23AreaofEffect[10] = { 50,60,70,80,90,100,108,116,124,130 };
const int iaFighterT23Duration[10] = { 6,7,8,9,10,11,12,13,14,15 };

const int iaFighterT24DamageBoost[10] = { 2,4,6,8,10,12,14,16,18,20 };
const int iaFighterT24AreaofEffect[10] = { 100,100,100,100,100,100,100,100,100,100 };
//武士T3
static const int* iaFighterT31AddAttackRating = (int*)0x00995578;
const int iaFighterT31Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };

const int iaFighterT32AddAttackRating[10] = { 5,10,15,20,25,30,35,40,45,50 };
const int iaFighterT32DamageBoost[10] = { 40,45,50,55,60,65,70,75,80,85 };

const int iaFighterT33AttackSpeed[10] = { 3, 6, 9, 12, 15, 18, 21, 24, 27, 30 };
const int iaFighterT33Duration[10] = { 300, 300, 300, 300, 300, 300, 300, 300, 300, 300 };

const int iaFighterT34DamageBoost[10] = { 20,25,30,35,40,45,50,55,60,65 };
const int iaFighterT34DamageBoostvsDemons[10] = { 70,80,90,100,110,120,130,140,150,160 };

//static const int* iaFighterT24DMGBoost = ((int*)0x00995500);
//const int iaFighterT24Area[10] = { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100 };
//武士T4
const int iaFighterT41DamageBoost[10] = { 15,30,45,60,75,90,105,120,135,150 };
const int iaFighterT41AddCritical[10] = { 10,12,14,16,18,20,22,24,26,28 };

static const int* iaFighterT42AddBaseAttackPower = (int*)0x009957A8;
static const int* iaFighterT42DecreaseAbsorption = (int*)0x009957D0;
const int iaFighterT42Duration[10] = { 300, 300, 300, 300, 300, 300, 300, 300, 300, 300 };

const int iaFighterT43DamageBoost[10] = { 15,20,29,36,43,50,57,64,71,78 };
const int iaFighterT43MaximumHits[10] = { 5,5,6,6,7,7,8,8,9,9 };
const int iaFighterT43Range[10] = { 100,105,110,115,120,125,130,135,140,145 };

static const int* iaFighterT44HPIncrease = (int*)0x00995938;
//武士T5
const float faFighterT51AddHPRegen[10] = { 2.0f, 4.0f, 6.0f, 8.0f, 10.0f, 12.0f, 14.0f, 16.0f, 18.0f, 20.0f };
const int iaFighterT51AddHPPotionBoost[10] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40 };
const int iaFighterT51BoostHealthBoost[10] = { 13, 26, 39, 52, 65, 78, 91, 104, 117, 130 };
const int iaFighterT52DMGBoost[10] = { 45, 50, 55, 60, 65, 70, 75, 80, 85, 90 };
const int iaFighterT52Area[10] = { 50, 55, 60, 65, 70, 80, 85, 90, 95, 100 };
const float faFighterT53HPDec[10] = { 5.6f, 5.2f, 4.8f, 4.4f, 4.0f, 3.6f, 3.2f, 2.8f, 2.4f, 2.0f };
const int iaFighterT53HitsBoost[10] = { 6, 6, 6, 5, 5, 5, 4, 4, 4, 3 };
const int iaFighterT53DMGBoost[10] = { 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 };
const int iaFighterT54DMGBoost[10] = { 17, 24, 31, 38, 45, 52, 59, 66, 73, 80 };
const int iaFighterT54Duration[10] = { 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 };
const int iaFighterT54MPDrain[10] = { 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 };
const int iaFighterT54SPDrain[10] = { 29, 31, 35, 37, 39, 41, 43, 45, 47, 50 };

//弓箭手T1
static const int* iaArcherT11AddAttackRating = (int*)0x00993BB0;
const int iaArcherT11HawkRotations[10] = { 5,6,7,8,9,10,11,12,13,14 };

static const int* iaArcherT12AddAttackPower = (int*)0x00993C28;

const int iaArcherT13AddAttackSpeed[10] = { 2,2,2,3,3,3,4,4,4,5 };
const int iaArcherT13DamageBoost[10] = { 15,24,32,39,45,50,54,57,59,62 };

const int iaArcherT14AddAttackRating[10] = { 16,22,28,34,40,46,52,58,64,70 };
const int iaArcherT14DamageBoost[10] = { 20,22,24,26,28,30,32,34,36,38 };

//弓箭手T2    
static const int* iaArcherT21AddAttackRating = (int*)0x009977D8;

const int iaArcherT22StaticDamage[10] = { 14,18,22,26,30,34,38,42,46,50 };
const int iaArcherT22FormulaDamage[10] = { 16,20,24,28,32,36,40,44,48,52 };
const int iaArcherT22Duration[10] = { 300, 300, 300, 300, 300, 300, 300, 300, 300, 300 };

const int iaArcherT23DamageBoost[10] = { 122,124,126,128,130,132,134,136,138,140 };
const int iaArcherT23AreaofEffect[10] = { 55,59,63,67,70,73,76,79,82,85 };

const int iaArcherT24AddAttackSpeed[10] = { 1,2,2,3,3,4,4,5,5,6 };
const int iaArcherT24DamageBoost[10] = { 30,35,40,45,50,55,60,65,70,75 };
const int iaArcherT24NumberofArrows[10] = { 3,3,3,4,4,4,5,5,5,6 };
//弓箭手T3
const int iaArcherT31FireDamageStatic[10] = { 20,25,30,35,40,45,50,55,60,65 };
//const int iaArcherT31FireDamageCalculated[10];
const int iaArcherT31LightningDamageStatic[10] = { 10,20,30,40,50,60,70,80,90,100 };
//const int iaArcherT31LightningDamageCalculated[10];

const int iaArcherT32FalconDamage[10] = { 150,160,165,170,175,180,185,190,195,200 };
const float faArcherT32HPRegen[10] = { 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f };
const int iaArcherT32Duration[10] = { 300, 300, 300, 300, 300, 300, 300, 300, 300, 300 };

const int iaArcherT33DamageBoost[10] = { 4,8,12,16,20,24,28,32,36,40 };
const int iaArcherT33DamageBoostvsDemonMonsters[10] = { 50,60,70,80,90,100,110,120,130,140 };
const int iaArcherT33AreaofEffect[10] = { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100 };

const int iaArcherT34IncreasedShotRange[10] = { 7,14,21,28,35,42,48,56,63,70 };
const int iaArcherT34DamageBoost[10] = { 3,6,9,12,15,18,21,24,27,30 };
//弓箭手T4
const int iaArcherT41SummonAttackPowerMin[10] = { 120,140,160,180,200,220,240,260,280,300 };
const int iaArcherT41SummonAttackPowerMax[10] = { 120,140,160,180,200,220,240,260,280,300 };
const int iaArcherT41SummonAttackRating[10] = { 3000,3500,4000,4500,5000,5500,6000,6500,7000,7500 };
const int iaArcherT41SummonDefense[10] = { 2000,2500,3000,3500,4000,4500,5000,5500,6000,6500 };
const int iaArcherT41SummonHP[10] = { 8000,10000,12000,14000,16000,18000,20000,22000,24000,26000 };
const int iaArcherT41Duration[10] = { 300, 300, 300, 300, 300, 300, 300, 300, 300, 300 };

static const int* iaArcherT42IncreaseEvasion = (int*)0x009943A8;

//const int iaArcherT43ShotRangeIncrease[10];
const int iaArcherT43DamageBoost[10] = { 13,27,40,54,67,81,94,108,121,135 };
const float faArcherT43ChargeRaiseSpeed[10] = { 6,8,12,16,20,24,28,32,36,40 };

static const int* iaArcherT44AddAttackPower = (int*)0x00994470;
static const int* iaArcherT44AddAttackRating = (int*)0x00994498;
const int iaArcherT44Duration[10] = { 300, 300, 300, 300, 300, 300, 300, 300, 300, 300 };
//弓箭手T5
const int iaArcherT51RangeAdd[10] = { 10, 15, 20, 25, 30, 35, 40, 45, 50, 55 };
const int iaArcherT51CritRate[10] = { 3, 6, 9, 12, 15, 18, 21, 24, 27, 30 };
const int iaArcherT51DMGBoost[10] = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50 };
const int iaArcherT52DMGBoost[10] = { 60, 70, 80, 90, 100, 110, 120, 130, 140 };
const int iaArcherT52CDMGBoost[10] = { 2, 3, 4, 5, 6, 8, 10, 12, 15 };
const int iaArcherT53Duration[10] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
const int iaArcherT54DMGBoost[10] = { 86, 92, 98, 104, 110, 116, 122, 128, 134, 140 };
const int iaArcherT54Duration[10] = { 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 };
const int iaArcherT54MPDrain[10] = { 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 };
const int iaArcherT54SPDrain[10] = { 22, 24, 26, 28, 30, 32, 34, 36, 38, 40 };

//枪兵T1
const int iaPikemanT11AttackPowerMin[10] = { 15,20,25,30,35,40,45,50,55,60 };
const int iaPikemanT11AttackPowerMax[10] = { 25,30,35,40,45,50,55,60,65,70 };
const int iaPikemanT11PushbackRange[10] = { 70,80,90,100,110,120,130,140,150,160 };

static const int* iaPikemanT12FrostResistanceIncrease = (int*)0x00997580;

const int iaPikemanT13AddCriticalDamage[10] = { 2,4,6,8,10,11,12,13,14,15 };

const int iaPikemanT14WeaponAttackRatingBoost[10] = { 7,14,21,28,35,42,49,56,63,70 };
const int iaPikemanT14DamageBoost[10] = { 10,20,30,40,50,60,70,80,90,100 };
//枪兵T2
const int iaPikemanT21FreezeDuration[10] = { 5,6,7,8,9,10,11,12,13,14 };
const int iaPikemanT21FreezeAttackPowerMin[10] = { 30,35,40,45,50,55,60,65,70,75 };
const int iaPikemanT21FreezeAttackPowerMax[10] = { 40,45,50,55,60,65,70,75,80,85 };
const int iaPikemanT21FreezeAttackRange[10] = { 70,73,76,79,82,85,88,91,94,97 };

const int iaPikemanT22DamageBoost[10] = { 25,30,35,40,45,50,55,60,65,70 };
const int iaPikemanT22Range[10] = { 44,48,52,56,60,64,68,72,76,80 };

static const int* iaPikemanT23WeaponCurrentBlockBoost = (int*)0x009977D8;

const int iaPikemanT24AddSize[10] = { 10,20,30,40,50,60,70,80,90,100 };
const int iaPikemanT24DamageBoost[10] = { 5,10,15,20,25,30,35,40,45,50 };
//枪兵T3
const int iaPikemanT31DamageBoost[10] = { 10,20,30,40,50,60,70,80,90,100 };
const int iaPikemanT31NumberofSpears[10] = { 3,3,3,4,4,4,5,5,5,6 };
const int iaPikemanT31EffectDuration[10] = { 5,5,5,5,6,6,6,6,7,7 };
const int iaPikemanT31EffectRange[10] = { 90,94,98,102,106,110,114,118,122,126 };

const int iaPikemanT32AfterDamage[10] = { 24,28,32,36,40,44,48,52,56,60 };
const int iaPikemanT32MonsterSightDecrease[10] = { -35,-40,-45,-50,-55,-60,-65,-70,-75,-80 };
const int iaPikemanT32Duration[10] = { 300, 300, 300, 300, 300, 300, 300, 300, 300, 300 };

static const int* iaPikemanT33WeaponCriticalRatingBoost = (int*)0x00997A30;

const int iaPikemanT34DamageBoost[10] = { 25,30,35,40,45,50,55,60,65,70 };
//枪兵T4
const int iaPikemanT41AddCriticalDamage[10] = { 10,14,18,22,26,30,34,38,42,46 };
const int iaPikemanT41TargetCriticalDecrease[10] = { 4,5,6,7,8,9,10,11,12,13 };
const int iaPikemanT41DebuffDuration[10] = { 12,13,14,15,16,17,18,19,20,21 };

const int iaPikemanT42DamageBoost[10] = { 10,15,20,25,30,35,40,45,50,55 };
const int iaPikemanT42ChargedDamageBoost[10] = { 30,45,60,75,90,105,120,135,150,165 };
const int iaPikemanT42RaiseChargingSpeed[10] = { 4,8,12,16,20,24,28,32,36,40 };

static const int* iaPikemanT43AddEvasion = (int*)0x00997BE8;
const int iaPikemanT43Duration[10] = { 300, 300, 300, 300, 300, 300, 300, 300, 300, 300 };

const int iaPikemanT44DamageBoost[10] = { 10,20,30,40,50,60,70,80,90,100 };
const int iaPikemanT44NumberofHits[10] = { 3,3,4,4,5,5,6,6,7,7 };

//枪兵T5
const int iaPikeT51Duration[10] = { 8, 9, 10, 11, 12, 13, 14, 15, 16, 17 };
const int iaPikeT52DamageBoost[10] = { 60, 70, 80, 90, 100, 110, 120, 130, 140, 150 };
const int iaPikeT52MinATKRed[10] = { 20, 40, 60, 80, 100, 120, 140, 160, 180, 200 };
const int iaPikeT52MaxATKInc[10] = { 30, 60, 90, 120, 150, 180, 210, 240, 270, 300 };
const int iaPikeT53DMGBoost[10] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40 };
const int iaPikeT53ATKRate[10] = { 24, 28, 32, 36, 40, 44, 48, 52, 56, 60 };
const int iaPikeT54DMGBoost[10] = { 18, 26, 34, 42, 50, 58, 66, 74, 82, 90 };

//魔枪手T1
const int iaAtalantaT11AttackPowerMin[10] = { 20,30,40,50,60,70,80,90,100,110 };
const int iaAtalantaT11AttackPowerMax[10] = { 30,40,50,60,70,80,90,100,110,120 };

const int iaAtalantaT12DamageBoost[10] = { 14,16,18,20,22,24,26,28,30,32 };
const int iaAtalantaT12AddAttackSpeed[10] = { 1,1,1,1,2,2,2,2,2,2 };
const int iaAtalantaT12AddAttackRating[10] = { 30,40,50,60,70,80,90,100,110,120 };

const int iaAtaT51DMGBoost[10] = { 39, 41, 44, 47, 50, 53, 56, 59, 62, 75 };
const int iaAtaT51Targets[10] = { 3, 3, 4, 4, 5, 6, 7, 8, 9, 10 };
const int iaAtaT51PoisonDuration[10] = { 2, 2, 3, 3, 4, 4, 5, 5, 6, 7 };
const int iaAtaT52Speed[10] = { 8, 10, 12, 14, 16, 18, 20, 22, 24, 26 };
const int iaAtaT52Evade[10] = { 1, 1, 1, 2, 2, 2, 3, 3, 3, 4 };

static const int* iaAtalantaT13AddAttackPower = (int*)0x009948D0;

const int iaAtalantaT14DamageBoost[10] = { 16,20,24,28,32,35,40,45,50,55 };
//魔枪手T2
static const int* iaAtalantaT21AttackRatingBoost = (int*)0x00994970;
const int iaAtalantaT21Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };

const int iaAtalantaT22DamageBoost[10] = { 14,18,22,24,26,28,30,32,34,36 };
const int iaAtalantaT22AttackRatingBoost[10] = { 10,22,34,46,58,70,82,94,106,118 };

const int iaAtalantaT23MonsterLifeAbsorption[10] = { 12,14,16,18,20,22,24,26,28,30 };

const int iaAtalantaT24DamageBoost[10] = { 20,28,32,36,40,55,60,65,70,75 };
//魔枪手T3
const int iaAtalantaT31NumberofHits[10] = { 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 };
const int iaAtalantaT31DamageBoost[10] = { 10,20,30,40,50,60,70,80,90,100 };
const int iaAtalantaT31AttackRatingBoost[10] = { -10,-7,-4,-1,2,5,8,12,16,20 };

static const int* iaAtalantaT32MaxAttackPower = (int*)0x00994BC8;
const int iaAtalantaT32Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };

const int iaAtalantaT33DamageBoost[10] = { 20,28,32,36,40,55,60,65,70,75 };

const int iaAtalantaT34DamageBoost[10] = { 20,24,28,30,32,34,35,36,37,38 };
//魔枪手T4 
static const int* iaAtalantaT41AddEvasion = (int*)0x00994D08;
const int iaAtalantaT41Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };

const int iaAtalantaT42DamageBoost[10] = { 46,52,58,64,70,76,82,88,94,100 };
const int iaAtalantaT42AreaofEffect[10] = { 100,105,110,115,120,125,130,135,140,145 };

static const int* iaAtalantaT43AddAttackPowerMin = (int*)0x00994DF8;
static const int* iaAtalantaT43AddAttackPowerMax = (int*)0x00994DF8;
const int iaAtalantaT43TargetRunningSpeedReduction[10] = { 7,8,9,10,11,12,13,14,15,16 };
const int iaAtalantaT43TargetFreezeEffectDuration[10] = { 300,300,300,300,300,300,300,300,300,300 };
const int iaAtalantaT43Duration[10] = { 5,5,6,6,7,7,8,8,9,9 };

const int iaAtalantaT44DamageBoost[10] = { 10,14,21,28,35,42,49,56,63,70 };
const int iaAtalantaT44AddRange[10] = { 10,15,20,25,30,35,40,45,50,55 };
//魔枪手T5


//游侠T1
const int iaKnightT11StaticDamage[10] = { 20,24,28,32,36,40,44,48,52,56 };
const int iaKnightT11DamageBoost[10] = { 2,4,6,8,10,12,14,16,18,20 };
const int iaKnightT11LinearAreaofEffect[10] = { 80,84,88,92,96,100,104,108,112,116 };

const int iaKnightT12DamageBoostvsUndeadMonsters[10] = { 3,6,9,12,15,18,21,24,27,30 };
const int iaKnightT12Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };

static const int* iaKnightT13SPBoost = (int*)0x00993318;

const int iaKnightT14DamageBoost[10] = { 10,14,18,24,30,36,42,48,54,60 };
const int iaKnightT14AddCritical[10] = { 2,3,3,4,4,4,5,5,5,6 };
//游侠T2
const int iaKnightT21PartyArea[10] = { 300,300,300,300,300,300,300,300,300,300 };
const int iaKnightT21FinalDamageBoostvsUndeadEnemies[10] = { 5,10,15,20,25,30,35,40,45,50 };
const int iaKnightT21Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };

const int iaKnightT22AreaofEffect[10] = { 73,76,79,82,85,88,91,94,97,100 };
const int iaKnightT22DamageBoost[10] = { 30,35,40,45,50,55,60,65,70,75 };

const int iaKnightT23DamageBoost[10] = { 22,24,26,28,30,32,34,36,38,40 };
const int iaKnightT23AreaofEffect[10] = { 40,50,60,70,80,90,100,110,120,130 };
//const int iaKnightT23PierceRange[10];

static const int* iaKnightT24DefenseBoost = (int*)0x00993520;
const int iaKnightT24Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };
//游侠T3
static const int* iaKnightT31BaseAttackPowerIncrease = (int*)0x00993598;

static const int* iaKnightT32AddBlockRating = (int*)0x009935E8;
const int iaKnightT32MonsterDamageIntoHP[10] = { 9,18,27,36,45,54,63,72,81,90 };
const int iaKnightT32Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };

const int iaKnightT33SuccessRate[10] = { 44,48,52,56,60,64,72,80,88,96 };
const int iaKnightT33MonsterLifeIncrease[10] = { 100,120,140,160,180,200,220,240,260,280 };
const int iaKnightT33EnslaveEffectDuration[10] = { 300,300,300,300,300,300,300,300,300,300 };

const int iaKnightT34AttackRatingBoost[10] = { 5,10,15,20,25,30,35,40,45,50 };
const int iaKnightT34DamageBoost[10] = { 35,40,45,50,55,60,65,70,75,80 };
const int iaKnightT34DamageBoostvsUndeadEnemies[10] = { 5,10,15,20,25,30,35,40,45,50 };
//游侠T4
const int iaKnightT41DamageBoost[10] = { 50,58,66,74,82,90,98,106,114,122 };
const int iaKnightT41AreaofEffect[10] = { 80,90,100,110,120,130,140,150,160,170 };

static const int* iaKnightT42ShieldAbsorptionBoost = (int*)0x009935E8;
const int iaKnightT42Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };

const int iaKnightT43AddAttackPower[10] = {10,20,30,40,50,60,70,80,90,100};
const int iaKnightT43Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };

const int iaKnightT44AddCritical[10] = { 3,3,3,4,4,4,5,5,5,6 };
const int iaKnightT44DamageBoost[10] = { 35,40,45,50,55,60,65,70,75,80 };
const int iaKnightT44NumberofHits[10] = { 3,3,3,3,5,5,5,5,7,7 };
//游侠T5
//static const int* iaKnightT43AddAtkPow = (int*)0x009938B8;
//static const int* iaKnightT43Duration = (int*)0x009938E0;
const int iaKnightT51DMGBoost[10] = { 14, 16, 18, 20, 22, 24, 26, 28, 30, 32 };
const int iaKnightT52DMGBoost[10] = { 35, 45, 55, 65, 75, 85, 95, 105, 115, 125 };
const int iaKnightT52Area[10] = { 80, 85, 90, 95, 100, 105, 110, 115, 120, 125 };
const int iaKnightT52AtkRtg[10] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 110 };
const int iaKnightT52Duration[10] = { 2, 2, 3, 3, 4, 4, 5, 5, 6, 6 };
const int iaKnightT53DefBoost[10] = { 40, 46, 52, 58, 64, 70, 76, 82, 96, 100 };
const int iaKnightT54DMGBoost[10] = { 4,8,12,16,20,24,28,32,36,40 };

//法师T1
//int			iaMagicianT11HPSacrificed[10];
const int iaMagicianT11MPIncreased[10] = { 4,8,12,16,20,24,28,32,36,40 };

const int iaMagicianT12StaticDamage[10] = { 15,25,35,45,55,65,75,85,95,105 };
const int iaMagicianT12DamageBoost[10] = { 2,4,6,8,10,12,14,16,18,20 };
//int			iaMagicianT12AttackRange[10];

//const int iaMagicianT13AddAbsorption[10];
static const int* iaMagicianT13AddElementalResistance = (int*)0x00995CF8;
const int iaMagicianT13Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };

const int iaMagicianT14StaticDamage[10] = { 30,36,42,48,54,60,66,72,78,84 };
const int iaMagicianT14DamageBoost[10] = { 2,4,6,8,10,12,14,16,18,20 };
const int iaMagicianT14AttackRange[10] = { 163,166,169,172,175,178,181,184,187,190 };
const int iaMagicianT14AreaofEffect[10] = { 70,72,74,76,78,80,82,84,86,88 };
//法师T2
const int iaMageT21MPRecoveryBoost[10] = { 60, 70, 80, 90, 100, 110, 120, 130, 140, 150 };
const int iaMageT21MPCapacityBoost[10] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40 };

const int iaMagicianT22DamageBoost[10] = { 20,25,30,35,40,45,50,58,67,70 };
const int iaMagicianT22AttackRange[10] = { 170,174,178,182,186,190,184,198,202,206 };
const int iaMagicianT22AreaofEffect[10] = { 70,72,74,76,78,80,82,84,86,88 };

const int iaMagicianT23FireAttackPowerMin[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
const int iaMagicianT23IceAttackPowerMin[10] = { 12, 16, 20, 24, 28, 32, 36, 44, 52, 60 };
const int iaMagicianT23LightningAttackPowerMin[10] = { 16, 22, 28, 34, 40, 46, 52, 58, 64, 70 };

static const TwoArraySkill* iaMageT23FireDamage = (TwoArraySkill*)0x00995F50;
static const TwoArraySkill* iaMageT23IceDamage = (TwoArraySkill*)0x00995F00;
static const TwoArraySkill* iaMageT23LightDamage = (TwoArraySkill*)0x00995FA0;
static const int* iaMageT23Duration = (int*)0x00995FF0;

const int iaMagicianT24DamageBoost[10] = { 45,55,65,75,85,95,105,115,125,135 };
const int iaMagicianT24AttackRange[10] = { 185,190,200,205,210,215,220,225,230 };
//法师T3
const int iaMagicianT31ReduceDamage[10] = { 11,12,13,14,15,16,17,18,19,20 };
const int iaMagicianT31Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };

const int iaMagicianT32DamageBoost[10] = { 22,24,26,28,30,32,34,36,38,40 };
const int iaMagicianT32AreaofEffect[10] = { 100,105,110,115,120,125,130,135,140,145 };

const int iaMagicianT33AddAttackPowerMin[10] = { 4,8,12,16,20,24,28,32,36,40 };
const int iaMagicianT33AddAttackPowerMax[10] = { 4,8,12,16,20,24,28,32,36,40 };
const int iaMagicianT33Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };

const int iaMagicianT34FireDamage[10] = { 10,20,30,40,50,60,70,80,90,100 };
const int iaMagicianT34IceDamage[10] = { 5,10,20,30,40,50,60,70,80,90 };
const int iaMagicianT34SwordAttackDelay[10] = { 5,5,5,5,4,4,4,4,3,3 };
const int iaMagicianT34Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };

const int iaMagicianT41SummonAttackPowerMin[10] = { 140,160,180,200,220,240,260,280,300,320 };
const int iaMagicianT41SummonAttackPowerMax[10] = { 140,160,180,200,220,240,260,280,300,320 };
const int iaMagicianT41SummonAttackRating[10] = { 1000,1000,1000,1000,1000,1000,1000,1000,1000,1000 };
const int iaMagicianT41SummonHP[10] = { 10000,12000,14000,16000,18000,20000,22000,24000,26000,28000 };
const int iaMagicianT41SummonDuration[10] = { 300,300,300,300,300,300,300,300,300,300 };

const int iaMagicianT42DamageBoost[10] = { 72,84,96,108,120,132,144,156,168,180 };
const int iaMagicianT42AreaofEffect[10] = { 110,120,130,140,150,160,170,180,190,200 };

const int iaMagicianT43TargetSpeedReduction[10] = { 4,6,8,10,12,14,16,18,20,22 };
const int iaMagicianT43AreaofEffect[10] = { 5,6,7,8,9,10,11,12,13,14 };
const int iaMagicianT43EffectDuration[10] = { 2,4,6,8,10,11,12,13,14,18 };

const int iaMagicianT44DamageBoost[10] = { 75,100,125,150,175,200,225,250,275,300 };
const int iaMagicianT44AreaofEffect[10] = { 100,105,110,115,120,125,130,135,140,145 };



const int iaMageT51BlockBoost[10] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40 };
const int iaMageT51ATKRateRed[10] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
const int iaMageT52DMGBoost[10] = { 60, 70, 80, 90, 100, 110, 120, 130, 140, 150 };
const int iaMageT52ATKRate[10] = { 3, 6, 9, 12, 15, 18, 21, 24, 27, 30 };
const int iaMageT52Duration[10] = { 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
const int iaMageT52RunSpeedRed[10] = { 80, 76, 72, 68, 64, 56, 52, 48, 44 };
const int iaMageT53DMGBoost[10] = { 26, 32, 38, 44, 50, 56, 62, 68, 74, 80 };
const int iaMageT53AddRange[10] = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50 };
const int iaMageT54DMGBoost[10] = { 65, 80, 95, 110, 125, 140, 155, 170, 185, 200 };
const int iaMageT54Duration[10] = { 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 };
const int iaMageT54MPDrain[10] = { 75, 80, 85, 90, 95, 100, 105, 110, 115, 120 };
const int iaMageT54SPDrain[10] = { 22, 24, 26, 28, 30, 32, 34, 36, 38, 40 };


//祭司T1
//const int iaPriestessT11FormulaBasedLifeRecovery[10];
const int iaPriestessT11AttackPowerBasedLifeRecovery[10] = { 20,28,36,44,52,60,68,76,84,92 };

const int iaPriestessT12FormulaBasedDamage[10] = { 15,25,35,45,55,65,75,85,95,105 };
const int iaPriestessT12DamageBoost[10] = { 2,4,6,8,10,12,14,16,18,20 };

const int iaPriestessT13FormulaBasedDamageperHit[10] = { 10,12,14,16,18,20,22,24,26,28 };
const int iaPriestessT13AttackPowerBasedDamageperHit[10] = { 6,7,8,9,10,11,12,13,14,15 };
const int iaPriestessT13MinNumberofSparks[10] = { 2,2,2,2,2,2,2,2,2,2 };

const int iaPriestessT14TargetReduceDamage[10] = { 14,18,22,26,30,34,38,42,46,50 };
const int iaPriestessT14EffectDuration[10] = { 25,25,25,25,25,25,25,25,25,25 };
//祭司T2 
static const int* iaPriestessT21AddMPPotionBoostRecovery = (int*)0x04B0D8B0;
static const int* iaPriestessT21AddMPRegeneration = (int*)0x00996AE0;

const int iaPriestessT22AttackRange[10] = { 180,180,180,180,180,180,180,180,180,180 };
const int iaPriestessT22DamageBoost[10] = { 30,40,50,60,70,80,90,100,110,120 };
const int iaPriestessT22NumberofBolts[10] = { 14,18,22,26,30,34,38,42,46,50 };

const int iaPriestessT23MonsterDamageReflected[10] = { 15,30,45,60,75,90,105,120,135,150 };
const int iaPriestessT23Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };

const int iaPriestessT24FormulaBasedLifeRecovery[10] = { 30,38,46,54,62,70,78,86,94,102 };
const int iaPriestessT24AttackPowerBasedLifeRecovery[10] = { 10,20,30,40,50,60,70,80,90,100 };
const int iaPriestessT24Range[10] = { 300,310,320,330,340,350,360,370,380,390 };
//祭司T3
//int			iaPriestessT31AttackRatingBoost[10];
const int iaPriestessT31DamageBoost[10] = { 58,66,74,82,90,98,106,114,122,130 };

const int iaPriestessT32AttainableSuccessRate[10] = { 40,47,54,61,67,73,79,84,89,94 };
//int			iaPriestessT32MaxPlayersResurrected[10];

const int iaPriestessT33AttainableSuccessRate[10] = { 10,20,30,40,50,60,70,80,90,100 };
const int iaPriestessT33MonsterHealthReduction[10] = { 26,28,30,32,34,36,38,40,42,44 };

const int iaPriestessT34IncreaseLife[10] = { 3,6,9,12,15,18,21,24,27,30 };
static const int* iaPriestessT34Duration = (int*)0x00996E50;
//祭司T4
const int iaPriestessT41AttackPowerMin[10] = { 60,70,80,90,100,110,120,130,140,150 };
const int iaPriestessT41AttackPowerMax[10] = { 80,90,100,110,120,130,140,150,160,170 };
const int iaPriestessT41AttackRange[10] = { 150,155,160,165,170,175,180,185,190,195 };
const int iaPriestessT41FreezeDuration[10] = { 3,3,3,4,4,4,5,5,5,6 };
//0x00996F40  0x00996F68
const int iaPriestessT42AddHPRegen[10] = { 20,40,60,80,100,120,140,160,180,200 };
const int iaPriestessT42AddMPRegen[10] = { 30,60,90,120,150,180,210,240,270,300 };
const int iaPriestessT42Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };
const int iaPriestessT42Range[10] = { 250,260,270,280,290,300,310,320,330,340 };

const int iaPriestessT43DamageBoost[10] = { 256,272,288,304,320,336,352,368,384,400 };
const int iaPriestessT43NumberofBolts[10] = { 14,18,22,26,30,34,38,42,46,50 };
const int iaPriestessT43Range[10] = { 140,145,150,155,160,165,170,175,180,185 };

const int iaPriestessT44MuspellDamage[10] = { 4,8,12,16,20,24,28,32,36,40 };
static const int* iaPriestessT44AddAttackPowerMin = (int*)0x04B0DC64;
static const int* iaPriestessT44AddAttackPowerMax = (int*)0x04B0DC8C;
const int iaPriestessT44VirtualLifeEffectReduction[10] = { 300,300,300,300,300,300,300,300,300,300 };
const int iaPriestessT44MuspellAttackDelay[10] = { 7,7,7,6,6,6,5,5,5,4 };
const int iaPriestessT44AddUndeadAbsorption[10] = { 3,6,9,12,15,18,21,24,27,30 };
static const int* iaPriestessT44AddEvasion = (int*)0x00997170;

//int* iSkillTable1 = (int*)0x04B0DC64;
//int* iSkillTable2 = (int*)0x04B0DC8C;

static const int* iaPrsT34Duration = (int*)0x00996E50;
const int iaPrsT52DMGBoost[10] = { 55, 60, 65, 70, 75, 80, 85, 90, 95, 100 };
const int iaPrsT52Area[10] = { 141, 142, 143, 144, 145, 146, 147, 148, 149, 150 };
const int iaPrsT52AreaFake[10] = { 130, 140, 150, 160, 170, 180, 190, 200, 210, 220 };
const int iaPrsT52MeteoriteCount[10] = { 1, 1, 1, 1, 2, 3, 4, 5, 6, 7 };
const int iaPrsT53ATKRate[10] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
const int iaPrsT53Duration[10] = { 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
const int iaPrsT53Area[10] = { 80, 85, 90, 95, 100, 105, 110, 115, 120, 125 };
const int iaPrsT54Defense[10] = { 70, 80, 90, 100, 110, 120, 130, 140, 150, 160 };
const int iaPrsT54Absorption[10] = { 6, 8, 10, 12, 14, 16, 18, 20, 22, 24 };

//刺客T1
const int iaAssassinT11DamageBoost[10] = { 12,13,14,15,16,17,18,19,20,21 };

const int iaAssassinT12DamageBoost[10] = { 12,14,16,18,20,22,24,26,28,30 };

static const int* iaAssassinT13WeaponAttackPowerAdd = (int*)0x00998020;

const int iaAssassinT14ReduceReceivedDamageFromTarget[10] = { 6,9,12,15,18,20,22,24,26,28 };
const int iaAssassinT14AttackRange[10] = { 50,53,56,59,62,65,68,71,74,77 };
const int iaAssassinT14EffectDuration[10] = { 15,15,15,15,15,15,15,15,15,15 };
//刺客T2
const int iaAssassinT21DamageBoost[10] = { 13,16,19,22,25,28,31,34,37,40 };

static const int* iaAssassinT22AddEvasion = (int*)0x00998160;
const int iaAssassinT22Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };

const int iaAssassinT23RadiusAreaofEffect[10] = { 38,46,54,62,70,78,86,94,102,110 };
const int iaAssassinT23StunEffectDuration[10] = { 6,7,8,9,10,11,12,13,14,15 };

static const int* iaAssassinT24WeaponAttackRatingBoost = (int*)0x00998228;
static const int* iaAssassinT24WeaponBlockRatingBoost = (int*)0x00998200;
//刺客T3
const int iaAssassinT31DamageBoost[10] = { 40,45,50,55,60,65,70,75,80,85 };

//const int iaAssassinT32AreaofEffect[10];
const int iaAssassinT32DamageBoost[10] = { 7,9,11,13,15,17,19,21,23,25 };

const int iaASNT33AttackSpeed[10] = { 7, 9, 11, 13, 15, 17, 19, 21, 23, 25 };
const int iaASNT33Duration[10] = { 300, 300, 300, 300, 300, 300, 300, 300, 300, 300 };

const int iaAssassinT34AfterDamage[10] = { 20,25,30,35,40,45,50,55,60,65 };
const int iaAssassinT34MonsterSightDecrease[10] = { -40,-45,-50,-55,-60,-65,-70,-75,-80,-85 };
const int iaAssassinT34Duration[10] = { 300, 300, 300, 300, 300, 300, 300, 300, 300, 300 };
//刺客T4
const int iaAssassinT41DamageBoost[10] = { 55,60,65,70,75,80,85,90,95,100 };

static const int* iaAssassinT42WeaponCriticalRatingBoost = (int*)0x00998458;

const int iaAssassinT43DamageBoost[10] = { 10,20,30,40,50,60,70,80,90,100 };
const int iaAssassinT43MaximumHits[10] = { 2,3,3,4,4,4,5,5,5,6 };
const int iaAssassinT43EffectDuration[10] = { 5,5,5,5,6,6,6,6,7,7 };
const int iaAssassinT43EffectRange[10] = { 90,94,98,102,106,110,114,118,122,126 };

const int iaAssassinT44DamageBoost[10] = { 66,72,78,84,90,96,102,108,114,120 };
//刺客T5
const int iaASNT51CritBoost[10] = { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40 };
const int iaASNT51Range[10] = { 60, 80, 100, 120, 140, 160, 180, 200, 220, 240 };
const int iaASNT52CriticalAdd[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
const int iaASNT52Duration[10] = { 300, 300, 300, 300, 300, 300, 300, 300, 300, 300 };

//Shaman
const int iaShaT34AttackRatingBoost[10] = { 4, 8, 12, 16, 20, 24, 28, 32, 37, 40 };
const int iaShaT34DamageBoost[10] = { 60, 70, 80, 90, 100, 110, 120, 130, 140, 150 };
const int iaShaT43AttackSpeed[10] = { 7, 9, 11, 13, 15, 17, 19, 21, 23, 25 };
const int iaShaT43Duration[10] = { 300, 300, 300, 300, 300, 300, 300, 300, 300, 300 };
const int iaShaT51MPBoost[10] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
const int iaShaT51STMBoost[10] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
const int iaShaT52DMGBoost[10] = { 70, 80, 90, 100, 110, 120, 125, 130, 135, 140 };
const int iaShaT52Area[10] = { 141, 142, 143, 144, 145, 146, 147, 148, 149, 150 };
const int iaShaT52AreaFake[10] = { 130, 140, 150, 160, 170, 180, 190, 200, 210, 220 };
const int iaShaT52MeteoriteCount[10] = { 1, 1, 1, 1, 2, 3, 4, 5, 6, 7 };

//机械T1
const int iaMechanicianT11ShieldBlockBoost[10] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 }; //= (int*)0x00992698;
const int iaMechanicianT11Duration[10] = { 300, 300, 300, 300, 300, 300, 300, 300, 300, 300 };

const int iaMechanicianT12StaticDamage[10] = { 10, 14, 18, 22, 26, 30, 34, 38, 42, 46 };
const int iaMechanicianT12AddAttackPower[10] = { 5, 10, 20, 30, 40, 50, 60, 70, 80, 90 };
const int iaMechanicianT12AreaofEffect[10] = { 64, 68, 72, 76, 80, 84, 88, 92, 96, 100 };

static const int* iaMechanicianT13PoisonResistanceIncrease = (int*)0x00992850;

static const int* iaMechanicianT14AbsorptionBoost = (int*)0x009927B0;
const int iaMechanicianT14Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };
//机械T2
const int iaMechanicianT21CalculatedDamage[10] = { 20,25,30,35,40,45,50,55,60,65 };
const int iaMechanicianT21AreaofEffect[10] = { 80,80,80,80,80,80,80,80,80,80 };

const int iaMechanicianT22AddAttackPower[10] = { 2,4,6,8,10,12,14,16,18,20 };
static const int* iaMechanicianT22AddAttackRating = (int*)0x04B0C034;
const int iaMechanicianT22Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };

const int iaMechanicianT23DamageBoost[10] = { 2,4,6,8,10,12,14,16,18,20 };
const int iaMechanicianT23AddAttackSpeed[10] = { 4,4,4,4,5,5,5,5,6,6 };
static const int* iaMechT23Duration = ((int*)0x009929B8);
const float faMechT23MPDrain[10] = { 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f };
const float faMechT23SPDrain[10] = { 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f };

const int iaMechanicianT24DamageBoost[10] = { 28,30,32,34,36,38,40,42,44,46 };
const int iaMechanicianT24AreaofEffect[10] = { 100,105,110,115,120,125,130,135,140,145 };

//机械T3
const int iaMechanicianT31ArmorDefenseRatingBoost[10] = { 2, 4, 7, 10, 15, 20, 25, 30, 35, 40 };
const int iaMechanicianT31Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };
//static const int* iaMechT31DefenseRtg = ((int*)0x00992AA8);
//static const int* iaMechT31Duration = ((int*)0x00992AD0);

const int iaMechanicianT32DamageBoost[10] = { 45,50,55,60,65,70,75,80,85,90 };

static const int* iaMechanicianT33BaseAttackPowerIncrease = ((int*)0x00992B98);

const int iaMechanicianT34SparkDamage[10] = { 32,34,36,38,40,42,44,46,48,50 };
static const int* iaMechanicianT34AddDefenseRating = ((int*)0x00992BE8);
const int iaMechanicianT34Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };

//机械T4
const int iaMechanicianT41DamageBoost[10] = { 40,42,44,46,48,50,52,54,56,58 };
const int iaMechanicianT41AreaofEffect[10] = { 130,135,140,145,150,155,160,165,170,175 };
const int iaMechanicianT41MaxHits[10] = { 3,3,3,4,4,4,5,5,5,6 };

static const int* iaMechanicianT42IncreaseAbsorption = ((int*)0x00992D28);
//const int iaMechanicianT42BoostAbsorption[10];
const int iaMechanicianT42MonsterSightRangeIncrease[10] = { 100,120,130,140,150,160,170,180,190,200 };
const int iaMechanicianT42Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };

const int iaMechanicianT43SpheresDamage[10] = { 2,4,6,8,10,12,14,16,18,20 };
const int iaMechanicianT43SpheresAttackRange[10] = { 80,80,85,85,90,90,95,95,100,105 };
//const int iaMechanicianT43SpheresAttackDelay[10];
const int iaMechanicianT43Duration[10] = { 300,300,300,300,300,300,300,300,300,300 };

const int iaMechanicianT44SummonAttackPowerMin[10] = { 160,180,200,220,240,260,280,300,320,340 };
const int iaMechanicianT44SummonAttackPowerMax[10] = { 160,180,200,220,240,260,280,300,320,340 };
const int iaMechanicianT44SummonAttackRating[10] = { 1000,1000,1000,1000,1000,1000,1000,1000,1000,1000 };
const int iaMechanicianT44SummonDefense[10] = { 1000,1500,2000,2500,3000,3500,4000,4500,5000,5500 };
const int iaMechanicianT44SummonHP[10] = { 14000,16000,18000,20000,22000,24000,26000,28000,30000,30000 };
const int iaMechanicianT44SummonDuration[10] = { 300,300,300,300,300,300,300,300,300,300 };

//机械T5
const int iaMechT51DMGBoost[10] = { 80, 90, 100, 110, 120, 130, 140, 150, 160, 170 };
const int iaMechT52DMGBoost[10] = { 2, 3, 5, 7, 10, 13, 16, 19, 22, 25 };
const int iaMechT53DMGReduction[10] = { 7, 8, 9, 10, 12, 14, 16, 18, 20 };
const int iaMechT53WPAtkRateRed[10] = { 20, 22, 24, 26, 27, 28, 29, 30, 31 };
const int iaMechT54DMGBoost[10] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 120 };



enum ESkillType
{
	SKILLTYPE_Undefined = 0,

	SKILLTYPE_Right = 0x01000000,
	SKILLTYPE_Left = 0x02000000,
	SKILLTYPE_All = 0x03000000,
	SKILLTYPE_Passive = 0x04000000,
};

enum ESkillPlayID
{
	SKILLPLAYID_Undefined = 0x00,

	//Tier1
	SKILLPLAYID_T11 = 0x1A,
	SKILLPLAYID_T12 = 0x1B,
	SKILLPLAYID_T13 = 0x1C,
	SKILLPLAYID_T14 = 0x1D,

	//Tier2
	SKILLPLAYID_T21 = 0x2A,
	SKILLPLAYID_T22 = 0x2B,
	SKILLPLAYID_T23 = 0x2C,
	SKILLPLAYID_T24 = 0x2D,

	//Tier3
	SKILLPLAYID_T31 = 0x3A,
	SKILLPLAYID_T32 = 0x3B,
	SKILLPLAYID_T33 = 0x3C,
	SKILLPLAYID_T34 = 0x3D,

	//Tier4
	SKILLPLAYID_T41 = 0x4A,
	SKILLPLAYID_T42 = 0x4B,
	SKILLPLAYID_T43 = 0x4C,
	SKILLPLAYID_T44 = 0x4D,

	//Tier5
	SKILLPLAYID_T51 = 0x5A,		//90
	SKILLPLAYID_T52 = 0x5B,		//91
	SKILLPLAYID_T53 = 0x5C,		//92
	SKILLPLAYID_T54 = 0x5D,		//93
};


enum ESkillSound : int
{
	SKILLSOUND_PhysicalAbsorb3 = 0x00001032,
	SKILLSOUND_Automation3 = 0x00002012,
	SKILLSOUND_AvengingCrash = 0x00003120,


	SKILLSOUNDID_LEARN = 0x1000,
	SKILLSOUNDID_EXTREME_SHIELD = 0x1010,
	SKILLSOUNDID_MECHANIC_BOMB1 = 0x1020,
	SKILLSOUNDID_MECHANIC_BOMB2 = 0x1021,
	SKILLSOUNDID_PHYSICAL_ABSORB1 = 0x1030,
	SKILLSOUNDID_PHYSICAL_ABSORB2 = 0x1031,
	SKILLSOUNDID_PHYSICAL_ABSORB3 = 0x1032,
	SKILLSOUNDID_JUMPING_CRASH1 = 0x1130,
	SKILLSOUNDID_JUMPING_CRASH2 = 0x1131,
	SKILLSOUNDID_PIKE_WIND = 0x1200,
	SKILLSOUNDID_SCOUT_HAWK1 = 0x1310,
	SKILLSOUNDID_SCOUT_HAWK2 = 0x1311,
	SKILLSOUNDID_WIND_ARROW = 0x1320,
	SKILLSOUNDID_PERFECT_AIM = 0x1330,
	SKILLSOUNDID_ARROW_HIT1 = 0x1301,
	SKILLSOUNDID_ARROW_HIT2 = 0x1302,
	SKILLSOUNDID_SKILL_SWING1 = 0x2000,
	SKILLSOUNDID_SKILL_SWING2 = 0x2001,
	SKILLSOUNDID_SKILL_AUTOMATION1 = 0x2010,
	SKILLSOUNDID_SKILL_AUTOMATION2 = 0x2011,
	SKILLSOUNDID_SKILL_AUTOMATION3 = 0x2012,
	SKILLSOUNDID_SKILL_AUTOMATION4 = 0x2013,
	SKILLSOUNDID_SKILL_AUTOMATION5 = 0x2014,
	SKILLSOUNDID_SKILL_MAXIMIZE1 = 0x2020,
	SKILLSOUNDID_SKILL_MAXIMIZE2 = 0x2021,
	SKILLSOUNDID_SKILL_MAXIMIZE3 = 0x2022,
	SKILLSOUNDID_SKILL_SPARK1 = 0x2030,
	SKILLSOUNDID_SKILL_SPARK2 = 0x2031,
	SKILLSOUNDID_SKILL_SPARK3 = 0x2032,
	SKILLSOUNDID_SKILL_GROUND_PIKE = 0x2110,
	SKILLSOUNDID_SKILL_TORNADO1 = 0x2120,
	SKILLSOUNDID_SKILL_EXPANSION1 = 0x2130,
	SKILLSOUNDID_SKILL_EXPANSION2 = 0x2131,
	SKILLSOUNDID_SKILL_ROAR1 = 0x2201,
	SKILLSOUNDID_SKILL_ROAR2 = 0x2202,
	SKILLSOUNDID_SKILL_RAGE_OF_ZECRAM1 = 0x2211,
	SKILLSOUNDID_SKILL_RAGE_OF_ZECRAM2 = 0x2212,
	SKILLSOUNDID_SKILL_RAGE_OF_ZECRAM3 = 0x2213,
	SKILLSOUNDID_SKILL_FALCON = 0x2310,
	SKILLSOUNDID_SKILL_FALCON_ATTACK1 = 0x2311,
	SKILLSOUNDID_SKILL_FALCON_ATTACK2 = 0x2312,
	SKILLSOUNDID_SKILL_AVALANCHE1 = 0x2322,
	SKILLSOUNDID_SKILL_AVALANCHE2 = 0x2322,
	SKILLSOUNDID_SKILL_AVALANCHE3 = 0x2322,
	SKILLSOUNDID_SKILL_ARROW_OF_RANGE = 0x2332,
	SKILLSOUNDID_SKILL_CASTING_MAGICIAN = 0x1800,
	SKILLSOUNDID_SKILL_CASTING_PRIEST = 0x1700,
	SKILLSOUNDID_SKILL_SWORDBLAST1 = 0x1510,
	SKILLSOUNDID_SKILL_SWORDBLAST2 = 0x1511,
	SKILLSOUNDID_SKILL_HOLYBODY = 0x1520,
	SKILLSOUNDID_SKILL_SHIELDSTRIKE = 0x1610,
	SKILLSOUNDID_SKILL_FARINA = 0x1620,
	SKILLSOUNDID_SKILL_VIGORSPEAR = 0x1640,
	SKILLSOUNDID_SKILL_HEALING = 0x1710,
	SKILLSOUNDID_SKILL_HOLYBOLT = 0x1720,
	SKILLSOUNDID_SKILL_MULTISPARK = 0x1730,
	SKILLSOUNDID_SKILL_HOLYMIND = 0x1740,
	SKILLSOUNDID_SKILL_AGONY = 0x1810,
	SKILLSOUNDID_SKILL_FIREBOLT1 = 0x1820,
	SKILLSOUNDID_SKILL_FIREBOLT2 = 0x1821,
	SKILLSOUNDID_SKILL_ZENITH = 0x1830,
	SKILLSOUNDID_SKILL_FIREBALL1 = 0x1840,
	SKILLSOUNDID_SKILL_FIREBALL2 = 0x1841,
	SKILLSOUNDID_SKILL_HOLY_VALOR1 = 0x2510,
	SKILLSOUNDID_SKILL_HOLY_VALOR3 = 0x2513,
	SKILLSOUNDID_SKILL_BLANDISH1 = 0x2520,
	SKILLSOUNDID_SKILL_BLANDISH2 = 0x2521,
	SKILLSOUNDID_SKILL_PIERCING = 0x2530,
	SKILLSOUNDID_SKILL_DRASTICSPIRIT1 = 0x2540,
	SKILLSOUNDID_SKILL_DRASTICSPIRIT3 = 0x2543,
	SKILLSOUNDID_SKILL_WINDY1 = 0x2610,
	SKILLSOUNDID_SKILL_WINDY3 = 0x2613,
	SKILLSOUNDID_SKILL_TWISTJAVELIN = 0x2620,
	SKILLSOUNDID_SKILL_SOULSUCKER2 = 0x2622,
	SKILLSOUNDID_SKILL_SOULSUCKER3 = 0x2623,
	SKILLSOUNDID_SKILL_SOULSUCKER4 = 0x2624,
	SKILLSOUNDID_SKILL_FIREJAVELIN = 0x2630,
	SKILLSOUNDID_SKILL_DIVINELIGHTNING1 = 0x2710,
	SKILLSOUNDID_SKILL_DIVINELIGHTNING2 = 0x2711,
	SKILLSOUNDID_SKILL_DIVINELIGHTNING3 = 0x2712,
	SKILLSOUNDID_SKILL_HOLYREFLECTION1 = 0x2720,
	SKILLSOUNDID_SKILL_HOLYREFLECTION2 = 0x2722,
	SKILLSOUNDID_SKILL_GRANDHEALING = 0x2730,
	SKILLSOUNDID_SKILL_WATORNADO1 = 0x2810,
	SKILLSOUNDID_SKILL_WATORNADO2 = 0x2811,
	SKILLSOUNDID_SKILL_ENCHANTWEAPON_CAST = 0x2820,
	SKILLSOUNDID_SKILL_ENCHANTWEAPON_ICE1 = 0x2821,
	SKILLSOUNDID_SKILL_ENCHANTWEAPON_ICE2 = 0x2822,
	SKILLSOUNDID_SKILL_ENCHANTWEAPON_FIRE1 = 0x2823,
	SKILLSOUNDID_SKILL_ENCHANTWEAPON_FIRE2 = 0x2824,
	SKILLSOUNDID_SKILL_ENCHANTWEAPON_LIGHTNING1 = 0x2825,
	SKILLSOUNDID_SKILL_ENCHANTWEAPON_LIGHTNING2 = 0x2826,
	SKILLSOUNDID_SKILL_ENCHANTWEAPON_MAGIC_LIGHTNING1 = 0x2827,
	SKILLSOUNDID_SKILL_ENCHANTWEAPON_MAGIC_LIGHTNING2 = 0x2828,
	SKILLSOUNDID_SKILL_ENCHANTWEAPON_MAGIC_ICE1 = 0x2840,
	SKILLSOUNDID_SKILL_ENCHANTWEAPON_MAGIC_ICE2 = 0x2841,
	SKILLSOUNDID_SKILL_DEATHRAY = 0x2830,
	SKILLSOUNDID_SKILL_METAL_ARMOR = 0x3010,
	SKILLSOUNDID_SKILL_SPARK_SHIELD = 0x3040,
	SKILLSOUNDID_SKILL_CONCENTRATION1 = 0x3110,
	SKILLSOUNDID_SKILL_CONCENTRATION2 = 0x3111,
	SKILLSOUNDID_SKILL_AVANGING_CRASH = 0x3120,
	SKILLSOUNDID_SKILL_SWIFT_AXE1 = 0x3130,
	SKILLSOUNDID_SKILL_SWIFT_AXE2 = 0x3131,
	SKILLSOUNDID_SKILL_BONE_CRASH1 = 0x3140,
	SKILLSOUNDID_SKILL_VENOM_SPEAR1 = 0x3210,
	SKILLSOUNDID_SKILL_VENOM_SPEAR2 = 0x3211,
	SKILLSOUNDID_SKILL_VANISH1 = 0x3220,
	SKILLSOUNDID_SKILL_VANISH2 = 0x3221,
	SKILLSOUNDID_SKILL_CHAIN_LANCE1 = 0x3240,
	SKILLSOUNDID_SKILL_CHAIN_LANCE2 = 0x3241,
	SKILLSOUNDID_SKILL_CHAIN_LANCE3 = 0x3242,
	SKILLSOUNDID_SKILL_ELEMENTAL_SHOT = 0x3310,
	SKILLSOUNDID_SKILL_GOLDEN_FALCON = 0x3320,
	SKILLSOUNDID_SKILL_PERFORATION = 0x3330,
	SKILLSOUNDID_SKILL_BOMB_SHOT1 = 0x3340,
	SKILLSOUNDID_SKILL_BOMB_SHOT2 = 0x3341,
	SKILLSOUNDID_SKILL_FLAME_BRANDISH = 0x3410,
	SKILLSOUNDID_SKILL_DIVINE_INHALATION = 0x3420,
	SKILLSOUNDID_SKILL_HOLY_INCANTATION = 0x3430,
	SKILLSOUNDID_SKILL_GRAND_CROSS = 0x3440,
	SKILLSOUNDID_SKILL_SPLIT_JAVELIN1 = 0x3510,
	SKILLSOUNDID_SKILL_SPLIT_JAVELIN2 = 0x3511,
	SKILLSOUNDID_SKILL_TRIUMPH_OF_VALHALLA1 = 0x3520,
	SKILLSOUNDID_SKILL_TRIUMPH_OF_VALHALLA2 = 0x3521,
	SKILLSOUNDID_SKILL_LIGHTNING_JAVELIN1 = 0x3530,
	SKILLSOUNDID_SKILL_LIGHTNING_JAVELIN2 = 0x3531,
	SKILLSOUNDID_SKILL_STORM_JAVELIN1 = 0x3540,
	SKILLSOUNDID_SKILL_STORM_JAVELIN2 = 0x3541,
	SKILLSOUNDID_SKILL_VIGOR_BALL1 = 0x3610,
	SKILLSOUNDID_SKILL_VIGOR_BALL2 = 0x3611,
	SKILLSOUNDID_SKILL_RESURRECTION = 0x3620,
	SKILLSOUNDID_SKILL_EXTINTION = 0x3630,
	SKILLSOUNDID_SKILL_VIRTUAL_LIFE = 0x3640,
	SKILLSOUNDID_SKILL_ENERGY_SHIELD = 0x3710,
	SKILLSOUNDID_SKILL_DIASTROPHISM = 0x3720,
	SKILLSOUNDID_SKILL_SPIRIT_ELEMENTAL = 0x3730,
	SKILLSOUNDID_SKILL_DANCING_SWORD = 0x3740,
	SKILLSOUNDID_SKILL_DANCING_SWORD_ATK1 = 0x3741,
	SKILLSOUNDID_SKILL_DANCING_SWORD_ATK2 = 0x3742,
	SKILLSOUNDID_SKILL_IMPULSION = 0x4010,
	SKILLSOUNDID_SKILL_COMPULSION1 = 0x4021,
	SKILLSOUNDID_SKILL_COMPULSION2 = 0x4022,
	SKILLSOUNDID_SKILL_COMPULSION3 = 0x4023,
	SKILLSOUNDID_SKILL_METAL_GOLEM = 0x4040,
	SKILLSOUNDID_SKILL_BERSERKER = 0x4120,
	SKILLSOUNDID_SKILL_CYCLONE_STRIKE = 0x4130,
	SKILLSOUNDID_SKILL_ASSASSIN_EYE = 0x4210,
	SKILLSOUNDID_SKILL_CHARGING = 0x4220,
	SKILLSOUNDID_SKILL_CHARGING_STRIKE = 0x4221,
	SKILLSOUNDID_SKILL_VAGUE = 0x4230,
	SKILLSOUNDID_SKILL_SHADOW_STRIKE1 = 0x4241,
	SKILLSOUNDID_SKILL_SHADOW_STRIKE2 = 0x4242,
	SKILLSOUNDID_SKILL_SHADOW_STRIKE3 = 0x4243,
	SKILLSOUNDID_SKILL_SHADOW_STRIKE4 = 0x4244,
	SKILLSOUNDID_SKILL_RECALL_WOLVERIN = 0x4310,
	SKILLSOUNDID_SKILL_PHOENIX_SHOT = 0x4330,
	SKILLSOUNDID_SKILL_FORCE_OF_NATURE = 0x4340,
	SKILLSOUNDID_SKILL_DVINE_PIERCING = 0x4410,
	SKILLSOUNDID_SKILL_GODLY_SHIELD = 0x4420,
	SKILLSOUNDID_SKILL_GODS_BLESS = 0x4430,
	SKILLSOUNDID_SKILL_SWORD_OF_JUSTICE = 0x4440,
	SKILLSOUNDID_SKILL_HALL_OF_VALHALLA = 0x4510,
	SKILLSOUNDID_SKILL_EXTREM_RAGE1 = 0x4521,
	SKILLSOUNDID_SKILL_EXTREM_RAGE2 = 0x4522,
	SKILLSOUNDID_SKILL_EXTREM_RAGE3 = 0x4523,
	SKILLSOUNDID_SKILL_FROST_JAVELIN = 0x4530,
	SKILLSOUNDID_SKILL_VENGEANCE1 = 0x4541,
	SKILLSOUNDID_SKILL_VENGEANCE2 = 0x4542,
	SKILLSOUNDID_SKILL_GLACIAL_SPIKE1 = 0x4611,
	SKILLSOUNDID_SKILL_GLACIAL_SPIKE2 = 0x4612,
	SKILLSOUNDID_SKILL_REGEN_FIELD1 = 0x4621,
	SKILLSOUNDID_SKILL_REGEN_FIELD2 = 0x4622,
	SKILLSOUNDID_SKILL_CHAIN_LIGHTNING1 = 0x4631,
	SKILLSOUNDID_SKILL_CHAIN_LIGHTNING2 = 0x4632,
	SKILLSOUNDID_SKILL_MUSPELL1 = 0x4641,
	SKILLSOUNDID_SKILL_MUSPELL2 = 0x4642,
	SKILLSOUNDID_SKILL_FIRE_ELEMENTAL = 0x4710,
	SKILLSOUNDID_SKILL_FLAME_WAVE1 = 0x4721,
	SKILLSOUNDID_SKILL_FLAME_WAVE2 = 0x4722,
	SKILLSOUNDID_SKILL_FLAME_WAVE3 = 0x4723,
	SKILLSOUNDID_SKILL_DISTORTION = 0x4730,
	SKILLSOUNDID_SKILL_METEO1 = 0x4741,
	SKILLSOUNDID_SKILL_METEO2 = 0x4742,
	SKILLSOUNDID_SKILL_METEO3 = 0x4743
};


enum ESkillMask
{
	SKILLMASK_ExtremeShield = 0x00000001,
	SKILLMASK_PhysicalAbsorb = 0x00000002,
	SKILLMASK_Automation = 0x00000004,
	SKILLMASK_CriticalHit = 0x00000008,
	SKILLMASK_SparkShield = 0x00000010,
	SKILLMASK_GodlyShield = 0x00000020,

	SKILLMASK_HolyBody = 0x00010000,
};

enum ESkillEffectID
{
	//Knight
	SKILLEFFECTID_HolyValorAction = 700,

	//Magician
	SKILLEFFECTID_EnchantWeaponFire = 100,
	SKILLEFFECTID_EnchantWeaponIce = 200,
	SKILLEFFECTID_EnchantWeaponLightning = 300,
};

enum ESkillID
{
	SKILLID_None = 0x00000000,
	SKILLID_DefaultAttack = 0x11111111,

	//Fighter
	SKILLID_MeleeMastery = 0x02010001,//格斗之术
	SKILLID_FireAttribute = 0x02010002,//炎之抗御
	SKILLID_Raving = 0x02010003,//绝地暴走
	SKILLID_Impact = 0x02010004,//精准之击

	SKILLID_TripleImpact = 0x02020001,//威力冲击
	SKILLID_BrutalSwing = 0x02020002,//致命回旋
	SKILLID_Roar = 0x02020003,//极地怒吼
	SKILLID_RageofZecram = 0x02020004,//战神之怒

	SKILLID_Concentration = 0x02040001,//会心一击
	SKILLID_AvengingCrash = 0x02040002,//复仇连击
	SKILLID_SwiftAxe = 0x02040003,//刺杀之斧
	SKILLID_BoneCrash = 0x02040004,//挫骨扬灰

	SKILLID_Destroyer = 0x02080001,//破坏连击
	SKILLID_Berserker = 0x02080002,//狂暴战士
	SKILLID_CycloneStrike = 0x02080003,//飓风袭击
	SKILLID_BoostHealth = 0x02080004,//健康专家

	SKILLID_SurvivalInstinct = 0x02100001,//武士5-1
	SKILLID_SeismicImpact = 0x02100002,//武士5-2
	SKILLID_RuthlessofZecram = 0x02100003,//武士5-3
	SKILLID_WhirlwindFS01 = 0x02100004,//武士5-4

	//Mechanician
	SKILLID_ExtremeShield = 0x01010001,
	SKILLID_MechanicBomb = 0x01010002,
	SKILLID_PhysicalAbsorb = 0x01010003,
	SKILLID_PoisonAttribute = 0x01010004,

	SKILLID_GreatSmash = 0x01020001,
	SKILLID_Maximize = 0x01020002,
	SKILLID_Automation = 0x01020003,
	SKILLID_Spark = 0x01020004,

	SKILLID_MetalArmor = 0x01040001,
	SKILLID_GrandSmash = 0x01040002,
	SKILLID_MechanicWeaponMastery = 0x01040003,
	SKILLID_SparkShield = 0x01040004,

	SKILLID_Impulsion = 0x01080001,
	SKILLID_Compulsion = 0x01080002,
	SKILLID_MagneticSphere = 0x01080003,
	SKILLID_MetalGolem = 0x01080004,

	SKILLID_Rupture = 0x01100001,
	SKILLID_MagneticDischarge = 0x01100002,
	SKILLID_HardeningShield = 0x01100003,
	SKILLID_ParasitShot = 0x01100004,

	//Archer
	SKILLID_ScoutHawk = 0x04010001,
	SKILLID_ShootingMastery = 0x04010002,
	SKILLID_WindArrow = 0x04010003,
	SKILLID_PerfectAim = 0x04010004,

	SKILLID_DionsEye = 0x04020001,
	SKILLID_Falcon = 0x04020002,
	SKILLID_ArrowofRage = 0x04020003,
	SKILLID_Avalanche = 0x04020004,

	SKILLID_ElementalShot = 0x04040001,
	SKILLID_GoldenFalcon = 0x04040002,
	SKILLID_BombShot = 0x04040003,
	SKILLID_Perforation = 0x04040004,

	SKILLID_RecallWolverine = 0x04080001,
	SKILLID_EvasionMastery = 0x04080002,
	SKILLID_PhoenixShot = 0x04080003,
	SKILLID_ForceofNature = 0x04080004,

	SKILLID_LethalSight = 0x04100001,
	SKILLID_FierceWind = 0x04100002,
	SKILLID_EntalingRoots = 0x04100003,
	SKILLID_Bombardment = 0x04100004,

	//Pikeman
	SKILLID_PikeWind = 0x03010001,
	SKILLID_IceAttribute = 0x03010002,
	SKILLID_CriticalHit = 0x03010003,
	SKILLID_JumpingCrash = 0x03010004,

	SKILLID_GroundPike = 0x03020001,
	SKILLID_Tornado = 0x03020002,
	SKILLID_WeaponDefenseMastery = 0x03020003,
	SKILLID_Expansion = 0x03020004,

	SKILLID_VenomSpear = 0x03040001,
	SKILLID_Vanish = 0x03040002,
	SKILLID_CriticalMastery = 0x03040003,
	SKILLID_ChainLance = 0x03040004,

	SKILLID_AssassinsEye = 0x03080001,
	SKILLID_ChargingStrike = 0x03080002,
	SKILLID_Vague = 0x03080003,
	SKILLID_ShadowMaster = 0x03080004,

	SKILLID_RingofSpears = 0x03100001,
	SKILLID_LastBreath = 0x03100002,
	SKILLID_DeathMaster = 0x03100003,
	SKILLID_Twister = 0x03100004,

	//Atalanta
	SKILLID_ShieldStrike = 0x06010001,
	SKILLID_Farina = 0x06010002,
	SKILLID_ThrowingMaster = 0x06010003,
	SKILLID_BiggerSpear = 0x06010004,

	SKILLID_Windy = 0x06020001,
	SKILLID_TwistJavelin = 0x06020002,
	SKILLID_SoulSucker = 0x06020003,
	SKILLID_FireJavelin = 0x06020004,

	SKILLID_SplitJavelin = 0x06040001,
	SKILLID_TriumphofJavelin = 0x06040002,
	SKILLID_LightningJavelin = 0x06040003,
	SKILLID_StormJavelin = 0x06040004,

	SKILLID_HallofValhalla = 0x06080001,
	SKILLID_ExtremeRage = 0x06080002,
	SKILLID_FrostJavelin = 0x06080003,
	SKILLID_Vengeance = 0x06080004,

	SKILLID_SummonTiger = 0x06100001,
	SKILLID_GoldenApple = 0x06100002,
	SKILLID_PlagueJavelin = 0x06100003,
	SKILLID_ComboJavelin = 0x06100004,

	//Knight
	SKILLID_SwordBlast = 0x05010001,
	SKILLID_HolyBody = 0x05010002,
	SKILLID_PhysicalTraining = 0x05010003,
	SKILLID_DoubleCrash = 0x05010004,

	SKILLID_HolyValor = 0x05020001,
	SKILLID_Brandish = 0x05020002,
	SKILLID_Piercing = 0x05020003,
	SKILLID_DrasticSpirit = 0x05020004,

	SKILLID_SwordMastery = 0x05040001,
	SKILLID_DivineShield = 0x05040002,
	SKILLID_HolyIncantation = 0x05040003,
	SKILLID_GrandCross = 0x05040004,

	SKILLID_SwordofJustice = 0x05080001,
	SKILLID_GodlyShield = 0x05080002,
	SKILLID_GodsBlessing = 0x05080003,
	SKILLID_DivinePiercing = 0x05080004,

	SKILLID_HolyConviction = 0x05100001,
	SKILLID_WhirlWind = 0x05100002,
	SKILLID_GloriousShield = 0x05100003,
	SKILLID_DivineCross = 0x05100004,

	//Magician
	SKILLID_Agony = 0x08010001,
	SKILLID_FireBolt = 0x08010002,
	SKILLID_Zenith = 0x08010003,
	SKILLID_FireBall = 0x08010004,

	SKILLID_MentalMastery = 0x08020001,
	SKILLID_Watornado = 0x08020002,
	SKILLID_EnchantWeapon = 0x08020003,
	SKILLID_DeathRay = 0x08020004,

	SKILLID_EnergyShield = 0x08040001,
	SKILLID_Diastrophism = 0x08040002,
	SKILLID_SpiritElemental = 0x08040003,
	SKILLID_DancingSword = 0x08040004,

	SKILLID_FireElemental = 0x08080001,
	SKILLID_FlameWave = 0x08080002,
	SKILLID_Distortion = 0x08080003,
	SKILLID_Meteorite = 0x08080004,

	SKILLID_WizardTrance = 0x08100001,
	SKILLID_StoneSkin = 0x08100002,
	SKILLID_RedRay = 0x08100003,
	SKILLID_Cataclysm = 0x08100004,

	//Priestess
	SKILLID_Healing = 0x07010001,
	SKILLID_HolyBolt = 0x07010002,
	SKILLID_MultiSpark = 0x07010003,
	SKILLID_HolyMind = 0x07010004,

	SKILLID_Meditation = 0x07020001,
	SKILLID_DivineLightning = 0x07020002,
	SKILLID_HolyReflection = 0x07020003,
	SKILLID_GrandHealing = 0x07020004,

	SKILLID_VigorBall = 0x07040001,
	SKILLID_Resurrection = 0x07040002,
	SKILLID_Extinction = 0x07040003,
	SKILLID_VirtualLife = 0x07040004,

	SKILLID_GlacialSpike = 0x07080001,
	SKILLID_RegenerationField = 0x07080002,
	SKILLID_ChainLightning = 0x07080003,
	SKILLID_SummonMuspell = 0x07080004,

	SKILLID_IceElemental = 0x07100001,
	SKILLID_IceMeteorite = 0x07100002,
	SKILLID_HeavenlyLight = 0x07100003,
	SKILLID_Consecration = 0x07100004,

	//Assassin
	SKILLID_Stinger = 0x10010001,
	SKILLID_RunningHit = 0x10010002,
	SKILLID_DualWieldMastery = 0x10010003,
	SKILLID_Wisp = 0x10010004,

	SKILLID_VenomThorn = 0x10020001,
	SKILLID_Alas = 0x10020002,
	SKILLID_SoulShock = 0x10020003,
	SKILLID_AttackMastery = 0x10020004,

	SKILLID_SoreBlade = 0x10040001,
	SKILLID_GustSlash = 0x10040002,
	SKILLID_Inpes = 0x10040003,
	SKILLID_Blind = 0x10040004,

	SKILLID_FrostWind = 0x10080001,
	SKILLID_FatalMastery = 0x10080002,
	SKILLID_Polluted = 0x10080003,
	SKILLID_NinjaShadow = 0x10080004,

	SKILLID_ShadowBlink = 0x10100001,
	SKILLID_KissViper = 0x10100002,
	SKILLID_ViolentStub = 0x10100003,
	SKILLID_ShadowStorm = 0x10100004,

	//Shaman
	SKILLID_DarkBolt = 0x50010001,
	SKILLID_DarkWave = 0x50010002,
	SKILLID_Inertia = 0x50010003,
	SKILLID_InnerPeace = 0x50010004,

	SKILLID_SpiritualFlare = 0x50020001,
	SKILLID_SpiritualManacle = 0x50020002,
	SKILLID_ChasingHunt = 0x50020003,
	SKILLID_AdventMigal = 0x50020004,

	SKILLID_Rainmaker = 0x50040001,
	SKILLID_PhantomCall = 0x50040002,
	SKILLID_Haunt = 0x50040003,
	SKILLID_Scratch = 0x50040004,

	SKILLID_RecallHestian = 0x50080001,
	SKILLID_Judgement = 0x50080002,
	SKILLID_AdventMidranda = 0x50080003,
	SKILLID_MourningPray = 0x50080004,

	SKILLID_Creed = 0x50100001,
	SKILLID_PressDeity = 0x50100002,
	SKILLID_PhantomNail = 0x50100003,
	SKILLID_OccultLife = 0x50100004,

	//Stones
	SKILLID_FighterStone = 0x09040001,
	SKILLID_MechanicianStone = 0x09040002,
	SKILLID_PikemanStone = 0x09040003,
	SKILLID_ArcherStone = 0x09040004,
	SKILLID_KnightStone = 0x09040005,
	SKILLID_AtalantaStone = 0x09040006,
	SKILLID_PriestessStone = 0x09040007,
	SKILLID_MagicianStone = 0x09040008,
	SKILLID_ShamanStone = 0x09040009,
	SKILLID_AssassinStone = 0x0904000A,

	//Timers
	SKILLID_AvertScroll = 0x09080003,
	SKILLID_AbsorptionOfGlory = 0x09010004,
	SKILLID_PowerSiege = 0x09010005,
	SKILLID_EvasionAdaption = 0x09010006,
	SKILLID_Force = 0x09010001,
	SKILLID_QUEST1 = 0x09010002,
	SKILLID_QUEST2 = 0x09010003,
	SKILLID_QUEST3 = 0x09010010,
	SKILLID_QUEST4 = 0x09010020,
	SKILLID_QUESTNew = 0x096A0003,
	SKILLID_QUESTNewTime = 0x096B0003,
	SKILLID_EventTimer = 0x096A0004,
	SKILLID_Atanasia = 0x09020001,
	SKILLID_DeadlyEdge = 0x09020002,
	SKILLID_AvailofEvasion = 0x09020003,
	SKILLID_DefianceStoneA = 0x09020004,
	SKILLID_DefianceStoneB = 0x09020005,
	SKILLID_DefianceStoneC = 0x09020006,
	SKILLID_MightStone = 0x09040010,
	SKILLID_EternalLife = 0x09080001,
	SKILLID_FatalEdge = 0x09080002,
	SKILLID_Rivera = 0x09080004,

	SKILLID_BellatraGold = 0x096A0061,
	SKILLID_BellatraSilver = 0x096A0062,
	SKILLID_BellatraBronze = 0x096A0063,

	SKILLID_PvPHonor = 0x096B0051,
	SKILLID_BellatraHonor = 0x096B0052,

	SKILLID_PKMode = 0x096A0051,
};

enum ESkillShortID
{
	//Mechanician
	SKILLSHORTID_ExtremeShield = SKILLPLAYID_T11,
	SKILLSHORTID_MechanicBomb = SKILLPLAYID_T12,
	SKILLSHORTID_PhysicalAbsorption = SKILLPLAYID_T13,
	SKILLSHORTID_PoisonAttribute = SKILLPLAYID_Undefined,

	SKILLSHORTID_GreatSmash = SKILLPLAYID_T21,
	SKILLSHORTID_Maximize = SKILLPLAYID_T22,
	SKILLSHORTID_Automation = SKILLPLAYID_T23,
	SKILLSHORTID_Spark = SKILLPLAYID_T24,

	SKILLSHORTID_MetalArmor = SKILLPLAYID_T31,
	SKILLSHORTID_GrandSmash = SKILLPLAYID_T32,
	SKILLSHORTID_MechanicMastery = SKILLPLAYID_Undefined,
	SKILLSHORTID_SparkShield = SKILLPLAYID_T33,

	SKILLSHORTID_Impulsion = SKILLPLAYID_T41,
	SKILLSHORTID_Compulsion = SKILLPLAYID_T42,
	SKILLSHORTID_MagneticSphere = SKILLPLAYID_T43,
	SKILLSHORTID_MetalGolem = SKILLPLAYID_T44,

	SKILLSHORTID_Rupture = SKILLPLAYID_T51,
	SKILLSHORTID_MagneticDischarge = SKILLPLAYID_T52,
	SKILLSHORTID_HardeningShield = SKILLPLAYID_T53,
	SKILLSHORTID_ParasitShot = SKILLPLAYID_T54,

	//Fighter
	SKILLSHORTID_MeleeMastery = SKILLPLAYID_Undefined,
	SKILLSHORTID_FireAttribute = SKILLPLAYID_Undefined,
	SKILLSHORTID_Raving = SKILLPLAYID_T11,
	SKILLSHORTID_Impact = SKILLPLAYID_T12,

	SKILLSHORTID_TripleImpact = SKILLPLAYID_T21,
	SKILLSHORTID_BrutalSwing = SKILLPLAYID_T22,
	SKILLSHORTID_Roar = SKILLPLAYID_T23,
	SKILLSHORTID_RageofZecram = SKILLPLAYID_T24,

	SKILLSHORTID_Concentration = SKILLPLAYID_T31,
	SKILLSHORTID_AvengingCrash = SKILLPLAYID_T32,
	SKILLSHORTID_SwiftAxe = SKILLPLAYID_T33,
	SKILLSHORTID_BoneCrash = SKILLPLAYID_T34,

	SKILLSHORTID_Destroyer = SKILLPLAYID_T41,
	SKILLSHORTID_Berserker = SKILLPLAYID_T42,
	SKILLSHORTID_CycloneStrike = SKILLPLAYID_T43,
	SKILLSHORTID_BoostHealth = SKILLPLAYID_Undefined,

	SKILLSHORTID_SesmicImpact = SKILLPLAYID_T51,
	SKILLSHORTID_POWERDASH = SKILLPLAYID_T52,
	SKILLSHORTID_MOTALBLOW = SKILLPLAYID_T53,
	SKILLSHORTID_BLOODYBERSERKER = SKILLPLAYID_T54,

	//Pikeman
	SKILLSHORTID_PikeWind = SKILLPLAYID_T11,
	SKILLSHORTID_IceAttribute = SKILLPLAYID_Undefined,
	SKILLSHORTID_CriticalHit = SKILLPLAYID_T12,
	SKILLSHORTID_JumpingCrash = SKILLPLAYID_T13,

	SKILLSHORTID_GroundPike = SKILLPLAYID_T21,
	SKILLSHORTID_Tornado = SKILLPLAYID_T22,
	SKILLSHORTID_WeaponDefenceMastery = SKILLPLAYID_Undefined,
	SKILLSHORTID_Expansion = SKILLPLAYID_T23,

	SKILLSHORTID_VenomSpear = SKILLPLAYID_T31,
	SKILLSHORTID_Vanish = SKILLPLAYID_T32,
	SKILLSHORTID_CriticalMastery = SKILLPLAYID_Undefined,
	SKILLSHORTID_ChainLance = SKILLPLAYID_T33,

	SKILLSHORTID_AssassinsEye = SKILLPLAYID_T41,
	SKILLSHORTID_ChargingStrike = SKILLPLAYID_T42,
	SKILLSHORTID_Vague = SKILLPLAYID_T43,
	SKILLSHORTID_ShadowMaster = SKILLPLAYID_T44,

	SKILLSHORTID_DANCINGREAPER = SKILLPLAYID_T51,
	SKILLSHORTID_FINALSPEAR = SKILLPLAYID_T52,
	SKILLSHORTID_AMPLIFIED = SKILLPLAYID_T53,
	SKILLSHORTID_SIDESPINATTACK = SKILLPLAYID_T54,

	//Archer
	SKILLSHORTID_ScoutHawk = SKILLPLAYID_T11,
	SKILLSHORTID_ShootingMastery = SKILLPLAYID_Undefined,
	SKILLSHORTID_WindArrow = SKILLPLAYID_T12,
	SKILLSHORTID_PerfectAim = SKILLPLAYID_T13,

	SKILLSHORTID_DionsEye = SKILLPLAYID_Undefined,
	SKILLSHORTID_Falcon = SKILLPLAYID_T21,
	SKILLSHORTID_ArrowofRage = SKILLPLAYID_T22,
	SKILLSHORTID_Avalanche = SKILLPLAYID_T23,

	SKILLSHORTID_ElementalShot = SKILLPLAYID_T31,
	SKILLSHORTID_GoldenFalcon = SKILLPLAYID_T32,
	SKILLSHORTID_BombShot = SKILLPLAYID_T33,
	SKILLSHORTID_Perforation = SKILLPLAYID_T34,

	SKILLSHORTID_RecallWolverine = SKILLPLAYID_T41,
	SKILLSHORTID_EvasionMastery = SKILLPLAYID_Undefined,
	SKILLSHORTID_PhoenixShot = SKILLPLAYID_T42,
	SKILLSHORTID_ForceOfNature = SKILLPLAYID_T43,

	SKILLSHORTID_LethalSight = SKILLPLAYID_T51,
	SKILLSHORTID_FierceWind = SKILLPLAYID_T52,
	SKILLSHORTID_NATURESPLASH = SKILLPLAYID_T53,
	SKILLSHORTID_CIRCLETRAP = SKILLPLAYID_T54,

	//Knight
	SKILLSHORTID_SwordBlast = SKILLPLAYID_T11,
	SKILLSHORTID_HolyBody = SKILLPLAYID_T12,
	SKILLSHORTID_PhysicalTraining = SKILLPLAYID_Undefined,
	SKILLSHORTID_DoubleCrash = SKILLPLAYID_T13,

	SKILLSHORTID_HolyValor = SKILLPLAYID_T21,
	SKILLSHORTID_Brandish = SKILLPLAYID_T22,
	SKILLSHORTID_Piercing = SKILLPLAYID_T23,
	SKILLSHORTID_DrasticSpirit = SKILLPLAYID_T24,

	SKILLSHORTID_SwordMastery = SKILLPLAYID_Undefined,
	SKILLSHORTID_DivineShield = SKILLPLAYID_T31,
	SKILLSHORTID_HolyIncantation = SKILLPLAYID_T32,
	SKILLSHORTID_GrandCross = SKILLPLAYID_T33,

	SKILLSHORTID_DivinePiercing = SKILLPLAYID_T44,
	SKILLSHORTID_DIVINEPIERCING2 = 0x90,
	SKILLSHORTID_DIVINEPIERCING3 = 0x91,
	SKILLSHORTID_GodlyShield = SKILLPLAYID_T42,
	SKILLSHORTID_GodsBlessing = SKILLPLAYID_T43,
	SKILLSHORTID_SwordOfJustice = SKILLPLAYID_T41,

	SKILLSHORTID_HolyConviction = SKILLPLAYID_T51,
	SKILLSHORTID_DivineInquisition = SKILLPLAYID_T52,
	SKILLSHORTID_SAINTBLADE = SKILLPLAYID_T53,
	SKILLSHORTID_HOLYBENEDIC = SKILLPLAYID_T54,

	//Atalanta
	SKILLSHORTID_ShieldStrike = SKILLPLAYID_T11,
	SKILLSHORTID_Farina = SKILLPLAYID_T12,
	SKILLSHORTID_ThrowingMastery = SKILLPLAYID_Undefined,
	SKILLSHORTID_VigorSpear = SKILLPLAYID_T13,

	SKILLSHORTID_Windy = SKILLPLAYID_T21,
	SKILLSHORTID_TwistJavelin = SKILLPLAYID_T22,
	SKILLSHORTID_SoulSucker = SKILLPLAYID_T23,
	SKILLSHORTID_FireJavelin = SKILLPLAYID_T24,

	SKILLSHORTID_SplitJavelin = SKILLPLAYID_T31,
	SKILLSHORTID_TriumphOfValhalla = SKILLPLAYID_T32,
	SKILLSHORTID_LightningJavelin = SKILLPLAYID_T33,
	SKILLSHORTID_StormJavelin = SKILLPLAYID_T34,

	SKILLSHORTID_HALLOFVALHALLA = SKILLPLAYID_T41,
	SKILLSHORTID_XRAGE = SKILLPLAYID_T42,
	SKILLSHORTID_FROSTJAVELIN = SKILLPLAYID_T43,
	SKILLSHORTID_VENGEANCE = SKILLPLAYID_T44,

	SKILLSHORTID_ComboJavelin = SKILLPLAYID_T51,
	SKILLSHORTID_GALAXYCOUP = SKILLPLAYID_T52,
	SKILLSHORTID_SUMMONARCUDA = SKILLPLAYID_T53,
	SKILLSHORTID_SNIPPYFEAR = SKILLPLAYID_T54,

	//Priestess
	SKILLSHORTID_Healing = SKILLPLAYID_T11,
	SKILLSHORTID_HolyBolt = SKILLPLAYID_T12,
	SKILLSHORTID_MultiSpark = SKILLPLAYID_T13,
	SKILLSHORTID_HolyMind = SKILLPLAYID_T14,

	SKILLSHORTID_Meditation = SKILLPLAYID_Undefined,
	SKILLSHORTID_DivineLightning = SKILLPLAYID_T21,
	SKILLSHORTID_HolyReflection = SKILLPLAYID_T22,
	SKILLSHORTID_GrandHealing = SKILLPLAYID_T23,

	SKILLSHORTID_VigorBall = SKILLPLAYID_T31,
	SKILLSHORTID_Resurrection = SKILLPLAYID_T32,
	SKILLSHORTID_Extinction = SKILLPLAYID_T33,
	SKILLSHORTID_VirtualLife = SKILLPLAYID_T34,

	SKILLSHORTID_GLACIALSPIKE = SKILLPLAYID_T41,
	SKILLSHORTID_REGENERATIONFIELD = SKILLPLAYID_T42,
	SKILLSHORTID_CHAINLIGHTNING = SKILLPLAYID_T43,
	SKILLSHORTID_SUMMONMUSPELL = SKILLPLAYID_T44,

	SKILLSHORTID_SpiritImpact = SKILLPLAYID_T51,
	SKILLSHORTID_PiercingIce = SKILLPLAYID_T52,
	SKILLSHORTID_SummonRamiel = SKILLPLAYID_T53,
	SKILLSHORTID_BlessingKrishna = SKILLPLAYID_T54,

	//Magician
	SKILLSHORTID_Agony = SKILLPLAYID_T11,
	SKILLSHORTID_FireBolt = SKILLPLAYID_T12,
	SKILLSHORTID_Zenith = SKILLPLAYID_T13,
	SKILLSHORTID_FireBall = SKILLPLAYID_T14,

	SKILLSHORTID_MentalMastery = SKILLPLAYID_Undefined,
	SKILLSHORTID_ColumnOfWater = SKILLPLAYID_T21,
	SKILLSHORTID_EnchantWeapon = SKILLPLAYID_T22,
	SKILLSHORTID_DeadRay = SKILLPLAYID_T23,

	SKILLSHORTID_EnergyShield = SKILLPLAYID_T31,
	SKILLSHORTID_Diastrophism = SKILLPLAYID_T32,
	SKILLSHORTID_SpiritElemental = SKILLPLAYID_T33,
	SKILLSHORTID_DancingSword = SKILLPLAYID_T34,

	SKILLSHORTID_FIREELEMENTAL = SKILLPLAYID_T41,
	SKILLSHORTID_FLAMEWAVE = SKILLPLAYID_T42,
	SKILLSHORTID_DISTORTION = SKILLPLAYID_T43,
	SKILLSHORTID_METEO = SKILLPLAYID_T44,

	SKILLSHORTID_StoneSkin = SKILLPLAYID_T51,
	SKILLSHORTID_RedRay = SKILLPLAYID_T52,
	SKILLSHORTID_Primaignis = SKILLPLAYID_T53,
	SKILLSHORTID_Thirdanima = SKILLPLAYID_T54,

	//Assassin
	SKILLSHORTID_Stingger = SKILLPLAYID_T11,
	SKILLSHORTID_RunningHit = SKILLPLAYID_T12,
	SKILLSHORTID_DualSwordMastery = SKILLPLAYID_Undefined,
	SKILLSHORTID_Wisp = SKILLPLAYID_T14,

	SKILLSHORTID_VenomThrone = SKILLPLAYID_T21,
	SKILLSHORTID_Alas = SKILLPLAYID_T22,
	SKILLSHORTID_SoulShock = SKILLPLAYID_T23,
	SKILLSHORTID_AttackMastery = SKILLPLAYID_Undefined,

	SKILLSHORTID_SoreSword = SKILLPLAYID_T31,
	SKILLSHORTID_BeatUp = SKILLPLAYID_T32,
	SKILLSHORTID_Inpes = SKILLPLAYID_T33,
	SKILLSHORTID_Blind = SKILLPLAYID_T34,

	SKILLSHORTID_FrostWind = SKILLPLAYID_T41,
	SKILLSHORTID_AsnCriticalMastery = SKILLPLAYID_Undefined,
	SKILLSHORTID_Polluted = SKILLPLAYID_T43,
	SKILLSHORTID_PastingShadow = SKILLPLAYID_T44,

	SKILLSHORTID_ShadowBomb = SKILLPLAYID_T51,
	SKILLSHORTID_RisingSlash = SKILLPLAYID_T52,
	SKILLSHORTID_ViolenceStab = SKILLPLAYID_T53,
	SKILLSHORTID_Storm = SKILLPLAYID_T54,

	//Shaman
	SKILLSHORTID_DarkBolt = SKILLPLAYID_T11,
	SKILLSHORTID_DarkWave = SKILLPLAYID_T12,
	SKILLSHORTID_CurseLazy = SKILLPLAYID_T13,
	SKILLSHORTID_InnerPeace = SKILLPLAYID_Undefined,

	SKILLSHORTID_SpiritualFlare = SKILLPLAYID_T21,
	SKILLSHORTID_SoulManacle = SKILLPLAYID_T22,
	SKILLSHORTID_ChasingHunt = SKILLPLAYID_T23,
	SKILLSHORTID_AdventMigal = SKILLPLAYID_T24,

	SKILLSHORTID_RainMaker = SKILLPLAYID_T31,
	SKILLSHORTID_LandOfGhost = SKILLPLAYID_T32,
	SKILLSHORTID_Haunt = SKILLPLAYID_T33,
	SKILLSHORTID_Scratch = SKILLPLAYID_T34,

	SKILLSHORTID_RecallBloodyKnight = SKILLPLAYID_T41,
	SKILLSHORTID_Judgement = SKILLPLAYID_T42,
	SKILLSHORTID_AdventMidranda = SKILLPLAYID_T43,
	SKILLSHORTID_MourningOfPray = SKILLPLAYID_T44,

	SKILLSHORTID_Creed = SKILLPLAYID_T51,
	SKILLSHORTID_PressOfDeity = SKILLPLAYID_T52,
	SKILLSHORTID_GhostyNail = SKILLPLAYID_T53,
	SKILLSHORTID_HighRegeneration = SKILLPLAYID_Undefined,
};

struct ActiveSkill
{
	union
	{
		struct
		{
			unsigned char		cSkillTinyID;
			unsigned char		cLevel;
			unsigned short		sValue;
		};

		int iValue;
	};

	ActiveSkill() {}
	ActiveSkill(int iValue) : iValue(iValue) {}
};

struct RecordSkill
{
	BYTE		baSkillPoints[20];
	WORD		waSkillMastery[20];
	BYTE		baShortKey[20];
	WORD		waSelectSkill[2];
};

struct SkillBox
{
	RECT								BoxRect;
	RECT								GageRect;
};

struct SkillBase
{
	char                                szName[64];
	char                                szDescription[150];
	int                                 iSkillLevelRequired;
	int                                 iaSkillUseStamina[2];		// 0 = stamina value static, 1 = increase value each level skill
	int                                 iaSkillMastery[2];
	int                                 iaSkillElements[3];
	EItemType                           eSkillItemAllowed[8];
	DWORD								dwFunctionPointer;
	ESkillID				            eSkillID;
	ESkillType                          eSkillType;
	DWORD							    dwUseManaPointer;
	int                                 iSkillIndex;
};

struct Skill
{
	char                                szName[32];
	DWORD                               iID;
	char                                szFileName[32];
	char                                szIconName[32];
	int                                 bActive;
	BOOL                                bCanUse;
	int                                 iLevel;
	int                                 iShortKey;
	int                                 iMouseIndexPosition;
	int                                 Position;
	int                                 iUseTime;
	int                                 iCheckTime;
	int                                 GageLength;
	int                                 GageLength2;
	int                                 Mastery;
	int                                 UseSKillIncreCount;
	int                                 UseSkillCount;
	int 								UseSkillMastery;
	int                                 UseSkillMasteryGage;
	int                                 UseSkillFlag;
	int                                 PlusState[5];
	int                                 Time[2];
	int                                 PartyFlag;
	int                                 ElementIndex;
	int                                 MatIcon;

	int                                 IconAlpha;
	int                                 IconPosiX;
	int                                 IconTime;
	int                                 IconFlag;

	DWORD                               dwSkillTarget;
	int                                 SummonFlag;

	SkillBase							sSkillInfo;
};

struct UseSkill
{
	Skill		saUseSkill[20];
	SkillBox	saSkillBox[21];
	Skill* pLeftSkill;
	Skill* pRightSkill;
	int			iSkillPoint;
	int			iSkillPointTier4;
};

struct PacketSkillStatus : Packet
{
	int									iID;

	//Mechanician
	short								sMagneticDischargeLevel;
	DWORD								dwMagneticDischargeTimeLeft;

	//Archer T5
	short								sLethalSightLevel;
	DWORD								dwLethalSightTimeLeft;
	short								sFierceWindLevel;
	DWORD								dwFierceWindTimeLeft;

	//Knight T5
	short								sHolyConvictionLevel;
	DWORD								dwHolyConvictionTimeLeft;
	bool								bWhirlWind;

	//Mage T5
	short								sWizardTranceLevel;
	DWORD								dwWizardTranceTimeLeft;

	//Assassin
	short								sKissViperLevel;
	DWORD								dwKissViperTimeLeft;
};

struct PacketSkillStatusContainer : Packet
{
	int				  iAmount;

	BYTE			  baBuffer[SKILLCONTAINER_LENGTH];
};

struct PacketSkillCast : Packet
{
	union
	{
		int						iClass;
		int						iSkillLevel;
	};

	ActiveSkill					sActiveSkill;
	int							iID;
};

struct PacketUseSkillNew : Packet
{
	ESkillID		  iSkillID;
	unsigned int	  iSkillLevel;
	int				  lCasterID;
	int				  lTargetID;
};

const Rectangle2D saSkillPage2Button[4]
{
	//Skill T5A1
	{ 23, 108, 39, 36 },
	//Skill T5A2
	{ 62, 152, 39, 36 },
	//Skill T5A3
	{ 72, 72, 39, 36 },
	//Skill T5A4
	{ 132, 82, 39, 36 },
};

const Skill saSkill[MAX_SKILLS] =
{
	{ "基础攻击", 0x11111111, "Skill_Normal" },

	//Mechanician Skills - Tier 1
	{ "极光护盾", SKILLID_ExtremeShield, "TM10 Ex_shield", "Mc1_E_SHIELD.tga" },
	{ "机械榴弹", SKILLID_MechanicBomb, "TM12 M_bomb" },
	{ "毒之防御", SKILLID_PoisonAttribute, "TM14 P_attribute" },
	{ "灵光护体", SKILLID_PhysicalAbsorb, "TM17 Ph_absorb", "Mc1_P_ABSORB.tga" },

	//Tier 2
	{ "破碎巨击", SKILLID_GreatSmash, "TM20 G_Smash" },
	{ "改良专家", SKILLID_Maximize, "TM23 Maximize", "Mc2_MAXIMIZE.tga" },
	{ "灵光飞扬", SKILLID_Automation, "TM26 Automation", "Mc2_AUTOMATION.tga" },
	{ "火花电场", SKILLID_Spark, "TM30 Spark" },

	//Tier 3
	{ "金属重甲", SKILLID_MetalArmor, "TM40 M_Armor", "Mc3_M_ARMOR.tga" },
	{ "星光灭绝", SKILLID_GrandSmash, "TM43 Grand_Smash" },
	{ "优化专家", SKILLID_MechanicWeaponMastery, "TM44 M_Weapon" },
	{ "防御电波", SKILLID_SparkShield, "TM50 S_Shield", "Mc3_S_SHIELD.tga" },

	//Tier 4
	{ "雷霆冲击", SKILLID_Impulsion, "TM60 Impulsion" },
	{ "威慑怒吼", SKILLID_Compulsion, "TM63 Compulsion", "Mc4_COMPULSION.tga" },
	{ "磁性球体", SKILLID_MagneticSphere, "TM66 M_Sphere", "Mc4_M_SPHERE.tga" },
	{ "终极机械", SKILLID_MetalGolem, "TM70 M_Golem", "Mc4_M_GOLEM.tga" },

	//Tier 5
	{ "jx51", SKILLID_Rupture, "TM100 Rupture" },
	{ "jx52", SKILLID_MagneticDischarge, "TM103 Magnetic_Discharge" },
	{ "jx53", SKILLID_HardeningShield, "TM106 Hardening_Shield" },
	{ "jx54", SKILLID_ParasitShot, "TM110 Parasit_Shot" },

	//Fighter Skills - Tier 1
	{ "格斗之术", SKILLID_MeleeMastery, "TF10 M_mastery" },
	{ "炎之抗御", SKILLID_FireAttribute, "TF12 F_attribute" },
	{ "绝地暴走", SKILLID_Raving, "TF14 raving" },
	{ "精准之击", SKILLID_Impact, "TF17 impact" },

	//Tier 2
	{ "威力冲击", SKILLID_TripleImpact, "TF20 T_Impact" },
	{ "致命回旋", SKILLID_BrutalSwing, "TF23 B_Swing" },
	{ "极地怒吼", SKILLID_Roar, "TF26 Roar" },
	{ "战神之怒", SKILLID_RageofZecram, "TF30 R_Zecram" },

	//Tier 3
	{ "会心一击", SKILLID_Concentration, "TF40 Concentration", "Ft3_CONCENTRATION.tga" },
	{ "复仇连击", SKILLID_AvengingCrash, "TF43 A_Crash" },
	{ "刺杀之斧", SKILLID_SwiftAxe, "TF46 S_Axe", "Ft3_S_AXE.tga" },
	{ "挫骨扬灰", SKILLID_BoneCrash, "TF50 B_Crash" },

	//Tier 4
	{ "破坏连击", SKILLID_Destroyer, "TF60 Destoryer" },
	{ "狂暴战士", SKILLID_Berserker, "TF63 Berserker", "Ft4_BERSERKER.tga" },
	{ "飓风袭击", SKILLID_CycloneStrike, "TF66 C_Strike" },
	{ "健康专家", SKILLID_BoostHealth, "TF70 B_Health" },

	//Tier 5
	{ "WS51", SKILLID_SurvivalInstinct, "TF100 Survival_Instinct" },
	{ "WS52", SKILLID_SeismicImpact, "TF103 Sesmic_Impact" },
	{ "WS53", SKILLID_RuthlessofZecram, "TF106 Ruthless_Zecram" },
	{ "WS54", SKILLID_WhirlwindFS01, "TF110 Whirlwind" },

	//Pikeman Skills - Tier 1
	{ "龙卷枪风", SKILLID_PikeWind, "TP10 P_wind" },
	{ "寒之抗御", SKILLID_IceAttribute, "TP12 I_attribute" },
	{ "致命打击", SKILLID_CriticalHit, "TP14 Cri_hit" },
	{ "霹雳一击", SKILLID_JumpingCrash, "TP17 J_Crash" },

	//Tier 2
	{ "大地之枪", SKILLID_GroundPike, "TP20 G_Pike" },
	{ "枪之飓风", SKILLID_Tornado, "TP23 Tornado" },
	{ "格挡专家", SKILLID_WeaponDefenseMastery, "TP26 W_D_Mastery" },
	{ "无限力枪", SKILLID_Expansion, "TP30 Expasion" },

	//Tier 3
	{ "灵蛇标枪", SKILLID_VenomSpear, "TP40 V_Spear" },
	{ "隐身刺杀", SKILLID_Vanish, "TP43 Vanish", "Pk3_VANISH.tga" },
	{ "致命掌控", SKILLID_CriticalMastery, "TP46 C_Mastery" },
	{ "链枪骑兵", SKILLID_ChainLance, "TP50 C_Lance" },

	//Tier 4
	{ "暗杀之眼", SKILLID_AssassinsEye, "TP60 A_Eye", "Pk4_A_EYE.tga" },
	{ "转换打击", SKILLID_ChargingStrike, "TP63 C_Strike" },
	{ "影遁躲避", SKILLID_Vague, "TP66 Vague", "Pk4_VAGUE.tga" },
	{ "影子大师", SKILLID_ShadowMaster, "TP70 S_Master" },

	//Tier 5
	{ "QB51", SKILLID_RingofSpears, "TP100 Ring_Spears" },
	{ "QB52", SKILLID_LastBreath, "TP103 Focus" },
	{ "QB53", SKILLID_DeathMaster, "TP106 Death_Master" },
	{ "QB54", SKILLID_Twister, "TP110 Twister" },

	//Archer Skills - Tier 1
	{ "侦察之鹰", SKILLID_ScoutHawk, "TA10 S_hawk", "Ac1_S_HAWK.tga" },
	{ "强力之箭", SKILLID_ShootingMastery, "TA12 S_mastery" },
	{ "疾风之箭", SKILLID_WindArrow, "TA14 W_arrow" },
	{ "夺命之箭", SKILLID_PerfectAim, "TA17 P_aim" },

	//Tier 2
	{ "射神之眼", SKILLID_DionsEye, "TA20 D_Eye" },
	{ "灵魂之鹰", SKILLID_Falcon, "TA23 Falcon", "Ac2_FALCON.tga" },
	{ "狂暴火箭", SKILLID_ArrowofRage, "TA26 A_Rage" },
	{ "雪崩之箭", SKILLID_Avalanche, "TA30 Avalanchie" },

	//Tier 3
	{ "元素攻击", SKILLID_ElementalShot, "TA40 E_Shot" },
	{ "黄金猎鹰", SKILLID_GoldenFalcon, "TA43 G_Falcon", "Ac3_G_FALCON.tga" },
	{ "致命射击", SKILLID_BombShot, "TA46 B_Shot" },
	{ "穿透之箭", SKILLID_Perforation, "TA50 Perforation" },

	//Tier 4
	{ "召唤魔狼", SKILLID_RecallWolverine, "TA60 R_Wolverin", "Ac4_R_WOLVERIN.tga" },
	{ "躲避大师", SKILLID_EvasionMastery, "TA63 E_Mastery" },
	{ "火翼射击", SKILLID_PhoenixShot, "TA66 P_Shot" },
	{ "自然之力", SKILLID_ForceofNature, "TA70 F_O_Nature", "Ac4_F_O_NATURE.tga" },

	//Tier 5
	{ "GJS51", SKILLID_LethalSight, "TA100 Lethal_Sight" },
	{ "GJS52", SKILLID_FierceWind, "TA103 Fierce_Wind" },
	{ "GJS53", SKILLID_EntalingRoots, "TA106 Entailing_Roots" },
	{ "GJS54", SKILLID_Bombardment, "TA110 Bombardment" },

	//刺客 - Tier 1
	{ "突袭刺击", SKILLID_Stinger, "TA10 Stingger" },
	{ "侧翻闪击", SKILLID_RunningHit, "TA12 R_Hit" },
	{ "精通匕首", SKILLID_DualWieldMastery, "TA14 D_Mastery" },
	{ "弱点牵制", SKILLID_Wisp, "TA17 Wisp", "As1_WISP.tga" },

	//Tier 2
	{ "毒牙连击", SKILLID_VenomThorn, "TA20 V_Throne" },
	{ "天使之翼", SKILLID_Alas, "TA23 Alas", "As2_ALAS.tga" },
	{ "¼Ò¿ï ¼îÅ©", SKILLID_SoulShock, "TA26 S_Shock" },
	{ "¾îÅÃ ¸¶½ºÅÍ¸®", SKILLID_AttackMastery, "TA30 A_Mastery" },

	//Tier 3
	{ "灵魂震撼", SKILLID_SoreBlade, "TA40 S_Sword" },
	{ "刺杀大师", SKILLID_GustSlash, "TA43 B_Up" },
	{ "飞舞之剑", SKILLID_Inpes, "TA46 Inpes", "As3_INPES.tga" },
	{ "旋风连击", SKILLID_Blind, "TA50 Blind", "As3_BLIND.tga" },

	//Tier 4
	{ "敏捷大师", SKILLID_FrostWind, "TA60 F_Wind" },
	{ "暗影刺杀", SKILLID_FatalMastery, "TA63 F_Mastery" },
	{ "霜冻之刃", SKILLID_Polluted, "TA66 Polluted" },
	{ "致命精通", SKILLID_NinjaShadow, "TA70 P_Shadow" },

	//Tier 5
	{ "CIKE51", SKILLID_ShadowBlink, "TS80 J_Bomb" },
	{ "CIKE52", SKILLID_KissViper, "TS83 R_Slash" },
	{ "CIKE53", SKILLID_ViolentStub, "TS86 V_Stab" },
	{ "CIKE54", SKILLID_ShadowStorm, "TS90 Storm" },

	//游侠 - Tier 1
	{ "剑气爆发", SKILLID_SwordBlast, "MN10 S_Blast" },
	{ "圣光护体", SKILLID_HolyBody, "MN12 H_Body", "Kt1_H_BODY.tga" },
	{ "超能体训", SKILLID_PhysicalTraining, "MN14 P_Traning" },
	{ "双重爆击", SKILLID_DoubleCrash, "MN17 D_Crash" },

	//Tier 2
	{ "神圣勇气", SKILLID_HolyValor, "MN20 H_Valor", "Kt2_H_VALOR.tga" },
	{ "狂躁挥舞", SKILLID_Brandish, "MN23 Brandish" },
	{ "强龙啸天", SKILLID_Piercing, "MN26 Piercing" },
	{ "天佑神铠", SKILLID_DrasticSpirit, "MN30 D_Spirit", "Kt2_D_SPIRIT.tga" },

	//Tier 3
	{ "刀剑专精", SKILLID_SwordMastery, "MN40 S_Mastery" },
	{ "圣灵之吸", SKILLID_DivineShield, "MN43 D_Inhalation", "Kt3_D_INHALATION.tga" },
	{ "迷惑之咒", SKILLID_HolyIncantation, "MN46 H_Incantation" },
	{ "圣光十字", SKILLID_GrandCross, "MN50 G_Cross" },

	//Tier 4
	{ "神圣刺骨", SKILLID_SwordofJustice, "MN60 S_O_Justice" },
	{ "敬神之盾", SKILLID_GodlyShield, "MN63 G_Shield", "Kt4_G_SHIELD.tga" },
	{ "上帝祝福", SKILLID_GodsBlessing, "MN66 G_Bless", "Kt4_G_BLESS.tga" },
	{ "裁决之剑", SKILLID_DivinePiercing, "MN70 D_Piercing" },

	//Tier 5
	{ "YX51", SKILLID_HolyConviction, "MN100 Holy_Conviction" },
	{ "YX52", SKILLID_WhirlWind, "MN103 Divine_Inquisiton" },
	{ "YX53", SKILLID_GloriousShield, "MN106 Glorious_Shield" },
	{ "YX54", SKILLID_DivineCross, "MN110 Divine_Cross" },

	//魔枪手 - Tier 1
	{ "美杜莎盾", SKILLID_ShieldStrike, "MA10 S_Strike" },
	{ "含沙射影", SKILLID_Farina, "MA12 Farina" },
	{ "魔力神枪", SKILLID_ThrowingMaster, "MA14 T_Mastery" },
	{ "精神之枪", SKILLID_BiggerSpear, "MA17 V_Spear" },

	//Tier 2
	{ "追命劲风", SKILLID_Windy, "MA20 Windy", "At2_WINDY.tga" },
	{ "螺旋飞标", SKILLID_TwistJavelin, "MA23 T_Javelin" },
	{ "灵魂吞噬", SKILLID_SoulSucker, "MA26 S_Sucker" },
	{ "火焰烈枪", SKILLID_FireJavelin, "MA30 F_Javelin" },

	//Tier 3
	{ "追风之枪", SKILLID_SplitJavelin, "MA40 Split_Javelin" },
	{ "战栗咆哮", SKILLID_TriumphofJavelin, "MA43 T_Of_Valhalla", "At3_T_O_VALHALLA.tga" },
	{ "光猎之枪", SKILLID_LightningJavelin, "MA46 L_Javelin" },
	{ "暴风狂标", SKILLID_StormJavelin, "MA50 Storm_Javelin" },

	//Tier 4
	{ "哈拉之光", SKILLID_HallofValhalla, "MA60 H_O_Valhalla", "At4_H_O_VALHALLA.tga" },
	{ "十字怒刺", SKILLID_ExtremeRage, "MA63 X_Rage" },
	{ "霜冻标枪", SKILLID_FrostJavelin, "MA66 F_Javelin", "At4_F_JAVELIN.tga" },
	{ "复仇连击", SKILLID_Vengeance, "MA70 Vengeance" },

	//Tier 5
	{ "MQ51", SKILLID_SummonTiger, "MA100 S_Tiger" },
	{ "MQ52", SKILLID_GoldenApple, "MA103 Golden_Apple" },
	{ "MQ53", SKILLID_PlagueJavelin, "MA106 Plague_Javelin" },
	{ "MQ54", SKILLID_ComboJavelin, "MA110 Combo_Javelin" },

	//祭司 - Tier 1
	{ "治愈之术", SKILLID_Healing, "MP10 Healing" },
	{ "圣光攻击", SKILLID_HolyBolt, "MP12 HolyBolt" },
	{ "光芒四射", SKILLID_MultiSpark, "MP14 M_Spark" },
	{ "意念之术", SKILLID_HolyMind, "MP17 HolyMind" },

	//Tier 2
	{ "曙光耀灵", SKILLID_Meditation, "MP20 Meditation" },
	{ "神之雷电", SKILLID_DivineLightning, "MP23 D_Lightning" },
	{ "灵魔之御", SKILLID_HolyReflection, "MP26 H_Reflection", "Pr2_H_REFLECTION.tga" },
	{ "圣洁之光", SKILLID_GrandHealing, "MP30 G_Healing" },

	//Tier 3
	{ "火影双重", SKILLID_VigorBall, "MP40 V_Ball" },
	{ "起死回生", SKILLID_Resurrection, "MP43 Resurrection" },
	{ "死亡凋零", SKILLID_Extinction, "MP46 Extinction" },
	{ "神圣之光", SKILLID_VirtualLife, "MP50 V_Life", "Pr3_V_LIFE.tga" },

	//Tier 4
	{ "冰霜长矛", SKILLID_GlacialSpike, "MP60 G_Spike" },
	{ "再生领域", SKILLID_RegenerationField, "MP63 R_Field", "Pr4_R_FIELD.tga" },
	{ "环形闪电", SKILLID_ChainLightning, "MP66 C_Lightning" },
	{ "召唤符咒", SKILLID_SummonMuspell, "MP70 S_Muspell", "Pr4_S_MUSPELL.tga" },

	//Tier 5
	{ "½ºÇÇ¸´ ÀÓÆÑÆ®", SKILLID_IceElemental, "MP100 Ice_Elemental" },
	{ "ÇÇ¾î½Ì ¾ÆÀÌ½º", SKILLID_IceMeteorite, "MP103 Ice_Meteorite" },
	{ "¼­¸Õ ¶ó¹Ì¿¤", SKILLID_HeavenlyLight, "MP106 Heavenly_Light" },
	{ "ºí·¹½Ì Å©¸®½´³ª", SKILLID_Consecration, "MP110 Consecration" },

	//魔法师 - Tier 1
	{ "魔力转化", SKILLID_Agony, "MM10 Agony" },
	{ "火箭之术", SKILLID_FireBolt, "MM12 FireBolt" },
	{ "颠峰之术", SKILLID_Zenith, "MM14 Zenith", "Mg1_ZENITH.tga" },
	{ "火球之术", SKILLID_FireBall, "MM17 FireBall" },

	//Tier 2
	{ "控制意念", SKILLID_MentalMastery, "MM20 M_Mastery" },
	{ "海龙长啸", SKILLID_Watornado, "MM23 Watornado" },
	{ "神通加持", SKILLID_EnchantWeapon, "MM26 E_Weapon", "Mg2_E_WEAPON.tga" },
	{ "冥亡之光", SKILLID_DeathRay, "MM30 D_Ray" },

	//Tier 3
	{ "魔法守护", SKILLID_EnergyShield, "MM40 E_Shield", "Mg3_E_SHIELD.tga" },
	{ "地动山摇", SKILLID_Diastrophism, "MM43 Diastrophism" },
	{ "魂之召唤", SKILLID_SpiritElemental, "MM46 S_Elemental", "Mg3_S_ELEMENTAL.tga" },
	{ "刀光剑影", SKILLID_DancingSword, "MM50 D_Sword", "Mg3_D_SWORD.tga" },

	//Tier 4
	{ "火焰元素", SKILLID_FireElemental, "MM60 F_Elemental", "Mg4_F_ELEMENTAL.tga" },
	{ "火焰波动", SKILLID_FlameWave, "MM63 F_Wave" },
	{ "空间扭曲", SKILLID_Distortion, "MM66 Distortion", "Mg4_DISTORTION.tga" },
	{ "陨石召唤", SKILLID_Meteorite, "MM70 Meteo" },

	//Tier 5
	{ "ÇÁ¸®¸¶ ÀÌ±×´Ï½º", SKILLID_WizardTrance, "MM100 WizardTrance" },
	{ "½Ç¶óÇË", SKILLID_StoneSkin, "MM103 Stone_Skin" },
	{ "ºñ½º Å×´©½º", SKILLID_RedRay, "MM106 RedRay" },
	{ "½áµå ¾Æ´Ï¸¶", SKILLID_Cataclysm, "MM110 Cataclysm" },

	//萨满 - Tier 1
	{ "´ÙÅ© º¼Æ®", SKILLID_DarkBolt, "MS10 Darkbolt" },
	{ "´ÙÅ© ¿þÀÌºê", SKILLID_DarkWave, "MS12 Darkwave" },
	{ "Ä¿½º ·¹ÀÌÁö", SKILLID_Inertia, "MS14 Curselazy" },
	{ "ÀÌ³Ê ÇÇ½º", SKILLID_InnerPeace, "MS17 I_peace" },

	//Tier 2
	{ "½ºÇÇ¸®Ãò¾ó", SKILLID_SpiritualFlare, "MS20 S_Flare" },
	{ "¼Ò¿ï ¸Å³ÊÅ¬", SKILLID_SpiritualManacle, "MS23 S_Manacle" },
	{ "Ã¼ÀÌ½Ì ÇåÆ®", SKILLID_ChasingHunt, "MS26 C_Hunt" },
	{ "¾îµåº¥Æ®:¹Ì°¥", SKILLID_AdventMigal, "MS30 A_Migal", "Sh2_A_MIGAL.tga" },

	//Tier 3
	{ "·¹ÀÎ¸ÞÀÌÄ¿", SKILLID_Rainmaker, "MS40 R_Maker", "Sh3_R_MAKER.tga" },
	{ "·£µå ¿Àºê °í½ºÆ®", SKILLID_PhantomCall, "MS43 L_Ghost" },
	{ "È¥Æ®", SKILLID_Haunt, "MS46 Haunt" },
	{ "½ºÅ©·¡Ä¡", SKILLID_Scratch, "MS50 Scratch" },

	//Tier 4
	{ "¸®ÄÝ ºí·", SKILLID_RecallHestian, "MS60 R_Knight", "Sh4_R_KNIGHT.tga" },
	{ "ÀúÁö¸ÕÆ®", SKILLID_Judgement, "MS63 Judge" },
	{ "¾îµåº¥Æ®:", SKILLID_AdventMidranda, "MS66 A_Midranda", "Sh4_A_MIDRANDA.tga" },
	{ "¸ð´× ¿Àºê ÇÁ·¹ÀÌ", SKILLID_MourningPray, "MS70 M_pray" },

	//Tier 5
	{ "Å©¸®µå", SKILLID_Creed, "MS80 Creed", "Sh5_CREED.tga" },
	{ "ÇÁ·¹½º ¿Àºê ", SKILLID_PressDeity, "MS83 P_Deity" },
	{ "°í½ºÆ¼ ³×ÀÏ", SKILLID_PhantomNail, "MS86 G_Nail" },
	{ "ÇÏÀÌ ¸®Á¦³×", SKILLID_OccultLife, "MS90 H_Regene" },

	//Other Skills
	{ "Èí¼ö·Â »ó½Â", SKILLID_AbsorptionOfGlory, "", "wa1-1.tga" },
	{ "°ø°Ý·Â »ó½Â", SKILLID_PowerSiege, "", "wa1-3.tga" },
	{ "È¸ÇÇÀ² »ó½Â", SKILLID_EvasionAdaption, "", "wa1-2.tga" },
	{ "¾ÆÅ¸³ª½Ã¾Æ", SKILLID_Atanasia, "", "S_Ath.tga" },
	{ "µ¥µé¸® ¿¡Áö", SKILLID_DeadlyEdge, "", "S_Dea.tga" },
	{ "¾îº£ÀÏ ¿À", SKILLID_AvailofEvasion, "", "S_Eva.tga" },
	{ "µðÆÄÀÌ¾ð½º ½ºÅæ", SKILLID_DefianceStoneA, "", "F_C_M.tga" },
	{ "µðÆÄÀÌ¾ð½º ½ºÅæ", SKILLID_DefianceStoneB, "", "I_C_M.tga" },
	{ "µðÆÄÀÌ¾ð½º ½ºÅæ", SKILLID_DefianceStoneC, "", "L_C_M.tga" },
	{ "¸¶ÀÌÆ® ½ºÅæ", SKILLID_FighterStone, "", "Ft_R.tga" },
	{ "¸¶ÀÌÆ® ½ºÅæ", SKILLID_MechanicianStone, "", "Mc_R.tga" },
	{ "¸¶ÀÌÆ® ½ºÅæ", SKILLID_PikemanStone, "", "Pk_R.tga" },
	{ "¸¶ÀÌÆ® ½ºÅæ", SKILLID_ArcherStone, "", "Ac_R.tga" },
	{ "¸¶ÀÌÆ® ½ºÅæ", SKILLID_KnightStone, "", "Kt_R.tga" },
	{ "¸¶ÀÌÆ® ½ºÅæ", SKILLID_AtalantaStone, "", "At_R.tga" },
	{ "¸¶ÀÌÆ® ½ºÅæ", SKILLID_PriestessStone, "", "Mg_R.tga" },
	{ "¸¶ÀÌÆ® ½ºÅæ", SKILLID_MagicianStone, "", "Pt_R.tga" },
	{ "¸¶ÀÌÆ® ½ºÅæ", SKILLID_ShamanStone, "", "As_R.tga" },
	{ "¸¶ÀÌÆ® ½ºÅæ", SKILLID_MightStone, "", "Sh_R.tga" },
	{ "ÀÌÅÍ³Î ¶óÀÌÇÁ", SKILLID_EternalLife, "", "S_Ath.tga" },
	{ "ÆäÀÌÆ² ¿¡Áö", SKILLID_FatalEdge, "", "S_Dea.tga" },
	{ "¾î¹öÆ® ½ºÅ©·Ñ", SKILLID_AvertScroll, "", "S_Eva.tga" },
	{ "¸®º£¶ó", SKILLID_Rivera, "", "S_Lib.tga" },
	{ "»ý¸í·Â ºÎ½ºÅÍ", 0x09010007, "", "Booster_01.tga" },
	{ "±â·Â ºÎ½ºÅÍ", 0x09010008, "", "Booster_02.tga" },
	{ "±Ù·Â ºÎ½ºÅÍ", 0x09010009, "", "Booster_03.tga" },
	{ "¸ÖÆ¼ ºÎ½ºÅÍ", 0x09010030, "", "Booster_04.tga" },
};

const SkillBase saSkillBase[MAX_SKILLS] =
{
	{ "极光护盾", "在使用的盾上附以极光，提高格挡能力。",
	10, 34, 2, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_Shield, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00522DB0, SKILLID_ExtremeShield, SKILLTYPE_Right, 0x009926E8, 0 },

	{ "机械炸弹", "扔出机械手榴弹，打击一定距离内的敌人。",
	12, 28, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00522F70, SKILLID_MechanicBomb, SKILLTYPE_All, 0x00992788, 0 },

	{ "毒属性", "增加对毒系攻击的抗御能力。",
	14, 0, 0, 0, 0,
	{ 0, 0, 0 },{ ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00523220, SKILLID_PoisonAttribute, SKILLTYPE_Passive, 0x00000000, 0 },

	{ "灵光护体", "汲取自然之灵气，暂时增加吸收，起到减少物理损伤的作用。",
	17, 30, 2, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00523090, SKILLID_PhysicalAbsorb, SKILLTYPE_Right, 0x00992828, 0 },

	{ "破碎巨击", "将自身力量注入武器来造成对敌人更大的伤害。",
	20, 38, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Claw, ITEMTYPE_Hammer, ITEMTYPE_Scythe, ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00523240, SKILLID_GreatSmash, SKILLTYPE_All, 0x009928C8, 0 },

	{ "改良专家", "对持有的武器进行优化，提高武器性能。",
	23, 41, 2, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Claw, ITEMTYPE_Hammer, ITEMTYPE_Scythe, ITEMTYPE_Sword, ITEMTYPE_Bow, ITEMTYPE_Javelin, ITEMTYPE_None },
	0x00523390, SKILLID_Maximize, SKILLTYPE_Right, 0x00992940, 0 },

	{ "灵光飞扬", "一定时间内提高远程武器攻速和攻击。",
	26, 42, 2, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_Bow, ITEMTYPE_Javelin, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00523510, SKILLID_Automation, SKILLTYPE_Right, 0x009929E0, 0 },

	{ "火花电场", "用强力的电光攻击附近的敌人。",
	30, 40, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Claw, ITEMTYPE_Scythe, ITEMTYPE_Sword, ITEMTYPE_Hammer, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005236C0, SKILLID_Spark, SKILLTYPE_All, 0x00992A80, 0 },

	{ "金属重甲", "一定时间内提高机械兵特效盔甲的防御。",
	40, 48, 2, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00524FB0, SKILLID_MetalArmor, SKILLTYPE_Right, 0x00992AF8, 0 },

	{ "星光灭绝", "利用精湛的连击加强攻击。",
	43, 44, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Claw, ITEMTYPE_Scythe, ITEMTYPE_Sword, ITEMTYPE_Hammer, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525000, SKILLID_GrandSmash, SKILLTYPE_All, 0x00992B70, 0 },

	{ "优化专家", "将机械兵特效武器的威力发挥至最佳效果。",
	46, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525020, SKILLID_MechanicWeaponMastery, SKILLTYPE_Passive, 0x00000000, 0 },

	{ "防御电波", "利用强大的电击波形成一个保护力场，格挡时对敌人造成反弹伤害。",
	50, 52, 2, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_Shield, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525030, SKILLID_SparkShield, SKILLTYPE_Right, 0x00992C38, 0 },

	{ "雷霆冲击", "连锁电击造成多次伤害。",
	60, 55, 2, 70, 3,
	{ 1, 0, 0 }, { ITEMTYPE_Claw, ITEMTYPE_Hammer, ITEMTYPE_Scythe, ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005252A0, SKILLID_Impulsion, SKILLTYPE_All, 0x00992D00, 0 },

	{ "威慑怒吼", "通过强力的吼叫来聚集怪物并提升吸收。",
	63, 65, 2, 128, -1,
	{ 1, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005252C0, SKILLID_Compulsion, SKILLTYPE_Right, 0x00992DA0, 0 },

	{ "磁性球体", "召唤磁球攻击敌人。",
	66, 71, 2, 128, -1,
	{ 1, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525300, SKILLID_MagneticSphere, SKILLTYPE_Right, 0x00992E90, 0 },

	{ "机械傀儡", "通过召唤机械傀儡来协助战斗。",
	70, 71, 2, 169, 0,
	{ 1, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525340, SKILLID_MetalGolem, SKILLTYPE_Right, 0x00992F80, 0 },
	//机械五转
	{ "破裂", "强力单体攻击",
	80, 71, 2, 180, 4,
	{ 2, 0, 0 },{ ITEMTYPE_Axe, ITEMTYPE_Claw, ITEMTYPE_Hammer, ITEMTYPE_Scythe, ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525670, SKILLID_Rupture, SKILLTYPE_All, 0x00993110, 0 },

	{ "磁暴释放", "释放磁球造成范围伤害",
	83, 95, 2, 128, -1,
	{ 2, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Claw, ITEMTYPE_Hammer, ITEMTYPE_Scythe, ITEMTYPE_Sword, ITEMTYPE_Bow, ITEMTYPE_Javelin, ITEMTYPE_None },
	0x00525690, SKILLID_MagneticDischarge, SKILLTYPE_Right, 0x00993160, 0 },

	{ "硬化之盾", "牺牲攻击力强化盾牌",
	86, 90, 2, 203, 0,
	{ 2, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Claw, ITEMTYPE_Hammer, ITEMTYPE_Scythe, ITEMTYPE_Sword, ITEMTYPE_Bow, ITEMTYPE_Javelin, ITEMTYPE_None },
	0x00525630, SKILLID_HardeningShield, SKILLTYPE_Right, 0x00993098, 0 },

	{ "寄生箭", "射出含寄生虫的箭矢",
	90, 65, 2, 93, 3,
	{ 2, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Claw, ITEMTYPE_Hammer, ITEMTYPE_Scythe, ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525610, SKILLID_ParasitShot, SKILLTYPE_Right, 0x00992FA8, 0 },
	//武士
	{ "格斗之术", "提高战士近距离的格斗搏击能力。",
	10, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Claw, ITEMTYPE_Hammer, ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005237E0, SKILLID_MeleeMastery, SKILLTYPE_Passive, 0x00000000, 0 },

	{ "炎之抗御", "增加对火系魔法攻击的抗御能力。",
	12, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00523800, SKILLID_FireAttribute, SKILLTYPE_Passive, 0x00000000, 0 },

	{ "绝地暴走", "狂暴状态下提升伤害但损失生命值。",
	14, 35, 2, 73, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Claw, ITEMTYPE_Hammer, ITEMTYPE_Scythe, ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00523820, SKILLID_Raving, SKILLTYPE_All, 0x009952F8, 0 },

	{ "精准之击", "暂时性提高攻击的命中，更有效地打击敌人。",
	17, 37, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Claw, ITEMTYPE_Scythe, ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005239C0, SKILLID_Impact, SKILLTYPE_All, 0x00995370, 0 },

	{ "威力冲击", "三次连击造成巨额伤害。",
	20, 39, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Claw, ITEMTYPE_Scythe, ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00523B10, SKILLID_TripleImpact, SKILLTYPE_All, 0x009953E8, 0 },

	{ "致命回旋", "运用强力的回旋给敌人致命的一击。",
	23, 41, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00523C60, SKILLID_BrutalSwing, SKILLTYPE_All, 0x00995460, 0 },

	{ "极地怒吼", "一声振耳欲聋的吼暂时地使周围的敌人处于混乱之中。",
	26, 39, 2, 129, 4,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00523DB0, SKILLID_Roar, SKILLTYPE_Right, 0x009954D8, 0 },

	{ "战神之怒", "借助英雄的伟大力量从空中重击造成范围火伤害。",
	30, 45, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Hammer, ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00523ED0, SKILLID_RageofZecram, SKILLTYPE_All, 0x00995528, 0 },

	{ "会心一击", "发挥高度的集中力，一定时间内提升命中。",
	40, 53, 2, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525080, SKILLID_Concentration, SKILLTYPE_Right, 0x009955A0, 0 },

	{ "复仇连击", "利用复仇的力量连续打击敌人。",
	43, 48, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005250D0, SKILLID_AvengingCrash, SKILLTYPE_All, 0x00995618, 0 },

	{ "刺杀之斧", "熟练掌握斧头的使用，一定时间内提升攻击速度。",
	46, 53, 2, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005250F0, SKILLID_SwiftAxe, SKILLTYPE_Right, 0x00995690, 0 },

	{ "挫骨扬灰", "古代勇者曾用来对付恶魔的技能，空中跳跃造成粉碎伤害。",
	50, 54, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525140, SKILLID_BoneCrash, SKILLTYPE_All, 0x00995708, 0 },

	{ "破坏连击", "使对方遭受强烈的攻击。",
	60, 45, 2, 180, 4,
	{ 1, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525390, SKILLID_Destroyer, SKILLTYPE_All, 0x00995780, 0 },

	{ "狂暴战士", "使武士进入狂暴化状态，显著地提升攻击，但同时会显著降低吸收。",
	63, 60, 2, 128, -1,
	{ 1, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005253B0, SKILLID_Berserker, SKILLTYPE_Right, 0x00995820, 0 },

	{ "飓风袭击", "运用强烈的旋转攻击敌人。",
	66, 55, 2, 70, 3,
	{ 1, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525400, SKILLID_CycloneStrike, SKILLTYPE_All, 0x00995910, 0 },

	{ "健康专家", "永久地增加生命上限。",
	70, 0, 0, 0, 0,
	{ 1, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525420, SKILLID_BoostHealth, SKILLTYPE_Passive, 0x00000000, 0 },

	{ "生存本能", "永久提升生命恢复能力",
	80, 0, 0, 0, 0,
	{ 2, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005256F0, SKILLID_SurvivalInstinct, SKILLTYPE_Passive, 0, 0 },

	{ "地震冲击", "范围震动伤害",
	83, 48, 2, 70, 3,
	{ 2, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005256D0, SKILLID_SeismicImpact, SKILLTYPE_Right, 0x00995960, 0 },

	{ "泽克拉姆之力", "武器附火属性造成持续伤害",
	86, 70, 2, 203, 0,
	{ 2, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Hammer, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525710, SKILLID_RuthlessofZecram, SKILLTYPE_Right, 0x00995A78, 0 },

	{ "狂暴旋风", "旋转攻击范围敌人",
	90, 93, 2, 200, 0,
	{ 2, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525730, SKILLID_WhirlwindFS01, SKILLTYPE_Right, 0x00995B68, 0 },
	//枪兵
	{ "龙卷枪风", "镰刀旋转造成范围伤害，并能将敌人震退一段距离。",
	10, 27, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Scythe, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00524020, SKILLID_PikeWind, SKILLTYPE_Right, 0x00997558, 0 },

	{ "寒之抗御", "永久提升冰属性抗性。",
	12, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00524160, SKILLID_IceAttribute, SKILLTYPE_Passive, 0x00000000, 0 },

	{ "致命打击", "打击敌人的要害，提高必杀。",
	14, 31, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Scythe, ITEMTYPE_Hammer, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00524180, SKILLID_CriticalHit, SKILLTYPE_All, 0x009975D0, 0 },

	{ "霹雳一击", "高高跃起，猛烈打击敌人。",
	17, 34, 2, 112, 4,
	{ 0, 0, 0 }, { ITEMTYPE_Scythe, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005242A0, SKILLID_JumpingCrash, SKILLTYPE_All, 0x009975F8, 0 },

	{ "大地之枪", "结合冰和气的力量攻击周围的敌人。",
	20, 36, 2, 115, 4,
	{ 0, 0, 0 }, { ITEMTYPE_Scythe, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005243F0, SKILLID_GroundPike, SKILLTYPE_Right, 0x009976E8, 0 },

	{ "枪之飓风", "利用强力旋转攻击附近的敌人。",
	23, 38, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Scythe, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00524530, SKILLID_Tornado, SKILLTYPE_All, 0x009977B0, 0 },

	{ "格挡专家", "永久性增加使用枪系武器交战时的格挡能力。",
	26, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_Hammer, ITEMTYPE_Scythe, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00524670, SKILLID_WeaponDefenseMastery, SKILLTYPE_Passive, 0x00000000, 0 },

	{ "无限力枪", "结合武器和灵力施展毁灭一击。",
	30, 42, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Scythe, ITEMTYPE_Hammer, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00524690, SKILLID_Expansion, SKILLTYPE_All, 0x00997850, 0 },

	{ "灵蛇标枪", "利用强大的灵力投出致命的标枪。",
	40, 50, 2, 124, 0,
	{ 0, 0, 0 }, { ITEMTYPE_Scythe, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525160, SKILLID_VenomSpear, SKILLTYPE_Right, 0x00997940, 0 },

	{ "隐身刺杀", "使你在有限的时间内隐身，隐身后首次攻击增加刺杀伤害。",
	43, 53, 2, 203, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525180, SKILLID_Vanish, SKILLTYPE_Right, 0x00997A08, 0 },

	{ "致命掌控", "永久地增加必杀。",
	46, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_Scythe, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005251C0, SKILLID_CriticalMastery, SKILLTYPE_Passive, 0x00000000, 0 },

	{ "链枪骑兵", "使出致命三连击以打击敌人。",
	50, 51, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Scythe, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005251D0, SKILLID_ChainLance, SKILLTYPE_All, 0x00997A80, 0 },

	{ "暗杀之眼", "针对指定怪物或敌人附加恶性状态，降低目标必杀，提升自身必杀伤害。",
	60, 61, 2, 135, 4,
	{ 1, 0, 0 }, { ITEMTYPE_Scythe, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525430, SKILLID_AssassinsEye, SKILLTYPE_All, 0x00997B20, 0 },

	{ "转换打击", "聚集力量的连续攻击。",
	63, 75, 2, 180, 4,
	{ 1, 0, 0 }, { ITEMTYPE_Scythe, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525450, SKILLID_ChargingStrike, SKILLTYPE_All, 0x00997BC0, 0 },

	{ "影遁躲避", "使你的身体看起来不那么清楚，提升躲避。",
	66, 71, 2, 128, -1,
	{ 1, 0, 0 }, { ITEMTYPE_Scythe, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525470, SKILLID_Vague, SKILLTYPE_Right, 0x00997C38, 0 },

	{ "影子大师", "制造一些残像依次对一个怪物施放强力的伤害。",
	70, 51, 2, 180, 4,
	{ 1, 0, 0 }, { ITEMTYPE_Scythe, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005254B0, SKILLID_ShadowMaster, SKILLTYPE_All, 0x00997CD8, 0 },
	//五转
	{ "矛之环", "范围恐惧并造成伤害",
	80, 75, 2, 180, 0,
	{ 2, 0, 0 }, { ITEMTYPE_Claw, ITEMTYPE_Scythe, ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525570, SKILLID_RingofSpears, SKILLTYPE_Right, 0x00997D00, 0 },

	{ "最后一击", "跳跃造成高额伤害",
	83, 70, 2, 203, 0,
	{ 2, 0, 0 }, { ITEMTYPE_Scythe, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525590, SKILLID_LastBreath, SKILLTYPE_Right, 0x00997D50, 0 },

	{ "死亡之主", "暗影之力造成范围伤害",
	86, 93, 2, 180, 4,
	{ 2, 0, 0 }, { ITEMTYPE_Scythe, ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005255B0, SKILLID_DeathMaster, SKILLTYPE_Right, 0x00997E18, 0 },

	{ "罪恶旋转", "旋转造成持续伤害",
	90, 81, 2, 100, 0,
	{ 2, 0, 0 }, { ITEMTYPE_Scythe, ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005255F0, SKILLID_Twister, SKILLTYPE_Right, 0x00997EE0, 0 },
	//弓箭手
	{ "侦察之鹰", "放出一只鹰，开阔视野，提高命中。",
	10, 25, 2, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005247E0, SKILLID_ScoutHawk, SKILLTYPE_Right, 0x00993C00, 0 },

	{ "强力之箭", "弓类武器永久提升攻击力。",
	12, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_Bow, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00524920, SKILLID_ShootingMastery, SKILLTYPE_Passive, 0x00000000, 0 },

	{ "疾风之箭", "射出如风般飞快的箭，提高攻击和攻速。",
	14, 25, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Bow, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00524940, SKILLID_WindArrow, SKILLTYPE_All, 0x00993CA0, 0 },

	{ "夺命之箭", "增加弓箭攻击的准确性，提高命中和攻击。",
	17, 29, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Bow, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00524A80, SKILLID_PerfectAim, SKILLTYPE_All, 0x00993D40, 0 },

	{ "射神之眼", "像传说中的射手戴奥妮一样提高视力，增加武器命中。",
	20, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_Bow, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00524BC0, SKILLID_DionsEye, SKILLTYPE_Passive, 0x00000000, 0 },

	{ "灵魂之鹰", "召唤攻击型猎鹰。",
	23, 36, 2, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00524BE0, SKILLID_Falcon, SKILLTYPE_Right, 0x00993E08, 0 },

	{ "狂暴火箭", "向一个指定的目标区域射出箭雨。",
	26, 38, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Bow, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00524D30, SKILLID_ArrowofRage, SKILLTYPE_All, 0x00993EA8, 0 },

	{ "雪崩之箭", "多段箭矢造成巨额伤害。",
	30, 41, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Bow, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00524E70, SKILLID_Avalanche, SKILLTYPE_All, 0x00993F48, 0 },

	{ "元素攻击", "使用元素性攻击持续地攻击敌人。",
	40, 43, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Bow, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005251F0, SKILLID_ElementalShot, SKILLTYPE_All, 0x00994060, 0 },

	{ "黄金猎鹰", "召唤一只攻击力以及生命力强大的猎鹰来协助攻击。",
	43, 52, 2, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525210, SKILLID_GoldenFalcon, SKILLTYPE_Right, 0x00994100, 0 },

	{ "致命射击", "连续2次使用爆炸性弓箭，攻击周围的怪物。",
	46, 46, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Bow, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525260, SKILLID_BombShot, SKILLTYPE_All, 0x009941F0, 0 },

	{ "穿透之箭", "准确而强力的发射，贯穿敌人的身体，给予致命的攻击。",
	50, 48, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Bow, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525280, SKILLID_Perforation, SKILLTYPE_All, 0x00994268, 0 },

	{ "召唤魔狼", "召唤出一只魔狼来协助战斗",
	60, 58, 2, 169, 0,
	{ 1, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005254D0, SKILLID_RecallWolverine, SKILLTYPE_Right, 0x00994380, 0 },

	{ "躲避大师", "有效地避免一次敌人的攻击。",
	63, 0, 0, 0, 0,
	{ 1, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525520, SKILLID_EvasionMastery, SKILLTYPE_Passive, 0x00000000, 0 },

	{ "火翼射击", "通过火凤凰的力量得到强大的攻击力提升。",
	66, 43, 2, 70, 3,
	{ 1, 0, 0 }, { ITEMTYPE_Bow, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525530, SKILLID_PhoenixShot, SKILLTYPE_All, 0x00994420, 0 },

	{ "自然之力", "它使你和自然天地融为一体，利用自然改善你的能力。",
	70, 56, 2, 128, -1,
	{ 1, 0, 0 }, { ITEMTYPE_Bow, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525550, SKILLID_ForceofNature, SKILLTYPE_Right, 0x00994510, 0 },
	//弓箭手5转
	{ "致命视野", "远距离致命一击",
	80, 52, 2, 203, 0,
	{ 2, 0, 0 }, { ITEMTYPE_Bow, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005257A0, SKILLID_LethalSight, SKILLTYPE_Right, 0x009945D8, 0 },

	{ "狂风箭", "风属性穿透箭",
	83, 52, 2, 82, 2,
	{ 2, 0, 0 }, { ITEMTYPE_Bow, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525780, SKILLID_FierceWind, SKILLTYPE_Right, 0x00994538, 0 },

	{ "绽放之莲", "自然之力束缚敌人",
	86, 57, 2, 87, 3,
	{ 2, 0, 0 }, { ITEMTYPE_Bow, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005257C0, SKILLID_EntalingRoots, SKILLTYPE_Right, 0x00994678, 0 },

	{ "射手座箭雨", "持续箭矢轰炸",
	90, 95, 2, 100, 0,
	{ 2, 0, 0 }, { ITEMTYPE_Bow, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005257E0, SKILLID_Bombardment, SKILLTYPE_Right, 0x009946F0, 0 },
	//刺客
	{ "突袭刺击", "快速移动到敌人面前造成致命的损伤。",
	10, 22, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Dagger, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525800, SKILLID_Stinger, SKILLTYPE_All, 0x00997F58, 0 },

	{ "侧翻闪击", "身体侧翻给予敌人两次损伤。",
	12, 27, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Dagger, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525820, SKILLID_RunningHit, SKILLTYPE_All, 0x00997FD0, 0 },

	{ "精通匕首", "增加武器攻击。",
	14, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_Dagger, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525840, SKILLID_DualWieldMastery, SKILLTYPE_Passive, 0x00000000, 0 },

	{ "弱点牵制", "减少敌人攻击。",
	17, 37, 2, 159, 0,
	{ 0, 0, 0 }, { ITEMTYPE_Dagger, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525850, SKILLID_Wisp, SKILLTYPE_All, 0x00998048, 0 },

	{ "毒牙连击", "用抹着毒的武器朝敌人快速二连击。",
	20, 38, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Dagger, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525870, SKILLID_VenomThorn, SKILLTYPE_All, 0x009980C0, 0 },

	{ "天使之翼", "赋予队友刺客的敏捷,提升躲避。",
	23, 41, 2, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_Dagger, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525890, SKILLID_Alas, SKILLTYPE_Right, 0x00998110, 0 },

	{ "灵魂震撼", "使一定范围内的敌人气绝陷入混乱。",
	26, 39, 2, 129, 4,
	{ 0, 0, 0 }, { ITEMTYPE_Dagger, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005258D0, SKILLID_SoulShock, SKILLTYPE_Right, 0x00998188, 0 },

	{ "刺杀大师", "永久增加刺客的命中与格挡。",
	30, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005258F0, SKILLID_AttackMastery, SKILLTYPE_Passive, 0x00000000, 0 },

	{ "飞舞之剑", "给敌人带去连续的敏锐的损伤。",
	40, 45, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Dagger, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525900, SKILLID_SoreBlade, SKILLTYPE_All, 0x00998250, 0 },

	{ "旋风连击", "快速跳起给予敌人致命的损伤。",
	43, 48, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Dagger, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525920, SKILLID_GustSlash, SKILLTYPE_All, 0x009982A0, 0 },

	{ "敏捷大师", "以高度的集中力提高攻击速度。",
	46, 48, 2, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_Dagger, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525940, SKILLID_Inpes, SKILLTYPE_Right, 0x009982F0, 0 },

	{ "隐匿刺杀", "隐藏自己的影子,给予敌人强力的损伤。",
	50, 53, 2, 203, 0,
	{ 0, 0, 0 }, { ITEMTYPE_Dagger, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525980, SKILLID_Blind, SKILLTYPE_Right, 0x00998368, 0 },

	{ "霜冻之刃", "敏捷的移动身体让敌人造成连续的损伤。",
	60, 53, 2, 140, 2,
	{ 1, 0, 0 }, { ITEMTYPE_Dagger, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005259C0, SKILLID_FrostWind, SKILLTYPE_All, 0x00998408, 0 },

	{ "致命精通", "永久增加必杀。",
	63, 0, 0, 0, 0,
	{ 1, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005259E0, SKILLID_FatalMastery, SKILLTYPE_Passive, 0x00000000, 0 },

	{ "瘟疫之刃", "对周围的敌人带去毒属性攻击。",
	66, 55, 2, 124, 0,
	{ 1, 0, 0 }, { ITEMTYPE_Dagger, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005259F0, SKILLID_Polluted, SKILLTYPE_Right, 0x00998480, 0 },

	{ "忍者闪击", "进入你的影子形态，猛烈攻击敌人。",
	70, 51, 2, 180, 4,
	{ 1, 0, 0 }, { ITEMTYPE_Dagger, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525A10, SKILLID_NinjaShadow, SKILLTYPE_All, 0x00998570, 0 },

	{ "暗炎领域", "快速传送至敌人身边",
	80, 65, 2, 180, 4,
	{ 2, 0, 0 }, { ITEMTYPE_Dagger, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525A30, SKILLID_ShadowBlink, SKILLTYPE_Right, 0x009985C0, 0 },

	{ "新月之刃", "暴击率提升并附加毒伤",
	83, 71, 2, 135, 0,
	{ 2, 0, 0 }, { ITEMTYPE_Dagger, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525A50, SKILLID_KissViper, SKILLTYPE_Right, 0x009986B0, 0 },

	{ "猛龙摆尾", "强力踢击造成伤害",
	86, 90, 2, 70, 3,
	{ 2, 0, 0 }, { ITEMTYPE_Dagger, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525A70, SKILLID_ViolentStub, SKILLTYPE_Right, 0x00998700, 0 },

	{ "风暴之刃", "范围暗影伤害",
	90, 95, 2, 160, 0,
	{ 2, 0, 0 }, { ITEMTYPE_Dagger, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00525A90, SKILLID_ShadowStorm, SKILLTYPE_Right, 0x00998750, 0 },

	{ "剑气爆发", "发出剑气攻击敌人。",
	10, 22, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521320, SKILLID_SwordBlast, SKILLTYPE_All, 0x00993200, 0 },

	{ "圣光护体",			"身体变为圣属性，减免亡灵系的敌人的攻击伤害。",
	12, 28, 2, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521340, SKILLID_HolyBody, SKILLTYPE_Right, 0x009932A0, 0 },

	{ "超能体训",		"通过死亡特训永久性地增加耐力。",
	14, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521380, SKILLID_PhysicalTraining, SKILLTYPE_Passive, 0x00000000, 0 },

	{ "双重爆击",			"连续发出两下重击。",
	17, 35, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Claw, ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521390, SKILLID_DoubleCrash, SKILLTYPE_All, 0x00993340, 0 },

	{ "神圣勇气",			"增加对亡灵系的伤害。",
	20, 36, 2, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521620, SKILLID_HolyValor, SKILLTYPE_Right, 0x00993408, 0 },

	{ "狂躁挥舞",			"打击有效半径内的所有敌人。",
	23, 38, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Scythe, ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521660, SKILLID_Brandish, SKILLTYPE_All, 0x00993480, 0 },

	{ "强龙啸天",			"用强大的力量和精神力刺杀敌人。",
	26, 41, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521680, SKILLID_Piercing, SKILLTYPE_All, 0x009934F8, 0 },

	{ "天佑神铠",	"一定时间内提高的吸收、防御。",
	30, 44, 2, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005216A0, SKILLID_DrasticSpirit, SKILLTYPE_Right, 0x00993570, 0 },

	{ "刀剑专精",	"永久地提升使用剑的攻击力。",
	40, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521890, SKILLID_SwordMastery, SKILLTYPE_Passive, 0x00000000, 0 },

	{ "圣灵之吸",	"利用神圣的盾牌，格挡时将亡灵族的攻击转换为生命。",
	43, 46, 2, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_Shield, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005218A0, SKILLID_DivineShield, SKILLTYPE_Right, 0x00993638, 0 },

	{ "迷惑之咒",	"利用神圣的咒语迷惑敌人。",
	46, 50, 2, 128, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005218F0, SKILLID_HolyIncantation, SKILLTYPE_All, 0x009936D8, 0 },

	{ "圣光十字",	"利用2次连击横切敌人，给予致命的一击。",
	50, 45, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521910, SKILLID_GrandCross, SKILLTYPE_All, 0x00993778, 0 },

	{"神圣刺骨", "释放出强力的剑气来刺穿敌人。",
	60, 45, 2, 70, 3,
	{ 1, 0, 0 }, { ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521BD0, SKILLID_SwordofJustice, SKILLTYPE_All, 0x00993980, 12 },

	{ "敬神之盾",	"一个受上帝祝福而产生的神圣的盾。",
	63, 50, 2, 128, -1,
	{ 1, 0, 0 }, { ITEMTYPE_Shield, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521B50, SKILLID_GodlyShield, SKILLTYPE_All, 0x00993890, 0 },

	{ "上帝祝福",	"以上帝的名字的赐予强大的力量，增加伤害。",
	66, 51, 2, 128, -1,
	{ 1, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Claw, ITEMTYPE_Hammer, ITEMTYPE_Scythe, ITEMTYPE_Sword, ITEMTYPE_Bow, ITEMTYPE_Javelin, ITEMTYPE_None },
	0x00521B90, SKILLID_GodsBlessing, SKILLTYPE_Right, 0x00993908, 0 },

	{ "裁决之剑","借用上帝之力使用一段剑舞来攻击敌人。",
	70, 51, 2, 180, 4,
	{ 1, 0, 0 }, { ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521B30, SKILLID_DivinePiercing, SKILLTYPE_All, 0x00993818, 15 },

	{ "神圣信念", "强化盟友灵魂力量",
	80, 69, 2, 128, -1,
	{ 2, 0, 0 }, { ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521DE0, SKILLID_HolyConviction, SKILLTYPE_Right, 0x009939A8, 0 },

	{ "旋风斩", "旋转造成范围伤害",
	83, 70, 2, 169, 0,
	{ 2, 0, 0 }, { ITEMTYPE_Sword, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521E00, SKILLID_WhirlWind, SKILLTYPE_Right, 0x00993A48, 0 },

	{ "荣耀之盾", "终极防御技能",
	86, 75, 2, 203, 0,
	{ 2, 0, 0 }, { ITEMTYPE_Sword, ITEMTYPE_Hammer, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521E20, SKILLID_GloriousShield, SKILLTYPE_Right, 0x00993AC0, 0 },

	{ "神圣十字", "终极神圣伤害技能",
	90, 93, 2, 180, 4,
	{ 2, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Claw, ITEMTYPE_Hammer, ITEMTYPE_Scythe, ITEMTYPE_Sword, ITEMTYPE_Bow, ITEMTYPE_Javelin, ITEMTYPE_None },
	0x00521E40, SKILLID_DivineCross, SKILLTYPE_Right, 0x00993B38, 0 },

	{ "美杜莎盾", "投掷盾牌，给敌人以穿透性的攻击,并眩晕。",
	10, 23, 2, 152, -1,
	{ 0, 0, 0 }, { ITEMTYPE_Shield, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005213B0, SKILLID_ShieldStrike, SKILLTYPE_All, 0x009947B8, 0 },

	{ "含沙射影",			"快速的投掷标枪,可连续攻击敌人。",
	12, 26, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Javelin, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005213D0, SKILLID_Farina, SKILLTYPE_All, 0x00994858, 0 },

	{ "魔力神枪",		"训练投枪的技术永久提升攻击。",
	14, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_Javelin, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005213F0, SKILLID_ThrowingMaster, SKILLTYPE_Passive, 0x00000000, 0 },

	{ "精神之枪",			"结合精神能力的投枪技术。",
	17, 32, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Scythe, ITEMTYPE_Javelin, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521400, SKILLID_BiggerSpear, SKILLTYPE_All, 0x009948F8, 0 },

	{ "追命劲风",			"将标枪投向更远并提高命中。",
	20, 34, 2, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_Javelin, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005216F0, SKILLID_Windy, SKILLTYPE_Right, 0x009949C0, 0 },

	{ "螺旋飞标",	"通过旋转标枪来提高攻击和命中。",
	23, 36, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Javelin, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521730, SKILLID_TwistJavelin, SKILLTYPE_All, 0x00994A38, 0 },

	{ "灵魂吞噬",	"吸收敌人的生命。",
	26, 42, 2, 180, 4,
	{ 0, 0, 0 }, { ITEMTYPE_Shield, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521750, SKILLID_SoulSucker, SKILLTYPE_All, 0x00994A88, 0 },

	{ "火焰烈枪",	"利用火元素的标枪攻击敌人。",
	30, 40, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Javelin, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521770, SKILLID_FireJavelin, SKILLTYPE_All, 0x00994B00, 0 },

	{ "追风之枪",	"利用最快的速度，连续散发性攻击。",
	40, 43, 2, 180, 4,
	{ 0, 0, 0 }, { ITEMTYPE_Javelin, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521930, SKILLID_SplitJavelin, SKILLTYPE_All, 0x00994BA0, 0 },

	{ "战栗咆哮",	"利用强有力的吼声加强队友的气势，提高攻击力。",
	43, 50, 2, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_Javelin, ITEMTYPE_Sword, ITEMTYPE_Bow, ITEMTYPE_Scythe, ITEMTYPE_Hammer, ITEMTYPE_Axe, ITEMTYPE_Claw, ITEMTYPE_Wand },
	0x00521950, SKILLID_TriumphofJavelin, SKILLTYPE_Right, 0x00994C18, 0 },

	{ "光猎之枪",	"使用标枪时一定时间内提高元素能力。",
	46, 46, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Javelin, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521980, SKILLID_LightningJavelin, SKILLTYPE_All, 0x00994C90, 0 },

	{ "暴风狂标",	    "以暴风雨般的旋转威力，连续投掷标枪。",
	50, 48, 2, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Javelin, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005219A0, SKILLID_StormJavelin, SKILLTYPE_All, 0x00994CE0, 0 },

	{ "哈拉之光",	"运用哈拉的力量创造一个空间。",
	60, 52, 2, 128, -1,
	{ 1, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Claw, ITEMTYPE_Hammer, ITEMTYPE_Scythe, ITEMTYPE_Bow, ITEMTYPE_Javelin, ITEMTYPE_None, ITEMTYPE_None },
	0x00521BF0, SKILLID_HallofValhalla, SKILLTYPE_Right, 0x00994D58, 0 },

	{ "十字怒刺",	"利用愤怒的跳击攻击一个敌人。",
	63, 48, 2, 70, 3,
	{ 1, 0, 0 }, { ITEMTYPE_Javelin, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521C10, SKILLID_ExtremeRage, SKILLTYPE_All, 0x00994DD0, 0 },

	{ "霜冻标枪",	"使用后, 在一段时间内增加你的寒冰能力。",
	66, 50, 2, 128, -1,
	{ 1, 0, 0 }, { ITEMTYPE_Javelin, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521C30, SKILLID_FrostJavelin, SKILLTYPE_Right, 0x00994EC0, 0 },

	{ "复仇连击",	"快速地攻击,连续的攻击。",
	70, 45, 2, 70, 3,
	{ 1, 0, 0 }, { ITEMTYPE_Javelin, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521C70, SKILLID_Vengeance, SKILLTYPE_All, 0x00994F60, 0 },

	{ "自然召唤", "召唤丛林掠食者",
	80, 95, 2, 169, 0,
	{ 2, 0, 0 },{ ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00522000, SKILLID_SummonTiger, SKILLTYPE_Right, 0x00995168, 0 },

	{ "金苹果", "食用后提升速度与闪避",
	83, 52, 2, 0, 0,
	{ 2, 0, 0 }, { ITEMTYPE_Javelin, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521C70, SKILLID_GoldenApple, SKILLTYPE_Passive, 0x00995000, 0 },

	{ "瘟疫标枪", "丛林毒药附加持续伤害",
	86, 68, 2, 100, 4,
	{ 2, 0, 0 }, { ITEMTYPE_Axe, ITEMTYPE_Claw, ITEMTYPE_Hammer, ITEMTYPE_Scythe, ITEMTYPE_Bow, ITEMTYPE_Javelin, ITEMTYPE_None, ITEMTYPE_None },
	0x00521FA0, SKILLID_PlagueJavelin, SKILLTYPE_Right, 0x00994F88, 0 },

	{ "三重威胁", "连续攻击造成持续伤害",
	90, 57, 2, 180, 4,
	{ 2, 0, 0 }, { ITEMTYPE_Javelin, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521C70, SKILLID_ComboJavelin, SKILLTYPE_Right, 0x00995190, 0 },

	{ "治愈之术", "通过神圣的魔法恢复生命。",
	10, 15, 1, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521420, SKILLID_Healing, SKILLTYPE_All, 0x009968D8, 0 },

	{ "圣光攻击",			"利用一种神圣气流来攻击敌人。",
	12, 11, 1, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521440, SKILLID_HolyBolt, SKILLTYPE_All, 0x00996950, 0 },

	{ "光芒四射",			"利用星状的气流来攻击敌人。",
	14, 14, 1, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521460, SKILLID_MultiSpark, SKILLTYPE_All, 0x009969C8, 0 },

	{ "意念之术",			"通过精神能力来降低敌人的攻击,维持时间受生物抗性影响。",
	17, 19, 1, 159, 0,
	{ 0, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521480, SKILLID_HolyMind, SKILLTYPE_All, 0x00996A68, 0 },

	{ "曙光耀灵",		"永久地提高灵力恢复能力。",
	20, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521790, SKILLID_Meditation, SKILLTYPE_Passive, 0x00000000, 0 },

	{ "神之雷电",	"利用神圣的雷的力量来攻击敌人。",
	23, 21, 1, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005217A0, SKILLID_DivineLightning, SKILLTYPE_Right, 0x00996B80, 0 },

	{ "灵魔之御",	"通过生成神圣的魔法盾来反弹亡灵系怪物的攻击。",
	26, 23, 1, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005217C0, SKILLID_HolyReflection, SKILLTYPE_Right, 0x00996BF8, 0 },

	{ "圣洁之光",	"恢复队员的生命。",
	30, 27, 1, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521800, SKILLID_GrandHealing, SKILLTYPE_Right, 0x00996C98, 0 },

	{ "火影双重",			"连续释放2次利用精神力量而制成的魔法球。",
	40, 24, 1, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005219C0, SKILLID_VigorBall, SKILLTYPE_All, 0x00996D10, 0 },

	{ "起死回生",		"可以复活队伍中牺牲的队友。",
	43, 31, 1, 115, 4,
	{ 0, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005219E0, SKILLID_Resurrection, SKILLTYPE_Right, 0x00996D88, 0 },

	{ "死亡凋零",		"给不死族系列的怪物给予致命的咒语，大大降低它们的生命。",
	46, 28, 1, 180, 4,
	{ 0, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521A00, SKILLID_Extinction, SKILLTYPE_Right, 0x00996E00, 0 },

	{ "神圣之光",	"提高自己或他人的最大生命上限，同时具有伤害减免效果。",
	50, 31, 1, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521A20, SKILLID_VirtualLife, SKILLTYPE_All, 0x00996E78, 0 },

	{ "冰霜长矛",	"施放巨大的冰块打击敌人。",
	60, 35, 1, 124, 0,
	{ 1, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521C90, SKILLID_GlacialSpike, SKILLTYPE_All, 0x00996F18, 0 },

	{ "再生领域",	"化身天使增加范围内玩家生命、灵力再生能力。",
	63, 41, 1, 203, 0,
	{ 1, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521CB0, SKILLID_RegenerationField, SKILLTYPE_Right, 0x00996FE0, 0 },

	{ "环形闪电",	"使用强而有力的雷电来攻击敌人。",
	66, 41, 1, 140, 2,
	{ 1, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521CD0, SKILLID_ChainLightning, SKILLTYPE_All, 0x009970A8, 0 },

	{ "召唤符咒",	"召唤符咒附加自己身上，并提高人物相关能力值。",
	70, 47, 1, 128, -1,
	{ 1, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521CF0, SKILLID_SummonMuspell, SKILLTYPE_Right, 0x009971C0, 0 },

	{ "冰元素", "召唤冰元素协助战斗",
	80, 45, 2, 169, 0,
	{ 2, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521F00, SKILLID_IceElemental, SKILLTYPE_Right, 0x009971E8, 0 },

	{ "冰陨", "冰陨石造成范围伤害",
	83, 33, 1, 70, 3,
	{ 2, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521F20, SKILLID_IceMeteorite, SKILLTYPE_Right, 0x00997288, 0 },

	{ "神圣之光", "净化盟友并致盲敌人",
	86, 54, 2, 203, 0,
	{ 2, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521F40, SKILLID_HeavenlyLight, SKILLTYPE_Right, 0x00997300, 0 },

	{ "奉献", "神之保护祝福盟友",
	90, 60, 2, 203, 0,
	{ 2, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521F70, SKILLID_Consecration, SKILLTYPE_Right, 0x00997418, 0 },

	{ "魔力转化", "把自己的生命转化为灵力能力。",
	10, 12, 1, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005214A0, SKILLID_Agony, SKILLTYPE_Right, 0x00995C08, 0 },

	{ "火箭之术",			"发出一团绚丽的魔法火球攻击敌人。",
	12, 11, 1, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521540, SKILLID_FireBolt, SKILLTYPE_All, 0x00995C58, 0 },

	{ "颠峰之术",			"利用精神能力在一定时间内提升属性值。",
	14, 15, 1, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521560, SKILLID_Zenith, SKILLTYPE_Right, 0x00995CD0, 0 },

	{ "火球之术",			"使用巨大的魔法火球来攻击敌人。",
	17, 19, 1, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521600, SKILLID_FireBall, SKILLTYPE_All, 0x00995D48, 0 },

	{ "控制意念",	"增加灵力的最大值。",
	20, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521820, SKILLID_MentalMastery, SKILLTYPE_Passive, 0x00000000, 0 },

	{ "海龙长啸",	"发出巨大水柱来打击敌人。",
	23, 21, 1, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521830, SKILLID_Watornado, SKILLTYPE_All, 0x00995ED8, 0 },

	{ "神通加持",	"给武器增加元素攻击属性。",
	26, 28, 1, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521850, SKILLID_EnchantWeapon, SKILLTYPE_Right, 0x00996018, 0 },

	{ "冥亡之光",	"从掌心发出强力的光线。",
	30, 26, 1, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521870, SKILLID_DeathRay, SKILLTYPE_All, 0x009960B8, 0 },

	{ "魔法守护",		"在身体的周围形成魔法系的保护盾。",
	40, 40, 1, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521A40, SKILLID_EnergyShield, SKILLTYPE_Right, 0x00996130, 0 },

	{ "地动山摇",	"能使地壳变动的强大魔法，将周围的敌人置于死地。",
	43, 33, 1, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521A80, SKILLID_Diastrophism, SKILLTYPE_Right, 0x009961D0, 0 },

	{ "魂之召唤",	"召唤小精灵以增加魔法伤害。",
	46, 35, 1, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521AA0, SKILLID_SpiritElemental, SKILLTYPE_Right, 0x00996248, 0 },

	{ "刀光剑影",	"利用元素能力攻击敌人时展现刀光剑影的效果。",
	50, 30, 1, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521AF0, SKILLID_DancingSword, SKILLTYPE_Right, 0x00996388, 0 },

	{ "火焰元素",	"召唤一只强力的火焰元素。",
	60, 120, 2, 169, 0,
	{ 1, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521D30, SKILLID_FireElemental, SKILLTYPE_Right, 0x00996450, 0 },

	{ "火焰波动",	"使用强力的火焰冲击面对的敌人。",
	63, 32, 1, 70, 3,
	{ 1, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521D70, SKILLID_FlameWave, SKILLTYPE_All, 0x009964F0, 0 },

	{ "空间扭曲",	"使空间的扭曲的同时使敌人丧失能力。",
	66, 43, 1, 130, 6,
	{ 1, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521D90, SKILLID_Distortion, SKILLTYPE_Right, 0x009965B8, 0 },

	{ "陨石召唤",	"召唤陨石攻击附近的所有的敌人。",
	70, 39, 1, 180, 4,
	{ 1, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521DC0, SKILLID_Meteorite, SKILLTYPE_All, 0x00996658, 0 },

	{ "巫师凝视", "专注防御降低攻击",
	80, 54, 2, 128, -1,
	{ 2, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521EA0, SKILLID_WizardTrance, SKILLTYPE_Right, 0x009967C0, 0 },

	{ "火焰球", "双火球造成伤害",
	83, 45, 2, 70, 3,
	{ 2, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521E70, SKILLID_StoneSkin, SKILLTYPE_All, 0x00996680, 0 },

	{ "元素射线", "纯元素射线攻击",
	86, 50, 2, 70, 3,
	{ 2, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521E90, SKILLID_RedRay, SKILLTYPE_Right, 0x00996720, 0 },

	{ "大灾变", "自然之力连锁伤害",
	90, 60, 2, 180, 4,
	{ 2, 0, 0 }, { ITEMTYPE_Wand, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00521EC0, SKILLID_Cataclysm, SKILLTYPE_Right, 0x00996838, 0 },

	{ "黑暗闪电", "释放黑暗魔法对抗敌人。",
	10, 8, 1, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Phantom, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00522070, SKILLID_DarkBolt, SKILLTYPE_All, 0x009987A0, 0 },

	{ "黑暗波浪",			"对敌人进行连续的黑暗魔法攻击。",
	12, 19, 1, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Phantom, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00522090, SKILLID_DarkWave, SKILLTYPE_All, 0x00998818, 0 },

	{ "诅咒雷击", "使用诅咒的力量会降低敌人的速度和攻击。",
	14, 20, 1, 130, 6,
	{ 0, 0, 0 }, { ITEMTYPE_Phantom, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005220B0, SKILLID_Inertia, SKILLTYPE_Right, 0x009988E0, 0 },

	{ "内心平和", "通过心理训练，从而永久增加灵力。",
	17, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005220E0, SKILLID_InnerPeace, SKILLTYPE_Passive, 0x00000000, 0 },

	{ "精神咒术", "释放一种对敌人造成伤害的黑暗魔法。",
	20, 21, 1, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Phantom, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005220F0, SKILLID_SpiritualFlare, SKILLTYPE_All, 0x009989D0, 0 },

	{ "灵魂枷锁", "借助鬼魂的力量，暂时束缚对手的灵魂。",
	23, 23, 1, 114, 4,
	{ 0, 0, 0 }, { ITEMTYPE_Phantom, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00522110, SKILLID_SpiritualManacle, SKILLTYPE_All, 0x00998A98, 0 },

	{ "追踪狩猎", "把限定范围内的怪物吸引过来。",
	26, 27, 1, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_Phantom, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00522140, SKILLID_ChasingHunt, SKILLTYPE_Right, 0x00998AE8, 0 },

	{ "召唤米迦勒", "临时提升队伍攻击力",
	30, 28, 1, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_Phantom, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00522160, SKILLID_AdventMigal, SKILLTYPE_Right, 0x00998B60, 0 },

	{ "雨之使者", "临时降低受到伤害",
	40, 31, 1, 128, -1,
	{ 0, 0, 0 }, { ITEMTYPE_Phantom, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005221A0, SKILLID_Rainmaker, SKILLTYPE_Right, 0x00998BD8, 0 },

	{ "陆地灵魂", "控制被诅咒的鬼魂，召唤他们攻击敌人。",
	43, 33, 1, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Phantom, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005221C0, SKILLID_PhantomCall, SKILLTYPE_Right, 0x00998C78, 0 },

	{ "鬼魂重回", "在鬼魂的帮助下奋力一击，将部分伤害转化为生命。",
	46, 35, 1, 169, 0,
	{ 0, 0, 0 }, { ITEMTYPE_Phantom, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005221E0, SKILLID_Haunt, SKILLTYPE_All, 0x00998D18, 0 },

	{ "猫爪", "以灵魂为武器，猛烈地抓伤对手。",
	50, 32, 1, 70, 3,
	{ 0, 0, 0 }, { ITEMTYPE_Phantom, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00522200, SKILLID_Scratch, SKILLTYPE_All, 0x00998DB8, 0 },

	{ "血色骑士", "召唤血色骑士辅助战斗。",
	60, 41, 1, 169, 0,
	{ 1, 0, 0 }, { ITEMTYPE_Phantom, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00522220, SKILLID_RecallHestian, SKILLTYPE_Right, 0x00998E30, 0 },

	{ "末日审判",			"用黑暗的光带攻击对手。",
	63, 41, 1, 140, 2,
	{ 1, 0, 0 }, { ITEMTYPE_Phantom, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00522260, SKILLID_Judgement, SKILLTYPE_All, 0x00998EF8, 0 },

	{ "米德兰达",	"召唤米德兰达暂时提高攻击速度。",
	66, 39, 1, 128, -1,
	{ 1, 0, 0 }, { ITEMTYPE_Phantom, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00522280, SKILLID_AdventMidranda, SKILLTYPE_Right, 0x00998F98, 0 },

	{ "旭日东升",	"利用米德兰达或米加尔的力量攻击对手。",
	70, 47, 1, 160, 2,
	{ 1, 0, 0 }, { ITEMTYPE_Phantom, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005222C0, SKILLID_MourningPray, SKILLTYPE_Right, 0x00999010, 0 },

	{ "信仰", "临时提升盟友魔力",
	80, 43, 1, 128, -1,
	{ 2, 0, 0 }, { ITEMTYPE_Phantom, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x005222E0, SKILLID_Creed, SKILLTYPE_Right, 0x009990B0, 0 },

	{ "神罚", "黑暗力量造成范围伤害",
	83, 45, 2, 70, 3,
	{ 2, 0, 0 }, { ITEMTYPE_Phantom, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00522300, SKILLID_PressDeity, SKILLTYPE_All, 0x00999150, 0 },

	{ "暗影之爪", "黑暗力量抓击敌人",
	86, 54, 2, 70, 3,
	{ 2, 0, 0 }, { ITEMTYPE_Phantom, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00522320, SKILLID_PhantomNail, SKILLTYPE_Right, 0x009991F0, 0 },

	{ "神秘生命", "永久提升生命上限",
	90, 0, 0, 0, 0,
	{ 2, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00522340, SKILLID_OccultLife, SKILLTYPE_Passive, 0x00000000, 0 },

	{ "力量", "临时提升攻击力",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_Force, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "任务", "狩猎怪物",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_QUEST1, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "任务", "狩猎怪物",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_QUEST2, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "任务", "狩猎怪物",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_QUEST3, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "任务", "狩猎怪物",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_QUEST4, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "荣耀吸收", "提升全族成员15%吸收率",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_AbsorptionOfGlory, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "力量围城", "提升全族成员10%攻击力",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_PowerSiege, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "闪避适应", "提升全族成员10%闪避率",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_EvasionAdaption, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "Atanasia", "Decrease ATK Power by half and God Mode for a while",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_Atanasia, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "Deadly Edge", "Add critical rating by +5% in PVP areas",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_DeadlyEdge, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "Avail of Evasion", "Add evasion rating by +5% in PVP areas",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_AvailofEvasion, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "Defiance Stone", "Decrease Damage by 50% of Fire Crystal Tower",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_DefianceStoneA, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "Defiance Stone", "Decrease Damage by 50% of Ice Crystal Tower",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_DefianceStoneB, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "Defiance Stone", "Decrease Damage by 50% of Lightning Crystal Tower",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_DefianceStoneC, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "Might Stone", "Increases Final DMG Boost by +5% against Fighters",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_FighterStone, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "Might Stone", "Increases Final DMG Boost by +5% against Mechanicians",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_MechanicianStone, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "Might Stone", "Increases Final DMG Boost by +5% against Pikemans",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_PikemanStone, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "Might Stone", "Increases Final DMG Boost by +5% against Archers",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_ArcherStone, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "Might Stone", "Increases Final DMG Boost by +5% against Knights",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_KnightStone, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "Might Stone", "Increases Final DMG Boost by +5% against Atalantas",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_AtalantaStone, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "Might Stone", "Increases Final DMG Boost by +5% against Magicians",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_PriestessStone, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "Might Stone", "Increases Final DMG Boost by +5% against Priestesses",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_MagicianStone, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "Might Stone", "Increases Final DMG Boost by +5% against Shamans",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_ShamanStone, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "Might Stone", "Increases Final DMG Boost by +5% against Assassins",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_MightStone, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "Eternal Life", "Becomes invincible for the set time. The attack power decrease in 1/2",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_EternalLife, SKILLTYPE_Undefined, 0x00000000, 0 },

	{ "Fatal Edge", "+10% Final Damage Boost against Bellatra Monsters",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_FatalEdge, SKILLTYPE_Undefined, 0x00000000, 0 },

	{"Avert Scroll", "+10% of Absorption against Bellatra Monsters",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_AvertScroll, SKILLTYPE_Undefined, 0x00000000, 0},

	{"Rivera", "Invincible character attcak. The attack power decrease in 1/2",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_Rivera, SKILLTYPE_Undefined, 0x00000000, 0},

	{"PvP Honor", "You received this Honor since you're under the best PvP Players",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_PvPHonor, SKILLTYPE_Undefined, 0x00000000, 0},

	{"Bellatra Honor", "You received this Honor since you're under the best Bellatra Players",
	0, 0, 0, 0, 0,
	{ 0, 0, 0 }, { ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None, ITEMTYPE_None },
	0x00000000, SKILLID_BellatraHonor, SKILLTYPE_Undefined, 0x00000000, 0},
};