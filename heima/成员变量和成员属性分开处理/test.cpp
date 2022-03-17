#include<bits/stdc++.h>
using namespace std;
//成员变量和成员属性分开存储
//函数实例内部可以区分

//#pragma pack(1)
class Person{
    public:
        int m_A;//非静态成员变量，属于对象身上
        void func(){};//非静态成员函数，不属于对象身上
        static int m_B;//静态成员变量，不属于对象身上
        static void func2(){};//静态成员函数，不属于对象身上
        double m_C;//16正确

        Person& PlusAge(Person &p){//链式编程
            this -> age += p.age;
            return *this;//*this指向对象本体
        }
    private:
        int age;

};

//结论，非静态成员变量，才属于对象身上
void test01(){
    cout << "size of (Person) = " << sizeof(Person) << endl;
    //空类的大小为1 每个实例的对象都有独一无二的地址，char维护这个地址
    //Person p
}


//函数实例通过this 指针进行区分
//this 指针指向被调用的成员函数所属的对象
//会给函数实例默认传一个参数，func(Person *this);
//编译器会偷偷加一个this指针
//this 指针永远指向当前对象

//this指针是一种隐含指针，它隐含于每个类的非静态的成员函数中

//this可以解决命名冲突

//this指针链式编程