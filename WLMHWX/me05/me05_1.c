/*************************************************************
*  me05_1.c - Fibonacci Numbers
*  programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>

void get_fibonacci(int, int, int);

int main(void)
{
	int number;

	// prompt for user input
	printf("Enter number of iterations (2-30): ");
	scanf(" %d", &number);

	printf("The number is %d\n", number);

	// if number is not within 2-30
	if( number < 2 || number > 30 )
		printf("Invalid number\n");

	else{
		// print first 2 fibonacci numbers
		printf("1, 1");
		get_fibonacci(1, 1, number - 2);
	}

	printf("\n"); // for clean output
	return 0;
}

void get_fibonacci (int firstnumber, int secondnumber, int sequence)
{
	int result = firstnumber + secondnumber;

	// if sequence is not equal to zero
	// truth value reads any other number as true (and zero as false)
	if(sequence){
		printf(", %d", result);
		get_fibonacci(secondnumber, result, sequence - 1);
	}

	return;
}
