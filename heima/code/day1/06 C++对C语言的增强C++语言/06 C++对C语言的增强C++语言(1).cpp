#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1��ȫ�ֱ��������ǿ
//int a;
int a = 10;

//2�����������ǿ ,����������ǿ,����ֵ�����ǿ,�������ò��������ǿ
int getRectS(int w, int h)
{
	return w*h;
}
void test02()
{
	getRectS(10, 10);
}


//3������ת�������ǿ
void test03()
{
	char * p = (char*)malloc(sizeof(64)); //malloc����ֵ��void*
}


//4��struct ��ǿ
struct Person
{
	int m_Age;
	void plusAge(){ m_Age++; }; //c++��struct���ԼӺ���
};
void test04()
{
	Person p1; //ʹ��ʱ����Բ���struct�ؼ���
	p1.m_Age = 10;
	p1.plusAge();
	cout << p1.m_Age << endl;
}

//5�� bool������ǿ C������û��bool����
bool flag = true; //ֻ������ true���� �棨��0��  false ����٣�0��
void test05()
{
	cout << sizeof(bool) << endl;

	flag = 100;
	//bool���� ��0��ֵ תΪ 1  ��0��תΪ0
	cout << flag << endl;
}

//6����Ŀ�������ǿ
void test06()
{
	int a = 10;
	int b = 20;

	cout << "ret = " << (a < b ? a : b) << endl;
	
	(a < b ? a : b) = 100; //b = 100 C++�з��ص��Ǳ���
	 
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}


const int m_A = 10; //�յ������������Ը�
void test07()
{

	const int m_B = 20; //��������
	//m_B = 100;

	int * p = (int *)&m_B;
	*p = 200;
	cout << "*p = " << *p << endl;
	cout << "m_B = " << m_B << endl;

	int arr[m_B]; //���Գ�ʼ������


}


int main(){

	//test04();

	// test05();

	// test06();
	test07();

	system("pause");
	return EXIT_SUCCESS;
}