#include "CPropertyChampion.h"



CPropertyChampion::CPropertyChampion()
{
	Name = "";
	AttackDamage = 60;
	AbilityPower = 10;
	HP = 1200;
	Critical = 0;
	Armor = 50;
	MagicRecist = 20;
	isChooseAsTarget = false;
	isWearingSkin = false;

}

CPropertyChampion::CPropertyChampion(string name, int atdmg, int crit, int abpower, int hp, int armor, int mgrecist, bool ischoose, bool iswearskin)
{
	this->Name = name;
	this->AttackDamage = atdmg;
	this->AbilityPower = abpower;
	this->HP = hp;
	this->Critical = crit;
	this->Armor = armor;
	this->MagicRecist = mgrecist;
	this->isChooseAsTarget = ischoose;
	this->isWearingSkin = iswearskin;
}

CPropertyChampion::~CPropertyChampion()
{
}
