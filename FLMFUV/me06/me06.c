#include <ctype.h>
#include <stdio.h>

int main(void)
{
	char string[128];
	int index = 0;
	printf("Input string: ");
	fgets(string, sizeof(string), stdin);
	
	while(string[index] != '\n' && string[index] != '\0'){
		if(index && string[index-1] == ' '){
			if(string[index] != ' ')
				printf("%c", string[index]);
		}
		else if(index && (tolower(string[index]) == 'a' || tolower(string[index]) == 'e' || tolower(string[index]) == 'i' || tolower(string[index]) == 'o' || tolower(string[index]) == 'u'))
		{}
		else if(index == 0 && string[index] == ' ')
		{}
		else
			printf("%c", string[index]);
		index++;
	}
	printf("\n");
	
	return 0;
}
