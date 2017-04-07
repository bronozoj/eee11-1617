# Machine Exercise 9

## [ME09_1](me09_1.c)
Age Checker (3 pts)

**Inputs:**

1. Birthday (Integer - Month, Day, Year)
2. Date of Comparison (Integer - Month, Day, Year)

**Outputs:**

1. Birthday (user input)
2. Date of Comparison (user input)
3. Age

Prompt the user to input two dates which serves as a birthday and date of comparison, respectively. Your code should read the user input of “MM DD YYYY” syntax. Store these dates using a structure struct date with three members **int** month, **int** day, and **int** year. Compute and display the age using the birthday and date of comparison. Always assume that the user will input integers only. Also, always assume that the year of the date of comparison is higher than the birthday. You could only declare 1 variable named int age and only use this for storing the age.  
**Hint:** Use structure operators for comparison and arithmetic operations.

## [ME09_2](me09_2.c)
Grade checker (3.5 pts)

**Inputs:**

1. 5 Names (up to 10 characters)
2. 5 Scores (float)

**Outputs:**

1. Average Score
2. Name and Score of Lowest Score and Highest Score

Prompt the user to input 5 pairs of Name and Score. Store these pairs using a structure struct grade with two members **char** name and **float** score. Compute and display the average score of the 5 pairs. Also, display the name and score of the pair who got the lowest score and the highest score. Always assume that the user will input correctly (char on names, float on scores).  
**Hint:** Your code should accept input from redirection.

## [ME09_3](me09_3.c)
Contact List (3.5 pts)

**Inputs:**

1. 5 Names (up to 10 characters)
2. 5 Phone number (up to 11 characters)
3. 5 Email address (up to 25 characters)
4. Contact name

**Outputs:**

1. Contact Information

Prompt the user to input 5 sets of Name, Phone number, and Email address. Store these sets using an array of structure struct contact with three members **char** name, **char** number and **char** emailadd. Then, prompt the user to input a name. Check the name through the array and display the contact information (name, phone number, and email address) if there is a match. If there is no match, display “No contact available”. Always assume that the user will input characters only. The name comparison should be case sensitive.  
**Hint:** Your code should accept input from redirection.
