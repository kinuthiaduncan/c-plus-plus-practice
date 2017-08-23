#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#define max 1000
using namespace std;
class bookshop
{
private:
	string author[max];
	string publisher[max];
	int stock[max];
	int price[max];
	string stockposition[max];
	string title[max];
public:
	void addbooks()
	{
		int num,i;
		cout<<"How Many Different Books do you want to add?\n";
		cin>>num;
		for(i=0; i<num;i++)
		{
			cout<<"\nEnter the book title\n";
			cin>>title[i];
			cout<<"Enter the Authors name\n";
			cin>>author[i];
			cout<<"Enter the Publishers name\n";
			cin>>publisher[i];
			cout<<"Enter the Stock Quantity\n";
			cin>>stock[i];
			cout<<"Enter the Price of one Book\n";
			cin>>price[i];
		}
		cout<<"The Stock List is:\n\n"<<endl;
		//cout<<"Book Title"<<setw(20)<<"Author"<<setw(20)<<"Publisher"<<setw(20)<<"Stock Quantity"<<setw(20)<<"Price of One Book"<<setw(20)<<endl;
		for(i=0; i<num;i++)
		{
			//cout<<title[i]<<"\t"<<author[i]<<"\t"<<publisher<<"\t"<<stock[i]<<"\t"<<price<<endl;
			cout<<"Title\t"<<title[i]<<endl;
			cout<<"Author\t"<<author[i]<<endl;
			cout<<"Publisher\t"<<publisher<<endl;
			cout<<"Stock Quantity\t"<<stock[i]<<endl;
			cout<<"Price\t"<<price[i]<<endl;
		}
	}
};

int main()
{
	bookshop object;
	object.addbooks();
	return 0;
}
