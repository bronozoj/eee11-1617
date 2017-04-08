/*************************************************************
*  me08 - CSV Parser
*  Programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define INPUT_LIMIT 5

// data type definition
struct student_info{
	char first_name[32];
	char last_name[32];
	unsigned long long student_number;
};

int main(void)
{
	int count, index, store;
	char string[200];
	struct student_info data[INPUT_LIMIT];

	// prompt input from user
	printf("Enter CSV:\n");
	for(count = 0; count < INPUT_LIMIT; count++){
		fgets(string, sizeof(string), stdin);

		// empty line means end of query
		if(string[0] == '\n')
			break;

		// store last name (remove spaces from left side)
		for(store = 0, index = 0; string[index] != ','; index++){
			if( store > 0 || !isspace(string[index]) )
				data[count].last_name[store++] = string[index];
		}
		data[count].last_name[store] = '\0';

		// store first name (remove spaces from left side too)
		for(store = 0, index++; string[index] != ','; index++){
			if( store > 0 || !isspace(string[index]) )
				data[count].first_name[store++] = string[index];
		}
		data[count].first_name[store] = '\0';

		// store student number (starts reading when it encounters the number)
		data[count].student_number = 0;
		for(store = 0, index++; string[index] != '\n' && string[index] != '\0'; index++){
			if( store > 0 || !isspace(string[index]) ){
				store++;

				// parse only digits
				if(!isdigit(string[index]))
					break;

				// converts character input to decimal
				data[count].student_number *= 10;
				data[count].student_number += (string[index] - '0');
			}
					 
		}
	}

	// display all input
	for(index = 0; index < count; index++){
		printf("Name: %s, %s\n", data[index].last_name, data[index].first_name);
		printf("Student Number: %llu\n\n", data[index].student_number);
	}
	return 0;
}
