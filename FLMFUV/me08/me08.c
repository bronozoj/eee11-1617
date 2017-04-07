#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define INPUT_LIMIT 5

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
	data[0].student_number = 1000;
	//printf("%d\n",data[0].student_number);

	printf("Enter CSV:\n");
	for(count = 0; count < INPUT_LIMIT; count++){
		fgets(string, sizeof(string), stdin);
		if(string[0] == '\n')
			break;
		for(store = 0, index = 0; string[index] != ',' && string[index] != '\0'; index++){
			if( store > 0 || !isspace(string[index]) )
				data[count].last_name[store++] = string[index];
		}
		data[count].last_name[store] = '\0';

		for(store = 0, index++; string[index] != ',' && string[index] != '\0'; index++){
			if( store > 0 || !isspace(string[index]) )
				data[count].first_name[store++] = string[index];
		}
		data[count].first_name[store] = '\0';
		//strcpy(data[count].last_name, "");
		for(store = 0, data[count].student_number = 0, index++; string[index] != ',' && string[index] != '\0'; index++){
			if( store > 0 || !isspace(string[index]) ){
				store++;
				if(!isdigit(string[index]))
					break;
				data[count].student_number = (data[count].student_number*10) + (string[index] - '0');
			}
					 
		}
		//data[count].student_number = 0;
	}
	for(index = 0; index < count; index++){
		printf("Name: %s, %s\nSN: %llu\n\n", data[index].last_name, data[index].first_name, data[index].student_number);
	}
	return 0;
}
