#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "MyString.h"
using namespace std;

//���� MyString
void test01()
{
	MyString str = "abc";

	cout << str << endl;

	/*cout << "������str�µ����ݣ�" << endl;

	cin >> str;

	cout << "������Ϊ��" << str << endl;*/

	MyString str2(str);

	MyString str3 = "aaaaaa";

	str3 = str2;
	str3 = "aaaa";

	cout << "str3 = " << str3 << endl;

	str3[0] = 'w';

	cout << "str3 ��һ��λ��Ϊ = " << str3[0] << endl;


	MyString str4 = "";
	str4 = str2 + str3; //�ַ���ƴ��

	cout << "str4 Ϊ " << str4 << endl;


	if (str3 == str4)
	{
		cout << "str3 �� str4���" << endl;
	}
	else
	{
		cout << "str3 �� str4�����" << endl;
	}

	/*int a = 10;
	cin >> a;
	cout << "a = " << a << endl;*/

}

int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}