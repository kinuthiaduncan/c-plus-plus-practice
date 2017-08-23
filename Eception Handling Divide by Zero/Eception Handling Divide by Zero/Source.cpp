#include<iostream>
#include "Header.h"
using namespace std;

double quotient(int numerator,int denominator)
{
	if(denominator==0)
		throw DivideByZeroException();
	return static_cast<double>(numerator)/denominator;

}
int main()
{
	int number1, number2;
	double result;
	cout<<"Enter two Integers(end of file to end)";
	while(cin>>number1>>number2)
	{
		try
		{
			result=quotient(number1,number2);
			cout<<"The Quotient is: "<<result<<endl;
		}
		catch(DivideByZeroException &divideByZeroException)
		{
			cout<<"Exception Occurred: "<<divideByZeroException.what()<<endl;
		}
		cout<<"Enter two Integers(end of file to end)";
	}
	cout<<endl;
	system("pause");
}