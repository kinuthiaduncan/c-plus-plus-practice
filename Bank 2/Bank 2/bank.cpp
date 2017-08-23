#include "class.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
int main( int argc, char **argv)
{
    std::string line;
char temp[1024];
int initialCurrentBalance;
std::ifstream data4db;
std::ofstream output;
data4db.open( "data4b.txt" );
output.open( "output.txt" );
std::cin >> initialCurrentBalance;
BackAccount backAccount(initialCurrentBalance);
char * pch;
while (!data4db.eof())
{
getline (data4db, line);
memset(temp, 0, sizeof(temp));
strncpy(temp, line.c_str(), sizeof(temp));
output << temp << std::endl;
pch = strtok(temp, " " );
while ( pch != NULL)
{
// withraw or deposit
if (strcmp(pch, "w" ) == 0)
{
pch = strtok(NULL, " " );
backAccount.withdraw(atoi(pch));
}
else if (strcmp(pch, "d" ) == 0)
{
pch = strtok(NULL, " " );
backAccount.deposit(atoi(pch));
}
else
{
pch = strtok(NULL, " " );
// do nothing
}
}
}
data4db.close();
output << "Current Balance is $" << backAccount.getCurrentBalance() << std::endl;
output << "Number Of Transactions is " << backAccount.getNumberOfTransactions() << std::endl;
output.close();
}