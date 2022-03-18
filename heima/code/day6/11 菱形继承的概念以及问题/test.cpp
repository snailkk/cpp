#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Animal
{
public:
	int m_Age;
};

//����� Sheep
class Sheep :virtual public Animal
{
};
//����� Tuo
class Tuo :virtual public Animal
{
};

class SheepTuo :public Sheep, public Tuo
{

};

//���μ̳еĽ������ ������̳�
//�������ǹ����һ������

void test01()
{
	SheepTuo st;
	st.Sheep::m_Age = 10;
	st.Tuo::m_Age = 20;

	cout << st.Sheep::m_Age << endl;
	cout << st.Tuo::m_Age << endl;
	cout << st.m_Age << endl; //����ֱ�ӷ��ʣ�ԭ���Ѿ�û�ж����ԵĿ����ˣ�ֻ��һ��m_Age
}

//ͨ����ַ �ҵ� ƫ����
//�ڲ�����ԭ��
void test02()
{
	SheepTuo st;
	st.m_Age = 100;

	//�ҵ�Sheep��ƫ��������
	//cout<< *(int *)((int *)*(int *)&st + 1) << endl;

	cout << *(int*)((int*)*(int *)&st + 1) << endl;

	//�ҵ�Tuo��ƫ����
	cout << *((int *)((int *)*((int *)&st + 1) + 1)) << endl;
	
	//���Age
	cout << ((Animal*)((char *)&st + *(int*)((int*)*(int *)&st + 1)))->m_Age << endl;

}

int main(){

	//test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}