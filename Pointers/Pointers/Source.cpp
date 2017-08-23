#include<iostream>
using namespace std;
int main()
{
	int *yPtr;
	int y=7;
	yPtr=&y;
	cout<<"Value of yPtr is "<<yPtr<<endl;
	cout<<"Value of *yPtr is "<<*yPtr<<endl;
	system("pause");
}