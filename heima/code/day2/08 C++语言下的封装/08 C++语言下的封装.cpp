#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

struct Person
{
	char mName[64];

	int mAge;

	void PersonEat()
	{
		cout <<  mName <<"���˷�" << endl;
	}

};

struct Dog
{
	char mName[64];

	int mAge;

	void DogEat()
	{
		cout << mName << "�Թ���" << endl;
	}

};

//C++�еķ�װ �ϸ�����ת����⣬ �����Ժ���Ϊ �󶨵�һ��
// 1 ���Ժ���Ϊ��Ϊһ����������ʾ�����е�����
// 2 ����Ȩ�� public ����Ȩ��   protected ����Ȩ��  private ˽��Ȩ��
void test01()
{
	Person p1;
	strcpy(p1.mName, "����");
	p1.PersonEat();
	//p1.DogEat();
}



//struct ��class��һ����˼��Ψһ�Ĳ�ͬ  Ĭ��Ȩ�� ��struct��public������classĬ��Ȩ����private
class Animal
{
private:
	//����Ҳ�����Ȩ�ޣ�Ĭ�ϵ�Ȩ���� private
	void eat(){ mAge = 100; };

	int mAge;

public:
	int mHeight;

protected: //����Ȩ�� ���ڲ����Է��� ��(��ǰ���������Է���) , ���ⲿ�����Է���

	int mWeight;

	void setWeight(){ mWeight = 100; };
};

//��ν˽��Ȩ�� ����˽�г�Ա(���ԡ�����) �����ڲ����Է��ʣ����ⲿ�����Է���
//����Ȩ�� �������ڲ������ⲿ�����Է���
void test02()
{
	Animal an;
	//an.eat();
	//an.mAge; //˽�в����Է��ʵ�

	an.mHeight = 100; //����Ȩ�������ⲿ���Է��ʵ�
	//an.mWeight = 100; //����Ȩ�� �����ⲻ�ɷ��ʵ�
}

// public  ���� ���� �����Է���
// protected ���ڿ��Է��� ���� �����Է��� ��������Է�����
// private   ���ڿ��Է��� ���� �����Է���  �����಻���Է�����


int main(){
	test01();


	system("pause");
	return EXIT_SUCCESS;
}