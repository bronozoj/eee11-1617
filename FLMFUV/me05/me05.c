#include <stdio.h>

void suffconv(int);
void onesconv(int);
void hundreds(int);

// modularized version of code
int main(void){
	unsigned int digit;

	printf("Input number (0-100): ");
	scanf(" %d", &digit);

	// paste contents of hundreds() function here
	hundreds(digit);
	// but this function allows you to extend it more

	printf("\n");
	return 0;

}

// can be used to display millions, thousands, etc
void hundreds(int number){
	if(number >= 100){
		onesconv(number/100);
		number = number % 100;
		printf(" Hundred ");
	}

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
		number = 0;
	}
	else if(number >= 20){
		suffconv(number / 10);
		printf("ty");
		number = number % 10;
		if(number)
			printf("-");
	}
	onesconv(number);
	return;
}

// for 2nd digit printing & 1x digits too (not all)
void suffconv(int number){
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

// for the ones place (no output for zero)
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
