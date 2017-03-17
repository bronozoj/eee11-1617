/*************************************************************
*  me04 - Print a Square
*  Programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>

int main(void)
{
	int length, row, col;

	// prompt for user input
	printf("Enter side: ");
	scanf(" %d", &length);

	// traverse all rows
	for(row = 0; row < length; row++){
		// traverse all columns in current row
		for(col = 0; col < length; col++){

			// left side     top         right side           bottom
			if(col == 0 || row == 0 || col == length-1 || row == length-1)
				printf("*");
			else
				printf(" ");
		}
		// newline to go to next row
		printf("\n");
	}

	return 0;
}
