#include<iostream>
using namespace std;
void square(int &a);
int main()
{
	int b;
	cout<<"Enter a Number:\t"<<endl;
	cin>>b;
	square(b);
	cout<<"The Square is:\t"<<b<<endl;
}
void square(int &a)
{
	a=a*a;
}