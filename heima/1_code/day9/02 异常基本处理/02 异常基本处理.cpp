#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class myException //�Զ����쳣��
{
public:
	void printError()
	{
		cout << "�Զ�����쳣" << endl;
	}
};

class Person
{
public:
	Person()
	{
		cout << "Person����" << endl;
	}
	~Person()
	{
		cout << "Person����" << endl;
	}

};

int myDevide(int a ,int b)
{
	if (b == 0)
	{
		//���b���쳣 �׳��쳣
		//return -1;

		//throw 1; �׳�int�����쳣
		//throw 3.14; //�׳�double�����쳣  �쳣���봦����������� �͹ҵ�

		//throw 'a';
		
		//ջ����
		//��try��ʼ  �� throw �׳��쳣֮ǰ  ����ջ�ϵĶ��� ���ᱻ�ͷ� ������̳�Ϊջ����
		//���������˳���෴
		Person p1;
		Person p2;


		throw myException(); //��������

	}
	return a / b;
}



void test01()
{
	int a = 10;
	int b = 0;

	//int ret = myDevide(a, b); //�����������-1 �޷����ֵ����ǽ�������쳣

	//C++���쳣����

	try //��һ��
	{
		myDevide(a, b);
	}
	catch (int) //�����쳣
	{
		cout << "int�����쳣����" << endl;
	}
	catch (double)
	{
		//������봦������쳣 �����Լ��������׳�
		throw;
		cout << "double�����쳣����" << endl;
	}
	catch (myException e)
	{
		e.printError();
	}
	catch (...)
	{
		cout << "���������쳣����" << endl;
	}

}


int main(){

	try
	{
		test01();
	}
	catch (char ) //����쳣��û�д�����ô��Աterminate������ʹ�����ж�
	{
		cout << "main ������ double�����쳣����" << endl;
	}
	catch (...)
	{
		cout << "main������ ���������쳣����" << endl;
	}
	

	system("pause");
	return EXIT_SUCCESS;
}