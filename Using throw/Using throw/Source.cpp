#include<iostream>
#include <stdexcept>
using namespace std;
void print();
int main()
{
	print();
}
void print()
{
int a;
	cout<<"Enter A "<<endl;
	cin>>a;
	if(a<=10)
	{
		cout<<"Good "<<endl;
	}
	else
	{
		throw invalid_argument("The value must be more than 10");
	}
}