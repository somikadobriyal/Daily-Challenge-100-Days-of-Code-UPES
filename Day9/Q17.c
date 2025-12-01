// Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main() 
{
    double a, b, c;
    double root1, root2;
    double discriminant;

    // Insert coefficients a, b and c from user
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

     if (a == 0)
    {
         
        if (b == 0) // If a=0, the equation is bx + c = 0.

        {
        printf("\nError: If a=0 and b=0, the equation is c=0, which is not a proper equation to solve.\n");
        } 
        
        else

        {
            printf("\nError: Coefficient 'a' cannot be zero for a quadratic equation.\n");
            printf("This is a linear equation. Root x = %.3f\n", -c / b);
        }

        return 1;
    }
    
    // Calculate the discriminant ( D = b^2 - 4ac)
    discriminant = b * b - 4 * a * c;
    printf("\n Results \n");

    if (discriminant >0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Roots are real and different.\n");
        printf("Root 1 = %.3f\n", root1);
        printf("Root 2 = %.3f\n", root2);
    } 

    else if (discriminant == 0) 
    {
        root1 = root2 = -b / (2 * a);

        printf("Roots are real and the same.\n");
        printf("Root 1 = Root 2 = %.3f\n", root1);
    } 
    else 
    {
        double r_part = -b / (2 * a);
        double i_part = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", r_part, i_part);
        printf("Root 2 = %.2f - %.2fi\n", r_part, i_part);
    }

    return 0;
}