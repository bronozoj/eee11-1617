/*************************************************************
*  me02_4 - Vowel Identifier
*  Programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>

int main(void)
{
	char choice;
	
	// prompt for user input
	printf("Input a letter: ");
	scanf(" %c", &choice);
	printf("The letter is %c\n", choice);
	
	// cases are like start markers and breaks are stop markers
	switch(choice){
		case 'A':
		case 'a':
			printf("A - Apple\n");
			break;
			
		case 'E':
		case 'e':
			printf("E - Egg\n");
			break;
			
		case 'I':
		case 'i':
			printf("I - Indigo\n");
			break;
			
		case 'O':
		case 'o':
			printf("O - Orange\n");
			break;
			
		case 'U':
		case 'u':
			printf("U - User\n");
			break;
		
		// if input letter wasn't a capital or small vowel
		default:
			printf("Letter is a consonant\n");
			break;
	}
	return 0;
}
