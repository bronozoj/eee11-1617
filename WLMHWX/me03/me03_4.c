/*************************************************************
*  me03_4 - Multiplication Table
*  Programmed by Jaime Bronozo
*
*
**************************************************************/

#include <stdio.h>

int main(void)
{
	int inrow, incol, row, col;

	// get and check row input
	printf("Input how many rows you want (1-10): ");
	scanf(" %d", &inrow);
	if( !(inrow >= 1 && inrow <= 10) ){
		printf("Invalid value for row\n");
		return 0;
	}

	// get and check column input
	printf("Input how many columns you want (1-10): ");
	scanf(" %d", &incol);
	if( !(incol >= 1 && incol <= 10) )
		printf("Invalid value for column\n");
	// operation proper
	else{
		// loop for row (displays all columns per row)
		for(row = 0; row < inrow; row++){
			// loop for column
			for(col = 0; col < incol; col++)
				printf("%d\t", (row+1) * (col+1));
			printf("\n"); // go to next row
		}
	}
	return 0;
}
