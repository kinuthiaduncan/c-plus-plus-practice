#include <iostream>
using namespace std; 
int number=7;
int main()
{
int number=3;
cout<<"Local variable:"<<number<<endl;
cout<<"Global variable:"<<::number<<endl;
}