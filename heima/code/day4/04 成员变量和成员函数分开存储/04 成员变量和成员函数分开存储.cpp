#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	int m_A; //�Ǿ�̬��Ա���������ڶ�������
	void func( ) {}; //�Ǿ�̬��Ա���� �����ڶ�������
	static int m_B; //��̬��Ա���� �������ڶ�������
	static void  func2(){}; //��̬��Ա���� �������ڶ�������
	double m_C; // 12 ����  16��ȷ
};

//���� �� �Ǿ�̬��Ա���� �������ڶ�������

void test01()
{
	// 6 �� 0 �� 4 �� 1
	cout << "sizo of (Person) = " << sizeof(Person) << endl;
	//����Ĵ�СΪ 1  ÿ��ʵ���Ķ��� ���ж�һ�޶��ĵ�ַ��charά�������ַ
	// Person p[10]  p[0] p[1]
}


void test02()
{
	//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���

	Person p1;
	p1.func(); //��������͵͵ ����һ�� thisָ��  Person * this

	Person p2;
	p2.func();
}

int main(){
	test01();


	system("pause");
	return EXIT_SUCCESS;
}