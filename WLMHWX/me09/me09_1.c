/*************************************************************
*  me09_01 - Age Checker
*  Programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>

// required struct
struct date{
	int month;
	int day;
	int year;
};

int main(void)
{
	struct date now, bday;

	// prompt for user input
	printf("Input Birthday(MM DD YYYY):");
	scanf(" %d %d %d", &bday.month, &bday.day, &bday.year);
	printf("Input Date of Comparison(MM DD YYYY):");
	scanf(" %d %d %d", &now.month, &now.day, &now.year);

	// display ages
	printf("The birthday is %d/%d/%d\n", bday.month, bday.day, bday.year);
	printf("The reference date is %d/%d/%d\n", now.month, now.day, now.year);

	// algo for age computation
	printf("The age is ");
	if(now.month > bday.month)
		printf("%d\n", now.year - bday.year);
	else if(now.month == bday.month){
		if(now.day >= bday.day)
			printf("%d\n", now.year - bday.year);
		// not yet past birthday
		else
			printf("%d\n", now.year - bday.year - 1);
	}
	// not yet past birthday as well
	else
		printf("%d\n", now.year - bday.year - 1);

	return 0;
}
