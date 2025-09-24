#include <stdio.h>
#define PI 3.14159  // We have to define constant for π

int main() 
{
    float radius, area, circumference;

    // Enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Finding area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Print the area and circumference
    printf("Area of the circle is = %.2f\n", area);
    printf("Circumference of the circle is = %.2f\n", circumference);

    return 0;
}