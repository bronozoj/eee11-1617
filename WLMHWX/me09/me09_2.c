/*************************************************************
*  me09_02 - Grade Checker
*  Programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>

struct grade{
	char name[12];
	float score;
};

int main(void)
{
	int count, count2;
	char string[100];
	float average = 0;
	struct grade scores[5];
	struct grade highest, lowest;
	highest.score = 0;
	lowest.score = 1000;

	// get scores
	for(count = 0; count < 5; count++){

		// gets name (and removes stray \n)
		printf("Give student name[%d]: ", count+1);
		fgets(scores[count].name, 10, stdin);
		for(count2 = 0; scores[count].name[count2] != '\0'; count2++){
			if(scores[count].name[count2] == '\n'){
				scores[count].name[count2] = '\0';
				break;
			}
		}

		// gets grade
		printf("Give student grade[%d]: ",count+1);
		fgets(string, sizeof(string), stdin);
		sscanf(string, " %f", &scores[count].score);

		// checks if highest score
		if(scores[count].score > highest.score)
			highest = scores[count];

		// checks if lowest score
		if(scores[count].score < lowest.score)
			lowest = scores[count];

		// running sum for average
		average += scores[count].score;
	}

	// displays results
	printf("\nAverage is %f\nLowest is %s with %f\n", average/5, lowest.name, lowest.score);
	printf("Highest is %s with %f\n", highest.name, highest.score);

	return 0;
}
