#include <stdio.h>

#define MAT_MAX 5

float determinant(float [MAT_MAX][MAT_MAX], int);

int main(void)
{
	float matA[MAT_MAX][MAT_MAX], matB[MAT_MAX][MAT_MAX];
	float matH[MAT_MAX][MAT_MAX], matR[MAT_MAX][MAT_MAX], temp, detB;
	int sizeA, sizeB;
	int row, col, rowH, colH;
	int count;

	for(row = 0; row < MAT_MAX; row++){
		for(col = 0; col < MAT_MAX; col++){
			matA[row][col] = 0;
			matB[row][col] = 0;
		}
	}

	printf("Input matrix A size (2-%d): ", MAT_MAX);
	scanf(" %d", &sizeA);
	if(sizeA < 2 || sizeA > MAT_MAX){
		printf("Matrix size has exceeded. Exiting\n");
		return 0;
	}

	printf("Input the whole %1$dx%1$d matrix A\n", sizeA);
	for(row = 0; row < sizeA; row++)
		for(col = 0; col < sizeA; col++)
			scanf(" %f", &matA[row][col]);

	printf("Input matrix B size: ");
	scanf(" %d", &sizeB);
	if(sizeB < 2 || sizeB > MAT_MAX){
		printf("Matrix size has exceeded. Exiting\n");
		return 0;
	}

	printf("Input the whole %1$dx%1$d matrix B\n", sizeB);
	for(row = 0; row < sizeB; row++)
		for(col = 0; col < sizeB; col++)
			scanf(" %f", &matB[row][col]);

	// A. Display Matrix A and Matrix B
	printf("\nDisplaying matrix A with %dx%d dimension:\n", sizeA, sizeA);
	for(row = 0; row < sizeA; row++){
		for(col = 0; col < sizeA; col++)
			printf("%.2f\t", matA[row][col]);
		printf("\n");
	}

	printf("\nDisplaying matrix B with %dx%d dimension:\n", sizeB, sizeB);
	for(row = 0; row < sizeB; row++){
		for(col = 0; col < sizeB; col++)
			printf("%.2f\t", matB[row][col]);
		printf("\n");
	}

	// B. Display Transpose A and Transpose B
	printf("\nDisplaying matrix A Transpose:\n");
	for(col = 0; col < sizeA; col++){
		for(row = 0; row < sizeA; row++)
			printf("%.2f\t", matA[row][col]);
		printf("\n");
	}

	printf("\nDisplaying matrix B Transpose:\n");
	for(col = 0; col < sizeB; col++){
		for(row = 0; row < sizeB; row++)
			printf("%.2f\t", matB[row][col]);
		printf("\n");
	}

	// C. to E. (Addition to multiplication and error handling)
	if(sizeA == sizeB){
		printf("\nDisplaying Sum (A + B):\n");
		for(row = 0; row < sizeA; row++){
			for(col = 0; col < sizeB; col++)
				printf("%.2f\t", matA[row][col] + matB[row][col]);
			printf("\n");
		}

		printf("\nDisplaying difference (A - B):\n");
		for(row = 0; row < sizeA; row++){
			for(col = 0; col < sizeB; col++)
				printf("%.2f\t", matA[row][col] - matB[row][col]);
			printf("\n");
		}

		printf("\nDisplaying product (A * B):\n");
		for(row = 0; row < sizeA; row++){
			for(col = 0; col < sizeB; col++){
				for(temp = 0, count = 0; count < sizeA; count++)
					temp += matA[row][count] * matB[count][col];
				printf("%.2f\t", temp);
			}
			printf("\n");
		}
	}
	else{
		printf("\nSum not possible. Matrix dimensions not equal. Matrix A has %dx%d dimension and Matrix B has %dx%d dimension.\n", sizeA, sizeA, sizeB, sizeB);
		printf("\nDifference not possible. Matrix dimensions not equal. Matrix A has %dx%d dimension and Matrix B has %dx%d dimension.\n", sizeA, sizeA, sizeB, sizeB);
		printf("\nProduct not possible. Matrix dimensions not equal. Matrix A has %dx%d dimension and Matrix B has %dx%d dimension.\n", sizeA, sizeA, sizeB, sizeB);
	}

	// F. Determinant A and Determinant B
	printf("\nDeterminant A = %.2f\n", determinant(matA, sizeA));

	detB = determinant(matB, sizeB);
	printf("\nDeterminant B = %.2f\n", detB);


	// G. A / B
	if(detB == 0)
		printf("\nQuotient not possible. Determinant of Matrix B is zero.\n");
	else if(sizeA != sizeB)
		printf("\nQuotient not possible. Matrix dimensions are not equal. Matrix A has %dx%d dimension and Matrix B has %dx%d dimension.\n", sizeA, sizeA, sizeB, sizeB);
	else{
		printf("\nDisplaying Adjugate of Matrix B:\n");
		for(row = 0; row < sizeB; row++){
			for(col = 0; col < sizeB; col++){	
				for(rowH = 0; rowH < sizeB - 1; rowH++){
					for(colH = 0; colH < sizeB - 1; colH++){
						matR[rowH][colH] = matB[rowH+(rowH >= row)][colH+(colH >= col)];
					}
				}
				matH[col][row] = determinant(matR, sizeB - 1) * (1 - 2*((row+col)&1));
			}
		}
		for(row = 0; row < sizeB; row++){
			for(col = 0; col < sizeB; col++)
				printf("%10.2f\t", matH[row][col]);
			printf("\n");
		}

		printf("\nDisplaying Inverse of Matrix B:\n");
		for(row = 0; row < sizeB; row++){
			for(col = 0; col < sizeB; col++){
				matH[row][col] /= detB;
				printf("%.2f\t", matH[row][col]);
			}
			printf("\n");
		}

		printf("\nDisplaying Quotient (A / B):\n");
		for(row = 0; row < sizeA; row++){
			for(col = 0; col < sizeB; col++){
				for(temp = 0, count = 0; count < sizeA; count++)
					temp += matA[row][count] * matH[count][col];
				printf("%.2f\t", temp);
			}
			printf("\n");
		}
	}

	return 0;
}

// recursive function like how a determinant is really calculated
float determinant(float matrix[MAT_MAX][MAT_MAX], int size)
{
	int row, col, count;
	float dmatrix[MAT_MAX][MAT_MAX], det = 0;

	if(size == 1)
		return matrix[0][0];
	
	if(size == 2)
		return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);

	for(count = 0; count < size; count++){
		for(row = 0; row < size - 1; row++){
			for(col = 0; col < size - 1; col++){
				dmatrix[row][col] = matrix[row+1][col+(col >= count)];
			}
		}
		det += matrix[0][count] * determinant(dmatrix, size - 1) * (1 - 2*(count&1));
	}
	return det;
}
