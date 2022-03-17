#include<bits/stdc++.h>
using namespace std;

class Person2{
    public:
        Person2(){};
        Person2 PlusAge(Person2 &p){
            this->age += p.age;
            return *this;
        }
        int age;
};

//非静态成员函数才有this 指针

class Person{
    public:
        void show(){
            cout << "Person show" << endl;
        }
        void showAge(){
            cout << m_Age << endl;
        }

        int m_Age;
};

void test01(){
    Person *p = NULL;
    p -> show();//可以打印出结果,没用到this指针
    p ->showAge();//用到了this指针，会报错
}

int main(){
    test01();
    return 0;
}