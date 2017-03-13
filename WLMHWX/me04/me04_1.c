/*************************************************************
*  me04_1.c - Calculator Functions
*  programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>

// function prototypes
// only input argument types are needed
// useful if you want the functions to be below main()
int sum(int, int);
int difference(int, int);
int product(int, int);
float quotient(int, int);
int modulo(int, int);

int main(void)
{
	int a,b;

	// prompt user for input
	printf("Input 2 integers (a b): ");
	scanf(" %d %d", &a, &b);
	// spaces between %d ignores white space(space, enter, tab) in between digits

	printf("%d + %d = %d\n", a, b, sum(a, b) );
	printf("%d - %d = %d\n", a, b, difference(a, b) );
	printf("%d * %d = %d\n", a, b, product(a, b) );
	printf("%d / %d = %f\n", a, b, quotient(a, b) );
	printf("%d %% %d = %d\n", a, b, modulo(a, b) );

	return 0;
}

// a and b here are different from a and b in main()
int sum(int a, int b)
{
	return a + b;
}

// minuend and subtrahend is not available in main()
int difference(int minuend, int subtrahend)
{
	return minuend - subtrahend;
}

int product(int multiplicand, int multiplier)
{
	return multiplicand * multiplier;
}

float quotient(int dividend, int divisor)
{
	return (float) dividend / divisor;
}

// dividend and divisor here are different from quotient()
int modulo(int dividend, int divisor)
{
	return dividend % divisor;
}
