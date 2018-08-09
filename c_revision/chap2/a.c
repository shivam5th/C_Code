#include<stdio.h>	

int main()
{
	int d1, d2, d3, d4, d5, number, sum;

	printf("Enter the 5 digit number: \n");
	scanf("%d", &number);

	d1 = number%10;
	d2 = (number/10)%10;
	d3 = (number/100)%10;
	d4 = (number/1000)%10;
	d5 = (number/10000)%10;
	sum = d1+d2+d3+d4+d5;

	printf("The sum of entered numbers digit: %d\n", sum);

}
