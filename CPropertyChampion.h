#pragma once
#include <iostream>
#include <string>
#include <array>
#include "CItem.h"
using namespace std;

class CPropertyChampion
{
private:
	string Name;
	int HP;
	int AttackDamage;
	int AbilityPower;
	int Armor;
	int MagicRecist;
	bool isChooseAsTarget;
	int Critical;		//chí mạng.
	bool isWearingSkin;
public:
	//Getter.
	string GetName() { return Name; }
	int GetHP() { return HP; }
	int GetAttackDmg() { return AttackDamage; }
	int GetAbilityPower() { return AbilityPower; }
	int GetArmor() { return Armor; }
	int GetMagicRecist() { return MagicRecist; }
	int GetCritical() { return Critical; }

	//Setter.
	void SetName(string name) { this->Name = name; }
	void SetHP(int HP) { this->HP = HP; }
	void SetAttackDmg(int dmg) { this->AttackDamage = dmg; }
	void SetAbilityPower(int abpwer) { this->AbilityPower = abpwer; }
	void SetArmor(int armor) { this->Armor = armor; }
	void SetMagicRecist(int mgrecist) { this->MagicRecist = mgrecist; }
	void SetCritical(int crit) { this->Critical = crit; }

	//other method.
	CPropertyChampion();
	CPropertyChampion(string name, int atdmg, int abpower, int crit, int hp, int armor, int mgrecist, bool ischoose, bool iswearskin);
	~CPropertyChampion();
};

