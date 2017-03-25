# Machine Exercise 7

## [ME07_1](me07_1.c)
Palindrome (2.5 pts)

**Inputs:**

1. A string (up to 20 characters)

**Outputs:**

1. A string (user input)
2. Palindrome or not

Prompt the user to input a string. Store this string and identify if this string is a palindrome or not. A Palindrome is a word that is spelled the same backwards (e.g. racecar). Always assume that the user will input alphabetical characters only. You could use string.h library functions (e.g. strncpy(), strncmp(), strncat(), strlen(), toupper(), tolower()).  
Hint: your code should also detect capitalization (e.g. Racecar is a palindrome!).

## [ME07_2](me07_2.c)
Day Checker (3.5 pts)

**Inputs:**

1. Day of the month (1 to 31)

**Outputs:**

1. Day of the month (user input)
2. Respective day

Prompt the user to input an integer. Store this integer as a date of the month of MARCH 2017 and display the corresponding day (Monday, Tuesday, etc). Store the days (Monday, Tuesday, etc) in a 2-D array called as char days\[7\]\[10\]. March 1, 2017 is a Wednesday and March 31 is a Friday. Do an error check (identify this number if it is between 1 and 31, if it is not, print “Invalid Input” and end the program)

## [ME07_3](me07_3.c)
Row and Columns Average (4 pts)

**Inputs:**

1. 25 float numbers (5 x 5 matrix)

**Outputs:**

1. 5 x 5 matrix (user input)
2. Row and Column Average

Prompt the user to input 25 float numbers. Store these integers in a 2-D array called as float matrix\[5\]\[5\] with the user input filling up all the columns of the first row before moving to the next row and etc. Use float get_row_average(float array\[\]\[\], int row_number) to get the average of a specific row and float get_column_average(float array\[\]\[\], int column_number) to get the average of a specific row. Display the matrix up to 2 decimal places with a tab (\\t) separation in each number and the averages up to 2 decimal places. All printf commands should be in the “int main” function and there should be no printf commands in the other functions. Always assume that the input is valid and exactly 25 float numbers (not char, string, etc).  
**Hint:** You can use redirection to input your values.  
**Redirection:** Create a text file with 25 float numbers separated with spaces in one line and save it as number.txt. Make sure numbers.txt is in the same folder with your a.out file. Call a.out as: “./a.out < numbers.txt” to make your text file as an input to your code. Likewise, you could call a.out as: “./a.out > averages.txt” to create a text file named averages.txt and receive your output.
