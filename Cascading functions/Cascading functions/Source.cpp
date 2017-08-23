#include<iostream>
#include "time.h"
using namespace std;
Time &Time::setHour(int h)
{
 if ( h >= 0 && h < 24 )
   hour = h;
 else
   cout<< "hour must be 0-23" ;
 return *this;
}
Time &Time::setMinute(int m)
{
 if ( m >= 0 && m < 60 )
    minute = m;
 else
     cout<< "minute must be 0-59" ;
 return *this;
}
Time &Time::setSecond(int s)
{
 if ( s >= 0 && s < 60 )
   second = s;
 else
    cout<< "second must be 0-59";
 return *this;
}
int main()
{
	Time t;
	int a,b,c;
	cout<<"Enter the Current Time in format HH, MM, SS: "<<endl;
	cin>>a>>b>>c;
	t.setHour(a).setMinute(b).setSecond(c);

	system("pause");
}