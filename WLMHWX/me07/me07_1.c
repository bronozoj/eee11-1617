/*************************************************************
*  me07_1.c - Palindrome
*  programmed by Jaime Broñozo
*
*
**************************************************************/

#include <ctype.h>	// for tolower()
#include <stdio.h>
#include <string.h>	// for strlen()

int main(void)
{
	int index;
	char string[21];

	// fgets is more reliable than scanf("%s", string);
	printf("Input a string: ");
	fgets(string, sizeof(string), stdin);

	// removes \n from input string
	if(string[ strlen(string) - 1 ] == '\n')
		string[ strlen(string) - 1 ] = '\0';

	printf("The string is (%s)\n", string);

	for(index = strlen(string) / 2 - 1; index >= 0; index--){
		// manually scans elements in a mirrored fashion
		if(tolower(string[index]) !=  tolower(string[strlen(string) - index - 1])){
			printf("String is not a palindrome\n");
			return 0;
		}
	}

	// code reaching here means program didn't end prematurely
	printf("String is a palindrome\n");

	return 0;
}
