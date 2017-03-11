/*******************************
 * me03_1.c - Factorial Computer
 * programmed by Jaime Broñozo
 *
********************************/

#include <stdio.h>

int main(void)
{
	int number, result = 1;
	
	// prompt for user input
	printf("Enter an integer (1-12): ");
	scanf(" %d", &number);
	
	printf("The number is %d\n");
	
	// value is valid. compute
	if(number >= 1 && number <= 12){
	
		//postfix (number--) returns value before decrementing
		while(number > 0)
			result *= number--;
			printf(The result is %d\n", result);
	}
	
	else
		printf("Invalid integer\n");
	return 0;
}