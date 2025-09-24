#include <stdio.h>

int main() 
{
    int a, b, swap;

    // Enter two numbers
    printf("Enter the first number (a): ");
    scanf("%d", &a);

    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // Swap the values using a third variable
    swap = a;
    a = b;
    b = swap;

    // Show the swapped values
    printf("After swapping the values:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}