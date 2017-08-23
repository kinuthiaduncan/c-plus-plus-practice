#include <fstream>
#include <conio.h>
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
class book
{
char book_number[30];
char book_name[50];
char author_name[50];
int book_price;
int stock_position;

public :
void create_book()
{
cout<< "\nEnter The Book Number: " ;
cin>>book_number;
cout<< "\nEnter The Name of The Book: " ;
cin.ignore();
cin.getline(book_name,50);
cout<< "\nEnter The Author's Name: " ;
cin.ignore();
cin.getline(author_name,50);
cout<<"\nEnter the Price of each book: ";
cin.ignore();
cin>>book_price;
cout<<"\nEnter the Stock Amount: ";
cin.ignore();
cin>>stock_position;
cout<< "\t\t\n\nBook Created Successfully..." ;
}


void show_book()
{
cout<< "\nBook Number: " <<book_number;
cout<< "\nBook Name: " <<book_name;
cout<< "\nAuthor's Name: " <<author_name;
cout<< "\nBook Unit Price: "<<book_price;
cout<< "\nStock Amount: "<<stock_position;
}


void modify_book()
{
cout<< "\nBook number : " <<book_number;
cout<< "\nModify Book Name : " ;
cin.ignore();
cin.getline(book_name,50);
cout<< "\nModify Author's Name: " ;
cin.ignore();
cin.getline(author_name,50);
}
char * getbooknumber()
{
return book_number;
}
void report()
{
	cout<<book_number<<setw(25)<<book_name<<setw(20)<<author_name<<setw(20)<<book_price<<setw(20)<<stock_position<<endl;}
};

fstream fp,fp1;
book bk;


void write_book()
{
system( "cls" );
int more_or_main;
fp.open( "book.dat" , ios ::out|ios ::app);
do
{
bk.create_book();
fp.write(( char *)&bk, sizeof(book ));
cout<< "\nPress 1 to add more books." ;
cout<< "\nPress 2 to return to main menu.\n" ;
cout<< "Enter: " ;
cin>>more_or_main;
} while (more_or_main == 1);
fp.close();
}


void display_a_book( char n [])
{
system( "cls" );
cout<< "\nBOOK DETAILS\n" ;
int check=0;
fp.open( "book.dat" , ios ::in);
while (fp.read(( char *)&bk, sizeof
(book )))
{
if (strcmpi(bk.getbooknumber
(), n )==0)
{
bk.show_book();
check=1;
}
}
fp.close();
if (check==0)
cout<< "\n\nBook does not exist" ;
getch();
}


void modify_book()
{
system( "cls" );
char n[20];
int found=0;
cout<< "\n\n\tMODIFY BOOK" ;
cout<< "\n\n\tEnter The book number: " ;
cin>>n;
fp.open( "book.dat" , ios ::in|ios ::out);
while (fp.read(( char *)&bk, sizeof(book )) && found==0)
{
if (strcmpi(bk.getbooknumber(),n)==0)
{
bk.show_book();
cout<< "\nEnter The New Details of book" <<endl;
bk.modify_book();
int pos=-1* sizeof(bk);
fp.seekp(pos, ios ::cur);
fp.write
((char *)&bk, sizeof(book ));
cout<< "\n\n\t Record Updated Successfully..." ;
found=1;
}
}
fp.close();
if (found==0)
cout<< "\n\n Record Not Found " ;
getch();
}

void delete_book()
{
system( "cls" );
char n[20];
int flag=0;
cout<< "\n\n\n\tDELETE BOOK" ;
cout<< "\n\nEnter The Book's number You Want To Delete: " ;
cin>>n;
fp.open( "book.dat" , ios ::in|ios ::out);
fstream fp2;
fp2.open( "Temp.dat" ,ios ::out);
fp.seekg(0, ios ::beg);
while (fp.read(( char *)&bk, sizeof(book )))
{
if (strcmpi(bk.getbooknumber(),n)!=0)
{
fp2.write
((char *)&bk, sizeof(book ));
}
else
flag=1;
}
fp2.close();
fp.close();
remove( "book.dat" );
rename( "Temp.dat" ,"book.dat" );
if (flag==1)
cout<< "\n\n\tRecord Deleted .." ;
else
cout<< "\n\nRecord not found" ;
getch();
}


