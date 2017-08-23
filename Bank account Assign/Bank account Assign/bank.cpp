/*								**************************
                                ***************************
								**  Kinuthia Duncan      **
								**	P15/1457/2013		 **
								**	Bank Account Program **
								**      CSC221           **
								***************************
								***************************
*/

#include "class.h"
	void main()
{
	bank ob;
	int ch;

do
{
	cout<<"\n\n\n1.Deposit\n2.Withdraw\n3.Balance Enquiry\n4.Exit\n\n";
	ch=ob.menu();
	switch(ch)
{
	case 1:ob.deposit();
	break;
	case 2:ob.withdraw();
	break;
	case 3:ob.chkbalance();
	break;
	case 4: exit(1);
	default:cout<<"Invalid Choice!!";
}
}
 while(1);
}
 int bank::menu()
{
	int ch;
	cout<<"\nEnter your Choice:";
	cin>>ch;
	return ch;
}