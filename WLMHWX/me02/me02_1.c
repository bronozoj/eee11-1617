/*************************************************************
*  me02_01 - Negative, Zero, or Positive
*  Programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>

int main(void)
{
	int digit;
	
	// scan for user input
	printf("Input a digit: ");
	scanf(" %d", &digit);
	
	printf("The digit is (%d).\n", digit);
	
	// comparison based on zero
	if(digit < 0)
		printf("The number is negative\n");
	else if(digit > 0)
		printf("The number is positive\n");
	else
		printf("The number is zero\n");
	return 0;
}
