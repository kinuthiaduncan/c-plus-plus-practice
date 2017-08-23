#include "PhoneNumber.h"
#include<iostream>
using namespace std;
int main()
{
	PhoneNumber phone;
	cout<<"Enter the Phone Number in the format (123) 456-7890: "<<endl;
	cin>>phone;
	cout<<"\nThe Phone Number entered was: ";
	cout << phone <<endl;
	system("pause");
}