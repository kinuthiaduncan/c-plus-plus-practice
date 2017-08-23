#include<iostream>
using namespace std;
int volume(int length, int width, int height);
int main()
{
	int a,b,c;
	cout<<"Enter length,width and height:\t"<<endl;
	cin>>a>>b>>c;
	cout<<"The volume of the cboid is:\t"<<volume(a,b,c)<<endl;
	return 0;
}
int volume(int length, int width, int height)
{
	return length*width*height;
}