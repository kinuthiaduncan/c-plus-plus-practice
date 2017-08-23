#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
	ofstream outClientFile("clients.txt",ios::out);
	if(!outClientFile)
	{
		cerr<<"File Could not be opened"<<endl;
		exit(1);
	}
	cout<<"Enter the Account, Name, and Balance. "<<endl
		<<"Enter EoF to End Input\n";
	int account;
	string name;
	double balance;
	while(cin>>account>>name>>balance)
	{
		outClientFile<<account<< ' '<<name<< ' '<<balance<<endl;
		cout<<"?";
	}
}