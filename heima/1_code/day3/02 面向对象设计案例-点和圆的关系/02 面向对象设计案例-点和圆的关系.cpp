#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "circle.h"
#include "point.h"
/*
���һ��Բ���ࣨAdvCircle������һ�����ࣨPoint����������Բ�Ĺ�ϵ��
����Բ������Ϊx0, y0, �뾶Ϊr���������Ϊx1, y1
*/

//����ȫ�ֺ��� �жϵ��Բ�Ĺ�ϵ
void isInCircle(Circle & c,Point &p)
{
	//��ȡԲ�ĺ͵�ľ��� ��ƽ��
	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	int rDistance = c.getR() * c.getR();

	if (rDistance == distance)
	{
		cout << "����Բ��" << endl;
	}
	else if ( rDistance > distance)
	{ 
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}

void test01()
{
	Point p1;
	p1.setX(10);
	p1.setY(11);

	Circle c1;
	Point center;
	center.setX(10);
	center.setY(0);
	c1.setCenter(center);
	c1.setR(10);


	//����ȫ���жϵ��Բ�Ĺ�ϵ
	isInCircle(c1, p1);

	//���ó�Ա�����жϵ��Բ�Ĺ�ϵ
	c1.isInCircleByClass(p1);

}

int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}