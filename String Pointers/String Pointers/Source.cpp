#include<iostream>
using namespace std;
int main()
{
	const char *colorPtr="blue";
	cout<<"*ColorPtr "<<*colorPtr<<endl;
	cout<<"\n\ncolorPtr "<<colorPtr<<endl;
	cout<<"*ColorPtr+1 "<<*(colorPtr+1)<<endl;
	system("pause");
}