#include <stdio.h>

int main() {
    int n, sum;

    // Enter a positive integer value for n
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Formula for the sum of first n natural numbers
    sum = n * (n + 1) / 2;

    // The sum of first n natural numbers
    printf("The sum of the first %d natural numbers = %d\n", n, sum);

    return 0;
}