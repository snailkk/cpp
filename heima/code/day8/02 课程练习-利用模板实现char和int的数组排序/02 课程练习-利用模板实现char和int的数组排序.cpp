#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//��char��int�����������  ������� �Ӵ�С  ����ѡ������

template <class T>
void mySwap( T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}


template<class T>
void mySort( T arr[], int len )
{
	for (int i = 0; i < len;i++)
	{
		int max = i;
		for (int j = i + 1; j < len;j++)
		{
			if (arr[max] < arr[j])
			{
				//���� �±�
				max = j;
			}
		}
		if (max != i)
		{
			//��������
			mySwap(arr[max], arr[i]);
		}
	}
}

//�������Ԫ�ص�ģ��
template<class T>
void printArray( T arr[], int len)
{
	for (int i = 0; i < len;i++)
	{

		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01()
{
	char charArr[] = "helloworld";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);


	int intArr[] = { 1, 4, 100, 34, 55 };
	int num2 = sizeof(intArr) / sizeof (int);
	mySort(intArr, num2);
	printArray(intArr, num2);

}


int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}