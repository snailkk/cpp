#include<iostream>
#include<vector>
#include<string>
using namespace std;

class MyClass{
public:
	MyClass(){
		cout << "默认构造函数" << endl;
	}

	MyClass(int a){
		cout << "有参构造函数" << endl;
	}
	

	int m_A;

};
//系统默认给一个类提供3个函数 默认构造、拷贝构造、析构函数
//
//
//1 当我们提供了有参构造函数，那么系统就不会再给我们提供默认构造函数了
//但是系统还会提供默认拷贝构造函数，进行简单的值拷贝


void test01(){
	MyClass c1(1);

	cl.m_A = 10;
	MyClass c2(c1);
	cout << c2.m_A << endl;

}


//2 当我们提供了拷贝构造函数，那么系统就不会提供其它构造了


class MyClass2{
public:
	Myclass2(const Myclass2 &m){
	}
};


int main(){


}
