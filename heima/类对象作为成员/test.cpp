#include<iostream>
#include<string>
using namespace std;


class Phone{
public:
	Phone(){
		cout << "手机的默认构造函数调用" << endl;
	Person(string name){
		m_PhoneName = name;
	}
	~Phone(){
		cout << "手机的析构函数调用" << endl;
	}
	string m_PhoneName;
};

class Game{
public:
	Game(){
		cout << "Game的默认构造函数调用" << endl;
	}

	Game(string name){
		m_GameName = name;
	}

	~Game(){
		cout << "Game的析构函数调用" << endl;
	}

	string m_GameName;
};
class Person{
public:
	Person(){
		cout << "Person的默认构造函数调用" << endl;
	}

	Person(string name，string phoneName,string gameName):m_Name(name),m_Phone(phoneName),m_Game(gameName){
		m_Name = name;
	}

	void playGame(){
		cout << m_Name << "拿着《" << m_Phone <<

	~Person(){
		cout << "Person 的析构函数调用" << endl;
	}

	string m_Name;
	Phone m_Phone;
	Game m_Game;
};


//类对象作为类成员时候，构造顺序先将类对象一一构造，然后构造自己，析构的顺序是相反的
void test01(){
	Person p;

}

int main(){

	test01();

	return 0;
}
