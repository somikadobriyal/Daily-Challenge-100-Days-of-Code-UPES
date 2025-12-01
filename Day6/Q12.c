// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
int main() 
{
    int a;

    // Insert a number
    printf("Enter a number: ");
    scanf("%d", &a);

    // Check whether the number is positive, negative or zero using nested if–else
    if (a > 0)
    {
        printf("%d is a positive number.\n", a);
    }    
      
    else 

    {
    if (a < 0)

        {
            printf("%d is a negative number.\n", a);
        }

        else

        {
            printf("The number is zero.\n");
        }
    }

    return 0;
}   