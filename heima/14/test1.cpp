#include<iostream>
using namespace std;
void test01(){
	const int &i = 10;

	int *p = (int *)&i;
	*p = 1000;

	cout << "i = " << i << endl;
}

void test02(){
	const int i = 10;

	int *p = (int *)&i;
	*p = 1000;

	cout << "test2 i = " << i << endl;
}

void test03(){
	const int i = 10;

	const int &ref = i;
	int *p = (int *)&ref;
	*p = 1000;
	cout << "test3 ref = " << ref << endl;

	cout << "test3 i = " << i << endl;
}
//
//void test04(){ //error
//	const int &i = 10;
//	int *p = &i;
//	*p = 1000;
//	cout << "test4 i = " << i << endl;
//}
//void test05(){ //error
//	const int i = 10;
//	const int *p = &i;
//	*p = 1000;
//	cout << "test5 i = " << i << endl;
//}
//void test06(){ //error
//	const int i = 10;
//	int *p = &i;
//	*p = 1000;
//	cout << "test6 i = " << i << endl;
//}
int main(){
	test01();
	test02();
	test03();
	//test04();
	//test05();
	//test06();
	return 0;
}
