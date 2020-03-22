#pragma once
#include "CPropertyChampion.h"
#include "CChampion.h"
class CSkill
{
private:
	CPropertyChampion prop;
	string Description;
	bool isPressed;							//check the skill has pressed or not. 
	bool isSelectedVictimInCursor;			//has choosen as target.
public:
	void IncreaseHP(int);
	void IncreaseDamage(int);
	void IncreaseAbilityPower(int);
	void DecreaseHP(int);
	void DecreaseDamage(int);
	void IncreaseCrit(int);
	void IncreaseArmor(int);
	void IncreaseMagicRecist(int);
	void Blind(CChampion);
	void Silent(CChampion);
	CSkill(string, bool, bool);
	CSkill();
	virtual void SetupSkill() = 0;
	~CSkill();
};

