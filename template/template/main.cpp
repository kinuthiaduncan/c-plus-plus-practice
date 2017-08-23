#include<iostream>
#include "template.h"
using namespace std;
int main()
{
	int int1,int2,int3;
	cout<<"Enter three integers"<<endl;
	cin>>int1>>int2>>int3;
	cout<<"The maximum Integer value is"<<maximum(int1,int2,int3)<<endl;

	double double1,double2,double3;
	cout<<"Enter three doubles"<<endl;
	cin>>double1>>double2>>double3;
	cout<<"The maximum Double value is"<<maximum(double1,double2,double3)<<endl;

	char char1,char2,char3;
	cout<<"Enter three characters"<<endl;
	cin>>char1>>char2>>char3;
	cout<<"The maximum character value is"<<maximum(char1,char2,char3)<<endl;
	system("pause");
}
