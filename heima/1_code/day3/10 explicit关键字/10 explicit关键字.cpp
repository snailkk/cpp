#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyString
{
public:

	MyString(const char * str)
	{
		//
	}

	explicit MyString(int a)
	{
		mSize = a;
	}

	char* mStr;
	int mSize;
};

void test01()
{
	
	MyString str = "abc";
	MyString str2(10);
	//MyString str3 = 10; //��ʲô��ͼ�� str2�ַ���Ϊ "10" �ַ����ĳ���10 
	//��ʽ����ת��  Mystring str3 = Mystring (10);
	// explicit�ؼ��� ����ֹ��ʽ����ת��

}

int main(){



	system("pause");
	return EXIT_SUCCESS;
}