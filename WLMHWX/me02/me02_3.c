/*************************************************************/
/* me02_3 - Month Converter
/* Programmed by Jaime Broñozo
/*
/*
/*************************************************************/

#include<stdio.h>

int main(void)
{
	int month;
	
	// prompt for user input
	printf("Enter an integer from (1-12)\n");
	scanf(" %d", &month);
	
	printf("The number is %d\n", month);
	
	// switch for number to month conversion
	switch(month){
		case 1:
			printf("1 - January\n");
			break;
			
		case 2:
		 printf("2 - February\n");
		 break;
		 
		case 3:
			printf("3 - March\n");
			break;
			
		case 4:
			printf("4 - April\n");
			break;
			
		case 5:
			printf("5 - May\n");
			break;
			
		case 6:
			printf("6 - June\n");
			break;
			
		case 7:
			printf("7 - July\n");
			break;
			
		case 8:
			printf("8 - August\n");
			break;
			
		case 9:
			printf("9 - September\n");
			break;
			
		case 10:
			printf("10 - October\n");
			break;
			
		case 11:
			print("11 - November\n");
			break;
			
		case 12:
			printf("12 - December\n");
			break;
			
		// if not within 1-12
		default:
			printf("Invalid integer\n");
			break;
	}
	return 0;
}
