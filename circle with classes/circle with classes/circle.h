#include <iostream>
#define pie 3.14285714
using namespace std;
class Area
{
private:
	double radius;
	double area;
public:
	void getInput()
	{
		cout<<"Please Enter the Radius:\t"<<endl;
		cin>>radius;
	}
	void calcArea()
	{
		area=pie*radius*radius;
	}
	void showArea()
	{
		cout<<"The area of the circle is:"<<area<<endl;
	}
};