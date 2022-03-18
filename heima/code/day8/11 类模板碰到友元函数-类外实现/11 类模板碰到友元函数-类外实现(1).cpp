#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
using namespace std;

//�ñ�������ǰ����printPerson����

//�ñ���������Person������
template<class T1, class T2> class Person;
template<class T1, class T2>void printPerson(Person<T1, T2> & p);


template<class T1, class T2>
class Person
{
	//��Ԫ��������ʵ��  ���ÿղ����б� ���߱����� ģ�庯��������
	friend void printPerson<>(Person<T1, T2> & p); //��ͨ���� ����
	/*{
		cout << "������" << p.m_Name << "  ���䣺 " << p.m_Age << endl;
	}*/
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};

//����ʵ��
template<class T1 ,class T2>
void printPerson(Person<T1, T2> & p)
{
	cout << "������" << p.m_Name << "  ���䣺 " << p.m_Age << endl;
}

void test01()
{
	Person<string, int> p("Tom", 10);
	printPerson(p);
}


int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}