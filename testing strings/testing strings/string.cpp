#include <iostream>
#include <string>
using namespace std;
class test
{
private:
	string name;
public:
	void getString()
	{
		cout<<"Please Enter the full name:  ";
		getline(cin, name);
		cout<<endl;
		
	}
	void displayString()
	{
		cout<<"The Name is:  "<<name<<endl;
	}
};

int main()
{
	test ufala;
	ufala.getString();
	ufala.displayString();

}