#include "CChampion.h"

/*
...............................TEST..................................
class Y;
class R
{
private:
	int T;
public:
	void Setter(int t)
	{
		this->T = t;
	}
	int Getter() { return T; }
	void Increase(int t) { T += t; }
	void Decrease(int t) { T -= t; }
};

class Y
{
private:
	R r;
public:
	void Q()
	{
		r.Decrease(2);
	}
	void W()
	{
		r.Increase(8);
	}
};

class T
{
private:
	R r;
	Y y;
public:
	T(int i)
	{
		r.Setter(i);
	}
	void Use() {
		y.Q();
		cout << "After use Q: " << r.Getter() << endl;
		y.W();
		cout << "After use W: " << r.Getter() << endl;
	}
	void Print() { cout << "Value of R is: " << r.Getter() << endl; }
};
*/


int main()
{
	//CChampion(string name, int dmg, int hp, int crit, int abpwer, int mgRecist, int armor)
	CChampion Vayne("Vayne", 75, 1200, 0, 10, 50, 60);
	Vayne.PrintInformation();
	system("pause");
}