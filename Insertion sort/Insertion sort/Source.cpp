#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	const int size=10;
	int data[size]={12,34,43,21,10,9,2,12,34,56};
	int insert;
	cout<<"Unsorted Array"<<endl;
	for(int i=0;i<size;++i)
	{
		cout<<setw(4)<<data[i]<<endl;
	}
	//sorting the array
	for(int next=0;next<size;++next)
	{
		insert=data[next];
		int moveItem=next;
		while((moveItem>0)&&(data[moveItem-1]>insert))
		{
			data[moveItem]=data[moveItem-1];
			moveItem--;
		}
		data[moveItem]=insert;
	}
	cout<<"\nSorted Array"<<endl;
	for(int i=0;i<size;++i)
	{
		cout<<setw(4)<<data[i]<<endl;
	}
	system("pause");
}