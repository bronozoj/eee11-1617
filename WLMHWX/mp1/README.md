# Machine Problem 1

## Special Notes

Code will not be available 

## Instructions

At the start of the program:

+ Prompt the user to input the dimension (value of n) of Matrix A (Min value = 2, Max value = 5). Then, prompt the user to input the values of Matrix A, reading it by rows (e.g. for a 2x2 matrix: row 1 col 1, row 1 col 2, row 2 col 1, row 2 col 2). You have the freedom to choose whether the user would input all the values in a single line or enter them one-by-one, as long as you warn the user on how they should input it. You have the option to display the matrix afterwards with the correct dimension (for debugging). Always assume that the user will input float numbers and the exact number of elements per dimension.
+ Then, prompt the user to input the dimension (value of n) of Matrix B (Min value = 2, Max value = 5). Then, prompt the user to input the values of Matrix B, reading it by rows (e.g. for a 2x2 matrix: row 1 col 1, row 1 col 2, row 2 col 1, row 2 col 2). You have the freedom to choose whether the user would input all the values in a single line or enter them one-by-one, as long as you warn the user on how they should input it. You have the option to display the matrix afterwards with the correct dimension (for debugging). Always assume that the user will input float numbers and the exact number of elements per dimension.

Hint: Redirection should work to input BOTH matrix A and matrix B.

Your code should do the following matrix operations. These operations SHOULD NOT change the original values of Matrix A and Matrix B. Your program should end after you display the last operation:

1. Display Matrix A and Matrix B
2. Display Transpose A and Transpose B
3. A + B
4. A - B
5. A * B
6. Get Determinant A and Determinant B
7. A / B

	1. Display Matrix A and Matrix B (5 pts + 5 pts)

Display the elements of Matrix A in matrix form and its dimension.

	2. Display Transpose A and Transpose B (5 pts + 5 pts)

Display the transpose of matrix A and matrix B.

	3. A + B (10 pts)

Display the sum of matrix A and matrix B. If the matrix dimensions are not equal, display “Sum not possible. Matrix dimensions are not equal. Matrix A has nxn dimension and Matrix B has mxm dimension” where n is the dimension of matrix A and m is the dimension of matrix B.

	4. A – B (10 pts)

Display the difference of matrix A and matrix B. If the matrix dimensions are not equal, display “Difference not possible. Matrix dimensions are not equal. Matrix A has nxn dimension and Matrix B has mxm dimension” where n is the dimension of matrix A and m is the dimension of matrix B.

	5. A * B (20 pts)

Display the product of matrix A and matrix B. If the matrix dimensions are not equal, display “Product not possible. Matrix dimensions are not equal. Matrix A has nxn dimension and Matrix B has mxm dimension” where n is the dimension of matrix A and m is the dimension of matrix B.

	6. Determinant A and Determinant B (5 pts + 5 pts)

Display the determinants of matrix A and matrix B.

	7. A / B (30 pts)

Display the adjugate of matrix B (10 pts), the inverse of matrix B (10 pts), and the quotient of matrix A and matrix B (10 pts). If the matrix dimensions are not equal, display “Quotient not possible. Matrix dimensions are not equal. Matrix A has nxn dimension and Matrix B has mxm dimension” where n is the dimension of matrix A and m is the dimension of matrix B. If determinant of matrix B is zero, display “Quotient not possible. Determinant of Matrix B is zero.”
