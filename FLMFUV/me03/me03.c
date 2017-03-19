/*************************************************************
*  me03 - Print a Wave Pattern
*  Programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>

#define TERM_LIMIT 80

int main(void)
{
	int period, loop, a, b;

	// prompt for user input
	printf("Enter period: ");
	scanf(" %d", &period);

	// initializes marker draw positions to top and goes to bottom
	for(a = (period/2), b = a ; a >= 0; a--, b++){

		// stops when character limit is reached
		for(loop = 0; loop < TERM_LIMIT; loop++){

			// a and b stores what part of the signal is to be drawn
			if(loop % period  == a || loop % period == b)
				printf("*");
			else
				printf(" ");
		}
		printf("\n"); // to draw next line
	}

	return 0;
}
