#include<iostream>
using namespace std;
#define max 10
class vectors
{
private:
	int num;
	double vec[max];
	double vecadd[max];
public:
	int menu();
	void getInput()
	{
		int count;
		cout<<"How many Elements do you want to include in your Vector?  ";
		cin>>num;
		cout<<"\nPlease enter the Values of the vector:\n";
		for(count=0;count<num;count++)
		{
			cin>>vec[count];
		}
				cout<<"\nThe elements of the Vector are: ";
				for(count=0;count<num;count++)
		{
			cout<<vec[count]<<",";
		}
	}
	void multiply()
	{
		int scalar,count;
		double product[max];
		cout<<"\nEnter a Scalar to multiply with the vector:\t";
		cin>>scalar;
				for(count=0;count<num;count++)
				{
				product[count]=vec[count]*scalar;
				}
				cout<<"\nThe New Vector after the product is:\n";
				for(count=0;count<num;count++)
				{
					cout<<product[count]<<",";
				}
	}
	void modify()
	{
		int position,n,count;
		cout<<"\nEnter the position of element to be modified:\t";
		cin>>position;
		cout<<"\nEnter the New Elelment:\t";
		cin>>n;
			vec[position]=n;
			cout<<"\nThe New vector is:\t";
		for(count=0;count<num;count++)
		{
		cout<<vec[count]<<",";	
		}
	}
	void add()
	{
		int count;
		double newvec[max];
		
		cout<<"\nEnter the new vector to add to original one:\n";
		for(count=0;count<num;count++)
		{
		cin>>vecadd[count];
		}
		for(count=0;count<num;count++)
		{
			newvec[count]=vecadd[count]+vec[count];
		}
		cout<<"\nThe Sum of the two vectors is:\n"<<endl;;
		for(count=0;count<num;count++)
			cout<<newvec[count]<<",";
	}
	};

int main()
{
	int ch;
	vectors object;
	object.getInput();
	cout<<"\n";
	do
	{
	cout<<"\n\nPlease Select the action to perform on the vector:"<<endl;
	cout<<"\n\n1: Modify the Vector"<<endl;
	cout<<"2: Multiply with a Scalar Value"<<endl;
	cout<<"3: Add with Another Vector"<<endl;
	cout<<"4: Exit the Program"<<endl;

	ch=object.menu();
	switch(ch)
	{
	case 1:object.modify();
	cout<<"\n";
	break;
	case 2:object.multiply();
	cout<<"\n";
	break;
	case 3: object.add();
	break;
	case 4: exit(1);
	default:cout<<"Invalid Choice!!";
	}
	}

	while(1);
}
 int vectors::menu()
{
	int ch;
	cout<<"\nEnter your Choice:";
	cin>>ch;
	return ch;
}
    