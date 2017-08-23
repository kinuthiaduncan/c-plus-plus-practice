#include <conio.h>
#include <dos.h>

int main()
{
	int i;

	for (i = 25; i >= 1; i--)
	{
		clrscr();
		window(20, i, 70, 25);


		textcolor(2);// click here to see about textcolor()

		cprintf("This program intruduced by Abdul Rizwan\r\n\n");
		delay(500); // halt for half second [1000 = 1second]
		if (i == 1)
			i = 25;// reinitialize of i
	}

	return 0;
}