#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
using namespace std;

/*
2.	���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ������   ����ѧ��
*/

class Student
{
public: //����Ȩ��

	//��������
	void setName(string name)
	{
		m_Name = name;
	}
	//����ѧ��
	void setId(int id)
	{
		m_Id = id;
	}

	//��ӡ��Ϣ
	void showInfo()
	{
		cout << "������" << m_Name << " ѧ�ţ� " << m_Id << endl;
	}

	string m_Name; //����
	int m_Id; //ѧ��

};

void test01()
{
	//����һ��ѧ�� ʵ���� --  ͨ��������������Ĺ���
	Student st;
	st.setName("����");
	st.setId(1);

	//ͨ��st�����Դ�ӡ�� st��Ϣ
	cout << "st������Ϊ�� " << st.m_Name << " st��ѧ�ţ�" << st.m_Id << endl;
	

	//ͨ����Ա���� ����ӡst����Ϣ
	st.showInfo();
}


int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}