#include <stdio.h>
int maximum( int numbers [] );
int minimum( int numbers [] );
int main()
{
    int sum=0;
    double average;
int numbers[20], i, max,min;
printf("Enter 20 numbers\n");
for( i = 0; i < 20; ++i )
{
scanf("%d", &numbers[i] );
 sum=numbers[i]+sum;
}
average=(double)sum/20;
max = maximum( numbers );
min = minimum( numbers );
printf("\nMaximum value is %d\n", max );
printf("\nMinimum Value is %d\n", min);
printf("\nThe average is: %.4lf\n",average);
getchar();
return 0;
 }

int maximum( int numbers[] )
{
int max_value, i;
max_value = numbers[0];
for( i = 0; i < 20; ++i )
{
if( numbers[i] > max_value )
max_value = numbers[i];
}
return max_value;
}

int minimum( int numbers[] )
{
int min_value, i;
min_value = numbers[0];
for( i = 0; i < 20; ++i )
{
if( numbers[i] < min_value )
min_value = numbers[i];
}
return min_value;
}
