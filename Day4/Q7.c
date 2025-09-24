#include <stdio.h>

int main()
{ 
    int a, b;

    // Enter two numbers
    printf("Enter the first number (a): ");
    scanf("%d", &a);

    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // Swap without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Show the swapped values
    printf("After swapping the values:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}