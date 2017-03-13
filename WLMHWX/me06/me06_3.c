/*************************************************************
*  me06_3.c - Frequency Checker
*  programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>

int main(void)
{
	char string[51], token;
	int instance = 0, index;

	printf("Input a string: ");
	fgets(string, sizeof(string), stdin);
	printf("Input a token: ");
	scanf("%c", &token);

	printf("The string was: %s\n", string);

	for(index = 0; string[index] != '\0'; index++)
		if(string[index] == token)
			instance++;

	printf("There are %d instances of '%c'.\n", instance, token);

	return 0;
}
