#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public :
	Person()
	{
		//�������޸�����
		//this ��Զִ�б���  
		
		this->m_A = 0;
		this->m_B = 0;
	}

	void showInfo() const //������ �������޸�ָ��ָ���ֵ
	{
		//this->m_A = 1000;
		this->m_B = 1000;
		// const Person * const this
		cout << "m_A = " << this->m_A << endl;
		cout << "m_B = " << this->m_B << endl;
	}

	void show2() const
	{
		//m_A = 100;
	}

	int m_A;
	mutable int m_B; //�����ǳ����� �һ���ִ��Ҫ�޸�

};

void test01()
{

	Person p1;
	p1.showInfo();

	//������ �������޸�����
	const  Person p2;
	//cout << p2.m_A << endl;
	p2.show2();
	//������ �����Ե�����ͨ��Ա����
	//������ ���Ե��ó�����
}

int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}