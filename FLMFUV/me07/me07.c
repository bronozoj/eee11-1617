/*************************************************************
*  me07 - HTML Decoder
*  Programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>

int main(void)
{
	char input[512];
	int index;

	// prompt for user input
	printf("Input string: ");
	fgets(input, sizeof(input), stdin);

	for(index = 0; input[index] != '\0'; index++){
		// pressed enter
		if(input[index] == '\n')
			break;

		// opening tag detected
		if(input[index] == '<'){

			// skip until closing tag is detected
			while(input[index] != '>' && input[index] != '\0')
				index++;
		}

		// remove double space (optional)
		else if(input[index] == ' ' && input[index+1] == '<')
		{}

		// print since valid
		else
			printf("%c", input[index]);
	}
	printf("\n");

	return 0;
}
