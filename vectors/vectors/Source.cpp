#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

void outputVector(const vector<int>&);
void inputVector(vector<int>&);
int main()
{
	vector<int>integers1(7);
	vector<int>integers2(10);
	//print integers1 size and contents
	cout<<"\nThe size of the vector integer1 is "<<integers1.size()<<"\nVector after initialization "<<endl;
	outputVector(integers1);

	//print integer1 size and contents
	cout<<"\nThe size of the vecor integers2 is "<<integers2.size()<<"\nVecor after initialization "<<endl;
	outputVector(integers2);

	//input and print integers1 and integers2
	cout<<"\n\nEnter 17 integers "<<endl;
	inputVector(integers1);
	inputVector(integers2);

	cout<<"\nAfter input the vectors contain\n"<<"\nIntegers1 "<<endl;
	outputVector(integers1);
	cout<<"\nintegers2 "<<endl;
	outputVector(integers2);
	system("pause");
}
void outputVector(const vector<int>&array)
{
	size_t i;
	for(i=0;i<array.size();++i)
	{
		cout<<setw(12)<<array[i];
		if((i+1)%4==0)
			cout<<endl;
	}
}
void inputVector(vector<int>&array)
{
	for(size_t i=0; i<array.size();++i)
	{
		cin>>array[i];
	}
}