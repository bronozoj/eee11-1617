/*************************************************************
*  me07_3.c - Day Checker
*  programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>

float get_row_average(float [][5], int);
float get_column_average(float [][5], int);

int main(void)
{
	float matrix[5][5];
	int row, col;

	// storing values are done element-by-element
	printf("Input a 5x5 matrix:\n");
	for(row = 0; row < 5; row++)
		for(col = 0; col < 5; col++)
			scanf(" %f", &matrix[row][col]);

	// aesthetics
	for(col = 0; col < 5; col++)
		printf("\t[%d]", col);
	printf("\n");

	// display table with averages
	for(row = 0; row < 5; row++){
		printf("[%d]\t", row);

		// print element-by-element
		for(col = 0; col < 5; col++)
			printf("%.2f\t", matrix[row][col]);

		// display row average
		printf("%.2f\n", get_row_average(matrix, row));
	}

	// display all column averages
	for(col = 0; col < 5; col++)
		printf("\t%.2f", get_column_average(matrix, col));

	printf("\n");
	return 0;
}

// function to return row averages (note similarity below)
float get_row_average(float matrix[][5], int row)
{
	int col;
	float ave = 0;

	for(col = 0; col < 5; col++)
		ave += matrix[row][col];

	return ave / 5;
}

// function to return column averages (simply switched variable names)
float get_column_average(float matrix[][5], int col)
{
	int row;
	float ave = 0;

	for(row = 0; row < 5; row++)
		ave += matrix[row][col];

	return ave / 5;
}
