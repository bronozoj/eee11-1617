/*************************************************************
*  me10_01 - Exchanging Values
*  Programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>

void exchange(int *, int *);

int main(void)
{
	int A, B;

	// prompt for user input
	printf("Input 2 integers: ");
	scanf(" %d %d", &A, &B);

	// call function below
	exchange(&A, &B);

	printf("Exchanged: A = %d and B = %d\n", A, B);

	return 0;
}

void exchange(int *A, int *B)
{
	// since address is being passed, value in address can be modified
	int temp = *A;
	*A = *B;
	*B = temp;
}
