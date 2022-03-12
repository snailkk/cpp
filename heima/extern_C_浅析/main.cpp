#include<iostream>
using namespace std;
//#include "test.h"
//C++中想调用C语言方法
extern "C" void show();//show方法，按照C语言方式做链接

int main(){
	show();//在C++中 函数是可以发生重载的，编译器会把这个函数名称偷偷改变
	return 0;
}
