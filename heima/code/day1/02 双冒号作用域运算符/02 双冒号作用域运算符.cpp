#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


int atk = 200;
void test01()
{
	int atk = 100;

	cout << "������Ϊ �� " << atk << endl;
	//˫ð�� �����������  ::ȫ��������
	cout << "ȫ�ֹ�����Ϊ �� " << ::atk << endl;
}


int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}