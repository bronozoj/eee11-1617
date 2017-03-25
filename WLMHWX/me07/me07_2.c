/*************************************************************
*  me07_2.c - Day Checker
*  programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>

int main(void)
{	// notice that the array starts with tuesday
	char days[7][10] = {"Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday"};
	int input;

	// prompt for user input
	printf("Enter day in March 2017: ");
	scanf("%d", &input);

	// limit day input
	if(input < 1 || input > 31)
		printf("Invalid input day.\n");

	// output the day using modulo indexing
	else
		printf("The day is %s\n", days[input%7]);

	return 0;
}
