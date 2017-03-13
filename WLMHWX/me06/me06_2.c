/*************************************************************
*  me06_2.c - Calculator Functions
*  programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>

int sum(int, int);
int difference(int, int);
int product(int, int);
float quotient(int, int);
int modulo(int, int);

int main(void)
{
	int set1[5], set2[5], index;

	for(index = 0; index < 5; index++){
		printf("Input pair(%d): ", index);
		scanf(" %d %d", &set1[index], &set2[index]);
	}

	for(index = 0; index < 5; index++)
		printf("Pair #%d: %d, %d\n", index, set1[index], set2[index]);

	for(index = 0; index < 5; index++){
		printf("%d + %d = %d\n", set1[index], set2[index], sum(set1[index], set2[index]));
		printf("%d - %d = %d\n", set1[index], set2[index], difference(set1[index], set2[index]));
		printf("%d * %d = %d\n", set1[index], set2[index], product(set1[index], set2[index]));
		printf("%d / %d = %f\n", set1[index], set2[index], quotient(set1[index], set2[index]));
		printf("%d %% %d = %d\n", set1[index], set2[index], modulo(set1[index], set2[index]));
	}

	return 0;
}

/*************************************************************
*  this segment was copied from me04_1.c
*
*
**************************************************************/

int sum(int a, int b)
{
	return a + b;
}

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

int modulo(int dividend, int divisor)
{
	return dividend % divisor;
}
