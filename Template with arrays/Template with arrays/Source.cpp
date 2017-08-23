#include<iostream>
using namespace std;

template<typename T>
void printArray(const T* const array,int count)
{
	for(int i=0; i<count;++i)
		cout<<array[i]<<" ";
	cout<<endl;
}
int main()
{
	const int aCount=5;
	const int bCount=7;
	const int cCount=9;

	int a[aCount]={1,2,3,4,5};
	double b[bCount]={1.1,1.2,1.3,1.4,1.5,1.6,1.7};
	char c[cCount]="HELLO";

	cout<<"Array A Contains: "<<endl;
	printArray(a,aCount);
	cout<<"Array b Contains: "<<endl;
	printArray(b,bCount);
	cout<<"Array c Contains: "<<endl;
	printArray(c,cCount);
	system("pause");
}