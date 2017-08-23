#include<iostream>
using namespace std;
class Count
{
	friend void setX(Count &, int);
public:
	Count()
		: x(0)
	{
	}
	void print() const
	{
		cout<<x<<endl;
	}
private:
	int x;
};
void setX(Count &c, int val)
{
	c.x=val;
}
int main()
{
	Count counter;
	cout<<"X after initialisation ";
	counter.print();

	setX(counter,8);
	cout<<"\nX after call to friend function ";
	counter.print();
	system("pause");
	return 0;
}