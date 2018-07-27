/*Calculation of simple interest for 3 sets of p, n and r */
#include<stdio.h>
int main()
{
	int p, n, cal;
	float r, si;

	cal = 1;

	while(cal <= 3)
	{
	printf("\n Enter the values of p, n, r \n");
	scanf("%d %d %f", &p, &n, &r);
	si = p * n * r / 100;
	printf("Simple interest = Rs. %f \n", si);
	cal = cal + 1;
	}

}
