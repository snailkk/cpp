#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//1��ȫ�ֱ��������ǿ
int a;
int a = 10;

//2�����������ǿ
int getRectS(w, h)
{
}
void test02()
{
	getRectS(10, 10, 10);
}

//3������ת�������ǿ
void test03()
{
	char * p = malloc(sizeof(64)); //malloc����ֵ��void*
}

//4��struct ��ǿ
struct Person
{
	int m_Age;
	//void plusAge(); //c������struct�����ԼӺ���
};
void test04()
{
	struct Person p1; //ʹ��ʱ��������struct�ؼ���
}

//5�� bool������ǿ C������û��bool����
//bool flag;

//6����Ŀ�������ǿ
void test06()
{
	int a = 10;
	int b = 20;

	printf("ret = %d \n", a > b ? a : b);

	//a > b ? a : b = 100; // 20 = 100 C���Է��ص���ֵ

	//C��������ģ��C++д
	*(a > b ? &a : &b) = 100;
	printf("a = %d ,b = %d \n", a, b);

}

//7�� const��ǿ
const int m_A = 10; //�յ������������Ը�
void test07()
{

	//m_A = 100;
	const int m_B = 20; //α����
	//m_B = 100;

	int * p = (int *)&m_B;
	*p = 200;
	printf("*p = %d , m_B = %d \n", *p, m_B);

	//int arr[m_B]; �����Գ�ʼ������

}



int main(){

//	test06();

	test07();

	system("pause");
	return EXIT_SUCCESS;
}