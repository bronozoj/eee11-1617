/*************************************************************
*  me10_02 - Inversing a String
*  Programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverse(char *);

int main(void)
{
	char *input = malloc(sizeof(char) * 11);

	// prompt for user inpute
	printf("Input string: ");
	fgets(input, 11, stdin);
	if(*(input+strlen(input)-1) == '\n')
		*(input+strlen(input)-1) = '\0';

	// call function below
	inverse(input);
	printf("Result: %s\n", input);
	return 0;
}

void inverse(char * input)
{
	int count, size = strlen(input) - 1;
	char temp;

	// swapping will stop halfway
	for(count = 0; count < (size/2)+1; count++){
		// swap both ends of pair
		temp = *(input+count);
		*(input+count) = *(input+size-count);
		*(input+size-count) = temp;
	}
}
