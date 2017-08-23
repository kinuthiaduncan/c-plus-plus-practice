#include "employee.h"

int Employee::count=0;

int Employee::getCount()
{
	return count;
}
Employee::Employee( const string &first, const string &last )
 :Fname( first ), Sname( last )
{
	++count;
	cout<<"Employee Constructor for "<<Fname<<' '<<Sname<<" called "<<endl;
}
Employee::~Employee()
{
	cout<<"Employee Destructor for "<<Fname<<' '<<Sname<<" called "<<endl;
	--count;
}
string Employee::getFname() const
{
	return Fname;
}
string Employee::getSname() const
{
	return Sname;
}
int main()
{
	cout<<"\nNumber of employees before initialisation of objects: "<<Employee::getCount()<<endl;
	{
	Employee e1("Susan", "Kamau");
	Employee e2("Duncan", "Kinuthia");
	cout<<"\nNumber of employees after initialisation of objects: "<<Employee::getCount()<<endl;
	cout<<"\nEmployee 1: "<<e1.getFname()<<' '<<e1.getSname()<<endl;
	cout<<"\nEmployee 2: "<<e2.getFname()<<' '<<e2.getSname()<<endl;
	}
	cout<<"\n\nNumber of employees after objects are deleted is: "<<Employee::getCount()<<endl;

	system("pause");
}
