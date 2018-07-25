#include<stdio.h>
int main()
{
	int n, a;
	int sum = 0;
	printf("\nEnter the four digit number\n");
	scanf("%d",&n);
	a = n / 1000;
	sum = sum + a;
	a = n % 10;
	sum = sum + a;
	printf("\nSum of the first and last digit: %d\n\n", sum);
}
