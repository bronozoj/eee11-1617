/*************************************************************
*  me08_1.c - Number Converter
*  programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>

int main(void)
{
	int input;
	int b;

	// prompt for user input
	printf("Enter hexademical number: ");
	scanf(" %x", &input);

	// %x displays hex
	printf("Hex: %x\nDec: %d\n", input, input);

	// %o would display octal...
	printf("Oct: ");

	// but using bitshifting, you can display it anyway
	for(b=15; b >= 0; b -=3)
		printf("%d", (input >> b) & 7);

	// no way to display binary...
	printf("\nBin: ");

	// but this method works too
	for(b=15; b >= 0; b--){
		printf("%d", (input >> b) & 1);
		if(!(b&3))
			printf(" ");
	}

	printf("\n");

	return 0;
}
