/*************************************************************
*  me08 - CSV Parser
*  made shorter using standard functions
*  Programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>
#include <stdlib.h> // for atoi()
#include <string.h>

#define INPUT_LIMIT 5

// data type definition
struct student_info{
	char first_name[32];
	char last_name[32];
	unsigned long long student_number;
};

int main(void)
{
	int count, index;
	char string[200];
	struct student_info data[INPUT_LIMIT];
	data[0].student_number = 1000;

	// prompt for user input
	printf("Enter CSV:\n");
	for(count = 0; count < INPUT_LIMIT; count++){
		fgets(string, sizeof(string), stdin);

		// empty line means end of query
		if(strcmp("\n", string) == 0)
			break;

		// store last name (strtok stops on the delimiter ',')
		strcpy(data[count].first_name, strtok(string, ","));

		// store first name (strtok stops on the next delimiter ',')
		strcpy(data[count].last_name, strtok(NULL, ","));

		// store student number (strtok outputs the rest of the string)
		data[count].student_number = atoi(strtok(NULL, ",\n"));
	}

	// display all input
	for(index = 0; index < count; index++){
		printf("Name: %s, %s\nSN: %llu\n\n", data[index].last_name, data[index].first_name, data[index].student_number);
	}
	return 0;
}
