/*************************************************************
*  me03_3 - Prime Number Detector
*  Programmed by Jaime Bronozo
*
*
**************************************************************/

#include <stdio.h>

int main(void)
{
	int number, count;

	// prompt for user input
	printf("Enter a number (1-1000): ");
	scanf(" %d", &number);

	// error checking
	if(number > 1 && number <= 1000){
		//           stops at half the input && stops when no remainder is detected
		for(count = 2; count <= (number / 2) && number % count > 0; count++);

		//   excludes 2 and 3    && no remainder (divisible)
		if(count <= (number / 2) && number % count == 0)
			printf("%d is a composite number\n", number);
		else
			printf("%d is a prime number\n", number);
	}
	else if(number == 1)
		printf("1 is neither prime nor composite\n");
	else
		printf("Invalid input\n");
	return 0;
}
