#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//������Ĭ�ϲ��� �������� = ...
//��������ע����������һ��λ������Ĭ�ϲ�������ô�����λ�ÿ�ʼ���������󶼱�����Ĭ�ϲ���
// ������� ������в��������ô���Ĳ�����û�в�������Ĭ��ֵ

//������������������� Ĭ�ϲ�������ô����ʵ��ʱ�����û��
// ����������ʵ���� ֻ����һ������Ĭ�ϲ�������Ҫͬʱ������Ĭ�ϲ���
void myFunc(int a = 10, int b = 10);
void myFunc(int a , int b ){}

void func( int a , int b = 10,int c = 1 )
{
	cout << "a + b + c = " << a + b + c << endl;
}

void test01()
{
	//func();

	func(1,2);

}


//���� ռλ����
//�������ռλ��������������ʱ�����Ҫ�ṩ������� ,�����ò�������
//ռλ���� û��ʲô����;��ֻ�к������� ++���Ų���һ�����
//ռλ���� ������Ĭ��ֵ
void func2(int a , int = 1)
{

}


void test02()
{
	func2(10);

}

int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}