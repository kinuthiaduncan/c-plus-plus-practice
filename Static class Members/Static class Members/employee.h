#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
#include<string>
using namespace std;
class Employee
{
public:
	Employee(const string &,const string &);
	~Employee();
	string getFname() const;
	string getSname() const;

	static int getCount();
private:
	string Fname,Sname;
	static int count;
};
#endif