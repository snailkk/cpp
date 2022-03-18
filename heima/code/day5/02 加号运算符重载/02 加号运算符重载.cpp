#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	Person(){};
	Person(int a, int b) :m_A(a), m_B(b)
	{}

	//+����������� ��Ա���� ��Ԫ
	/*Person operator+ ( Person & p)
	{
	Person tmp;
	tmp.m_A = this->m_A + p.m_A;
	tmp.m_B = this->m_B + p.m_B;
	return tmp;
	}*/

	int m_A;
	int m_B;
};

//����ȫ�ֺ��� ����+�������������
Person operator+ ( Person &p1,Person& p2) //��Ԫ  p1 + p2   
{
	Person tmp;
	tmp.m_A = p1.m_A + p2.m_A;
	tmp.m_B = p1.m_B + p2.m_B;
	return tmp;
}

Person operator+ (Person &p1, int a) //��Ԫ
{
	Person tmp;
	tmp.m_A = p1.m_A + a;
	tmp.m_B = p1.m_B + a;
	return tmp;
}


void test01()
{
	Person p1(10, 10);
	Person p2(10, 10);

	Person p3 = p1 + p2; // p1 + p2  ��ʲô���ʽת��ģ� p1.operator+(p2)  operator+(p1,p2)
	Person p4 = p1 + 10; //���صİ汾
	cout << "p3 �� m_A: " << p3.m_A << "  m_B: " << p3.m_B << endl;

	//operator+(p1, p2);
	
}

int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}