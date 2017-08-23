/*								**************************
                                ***************************
								**  Kinuthia Duncan      **
								**	P15/1457/2013		 **
								**	Bank Account Program **
								**      CSC221           **
								***************************
								***************************
*/
#include<iostream>
#include <conio.h>
#include <cstdlib>
#include <string>
using namespace std;
class bank {
private:
  int ac;
  int static reset;
  float balance, amount, shorta;
  string name,accType;
public:
 void deposit();
 void withdraw();
 void chkbalance();
 int menu();
};
  int bank::reset=0;
  void bank::deposit() 
  {
    cout<<"\nEnter Account Number: ";
    
    cin>>ac;
	cout<<"\nEnter the Customer Name: ";
	cin>> name;
	cout<<"\nEnter the Account Type: ";
	cin>>accType;
    cout<<"\nEnter Amount you want to Deposit: ";
    cin>>amount;
    balance=amount;
    cout<<"\n\nMessage: You have successfully deposited."<< amount<<" into your account.\n\nYour Current Balance is:"<<balance<<"\n\n";
   reset++;
}
void bank::withdraw() 
{
	cout<<"Enter Account Number:";
	cin>>ac;
	cout<<"Enter Amount you want to Withdraw:";
	cin>>amount;
if(amount>balance)
{
	shorta=amount-balance;
	cout<<"\n\nYou cannot withdraw."<< amount<<" as your account balance is."<<balance<<"\n\nYou are short of."<<shorta;
}
else
{
	balance =balance-amount;
	cout<<"You have Withdrawn."<<amount<<" Successfully\n\n Your account balance is:"<<balance<<"\n\n";
}

}
void bank::chkbalance() 
{
	cout<<"Enter Account Number:";
	cin>>ac;
if(reset==0)
{
	balance=0;
}
cout<<"Your Account balance is."<< balance <<"\n\n";
}