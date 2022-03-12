#include<iostream>
using namespace std;

//函数重载
//C++中 函数名称可以重复
//必须在同一个作用域，函数名称
//函数的参数个数不同或者类型不同 或者顺序不同
void func(){
	cout << "无参数的func" << endl;
}

void func(int a){
	cout << "有参数的func(int a)" << endl;
}
void func(double a){
	cout << "有参数的func(double a)" << endl;
}
void func(double a,int b){
	cout << "有参数的func(double a,int b)" << endl;
}
void func(int a,double b){
	cout << "有参数的func(int a,double b)" << endl;
}

//返回值可以作为函数重载的条件的条件吗？？？  不可以！！
//比如不对函数返回值做处理就会产生二义性




//当函数重载 碰到了默认参数的时候，要注意避免二义性问题
//例如下面:
void func2(int a,int b = 10){
}
void func2(int a){
}
//引用的重载版本

void func3(int &a){//引用必须引合法的内存空间
}
void func3(const int &a)//const 也可以作为重载的条件
{
	cout << "const int &a" << endl;
} 
void test03(){
	func3(10);
}
