#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		m_A = 100;
	}

	void fun()
	{
		cout << "Base func����" << endl;
	}
	void fun(int a)
	{
		cout << "Base func (int a)����" << endl;
	}


	int m_A;
};

class Son :public Base
{
public:
	Son()
	{
		m_A = 200;
	}

	void fun()
	{
		cout << "Son func����" << endl;
	}

	int m_A;
};

void test01()
{
	Son s1;
	cout << s1.m_A << endl;
	//����� ������ ��m_A

	cout << s1.Base::m_A << endl;

	s1.fun();

	//���ø����func
	s1.Base::fun(10);

}

//�������͸���ӵ��ͬ���ĺ��� ���� ������Ḳ�Ǹ���ĳ�Ա�� ����
//��������븸��ĳ�Ա����������ͬ�������Ѹ�������е�ͬ���汾�����ص�
//����ø���ķ����������������


int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}