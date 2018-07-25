#include<stdio.h>
int main()
{
	int num, a, n;
	int sum = 0;
	printf("Enter the five digit number:\n");
	scanf("%d",&num);
	a = num % 10;
	n = num / 10;
	sum = sum + a ;
	a = n % 10;
	n = n / 10;
	sum = sum + a;
	a = n % 10;
	n = n / 10;
	sum = sum + a;
	a = n % 10;
	n = n / 10;
	sum = sum + a;
	a = n % 10;
	sum = sum + a;
	printf("The sum of the each digit %d is %d\n\n", num, sum);


}
