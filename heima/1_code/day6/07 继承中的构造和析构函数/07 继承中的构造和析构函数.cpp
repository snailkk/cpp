#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		m_A = 10;
		cout << "BaseĬ�Ϲ��캯������" << endl;
	}
	~Base()
	{
		cout << "Base��������������" << endl;
	}

	int m_A;
};
// �����̳и���ĳ�Ա���ԣ���Ա����
//���� ���� ����̳� ���� ���캯�� �� ��������
//ֻ�и����Լ�֪���������������Լ������ԣ������಻֪��


class Son :public Base
{
public:
	Son()
	{
		cout << "SonĬ�Ϲ��캯������" << endl;
	}
	~Son()
	{
		cout << "Son��������������" << endl;
	}
};

void test01()
{
	//Base b1;

	Son s1;
}



class Base2
{
public:
	Base2(int a)
	{
		this->m_A = a;
		cout << "�вι��캯������" << endl;
	}
	int m_A;
};

class Son2:public Base2
{
public:
	Son2(int a ) : Base2(a)//���ó�ʼ���б�ʽ ��ʾ���� �вι���
	{
	}
};

void test02()
{
	Son2 s2(1000);
}


int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}