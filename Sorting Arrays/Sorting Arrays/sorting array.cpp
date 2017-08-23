#include <iostream>
using namespace std;

int linearSearch(const int [], int,int);
int main()
{
	const int arraySize=100;
	int a[arraySize]={20,12,13,56,78,90,9,23,45,70};
	int searchkey;

	//for(int i=0; i<arraySize;i++)
		//a[i]=2*i;

	cout<<"Enter Search Key: ";
	cin>>searchkey;

	int element = linearSearch(a,searchkey,arraySize);

		if(element !=-1)
			cout<<"Found Value in Element "<<element<<endl;
		else
			cout<<"Value not Found"<<endl;
}

int linearSearch(const int array[], int key,int sizeOfArray)
{
	for(int j=0; j<sizeOfArray;j++)
		if(array[j]==key)
			return j;
	return -1;
}