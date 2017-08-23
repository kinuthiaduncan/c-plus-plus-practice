#include <iostream>
using namespace std;
class Shape
{
private:
	int length, height;
	int area;
public:
	void inputValues()
	{	
	cout<<"Enter the Height:\t";
	cin>>height;
	cout<<"Enter the Length:\t";
	cin>>length;
	}
	void Shape::calcArea(void)
	{
		area=length*height;
	}
	void Shape::showArea(void)
	{
		cout<<"Area is:"<<area<<endl;
	}
};
int main()
{
	 Shape square;
	 square.inputValues();
	square.calcArea();
	square.showArea();
	return 0;
}