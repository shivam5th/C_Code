#include<stdio.h>
int main()
{
	float basic, da, hra, gross;
	printf("\nEnter the basic salary:");
	scanf("%f",&basic);
	da = 40.00/100*basic;
	hra = 20.00/100*basic;
	gross = basic + da + hra; 
	printf("\nBasic Salary of Ramesh = %f",basic);
	printf("\nDearness allowancse = %f",da);
	printf("\nHouse Rent allowance = %f",hra);
	printf("\nGross Salary of Ramesh = %f",gross);

}
