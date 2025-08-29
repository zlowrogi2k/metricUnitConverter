#include <stdio.h>
#include <stdlib.h>

void helpMsg()
{
	printf("To convert from kilometers to miles choose: 1\n");
	printf("To convert from miles to kilometers choose: 2\n\n");
}

void kmMConversion(float a)
{
	float kmM = a * 0.621371F;
}

void mKmConversion(float a)
{
	float mKm = a / 0.621371F;
}

int main()
{
	char choice;
	float num;

	// Welcome message and usage guide
	printf("\nWelcome to the conversion program!\n");
	printf("You can convert kilometers to miles and vice versa. Just choose one of the options:\n");
	helpMsg();
	printf("Do you understand the instructions? [y/n] ");

	// Helper handling
	scanf("%c", &choice);
	if (choice == 'y')
	{
		// handle for yes
	}
	else if (choice == 'n')
	{
		// handle for no
	}
	
	scanf("%c", &choice);
	printf("\nWhich option would you like to use? [1 / 2 / h] ");

	// Conversion handling
	if (choice == '1')
	{
		// handle 1
	}
	else if (choice == '2')
	{
		// handle 2
	}
	else if (choice == 'h')
	{
		// handle help
	}
	else
	{
		// handle invalid input
	}

	return 0;
}

