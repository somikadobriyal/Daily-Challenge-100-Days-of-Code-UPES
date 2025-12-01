// Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main() 

{
    int y;

    printf("Enter a year: ");

    if (scanf("%d", &y) != 1)
    {
        printf("Invalid input. Please enter a valid year.\n");
        return 1; // Return with an error code
    }

    // Check if the year is leap year or not using conditional statements

    if (y % 400 == 0 || y % 4 == 0) // A year is a leap year if it is divisible by 400 or 4
    { 
      printf ("%d is a leap year.\n", y);
    }

    else if (y % 100 == 0) // A year is not a leap year if it is divisible by 100 but not by 400 & 4
    {
        printf ("%d is not a leap year.\n", y);
    }

    else if (y % 4 == 0) 
    {
        printf ("%d is a leap year.\n", y);
    } 

    else 
    {
        printf ("%d is not a leap year.\n", y);
    }

    return 0;
}