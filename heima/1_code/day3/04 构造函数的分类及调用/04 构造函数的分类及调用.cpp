#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//����
//���ղ������з���  �޲ι��캯����Ĭ�Ϲ��캯����   �вι��캯��
//�������ͽ��з���  ��ͨ���캯��  �������캯��
class Person
{
public: //�������������д��public�²ſ��Ե��õ�

	Person() //Ĭ�� �� �޲ι��캯��
	{
		cout << "Ĭ�Ϲ��캯������" << endl;
	}

	Person(int a)
	{
		cout << "�вι��캯������" << endl;
	}

	//�������캯��
	Person(const Person& p)
	{
		m_Age = p.m_Age;
		cout << "�������캯������" << endl;
	}

	~Person()
	{
		cout << "������������" << endl;
	}

	int m_Age;
};


void test01()
{
	//���캯�����÷�ʽ
	//���ŷ�����
	//Person p1(1); //�в�
	//p1.m_Age = 10;
	//Person p2(p1); //����
	//cout << "p2������" << p2.m_Age << endl;

	//Person p3; //Ĭ�Ϲ��캯�� ��Ҫ��()   Person p3(); //��������Ϊ�����Ǻ���������


	//��ʾ������
	//Person p4 = Person(100);
	//Person p5 = Person(p4);

	//Person(100); //���������� ,���������ص㣬��������������˶����������ģ���ô�����д����������ͷ��������

	//�����ÿ������캯�� ��ʼ����������
	//Person p6 = Person(p5); //���д����ֵ����������Ϊ��д�� Person p5; ��������������д����ֵ����ô����

	
	Person p7 = 100; //�൱�ڵ����� Person p7 = Person(100) ����ʽ����ת��
	Person p8 = p7; // �൱��  Person p8 = Person(p7);
}


int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}