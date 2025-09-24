 #include <stdio.h>

int main()
 {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    // Enter the first number
    printf("Enter first number: ");
    scanf("%d", &num1);

    // Enter the second number
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate the sum, difference, product, and quotient
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Check if the number is divisible by zero
    if (num2 != 0) 
    {
        quotient = (float)num1 / num2;
        printf("Quotient is = %.2f\n", quotient);
    } 
    else 
    {
        printf("Quotient = Undefined (division by zero)\n");
    }

    // Print the results
    printf("Sum Of The Number is = %d\n", sum);
    printf("Difference Of The Number is = %d\n", difference);
    printf("Product Of The Number is = %d\n", product);

    return 0;
}