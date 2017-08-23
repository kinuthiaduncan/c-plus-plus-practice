#include<iostream>
using namespace std;
void cube(int *);
int main()
{
	int length;
	cout<<"Enter the Length:\t "<<endl;
	cin>>length;

       cube(&length);

	   cout<<"\nThe cube is "<<length<<endl;
system("pause");
}
void cube(int *n)
{
	*n= *n * *n * *n;
}

