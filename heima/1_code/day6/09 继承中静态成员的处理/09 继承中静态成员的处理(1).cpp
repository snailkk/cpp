#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Base
{
public:

	static void func()
	{
		cout << "base fun()" << endl;
	}
	static void func(int a)
	{
		cout << "base fun(int)" << endl;
	}


	static int m_A;
};
int Base::m_A = 10;

class Son :public Base
{
public:

	static void func()
	{
		cout << "son fun()" << endl;
	}

	static int m_A;
};
int Son::m_A = 20;

//��̬��Ա���� ������Լ̳�����
void test01()
{
	cout << Son::m_A << endl;
	//���ʸ����m_A
	cout << Base::m_A << endl;

	Son::func();
	//���� ������ͬ���ĺ���
	Son::Base::func(10);

}


int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}