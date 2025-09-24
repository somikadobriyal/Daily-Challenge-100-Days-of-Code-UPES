// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
#define pi 3.14159  // We have to define constant for p

int main() 
{
    float radius, area, circum;

    // Enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", & radius);

    // Calculate area and circumference of the circle
    area = pi * radius * radius;
    circum = 2 * pi * radius;

    // Print the area and the circumference
    printf("Area of the circle is = %.2f\n", area);
    printf("Circumference of the circle is = %.2f\n", circum);

    return 0;
}