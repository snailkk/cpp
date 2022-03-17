#include<iostream>
using namespace std;

/*
在一个类中，若将一个成员变量声明为static，就叫静态成员变量。

与一般的数据成员不同，无论建立了多少个对象，都只有一个静态数据的拷贝
静态成员变量，属于某个类，所有对象共享。

静态变量，是在编译阶段就分配空间，对象还没有创建时，就已经分配空间
*/

class Person{
public:
    Person(){
        //m_Age = 10; //可以这样写,但不建议
    }
    static int m_Age;//加入static就是静态成员变量，会共享数据
    //static int m_Age = 100; //不可以这样写
    //静态成员变量，在类内声明，类外进行初始化


    //静态成员变量也是有权限的
private:
    static int m_other;//私有权限 在类外不能访问
};
int Person::m_Age = 0;//类外初始化实现
int Person::m_other = 10;//私有但可以初始化
void test01(){
    //1. 通过对象访问属性
    Person p1;
    p1.m_Age = 10;

    Person p2;

    p2.m_Age = 20;
    cout << "p1 = " << p1.m_Age << endl;
    cout << "p2 = " << p2.m_Age << endl;

    //2. 通过类名访问数据
    cout << "通过类名访问Age" << Person::m_Age << endl;

}

int main(){
    test01();
}