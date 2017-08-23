#include<iostream>
using namespace std;
class Test
{
public:
	Test(int=0);
	void print() const
	{
		cout<<"         X= "<<x;
		cout<<"\nthis -> X= "<<this->x;
		cout<<"\n *this.X= "<<(*this).x;
	}

private:
	int x;

};
Test::Test(int value)
	:x(value)
{
}
int main()
{
	Test TestObject(12);
	TestObject.print();
	system("pause");
}