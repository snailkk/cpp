#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Ĭ�Ϲ������" << endl;
	}

	Person(int a)
	{
		cout << "�вι������" << endl;
	}

	~Person()
	{
		cout << "������������" << endl;
	}

};

void test01()
{
	//Person p1;  ջ������

	Person * p2 = new Person; //��������

	//����new�����Ķ��� ���᷵�ظ����͵�ָ��
	//malloc ���� void* ��Ҫǿת
	//malloc����ù����� ����  new����ù���
	// new �����  malloc ����
	//�ͷ� �����ռ�
	// deleteҲ������� ��� new��  malloc ��� free��
	delete p2;

}

void test02()
{
	void *p = new Person(10); 
	//����void* ����new������ָ�� ��������ͷŵ�����
	delete p;
	//�޷��ͷ�p �����Ա�������д��
}

void test03()
{
	//ͨ��new�������� һ�������Ĭ�Ϲ��캯��,����һ��Ҫ�ṩĬ�Ϲ���
	Person * pArray = new Person[10];
	//Person pArray2[2] = { Person(1), Person(2) }; //��ջ�Ͽ������飬����ָ���вι���


	//�ͷ����� delete []
	delete [] pArray;
}

int main(){

	//test01();

	//test02();

	test03();

	system("pause");
	return EXIT_SUCCESS;
}