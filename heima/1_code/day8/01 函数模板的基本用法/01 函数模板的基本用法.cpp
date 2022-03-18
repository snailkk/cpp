#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//����int������������
void mySwapInt( int & a, int & b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

//����double����
void mySwapDouble(double &a, double &b)
{
	double tmp = a;
	a = b;
	b = tmp;
}

//���ͣ��߼��ַǳ�����
//���Ͳ�����  ���ͱ�� -- ģ�弼��
template<class T> // ���߱����� �����������T��Ҫ����T��һ��ͨ�õ�����
void mySwap(T &a, T &b)
{
	T tmp = a;
	a = b; 
	b = tmp;
}


// template<typename T>  �ȼ��� template<class T>
template<typename T>
void mySwap2(){}

void test01()
{
	int a = 10;
	int b = 20;
	char c1 = 'c';
//	mySwapInt(a, b);
	//1 �Զ������Ƶ�,�����в������Ͳſ����Ƶ�
	//mySwap(a, c1); �Ƶ�������T�����Բ�������
	mySwap(a, b);

	//2 ��ʾָ������
	mySwap<int>(a, b);

	//ģ�����Ҫָ����T�ſ���ʹ��
	mySwap2<double>();

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	double c = 3.14;
	double d = 1.1;
	//mySwapDouble(c, d);
	mySwap(c, d);


}

int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}