void display_allb()
{
system( "cls" );
fp.open( "book.dat" , ios ::in);
if (!fp)
{
cout<< "ERROR!!! FILE COULD NOT BE OPEN " ;
getch();
return ;
}
cout<< "\n\n\t\tBook LIST\n\n" ;
cout<< "=======================================================================================================================\n" ;
cout<< "Book Number" <<setw(20)<< "Book Name" <<setw(20)<< "Author"<<setw(20)<<"Unit Price"<<setw(25)<<"Stock Position"<<"\n" ;
cout<< "========================================================================================================================\n" ;
while (fp.read(( char *)&bk, sizeof(book )))
{
bk.report();
}
fp.close();
getch();
}


/*
void sell_book()
{
system( "cls" );
char sn[20],bn[20];
int found=0,flag=0;
cout<< "\t\t\nBOOK ISSUE" ;

fp1.open( "book.dat" ,ios ::in|
ios ::out);

if(st.rettoken()==0)
{
cout<< "\n\n\tEnter book number: " ;
cin>>bn;
while(fp1.read
((char *)&bk, sizeof(book ))&& flag==0)
{
if(strcmpi
(bk.getbooknumber(),bn)==0)
{
bk.show_book();
flag=1;

fp.seekp(pos, ios ::cur);

cout<< "\n\n\t Book sold successfully..." ;
}
}
if (flag==0)
cout<< "Book number does not exist" ;
}
getch();
system( "cls" );
fp.close();
fp1.close();
}
*/

void intro()
{
system( "color 05" );
system( "cls" );
cout<< "\t\t\t\t*\t*" ;
cout<< "\t\t\t\t**\t**" ;
cout<< "\t\t\t\t***\t***" ;
cout<< "\t\t\t\t****\t****" ;
cout<< "\t\t\t\t*****\t*****" ;
cout<< "\t\t\t\t******\t******" ;
cout<< "\t\t\t\t*******\t*******" ;
cout<< "\t\t\t\t*******\t*******" ;
cout<< "\t\t\t\t******\t******" ;
cout<< "\t\t\t\t*****\t*****" ;
cout<< "\t\t\t\t****\t****" ;
cout<< "\t\t\t\t***\t***" ;
cout<< "\t\t\t\t**\t**" ;
cout<< "\t\t\t\t*\t*" ;
}

void book_menu()
{
int option;
cout<< "\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" ;
cout<< "\n\t\tPress 1 to CREATE BOOKS" ;
cout<< "\n\t\tPress 2 to DISPLAY ALL BOOKS" ;
cout<< "\n\t\tPress 3 to DISPLAY SPECIFIC BOOK" ;
cout<< "\n\t\tPress 4 to MODIFY BOOKS" ;
cout<< "\n\t\tPress 5 to DELETE BOOKS" ;
cout<< "\n\t\tPress 6 to GO BACK TO MAIN MENU" ;
cout<< "\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n" ;
cout<< "\n\t\tOption: " ;
cin>>option;
switch(option)
{
case 1:  system( "cls" );
write_book();
break ;
case 2: display_allb();
break ;
case 3:
char num[20];
system( "cls" );
cout<< "\n\n\tPlease Enter The book No. " ;
cin>>num;
display_a_book(num);
break ;
case 4: modify_book(); break ;
case 5: delete_book(); break ;
case 6: system( "cls" );
break ;
default :cout<< "\a" ;
}
}



int main()
{
int option = 0;
for (;;)
{
intro();
cout<< "\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" ;
cout<< "\n\t\tPress 1 to SELL BOOKS" ;
cout<< "\n\t\tPress 2 to UPDATE BOOK RECORDS" ;
cout<< "\n\t\tPress 3 to TO EXIT" ;
cout<< "\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n" ;
cout<< "\n\t\tOption: " ;
cin>>option;
switch(option)
{
/*case 1:system( "cls" );
issue_book();
break ;*/

case 2:system( "cls" );
book_menu();
break ;
case 3:exit(0);
break ;
default :cout<< "\a" ;
exit(0);
}
}
}