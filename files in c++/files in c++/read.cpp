#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

void outputLine(int, const string, double);

int main()
{
	ifstream inClientFile("clients.txt",ios::in);
	if(!inClientFile)
	{
		cerr<<"File Could not be Opened!"<<endl;
		exit(1);
	}
	int account;
	string name;
	double balance;
	cout<<left<<setw(10)<< "Account" <<setw(13)
		<< "Name" << "Balance" <<endl<<fixed<<showpoint;
		inClientFile>>account>>name>>balance;
	outputLine( account, name, balance );
}

void outputLine(int account, const string name, double balance)
{
	cout<<left<<setw(10)<<account<<setw(13)<<name
		<<setw(7)<<setprecision(2)<<right<<balance<<endl;
}