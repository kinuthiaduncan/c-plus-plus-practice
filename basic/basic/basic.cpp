#include "stdafx.h"
#include <iostream>
using namespace std;

class basic
{
private:
	int square;
	int cube;

public:
	basic::basic();
	void calculateSquare(int a);
	void calculateCube(int a);
	void displayValues(int a);
};

basic::basic()
{
	int square=0;
	int cube=0;
}

void basic::calculateSquare(int a)
{
	basic::square=a*a;
	
}

void basic::calculateCube(int a)
{
	basic::cube=a*a*a;
	
}

void basic::displayValues(int a)
{
	cout<<"a\tsquare\tcube"<<endl;
	cout<<a<<"\t"<<basic::square<<"\t"<<basic::cube<<endl;

}

void main()
{
int a;
basic calculate;

cout<<"Enter the value of a: ";
cin>>a;

calculate.calculateSquare(a);
calculate.calculateCube(a);
calculate.displayValues(a);

cout<<"LIKE A BAUS\n";
system("pause");
}
