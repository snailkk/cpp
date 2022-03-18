#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//��̬ת��
//��������

void test01()
{
	char a = 'a';

	double d = static_cast<double>(a);

	cout << "d = " << d <<endl;
}

//����֮��ת��
class Base{};
class Child :public Base{};
class Other{};
void test02()
{
	Base * base = NULL;
	Child * child = NULL;

	//��baseתΪ Child*���� ����  ����ȫ
	Child * child2 = static_cast<Child*>(base);

	//��child תΪ Base*  ����  ��ȫ
	Base * base2 = static_cast<Base*>(child);

	//תother���� ת����Ч
	//Other * other = static_cast<Other*>(base);
}

//static_castʹ��   static_cast<Ŀ������>(ԭʼ����)

// ��̬ת��

void test03()
{
	//�������Ͳ�����ת��
	char c = 'a';
	//dynamic_cast�ǳ��ϸ�ʧȥ���� ���߲���ȫ��������ת��
	//double d = dynamic_cast<double>(c);

}

class Base2
{
	virtual void func(){};
};
class Child2 :public Base2
{
	virtual void func(){};
};
class Other2{};

void test04()
{
	Base2 * base = NULL;
	Child2 * child = NULL;

	//childתBase2 *  ��ȫ
	Base2 * base2 = dynamic_cast<Base2*>(child);


	//base תChild2 * ����ȫ
	//Child2 * child2 = dynamic_cast<Child2*>(base);

	//dynamic_cast ��������˶�̬����ô�����û���תΪ������ ������ת��
	Base2 * base3 = new Child2;
	Child2 * child3 = dynamic_cast<Child2*>(base3);

}


// ����ת��(const_cast)
void test05()
{
	const int * p = NULL;
	//ȡ��const
	int * newp = const_cast<int *>(p);

	int * p2 = NULL;
	const int * newP2 = const_cast<const int *>(p2);


	//���ܶԷ�ָ�� �� �����õ� ��������ת��
	//const int a = 10;
	//int b = const_cast<int>(a);

	//����
	int num = 10;
	int &numRef = num;

	const int &numRef2 = static_cast<const int &>(numRef);
}

//���½���ת��(reinterpret_cast)
void test06()
{
	int a = 10;
	int * p = reinterpret_cast<int *>(a);


	Base * base = NULL;
	Other * other = reinterpret_cast<Other*>(base);

	//���ȫ �����Ƽ�

}






int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}