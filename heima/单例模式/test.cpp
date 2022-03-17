#include<bits/stdc++.h>
using namespace std;

//设计模式的单例模式

//一个类中只能实例出来一个对象，就叫单例模式

//主席案例

//创建主席类
//需求 单例模式 为了创建类中的对象，并且保证只有一个对象实例


//对象指针类内声明，类外初始化
//对象指针和两个构造函数都私有化
//提供一个返回实例的公有化 static方法（不用实例化就能调用）
class ChairMan{
    //构造函数进行私有化
    private:
        ChairMan(){
            cout << "创建国家主席" << endl;
        }

        //拷贝构造函数私有化
        ChairMan(const ChairMan& c){

        }
        static ChairMan * singleMan;
    public:
        //提供 get方法 访问主席
        //静态成员方法获取静态成员属性
        static ChairMan* getInstance(){
            return singleMan;
        }
};
ChairMan * ChairMan::singleMan = new ChairMan;

void test01(){
    //ChairMan::singleMan;
    ChairMan* cm1 = ChairMan::getInstance();
    ChairMan* cm2 = ChairMan::getInstance();
    if(cm1 == cm2){//结果是相同
        cout << "cm1与cm2相同" << endl;
    }
    else{
        cout << "cm1与cm2不同" << endl;
    }

    // //如果拷贝构造公有或者默认公有，可以通过拷贝构造函数创建新的对象
    // ChairMan * cm3 = new ChairMan(*cm2);
    // if(cm3 == cm2){//结果是不同
    //     cout << "cm3与cm2相同" << endl;
    // }
    // else{
    //     cout << "cm3与cm2不同" << endl;
    // }
}

//打印机案例
class Printer{
    private:
        Printer(){
            m_Count = 0;
        };
        Printer(const Printer &p){};
        static Printer* singlePrinter;
        int m_Count;
    public:
        static Printer* getInstance(){
            return singlePrinter;
        }
        void printText(string text){
            cout << text << endl;
            m_Count ++;
            cout << "打印机使用了次数为：" << m_Count <<endl;
        }    
};
Printer* Printer::singlePrinter = new Printer;

void test02(){
    Printer * printer = Printer::getInstance();
    printer -> printText("离职报告");
    printer -> printText("退休申请");
}
int main(){
    //cout << "main调用" << endl;//主席先于main函数调用
    test01();
    test02();
}