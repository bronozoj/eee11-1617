#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INPUT_LIMIT 5

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
	//printf("%d\n",data[0].student_number);

	printf("Enter CSV:\n");
	for(count = 0; count < INPUT_LIMIT; count++){
		fgets(string, sizeof(string), stdin);
		if(strcmp("\n", string) == 0)
			break;
		strcpy(data[count].first_name, strtok(string, ","));
		strcpy(data[count].last_name, strtok(NULL, ","));
		data[count].student_number = atoi(strtok(NULL, ",\n"));
	}
	for(index = 0; index < count; index++){
		printf("Name: %s, %s\nSN: %llu\n\n", data[index].last_name, data[index].first_name, data[index].student_number);
	}
	return 0;
}
