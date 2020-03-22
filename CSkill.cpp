#include "CSkill.h"


CSkill::CSkill()
{
	Description = "";
	isPressed = false;
	isSelectedVictimInCursor = false;
}

CSkill::CSkill(string des, bool isPressed, bool isSelected)
{
	this->Description = des;
	this->isPressed = isPressed;
	this->isSelectedVictimInCursor = isSelected;
}

void CSkill::DecreaseDamage(int dmg)
{
	prop.SetAttackDmg(abs(prop.GetAttackDmg() - dmg));
}

void CSkill::DecreaseHP(int hp)
{
	prop.SetHP(abs(prop.GetHP() - hp));
}

void CSkill::IncreaseAbilityPower(int abpwer)
{
	prop.SetAbilityPower(prop.GetAbilityPower() + abpwer);
}

void CSkill::IncreaseArmor(int armor)
{
	prop.SetArmor(prop.GetArmor() + armor);
}

void CSkill::IncreaseCrit(int crit)
{
	prop.SetCritical(prop.GetCritical() + crit);
}

void CSkill::IncreaseDamage(int dmg)
{
	prop.SetAttackDmg(prop.GetAttackDmg() + dmg);
}

void CSkill::IncreaseMagicRecist(int mgrecist)
{
	prop.SetMagicRecist(prop.GetMagicRecist() + mgrecist);
}

void CSkill::Blind(CChampion other)
{
	
}


CSkill::~CSkill()
{
}
