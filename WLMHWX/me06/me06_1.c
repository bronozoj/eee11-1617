/*************************************************************
*  me06_1.c - Number Sorter
*  programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>

int main(void)
{
	int numbers[5], index, counter, temp;

	// prompt for user input (element by element)
	printf("Input 5 integers: ");
	for(index = 0; index < 5; index++)
		scanf(" %d", &numbers[index]);

	for(index = 0; index < 5; index++){
		// repeat till all elements are arranged
		for(counter = index; counter < 5; counter++){
			// switch positions to ensure smallest is in leftmost
			if(numbers[index] > numbers[counter]){
				temp = numbers[index];
				numbers[index] = numbers[counter];
				numbers[counter] = temp;
			}
		}
	}

	// display digits (element by element) 
	for(index = 0; index < 5; index++)
		printf("%d ", numbers[index]);

	printf("\n");
	return 0;
}
