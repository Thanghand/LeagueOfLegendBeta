#include "CChampion.h"


CChampion::CChampion()
{
	CPropertyChampion::CPropertyChampion();		//init property of champion.
	items.fill(NULL);			//fill list of item to NULL (nothing).
}

void CChampion::Attack(CChampion other)
{
	
}

CChampion::CChampion(string name, int dmg, int hp, int crit, int abpwer, int mgRecist, int armor)
{
	CPropertyChampion::CPropertyChampion(name, dmg, abpwer, crit, hp, armor, mgRecist, false, false);
}

void CChampion::PrintInformation()
{
	cout << "Name: " << BasicProperty.GetName() << endl;
	cout << "Damage: " << BasicProperty.GetAttackDmg() << endl;
	cout << "Ability Power: " << BasicProperty.GetAbilityPower() << endl;
	cout << "HP: " << BasicProperty.GetHP() << endl;
	cout << "Magic Recist: " << BasicProperty.GetMagicRecist() << endl;
	cout << "Armor: " << BasicProperty.GetArmor() << endl;
}

CChampion::~CChampion()
{
}
