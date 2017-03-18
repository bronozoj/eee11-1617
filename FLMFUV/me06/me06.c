/*************************************************************
*  me06 - SMS Text
*  Programmed by Jaime Broñozo
*
*
**************************************************************/

#include <ctype.h> // for tolower() function
#include <stdio.h>

int main(void)
{
	char string[128];
	int index = 0;

	// prompt for user input 
	printf("Input string: ");
	fgets(string, sizeof(string), stdin);

	// parses the whole string
	while(string[index] != '\n' && string[index] != '\0'){

		// if previous character was a space (possible start of word)
		if(index && string[index-1] == ' '){
			// if not a duplicate space, print character
			if(string[index] != ' ')
				printf("%c", string[index]);
		}

		// not first character of string and a vowel
		else if(index && (tolower(string[index]) == 'a' || tolower(string[index]) == 'e' || tolower(string[index]) == 'i' || tolower(string[index]) == 'o' || tolower(string[index]) == 'u'))
		{} // do nothing

		// if starting character is a space
		else if(index == 0 && string[index] == ' ')
		{} // do nothing

		// ensured that character is to be printed
		else
			printf("%c", string[index]);

		index++; // to check for next character
	}
	printf("\n");
	
	return 0;
}
