/*******************************
 * me02_2 - Questionnaire
 * programmed by Jaime Broñozo
 *
********************************/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char choice;
	
	// prompt for user input
	printf("Who is the Miss Universe 2017 winner?\n)"
	printf("\ta. Philippines\n");
	printf("\tb. France\n");
	printf("\tc. Netherlands\n");
	printf("\td. Haiti\nAnswer: ");
	scanf(" %c",&choice);
	
	// if letter of choice was within answers
	if( tolower(choice) >= 'a' && tolower(choice) <= 'd')
	{
		printf("Your answer is %c\n", choice)
		
		// evaluate answer
		if(tolower(choice) == 'b')
			printf("Your answer is correct\n");
		else
			printf("The correct answer is b\n");
	}
	
	else
		printf("Invalid input\n");
	return 0
}