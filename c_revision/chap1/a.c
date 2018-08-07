#include<stdio.h>

int main()
{
	float x, y, z, sum;

	printf("Enter the basic salary of Ramesh\n");
	scanf("%f", &x);
	
	y = 40.00/100*x;
	z = 20.00/100*x;
	sum = x+y+z;
	
	printf("Dearness allowance is: %f\n", y);
	printf("House Rent Allowance: %f\n", z);
	printf("Gross salary is: %f\n", sum);
}
