#include<iostream>
using namespace std;

class Person{
public:
	Person(){}

	/*Person(int a,int b,int c){
		m_A = a;
		m_B = b;
		m_C = c;
	}*/

	Person(int a,int b,int c) : m_A(a),m_B(b),m_C(c){}

	int m_A;
	int m_B;
	int m_C;
};

void test01(){
	Person p1(10,20,30);

	cout << "p1的m_A :" << p1.m_A << endl;
	cout << "p1的m_B :" << p1.m_B << endl;
	cout << "p1的m_C :" << p1.m_C << endl;
}

int main(){
	test01();

	return 0;
}
