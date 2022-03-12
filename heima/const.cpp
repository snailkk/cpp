#include<iostream>
using namespace std;
const int i = 10;
void test1(){
	int *p = (int *)&i;
	*p = 100;
	cout << i << endl;
	cout << "zheshishenme" << endl;
}
int main(){
	//test1();
	cout << "zheshiaaaaa" << endl;
	return 0;
}
