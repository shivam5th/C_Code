/*Two numbers are entered through the keyboard. Write a
program to find the value of one number raised to the power
of another.*/
#include<stdio.h>
#include<math.h>
int main()
{
	int num1, num2, value;

	printf("\n Enter the two numbers \n");
	scanf("%d %d", &num1, &num2);
	value = pow(num2, num1);
	printf("%d power %d is: %d\n", num2, num1, value);

	printf("\n Enter the two numbers \n");
	scanf("%d %d", &num1, &num2);
	value = pow(num1, num2);
	printf("\n%d power %d is: %d\n", num1, num2, value);
}

