#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
using namespace std;


//��ģ��
template <class NameType, class AgeType = int> //��ģ�������Ĭ������
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "������" << this->m_Name << " ���䣺 " << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};
void test01()
{
	//�Զ������Ƶ� ����ģ�� ��֧��
	//Person p("�����", 100);

	//��ʾָ������
	Person<string, int> p("�����", 100);
	p.showPerson();
}
class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1�ĵ���" << endl;
	}
};

class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2�ĵ���" << endl;
	}
};

template<class T>
class myClass
{
public:
	T obj;
	void func1()
	{
		obj.showPerson1();
	}
	void func2()
	{
		obj.showPerson2();
	}
};
//��ģ���г�Ա���� һ��ʼ���ᴴ������������������ʱ��ȥ����

void test02()
{
	myClass<Person1>m;

	m.func1();

	//m.func2();
}

int main(){

//	test01();

	test02();

	system("pause");
	return EXIT_SUCCESS;
}