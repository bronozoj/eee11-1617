/*************************************************************
*  me02 - Make Stair Steps
*  Programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>

int main(void)
{
	int count = 0, spacer;

	// increments count after comparison
	while(count++ < 5){
		printf("____\n");

		// for first wall
		spacer = 0;
		while(spacer++ < count)
			printf("    ");
		printf("|\n");

		// for second wall
		spacer = 0;
		while(spacer++ < count)
			printf("    ");
		printf("|");
		// loop will print next step (if ever)
	}
	printf("\n");
	return 0;
}
