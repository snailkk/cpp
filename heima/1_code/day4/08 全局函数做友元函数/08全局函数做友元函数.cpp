#include<iostream>
#include <string>
using namespace std;
int func();
class Building
{
	//真真真真真?
	friend void  goodGay(Building * building);
public:
	Building()
	{
		this->m_SittingRoom = "真";
		this->m_BedRoom = "真";
	}

	//真 真
public:
	string m_SittingRoom; //真

private:
	string m_BedRoom; //真
};

//真真 真?
void  goodGay( Building * building )
{
	cout << "真真真? " << building->m_SittingRoom << endl;
	cout << "真真真? " << building->m_BedRoom << endl;
}
//真真 真真真真真真?
void test01()
{
	Building * building = new Building;
	goodGay(building);
}

int main(){

	test01();
	return 0;
}
