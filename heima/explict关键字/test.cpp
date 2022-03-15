#include<iostream>
#include<string>
using namespace std;
//explicit 防止隐式类型转换
class MyString{
public:
	MyString(const char *str){
		//
	}

	explicit MyString(int a){
	}//防止构造函数中的隐式类型转换。

	char* mStr;
};

void test01(){
	MyString str = "abc";
	MyString str2(10);
	MyString str3 = 10;//做什么用很不明显
	//隐式类型转换，MyString str3 = Mystring(10);
	//explicit关键字，防止隐式类型转换
}


int main(){

	return 0;
}
