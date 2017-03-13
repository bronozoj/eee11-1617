/*************************************************************
*  me03_5 - Age Group
*  Programmed by Jaime Bronozo
*
*
**************************************************************/

#include <stdio.h>

int main(void)
{
	int age;

	printf("Input age to check his/her age group: ");
	scanf(" %d", &age);

	// if negative number
	if(age < 0)
		printf("Negative number input is invalid\n");

	// if (0-2)
	else if(age < 3)
		printf("He/She is Inelligible\n");

	// if (3-5) since number is greater than 2 here
	else if(age < 6){
		printf("He/She is in Preschool\n");

		// if (3-4)
		if(age < 5)
			printf("He/She is in Nursery\n");

		// if 5
		else
			printf("He/She is in Kindergarten\n");
	}

	// if (6-11)
	else if(age < 12)
		printf("He/She is in Elementary\n");

	// if (12-17)
	else if(age < 18)
		printf("He/She is in Secondary school\n");

	// if (18-59)
	else if(age < 60){
		printf("He/She could be in the Work Force\n");

		// if (18-22)
		if(age < 23)
			printf("He/She could be in College\n");

		// if (23-59)
		else
			printf("He/She could be in Postgraduate studies\n");
	}

	// if (60+)
	else
		printf("He/She is a Senior Citizen\n");

	return 0;
}
