#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Person{
public:
	Person(){
		cout << "默认构造函数" << endl;
	}

	Person(int a){
		cout << "有参构造函数调用" << endl;
	}
	Person(const Person &p){
		//const 和 &都不能丢，丢了&参数传入时就会一直调用拷贝构造函数，死循环
		cout << "拷贝构造函数调用" << endl;
	}

	~Person(){
		cout << "析构函数调用" << endl;
	}

	int m_Age;
};

//拷贝构造函数调用时机
//1. 用已经创建好的对象来初始化新的对象
void test01(){
	Person p1;
	p1.m_Age = 10;

	Person p2(p1);
}


//2、以值传递的方式给函数传值


void dowork(Person p1)//Person p1 = Person(p)
{
}


//3、 以值方式返回局部对象

Person dowork2(){
	Person p1;
	return p1;
}
//编译器可能会做优化
void test03(){
	Person p = dowork2();
}
void test02(){
	Person p;
	p.m_Age = 10;
	doWork(p);
}
