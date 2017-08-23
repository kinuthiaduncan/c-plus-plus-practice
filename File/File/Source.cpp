#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include<string>
using namespace std;
void outputLine(int, const string,double);
int main()
{
	ifstream inClientFile("Clients.txt",ios::in);
	if (!inClientFile)
	{
		cerr<<"File Could not be Opened"<<endl;
		exit(1);
	}
	int account;
	string name;
	double balance;
		cout<<left<<setw(10)<<"Account"<<setw(13)<<"Name"<<"Balance"<<endl<<fixed<<showpoint;
		inClientFile>>account>>name>>balance ;
			outputLine(account,name,balance);

	system("pause");
}
 void outputLine( int account, const string name, double balance )
{
	cout << left << setw( 10 ) << account << setw( 13 ) << name
	 << setw( 7 ) << setprecision( 2 ) << right << balance << endl;
} 