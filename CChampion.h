#pragma once
#include "CPropertyChampion.h"
#include "CSkill1.h"
#include "CSkill2.h"
#include "CSkill3.h"
#include "CSkill4.h"


class CChampion
{
private:
	CPropertyChampion BasicProperty;
	CSkill1 Q;
	CSkill2 W;
	CSkill3 E;
	CSkill4 R;
	array<CItem*, 6> items { NULL };			//because the item limit in 6, so use array as static array instead dynamic array.
//Note: Item must have 2 type is Passitive Item and Activate Item (will setup later).
public:
	//Get Property.
	CPropertyChampion GetProp() { return BasicProperty; }

	//other method.
	CChampion();
	void Attack(CChampion);
	void Defend(CChampion);
	void PrintInformation();
	CChampion(string name, int dmg, int hp, int crit, int abpwer, int mgRecist, int armor);
	~CChampion();
};

