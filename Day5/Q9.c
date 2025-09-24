 // Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h> // So that we can use pow() function

int main() 
{
    float P, Rate, Time;
    float SI, CI;

    // Insert values for principal, rate, and time
    printf("Enter the Principal amount: ");
    scanf("%f", &P);

    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &Rate);

    printf("Enter Time (in years): ");
    scanf("%f", &Time);

    // Calculate the Simple Interest
    SI = (P * Rate * Time) / 100;

    // Calculate the Compound Interest
    CI = P * pow((1 + Rate / 100), Time) - P;

    printf("The Simple Interest is = %.2f\n", SI);
    printf("The Compound Interest is = %.2f\n", CI);

    return 0;
}