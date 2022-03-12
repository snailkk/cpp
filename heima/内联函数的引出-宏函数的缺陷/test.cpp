#include<iostream>
#include<vector>
#include<string>
using namespace std;
//定义一个加法
#define MyAdd(x,y) x+y
void test01(){
	int ret = MyAdd(10,20);
	cout << "ret = " << ret << endl;
}

#define MyCompare(a,b) ((a) < (b)) ? (a):(b)

void test02(){
	int a = 10;
	int b = 20;

	int ret = MyCompare(++a,b);
	cout << "ret = " << ret << endl;
}
// 1 内联函数注意事项
// 类内部的成员函数 默认前面会加inline 关键字
inline void func();//内联函数声明
inline void func(){};//如果函数实现时候，没有加inline关键字，那么这个函数依然不算内联函数


//但是C++内联编译会有一些限制，以下情况编译器可能考虑不会将函数进行内联编译：
//1. 不能存在任何形式的循环语句
//2. 不能存在过多的条件判断语句
//3. 函数体不能过于庞大
//4. 不能对函数进行取址操作
//内联仅仅只是给编译器一个建议，编译器不一定会接受这种建议，如果你没有将函数声明为内联函数，那么编译器也可能将此函数做内联编译。一个好的编译器将会内联小的，简单的函数。
int main(){
	test01();
      	test02();         	
	return 0;
}
