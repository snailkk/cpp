#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

template <class T>
class Base
{
public:
	T m_A; //double����
};

//child�̳��� base�������base�е�T�����ͣ�����T�޷������ڴ�
class Child :public Base<int>
{

};

//child2 Ҳ��ģ����
template<class T1, class T2>
class Child2 :public Base<T2>
{
public:
	Child2()
	{
		cout << typeid(T1).name() << endl;
		cout << typeid(T2).name() << endl;
	}
public:
	T1 m_B; //int����
};

void test01()
{
	Child2<int, double>child;//���û�ָ������

}


int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}