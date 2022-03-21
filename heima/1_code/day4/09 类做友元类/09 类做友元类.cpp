#include<iostream>
#include <string>
using namespace std;

class Building;
class goodGay
{
public:
	goodGay();

	void visit();
private:
	Building * building;
};

class Building
{
	//�úû����� ��Ϊ Building�ĺ�����
	friend class goodGay;
public:
	Building();
public:
	string m_SittingRoom; //����
private:
	string m_BedRoom; //����
};

goodGay::goodGay()
{
	building = new Building;
}

void goodGay::visit()
{
	cout << "�û������ڷ��ʣ� " << this->building->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ� " << this->building->m_BedRoom << endl;
}

Building::Building()
{
	this->m_SittingRoom = "����";
	this->m_BedRoom = "����";
}

void test01()
{
	goodGay gg;
	gg.visit();
}

int main(){

	test01();

	return 0;
}
