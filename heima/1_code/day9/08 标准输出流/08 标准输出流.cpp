#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <iomanip> //ʹ�ÿ��Ʒ���ͷ�ļ�
using namespace std;

/*
cout.put() //�򻺳���д�ַ�
cout.write() //��buffer��дnum���ֽڵ���ǰ������С�
*/

void test01()
{
//	cout.put('a').put('b');


	char buf[1024] = "hellowrold";

	cout.write(buf, strlen(buf));

}

void test02()
{
	//ͨ������Ա����

	int number = 99;
	cout.width(20);
	cout.fill('*');
	cout.setf(ios::left); //���ø�ʽ  ��������������
	cout.unsetf(ios::dec); //ж��ʮ����
	cout.setf(ios::hex); //��װ16����
	cout.setf(ios::showbase); // ǿ�������������  0  0x
	cout.unsetf(ios::hex);
	cout.setf(ios::oct);
	cout << number << endl;

}

//���Ʒ��ķ�ʽ��ʾ
void test03(){

	int number = 99;
	cout << setw(20)
		<< setfill('~')
		<< setiosflags(ios::showbase) //����
		<< setiosflags(ios::left) //�����
		<< hex // ʮ������
		<< number
		<< endl;
}


int main(){

	//test01();

	//test02();

	test03();

	system("pause");
	return EXIT_SUCCESS;
}