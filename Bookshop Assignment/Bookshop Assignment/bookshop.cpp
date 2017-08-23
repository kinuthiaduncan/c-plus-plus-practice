#include<iostream>
#include<string>
using namespace std;
#define num 5
class books
{
public:
void setbookdetails(string bkauthor, string bktitle,double bkprice,string bkpublisher,int bkstock)
{
author=bkauthor;
title=bktitle;
price=bkprice;
publisher=bkpublisher;
stock=bkstock;
}
string getauthor(){
return author;
}
string gettitle(){
return title;
}
double getprice(){
return price;
}
string getpublisher(){
return publisher;
}
int getstock(){
return stock;
}
void print(){
cout<<"Author: "<<author<<endl;
cout<<"Title: "<<title<<endl;
cout<<"Price: "<<price<<endl;
cout<<"Publisher: "<<publisher<<endl;
cout<<"\n";
}
void updatestock(int numbought){
newstock=stock-numbought;
stock=newstock;
}
int getnewstock(){
return newstock;
}
private:
    string author,title,publisher;
    double price;
    int stock,newstock;
};
int main(){
books stockbooks[num];
static int success=0,failure=0;
stockbooks[0].setbookdetails("Benoni_Kaka","C_Programming",456.98,"Oxford_Publisher",12);
stockbooks[1].setbookdetails("William_Shakespeare","A_Midsummer's_Night_Dream",789.5,"Cambridge_Publisher",34);
stockbooks[2].setbookdetails("Charles_Dickens","A_Tale_of_Two_Cities",456,"Pearson_Education",11);
stockbooks[3].setbookdetails("Emily_Bronte","Wuthering_Heights",799.99,"Faber_and_Faber",23);
stockbooks[4].setbookdetails("John_Milton","Paradise_Lost",830.5,"Oxford_University_Press",65);
string author,title,temp,temp1;
int booksbought,i=0;
double total;
char ch;
cout<<"Do you want to purchase a book? y/n"<<endl;
cin>>ch;
while(ch=='y'||ch=='Y'){
cout<<"Enter the Author and Title of the Book you want to Buy\nUse Underscore Instead of Space"<<endl;
cin>>author;
cin>>title;
for(i=0;i<num;i++){
temp=stockbooks[i].getauthor();
temp1=stockbooks[i].gettitle();
if(author==temp&&title==temp1){
    cout<<"Details for Requested Book"<<endl;
    cout<<"\n";
    stockbooks[i].print();
    cout<<"How many copies of "<<stockbooks[i].gettitle()<<" do you want to buy"<<endl;
    cin>>booksbought;
    if(stockbooks[i].getstock()>booksbought){
        total=stockbooks[i].getprice()*booksbought;
        cout<<"Total Transaction Cost: "<<total;
        cout<<"\n";
        stockbooks[i].updatestock(booksbought);
        cout<<"The new stock for the book is "<<stockbooks[i].getnewstock();
        cout<<"\n";
        success++;

    }
    else if(stockbooks[i].getstock()<booksbought){
        cout<<"Required Copies not in Stock"<<endl;
        failure++;
    }
}
}
cout<<"Would you like another transaction?"<<endl;
cin>>ch;
}
cout<<"Number of Successful Transactions: "<<success<<endl;
cout<<"Number of Unsuccesful Transactions: "<<failure<<endl;
return 0;
}
