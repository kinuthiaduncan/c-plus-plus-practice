#include<iostream>
using namespace std;
int linearSearch(const int[],int,int);
int main()
{
	const int size=100;
	int a[size];
	int b;
	int searchKey;
	cout<<"How many Values? "<<endl;
	cin>>b;
	cout<<"Enter the values "<<endl;
	for(int i=0; i<b;i++)
	{
		
		cin>>a[i];
	}
	cout<<"Enter Search key "<<endl;
	cin>>searchKey;

	int element=linearSearch(a,searchKey,size);
	if(element != -1)
	{
		cout<<"Value found in element "<<element<<endl;
	}
	else
	{
		cout<<"Value not found "<<endl;
	}
	system("pause");
}
int linearSearch(const int array[],int key, int size)
{
	for(int j=0;j<=size;j++)
		if(array[j]==key)
			return j+1;
		
	return -1;
}