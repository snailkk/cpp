#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyException
{
public:
	MyException()
	{
		cout << "MyException��Ĭ�Ϲ���" << endl;
	}
	MyException(const MyException & e)
	{
		cout << "MyException�Ŀ�������" << endl;
	}

	~MyException()
	{
		cout << "MyException����������" << endl;
	}

	void printError()
	{
		this->m_A = 100;
		cout << "error"  << m_A<< endl;
	}

	int m_A;

};

void doWork()
{
	throw  &MyException();
}

void test01()
{
	try
	{
		doWork();
	}
	catch (MyException *e) //MyException e����࿪��һ������
	{
		
		//e->printError();
		//e->printError();
		//e->printError(); //ָ��Ƿ��ڴ�ռ䣬��Ӧ����ô��

		cout << "�����쳣" << endl;

		//delete e; //���Ծ� �ͷŶ���
	}

}


int main(){


	test01();

	system("pause");
	return EXIT_SUCCESS;
}