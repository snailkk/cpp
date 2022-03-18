#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		this->m_Age = age;
	}

	void showAge()
	{
		cout << "����Ϊ��" << this->m_Age << endl;
	}
	~Person()
	{
		cout << "Person����������" << endl;
	}

	int m_Age;
};


//����ָ��
//�����й��Զ������͵Ķ����ö�������Զ����ͷ�
class smartPointer
{
public:
	smartPointer(Person * person)
	{
		this->person = person;
	}

	//����->������ָ����� ��Person *pһ��ȥʹ��
	Person * operator->()
	{
		return this->person;
	}

	//���� * 
	Person& operator*()
	{
		
		return *this->person;
	}

	~smartPointer()
	{
		cout << "����ָ��������" << endl;
		if (this->person !=NULL)
		{
			delete this->person;
			this->person = NULL;
		}
	}

private:
	Person * person;
};

void test01()
{
	//Person p1(10); //�Զ�����

	//Person * p1 = new Person(10);
	//p1->showAge();
//	delete p1;


	smartPointer sp(new Person(10)); //sp���ٵ���ջ�ϣ��Զ��ͷ�
	sp->showAge(); // sp->->showAge(); �������Ż��� д��

	(*sp).showAge();
}


int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}