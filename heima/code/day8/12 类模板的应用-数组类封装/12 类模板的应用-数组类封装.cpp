#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "MyArray.hpp"
#include <string>

//���int��������
void printIntArray(  MyArray<int>& array)
{
	for (int i = 0; i < array.getSize();i++)
	{
		cout << array[i] << endl;
	}
}

class Person
{
public:
	Person(){};

	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};



//���Person��������
void printPersonArray( MyArray<Person> & array )
{
	for (int  i = 0; i < array.getSize(); i++)
	{
		cout << "������ " << array[i].m_Name << " ���䣺 " << array[i].m_Age << endl;
	}
}



int main(){

	MyArray <int >arr(10);
	for (int i = 0; i < 10;i++)
	{
		arr.push_Back(i + 100);
	}

	printIntArray(arr);


	Person p1("MT", 10);
	Person p2("����", 12);
	Person p3("ɵ��", 14);
	Person p4("����", 15);

	MyArray<Person>arr2(10);
	arr2.push_Back(p1);
	arr2.push_Back(p2);
	arr2.push_Back(p3);
	arr2.push_Back(p4);

	printPersonArray(arr2);
	



	system("pause");
	return EXIT_SUCCESS;
}