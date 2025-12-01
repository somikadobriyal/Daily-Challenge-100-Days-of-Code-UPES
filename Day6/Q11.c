// Q11: Write a program to input an integer and check whether it is even or odd using if–else.
 
#include <stdio.h>

int main() 
{
    int a;

    printf("Enter an integer : "); // Tell user to enter an integer
    scanf("%d", &a);

    // Check if the number is even or odd using if–else
    if (a % 2 == 0) 
    {
        printf("The number %d is even.\n", a);
    } 
        else 
    {
        printf("The number %d is odd.\n", a);
    }

    return 0;
}