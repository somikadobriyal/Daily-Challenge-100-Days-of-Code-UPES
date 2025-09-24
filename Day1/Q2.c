#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    // Enter the first numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    // Enter the second number
    printf("Enter second number: ");
    scanf("%d", &num2);

    // to find the sum, difference, product and quotient
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    //check if divisible by zero
    if (num2 != 0) {
        quotient = (float)num1 / num2;
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("Quotient = Undefined (division by zero)\n");
    }

    //print the results
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    return 0;
} 