#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

/*
cin.get() //һ��ֻ�ܶ�ȡһ���ַ�
cin.get(һ������) //��һ���ַ�
cin.get(��������) //���Զ��ַ���
cin.getline()
cin.ignore()
cin.peek()
cin.putback()
*/

void test01()
{
	// ����as   ��������  a  s  ����    ��һ����  a  �ڶ��� �� s  �������û��� ���Ĵεȴ��´�����
	char c = cin.get();
	cout << "c = " << c << endl;

	c = cin.get();
	cout << "c = " << c << endl;

	c = cin.get();
	cout << "c = " << c << endl;

	c = cin.get();
	cout << "c = " << c << endl;

}

void test02()
{
	//cin.get(��������) //���Զ��ַ���
	char buf[1024];
	cin.get(buf, 1024);

	char c = cin.get();

	if (c == '\n')
	{
		cout << "���л��ڻ�����" << endl;
	}
	else
	{
		cout << "���в��ڻ�����" << endl;
	}

	cout << buf << endl;
}
//cin.get(��������)��ȡ�ַ���ʱ������ѻ��з����ߣ������ڻ�������


//cin.getline()
void test03()
{
	char buf[1024];
	cin.getline(buf, 1024);

	char c = cin.get();
	if (c == '\n')
	{
		cout << "���л��ڻ�����" << endl;
	}
	else
	{
		cout << "���в��ڻ�����" << endl;
	}

	//cin.getline �ѻ��з���ȡ�������ӵ�
}


// cin.ignore() ����
void test04()
{
	cin.ignore(2); //û�в��� �������һ���ַ� ��������N���������N���ַ�

	char c =  cin.get();

	cout << "c = " << c << endl;

}


// cin.peek() ͵��
void test05()
{
	//����as  ͵��һ�� a��Ȼ���ٷŻػ����� �������л���as
	char c = cin.peek();

	cout << "c = " << c << endl;

	c = cin.get();

	cout << "c = " << c << endl;

}


//cin.putback() �Ż�
void test06()
{
	char c = cin.get();
	cin.putback(c);

	char buf[1024];

	cin.getline(buf,1024);
	cout << buf << endl;
}


//����1  �ж��û������ַ��� �������֣�
void test07()
{
	cout << "������һ�����ֻ����ַ���" << endl;

	//͵��
	char c = cin.peek();

	if (c >= '0' && c <= '9')
	{
		int num;
		cin >> num;

		cout << "������������ ������Ϊ" << num << endl;
	}
	else
	{	
		char buf[1024];
		cin >> buf;

		cout << "���������ַ��� ���ַ���Ϊ" << buf << endl;
	}
}


//����2 ���û����� 1 �� 10 ������ ������������� �������� 
void test08()
{
	int num;

	cout << "������һ��1��10�����֣�" << endl;

	while (true)
	{
		cin >> num;
		if (num > 0 && num <= 10)
		{
			cout << "���������Ϊ" << num << endl;
			break;
		}
		//cout << "�Բ�������������" << endl;
		//���ñ�־λ
		cin.clear();

		// 2015 �汾��vs �� ��ignore ���� cin.ignore(N);

		cin.sync(); //��ջ�����


		//cout << "��־λ: " << cin.fail() << endl; //��־λ 0 ������  1 ������
	}


}



int main(){

	//test01();

	//test02();

	//test03();

	//test04();

	//test05();

	//test06();

	//test07();

	test08();

	system("pause");
	return EXIT_SUCCESS;
}