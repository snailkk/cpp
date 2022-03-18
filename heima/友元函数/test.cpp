#include<bits/stdc++.h>
using namespace std;

//程序员可以把一个全局函数，某个类中的成员函数
//甚至整个类声明为友元

//全局函数做友元函数
class Building{
    //让全局的好基友函数 变为我的好朋友 友元函数
    friend void goodGay(Building * building);
    public:
        Building(){

        }


        string m_SittingRoom;//客厅
    private:
        string m_Bedroom;//卧室
};

//全局函数 好基友
void goodGay(Building * building){
    cout << "好基友正在访问" << building ->m_SittingRoom << endl;
    cout << "好基友正在访问" << building ->m_Bedroom << endl;
}
//友元函数 目的访问类中的私有成员属性
void test01(){
    Building * building = new Building;
    goodGay(building);
}

int main(){
    test01();
    return 0;
}