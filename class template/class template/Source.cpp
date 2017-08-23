#include "Stack.h"
#include<iostream>
using namespace std;
int main()
{
	Stack<double>doubleStack(5);
	double doubleValue=1.1;
	cout<<"Pushing elements onto doubleStack\n";
	while(doubleStack.push(doubleValue))				//push 5 doubles into the stack
	{
		cout<<doubleValue<<' ';
		doubleValue +=1.1;
	}
	cout<<"\nStack is Full, Cannot push"<<doubleValue<<"\n\nPopping elements From doubleStack\n";

	while(doubleStack.pop(doubleValue))
		cout<<doubleValue<<' ';									//popping from stack
		cout << "\nStack is empty. Cannot pop\n";

		Stack<int>intStack;
		int intValue=1;
		cout <<"\nPushing elements onto intStack\n";
		while(intStack.push(intValue))
		{
			cout<<intValue++<<' ';
		}
			cout << "\nStack is full. Cannot push " << intValue<< "\n\nPopping elements from intStack\n";

		while(intStack.pop(intValue))
		cout<<intValue<<' ';									//popping from stack
		cout << "\nStack is empty. Cannot pop ";
		cout<< intValue<<' '<<endl;
	system ("pause");
}