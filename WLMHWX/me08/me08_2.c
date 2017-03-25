/*************************************************************
*  me08_2.c - Bitwise Operators
*  programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>

int main(void)
{
	int a, b;
	int shift;

	// prompt for user input
	printf("Enter A and B:\n");
	scanf(" %d %d", &a, &b);

	printf("A is %d\nB is %d\n", a, b);

	// bitwise and display
	printf("A & B is %d\n", a&b);
	for(shift = 15; shift >= 0; shift--){
		printf("%d", ((a&b)>>shift)&1);

		if(!(shift&3))
			printf(" ");
	}

	// bitwise or display
	printf("\nA | B is %d\n", a|b);
	for(shift = 15; shift >= 0; shift--){
		printf("%d", ((a|b)>>shift)&1);

		if(!(shift&3))
			printf(" ");
	}

	// bit shift left display
	printf("\nA << 4 is %d\n", a<<4);
	for(shift = 15; shift >= 0; shift--){
		printf("%d", ((a<<4)>>shift)&1);

		if(!(shift&3))
			printf(" ");
	}

	// bit shift right display
	printf("\nB >> 4 is %d\n", b>>4);
	for(shift = 15; shift >= 0; shift--){
		printf("%d", ((b>>4)>>shift)&1);

		if(!(shift&3))
			printf(" ");
	}

	printf("\n");
	return 0;
}
