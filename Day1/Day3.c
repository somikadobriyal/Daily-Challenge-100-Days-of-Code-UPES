#include <stdio.h>

int main() 
{
    float length, breadth, area, perimeter;

    //Enter the length 
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    //Enter the breadth
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    //Finding area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    //print the area and perimeter
    printf("Area of the rectangle = %.2f\n", area);
    printf("Perimeter of the rectangle = %.2f\n", perimeter);

    return 0;
}