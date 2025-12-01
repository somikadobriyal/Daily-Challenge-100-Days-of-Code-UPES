// Q16: Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>  
int main() 
{
    int n1, n2, n3;

    printf("Enter three numbers: ");  // Insert three numbers from user
    scanf("%d %d %d", &n1, &n2, &n3);

    // Find the largest number using if-else
    if (n1 >= n2 && n1 >= n3) 
    {
        printf("\nResult: THE largest number is %d.\n", n1);
    } 

    else if (n2 >= n1 && n2 >= n3) 
    {
        printf("\nResult: The largest number is %d.\n", n2);
    } 

    else 
    {
        printf("%d is the largest number.\n", n3);
    }

    return 0;
}