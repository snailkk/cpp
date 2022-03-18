#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//�쳣����
class BaseException
{
public:
	virtual void printError()
	{
	}
};

class  NullPointerException:public BaseException
{
public:
	virtual void printError()
	{
		cout << "��ָ���쳣" << endl;
	}
};

class OutofRangeException:public BaseException
{
public:
	virtual void printError()
	{
		cout << "Խ���쳣" << endl;
	}

};


void doWork()
{
	//throw NullPointerException();

	throw OutofRangeException();
}


void test01()
{
	try
	{
		doWork();
	}
	catch (BaseException & e)
	{
		e.printError();
	}

}


int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}