# include <stdio.h>
//# include <cs50.h>
int main(void)
{
	// Declare and intialize variables
	int pyramid_height = 0;
	// Grab user input, check it and ask for retry if not within bounds
	do {
		printf("Height:");
		scanf_s("%d", &pyramid_height);
		if (pyramid_height == 0)
		{
			return 0;
		}
	} while (pyramid_height < 1 || pyramid_height > 23);
	for (int i = 0; i < pyramid_height; i++)
	{
		// Print the required spaces
		for (int j = 0; j < pyramid_height - i - 1; j++)
		{
			printf("%s ", " ");
		}
		// Print the '#' character.
		for (int k = 0; k < i + 2; k++)
		{
			printf("#");
		}
		printf("\n");
	}
	getchar();
	return 0;
	getchar();
}