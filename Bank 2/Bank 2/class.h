#ifndef BACKACCOUNT_DEFINED
#define BACKACCOUNT_DEFINED 1
class BackAccount
{
public:
BackAccount();
virtual ~BackAccount(){}
BackAccount( int currentBalance);
// transformer methods
void deposit( int amount);
void withdraw( int amount);
// observer methods
int getCurrentBalance();
int getNumberOfTransactions();
protected:
private:
int currentBalance;
int numberOfTransactions;
};
#endif