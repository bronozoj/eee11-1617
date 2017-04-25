/*************************************************************
*  me10_03 - Pointer Arithmetic
*  Programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char replace, *string = malloc(11*sizeof(char));
	int pos;

	// prompt for user input
	printf("Input string: ");
	fgets(string, 11, stdin);

	// loops until input is invalid
	while(1){
		// entering out of range exits the program
		printf("Input an integer between 1-10: ");
		scanf(" %d", &pos);
		if(pos < 1 || pos > 10)
			break;

		// input character to replace in position
		printf("Input a character: ");
		scanf(" %c", &replace);
		if( *(string+pos-1) != '\0' )
			*(string+pos-1) = replace;

		printf("Modified string: %s", string);
	}
	return 0;
}
