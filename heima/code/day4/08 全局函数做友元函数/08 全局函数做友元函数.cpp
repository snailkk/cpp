#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
using namespace std;

class Building
{
	//��ȫ�ֵĺû��Ѻ��� ��Ϊ�ҵĺ�����  ��Ԫ����
	friend void  goodGay(Building * building);
public:
	Building()
	{
		this->m_SittingRoom = "����";
		this->m_BedRoom = "����";
	}

	//����  ����
public:
	string m_SittingRoom; //����

private:
	string m_BedRoom; //����
};

//ȫ�ֺ���  �û���
void  goodGay( Building * building )
{
	cout << "�û������ڷ��� " << building->m_SittingRoom << endl;
	cout << "�û������ڷ��� " << building->m_BedRoom << endl;
}
//��Ԫ���� Ŀ�ķ������е�˽�г�Ա����
void test01()
{
	Building * building = new Building;
	goodGay(building);
}

int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}