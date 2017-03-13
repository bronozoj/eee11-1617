/*************************************************************
*  me04_2.c - Number to Words
*  programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>

void suffconv(int);
void onesconv(int);
void hundreds(int);
void thousands(int);
void millions(int);

int main(void){
	unsigned int digit;

	printf("Input number (0-999): ");
	scanf(" %d", &digit);

	if(digit == 0)
		printf("Zero");

	if(digit >= 1000000){
		millions(digit / 1000000);
		digit = digit % 1000000;
	}

	if(digit >= 1000){
		thousands(digit / 1000);
		digit = digit % 1000;
	}

	hundreds(digit);

	printf("\n");
	return 0;

}

// you can call a function from within another function
void millions(int number)
{
	hundreds(number);
	printf(" Million ");
	// return value in a void function should be blank
	return;
}

// functions with void return type does not need a return
void thousands(int number)
{
	hundreds(number);
	printf(" Thousand ");
}

// function that converts 3 digits to words
void hundreds(int number)
{
	// handles the hundreds digit
	if(number >= 100){
		onesconv(number/100);
		number = number % 100;
		printf(" Hundred ");
	}

	// special case (10-19)
	if(number >= 10 && number <= 19){
		if(number == 10)
			printf("Ten");
		else if(number == 11)
			printf("Eleven");
		else if(number == 12)
			printf("Twelve");
		else{
			suffconv(number % 10);
			printf("teen");
		}
		// ensures nothing will come out of onesconv()
		number = 0;
	}
	// normal case
	else if(number >= 20){
		suffconv(number / 10);
		printf("ty");
		number = number % 10;
		if(number)
			printf("-");
	}
	// converts the ones digit (if tens digit is not 1)
	onesconv(number);
	return;
}

// prints the (thir)teen/ty
// gimmick function used by hundreds
void suffconv(int number)
{
	if(number == 2)
		printf("Twen");
	else if(number == 3)
		printf("Thir");
	else if(number == 4)
		printf("Four");
	else if(number == 5)
		printf("Fif");
	else if(number == 6)
		printf("Six");
	else if(number == 7)
		printf("Seven");
	else if(number == 8)
		printf("Eigh");
	else if(number == 9)
		printf("Nine");
	return;
}

// converts one digit to word
void onesconv(int number){
	if(number == 1)
		printf("One");
	else if(number == 2)
		printf("Two");
	else if(number == 3)
		printf("Three");
	else if(number == 4)
		printf("Four");
	else if(number == 5)
		printf("Five");
	else if(number == 6)
		printf("Six");
	else if(number == 7)
		printf("Seven");
	else if(number == 8)
		printf("Eight");
	else if(number == 9)
		printf("Nine");
	return;
}
