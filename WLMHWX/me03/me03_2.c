/*******************************
 * me03_2 - Sum and Average
 * programmed by Jaime Bronozo
 *
********************************/

#include <stdio.h>

int main(void)
{
	int input = 0, count = 0, sum = 0;
	
	do{
		// to avoid dividing by zero on first run
		if(count)
			printf("Iteration: %d | Sum: %d | Average: %f\n", count, sum, sum / (float) count);
		
		// prompt for user input till negative number is received
		printf("Input next number: ");
		scanf(" %d", &input);
		
		// average is computed in printf above
		sum += input;
		count++;
		
	}while(input >= 0);
	return 0;
}