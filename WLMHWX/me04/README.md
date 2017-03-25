# Machine Exercise 4

For this machine exercise:

- Your code should only use the header file *stdio.h*

- Your code should **NOT** use **GLOBAL VARIABLES**

## [ME04_1](me04_1.c)
Calculator Functions (3 pts)

**Inputs:**

1. Number A (integer)
2. Number B (integer)

**Outputs:**

1. Number A and Number B (user input)
2. Sum (A + B)
3. Difference (A – B)
4. Product (A * B)
5. Quotient (A / B)
6. Modulo (A % B)

Prompt the user to input two integers. Display both integers(user input) and compute its sum, difference, product, quotient, and modulo using FUNCTIONS. Always assume the input is valid (input is an integer and not a character, float, etc). Name your functions as sum(), difference(), product(), quotient(), and modulo(), respectively. These functions should only compute and return their corresponding outputs. All “printf” commands should be on the “int main()” function.

## [ME04_2](me04_1.c)
Number to Words (7 pts)

**Inputs:**

1. A positive integer (up to 999999999)

**Outputs:**

1. Positive integer (user input)
2. Word conversion of the number

Prompt the user to input a positive integer. Display the word conversion of the user input using FUNCTIONS. Always assume the input is valid (input is a positive integer and not a character, float, etc). You can use “printf” outside the “int main()” function.  
**Hint#1:** Use functions to convert any 3-digit integer. Name your functions as millions(), thousands(), and hundreds().  
**Hint#2:** Dividing a number by 10 n shifts the number n places to the right. Modulo by 10 n extracts the last n digits of the number.
