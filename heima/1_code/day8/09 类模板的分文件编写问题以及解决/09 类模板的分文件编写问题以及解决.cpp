#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
using namespace std;
#include "Person.hpp"

//���� ģ�岻Ҫ�����ļ���д,д��һ�����м���,���ڽ���������ʵ�֣����Ѻ�׺����Ϊ.hpp Լ���׳� 

int main(){

	Person<string, int>p("��˽�", 10);
	p.showPerson();


	system("pause");
	return EXIT_SUCCESS;
}