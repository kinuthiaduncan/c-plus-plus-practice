#include<stdio.h>
int main()
{
    int date,month,year;
    int ndate,nmonth,nyear;
    printf("Enter the date today\t");
    scanf("%d",&date);
    printf("Enter the month\t");
    scanf("%d",&month);
    printf("Enter the year\t");
    scanf("%d",&year);

    if(year%4==0 && month==2 &&date>29)
    {
        printf("Enter a Valid date!!");
    }
    else if(year%4!=0 && month==2 &&date>28)
    {
       printf("Enter a Valid date!!");
    }
    else if(month== 1 || month ==3 || month ==5 || month ==7 || month ==8|| month ==10|| month ==12 && date>31)
    {
      printf("Enter a Valid date!!");
    }
    else if(month == 4 || month ==6 || month ==9 || month ==11 && date >30 )
    {
      printf("Enter a Valid date!!");
    }
    else if(month>12 ||month<1)
    {
       printf("Enter a Valid date!!");
    }
    else
    {
    if(year%4!=0 && month!=2)
    {
        if(month == 1 || month ==3 || month ==5 || month ==7 || month ==8|| month ==10|| month ==12)
        {
            if(date!=31)
            {
                ndate=date+1;
                nmonth=month;
            printf("Tomorrows Date is: %d/%d/%d",ndate,nmonth,year);
            }
        else if(date==31  && month!=12)
            {
            ndate=1;
            nmonth=month+1;
            nyear=year;
            printf("Tomorrows Date is: %d/%d/%d",ndate,nmonth,nyear);
            }
            else if(date==31 && month==12)
            {
                ndate=1;
                nmonth=1;
                nyear=year+1;
                printf("Tomorrows Date is: %d/%d/%d",ndate,nmonth,nyear);
            }
        }
        else if(month == 4 || month ==6 || month ==9 || month ==11 )
        {
         if(date<30)
            {
                ndate=date+1;
                nmonth=month;
            printf("Tomorrows Date is: %d/%d/%d",ndate,nmonth,year);
            }
            else if(date==30)
            {
                ndate=1;
                nmonth=month+1;
                printf("Tomorrows Date is %d/%d/%d",ndate,nmonth,year);
            }
        }
    }
        else if(year%4!=0 && month==2)
        {
            if(date!=28)
            {
                ndate=date+1;
                printf("Tomorrows Date is %d/%d/%d",ndate,month,year);
            }
            else if(date==28)
            {
                ndate=1;
                nmonth=month+1;
                printf("The Date tomorrow is: %d/%d/%d",ndate,nmonth,year);
            }
        }
        else if(year%4==0 && month==2)
        {
            if(date<29)
            {
                ndate=date+1;
                printf("Tomorrows Date is: %d/%d/%d",ndate,month,year);
            }
            else if(date==29)
            {
                ndate=1;
                nmonth=month+1;
                printf("Tomorrows Date is: %d/%d/%d",ndate,nmonth,year);
            }
        }
    }
        return 0;
    }

