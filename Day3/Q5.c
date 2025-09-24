#include <stdio.h>

int main()
 {
    float C, F;  // C= Celsius, F= Fahrenheit

    // Input the temperature in Celsius
    printf("Enter temperature in Celsius : ");
    scanf("%f", &C);

    // Converting Celsius to Fahrenheit
    F = (C * 9 / 5) + 32;

    printf("Temperature in Fahrenheit is = %.2f\n", F);

    return 0;
}