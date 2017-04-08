/*************************************************************
*  me09 - Pointer Arithmetic
*  Programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[250];
	char *pointer;
	unsigned int skip;

	// prompt for user input
	printf("Input string:\n");
	pointer = fgets(string, sizeof(string), stdin);

	// removing the newline that comes with pressing enter
	if(string[strlen(string) - 1] == '\n')
		string[strlen(string) - 1] = '\0';

	// prompt for skip count
	printf("Input number of chars to skip: ");
	scanf(" %u", &skip);

	// display skipping
	printf("\nResult:\n");
	for( ; pointer < &string[strlen(string)]; pointer += skip+1)
		printf("%c", *pointer);

	// display backward printing
	printf("\n\nBackwards result:\n");
	for(pointer = &string[strlen(string) - 1]; pointer >= &string[0]; pointer--)
		printf("%c", *pointer);
	printf("\n");

	return 0;
}
