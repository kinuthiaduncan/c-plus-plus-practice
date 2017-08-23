#include <iostream>
using namespace std;
class AddingNumbers
{
private:
	int a;
	int b;
	int sum;
public:
	void inputNumbers()
	{
			cout<<"Please Enter the First Number:\t";
	cin>>a;
		cout<<"Please Enter the Second Number:\t";
	cin>>b;
	}
	void displaySum()
	{
		cout<<"Sum is:"<<a+b<<endl;
	}
};
int main()
{
	AddingNumbers myNumbers;
	myNumbers.inputNumbers();
	myNumbers.displaySum();
}

