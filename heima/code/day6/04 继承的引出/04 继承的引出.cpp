#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//class News
//{
//public:
//	void header()
//	{
//		cout << "����ͷ��" << endl;
//	}
//	void footer()
//	{
//		cout << "�����ײ�" << endl;
//	}
//	void left()
//	{
//		cout << "����б�" << endl;
//	}
//
//	void content()
//	{
//		cout << "���Ų���" << endl;
//	}
//
//};
//
//class YULE
//{
//public:
//	void header()
//	{
//		cout << "����ͷ��" << endl;
//	}
//	void footer()
//	{
//		cout << "�����ײ�" << endl;
//	}
//	void left()
//	{
//		cout << "����б�" << endl;
//	}
//
//	void content()
//	{
//		cout << "�װٺϡ�����" << endl;
//	}
//
//};
//
//void test01()
//{
//	News news;
//	news.header();
//	news.footer();
//	news.left();
//	news.content();
//
//	//����ҳ
//	YULE yl;
//	yl.header();
//	yl.footer();
//	yl.left();
//	yl.content();
//
//}

//�̳�д��
//����һ�� �������ҳ  �ظ��Ĵ��붼д�������ҳ��
class BasePage
{
public:
	void header()
	{
		cout << "����ͷ��" << endl;
	}
	void footer()
	{
		cout << "�����ײ�" << endl;
	}
	void left()
	{
		cout << "����б�" << endl;
	}
};

class News :public BasePage //�̳�  News�� �̳��� BasePage��
{
public:
	void content()
	{
		cout << "���Ų���" << endl;
	}
};

class YULE :public BasePage
{
public:
	void content()
	{
		cout << "�װٺϡ�����" << endl;
	}
};

class Game :public BasePage
{
public:
	void content()
	{
		cout << "KPLֱ��" << endl;
	}
};


void test02()
{
	cout << " ������ҳ���ݣ� " << endl;
	News news;
	news.header();
	news.footer();
	news.left();
	news.content();

	cout << " ������ҳ���ݣ� " << endl;
	YULE yl;
	yl.header();
	yl.footer();
	yl.left();
	yl.content();


	cout << " ��Ϸ��ҳ���ݣ� " << endl;
	Game game;
	game.header();
	game.footer();
	game.left();
	game.content();

}

//�̳� ���ٴ����ظ�����
//BasePage  ���� (����)   News ������ �����ࣩ



int main(){

	//test01();

	test02();

	system("pause");
	return EXIT_SUCCESS;
}