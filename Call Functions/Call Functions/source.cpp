#include<iostream>
using namespace std;
int square(int x);
int main()
{
	int a;
	cout<<"Enter a Number\t"<<endl;
	cin>>a;
	cout<<"The Square is:\t"<<square(a)<<endl;
	return 0;
}
int square(int x)
{
	return (x*x);
}
