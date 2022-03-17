#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//静态成员函数
class Person{
public:
    Person(){
        //m_Age = 10; //可以这样写,但不建议
    }
    static int m_Age;

    int m_A;
    //静态成员函数
    //静态成员函数不可以访问普通成员变量
    //可以访问静态成员变量，因为不需要区分
    static void func(){
        //m_A = 10; 不能区分m_A到底是哪个对象的
        m_Age = 10;
        cout << "静态成员函数调用" << endl;
    }
    
    //普通成员函数，可以访问普通成员变量，也可以访问静态成员变量
private:
    static int m_other;//私有权限 在类外不能访问

    static void func2(){
        cout << "私有静态成员函数调用：" << endl;
    }
};
int Person::m_Age = 0;//类外初始化实现
int Person::m_other = 10;//私有但可以初始化
void test01(){
    Person p1;
    Person p2;

    //静态成员函数调用
    p1.func();
    p2.func();
    Person::func();

    //静态成员函数也是有权限的。
    //
}

int main(){
    test01();
}