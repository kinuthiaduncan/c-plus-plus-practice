#include <stdio.h>
#include<conio.h>
char pw[25],ch;
int i;
void main()
{
clrscr();
puts("Enter password");
while(1)
{
if(i<0)
i=0;
ch=getch();
if(ch==13)
break; /*13 is ASCII value of ENTER*/
if(ch==8) /*ASCII value of
BACKSPACE*/
{
putch('b');
putch( NULL );
putch('b');
–i;
continue;
}
pw[i++]=ch;
ch='*';
putch(ch);
}
pw[i]=’?;
printf("nn%s",pw);
getch();
}