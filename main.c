#include <stdio.h>
#include <stdlib.h>

void helpMsg()
{
	printf("To convert from kilometers to miles choose: 1\n");
	printf("To convert from miles to kilometers choose: 2\n\n");
}

double kmMConversion(float a)
{
	return a * 0.621371;
}

double mKmConversion(float a)
{	
	return a / 0.621371;;
}

int main()
{
	char choice;
	float distance;
	float output;

	// Welcome message and usage guide
	printf("\nWelcome to the conversion program!\n");
	printf("You can convert kilometers to miles and vice versa. Just choose one of the options:\n");
	helpMsg();
	
	printf("\nWhich option would you like to use? [1 / 2 / h] ");

	// Conversion handling
	scanf("%c", &choice);
	if (choice == '1')
	{
		printf("Converting from kilometers to miles\n");
		printf("Enter distance in kilometers: ");
		scanf("%f", &distance);
		output = kmMConversion(distance);
		printf("\n%f kilometers converted to miles is %f\n", distance, output);
	}
	else if (choice == '2')
	{
		printf("Converting from miles to kilometers\n");
		printf("Enter distance in miles: ");
		scanf("%f", &distance);
		output = mKmConversion(distance);
		printf("\n%f kilometers converted to miles is %f\n", distance, output);
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

