/*************************************************************
*  me05_2.c - Volume and Surface Area of Sphere and Cylinder
*  programmed by Jaime Broñozo
*
*  when compiling with gcc, add -lm to include math library
*
*
**************************************************************/

#include <ctype.h>	// for tolower(), isalpha(), isalnum()
#include <math.h>	// for pow()
#include <stdio.h>
#include <stdlib.h>	// for rand(), srand()
#include <time.h>	// for time()

int main(void)
{
	int choice;
	char letter;
	double base, exponent;

	// prompt for user input
	printf("Select program function(A-C): ");
	scanf(" %c", (char *)&choice); // typecasting to suppress error
	scanf("%c", &letter); // gets the stray 'enter' input

	printf("Your choice is '%c'.\n", choice);
	choice = tolower(choice); // to reduce number of comparisons

	if(choice == 'a'){
		// prompt for user input
		printf("Input character: ");
		scanf("%c", &letter);

		//  if alphanumeric
		if(isalnum(letter)){
			printf("'%c' is alphanumeric\n", letter);

			//  if letter
			if(isalpha(letter))
				printf("'%c' is a letter\n", letter);
			// if not (number)
			else
				printf("'%c' is a number\n", letter);
		}
		else
			printf("'%c' is not alphanumeric\n", letter);
	}
	else if(choice == 'b'){
		// prompt for user input
		printf("Input base: ");
		scanf(" %lf", &base);
		printf("Input exponent: ");
		scanf(" %lf", &exponent);

		// run 'man pow' to see how it works
		printf("(%lf) ^ %lf = %lf\n", base, exponent, pow(base,exponent));
	}
	else if(choice == 'c'){
		// current time is usually used as seed (different each run)
		srand(time(NULL));

		// prompt for user input
		printf("Input random maximum: ");
		scanf(" %d", &choice);

		// run 'man srand' to see how it works
		printf("Random number: %d\n", rand() % (choice + 1));
	}
	else
		printf("Invalid input\n");

	return 0;
}
