#include <stdio.h>

int main()
{
	int num1 , num2 , sum;
	
	//Enter the first number 
	printf(" Enter the first number : ");
	scanf ("%d", &num1);
	
	//Enter the second number
	printf(" Enter the second number : ");
	scanf ("%d", &num2);
	
	//Sum of both the numbers
	sum = num1 + num2;
	
	//Print the result
	printf( "Sum = %d\n" , sum);
	
	return 0;
}