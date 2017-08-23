#include<iostream>
#include<iomanip>
using namespace std;
unsigned long factorial(unsigned long);
int main()
{
	int number;
	cout<<"Please enter a number"<<endl;
	cin>>number;
	cout<<"The factorial is: "<<factorial(number)<<endl;
	system("pause");
}
unsigned long factorial(unsigned long number)
{
	if(number<=1)
		return 1;
	else
		return number*factorial(number-1);
}