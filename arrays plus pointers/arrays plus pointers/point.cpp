#include<stdio.h>
int main()
{
    int i;
    int a[5]={1,2,3,4,5};
    int *b[5];
    for(i=0;i<5;i++)
    {
        printf("Without pointers %d\n",a[i]);
    }
     for(i=0;i<5;i++)
    {
        printf("With pointers %d\n",*b[i]);
    }
}
