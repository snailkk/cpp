#include<iostream>
using namespace std;
//char * arr = (char *)malloc(4*size_of(char))
//c使用molloc和free在堆区进行动态内存管理
//切记强制类型转换，返回void *
//有可能申请失败，返回NULL
//用户在使用这个对象之前必须对这个地址进行初始化

class Person
{
public:
	Person(){
		cout << "默认构造函数" << endl;
	}//注意有new开辟数组时一定会调用默认构造函数
	Person(int a){
		cout << "有参构造函数" << endl;
	}
	~Person(){
		cout << "析构函数调用" << endl;
	}
};
void test01(){
	//Person p1;栈区开辟
	Person *p2 = new Person;//堆区开辟
	//所有new出来的对象，都会返回该类型的指针
	//malloc 返回void* 还要强转
	//malloc会调用构造函数吗？不会，new会
	//new运算符，malloc函数
	//释放堆区空间
	delete p2;//delete也是一个运算符
}
void test02(){
	void *p = new Person;
	//当用void* 接受new出来的指针，会出现释放的问题
	delete p;
	//无法释放p
}
void test03(){
	//通过new开辟数组,一定会调用默认构造函数，所以一定要提供默认构造函数
	Person *pArray = new Person[10];
	Person pArray2[2] = {Person(1),Person(2)};//在栈上开辟数组，可以指定有参构造
	//释放数组
	delete [] pArray; 
}
int t(){
	Person *person = new Person;

	//相当于
	Person *person = (Person*)malloc(sizeof(Person));
	if(person == NULL){
		return 0;
	}
	person -> Init();//相当于构造函数、
	//New操作符能确定在调用构造函数初始化之前内存分配是成功的，所以不用显式确定调用是否成功
}

