#include<iostream>
#include <string>
using namespace std;
int func();
class Building
{
	//¿¿¿¿¿¿¿¿¿¿¿
	friend void  goodGay(Building * building);
public:
	Building()
	{
		this->m_SittingRoom = "¿¿";
		this->m_BedRoom = "¿¿";
	}

	//¿¿ ¿¿
public:
	string m_SittingRoom; //¿¿

private:
	string m_BedRoom; //¿¿
};

//¿¿¿¿ ¿¿¿
void  goodGay( Building * building )
{
	cout << "¿¿¿¿¿¿¿ " << building->m_SittingRoom << endl;
	cout << "¿¿¿¿¿¿¿ " << building->m_BedRoom << endl;
}
//¿¿¿¿ ¿¿¿¿¿¿¿¿¿¿¿¿¿
void test01()
{
	Building * building = new Building;
	goodGay(building);
}

int main(){

	test01();
	return 0;
}
