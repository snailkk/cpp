#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

class MyOutOfRangeException:public exception
{

public:

	MyOutOfRangeException(string errorInfo)
	{
		this->m_ErrorInfo = errorInfo;
	}

	virtual  ~MyOutOfRangeException( )
	{

	}
	virtual const char *  what() const
	{
		//���� ������Ϣ
		//string ת char *     .c_str()
		return this->m_ErrorInfo.c_str();
	}
	string m_ErrorInfo;
};
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		//���������

		if (age < 0 || age > 200)
		{
			throw MyOutOfRangeException( string("���Լ�������Խ���쳣"));
		}
	}
	string m_Name;
	int m_Age;
};

void test01()
{
	try
	{
		Person p("����", 300);
	}
	catch ( MyOutOfRangeException & e  )
	{
		cout << e.what() << endl;
	}
}

int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}