#include<iostream>
using namespace std;
size_t getSize(char *);
int main()
{
	char array[10]="classmate";
	cout<<"Number of bytes in the array is "<<sizeof(array)<<endl;
	cout<<"\nReturned by sizeof function: "<<getSize(array)<<endl;
	system("pause");
}
size_t getSize(char *ptr)
{
	return sizeof(ptr);
}