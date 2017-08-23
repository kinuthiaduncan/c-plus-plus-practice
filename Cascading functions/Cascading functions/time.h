#ifndef TIME_H
#define TIME_H

class Time
{
public:
	//Time(int=0,int=0,int=0);
	Time &setHour(int);
	Time &setMinute(int);
	Time &setSecond(int);
private:
	int hour,minute,second;

};
#endif