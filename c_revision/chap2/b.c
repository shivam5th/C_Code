#include<stdio.h>

int main()
{
	int d1, d2, d3, d4, d5, number, revnumber;

	printf("Enter the 5 digit number\n");
	scanf("%d", &number);

	d1 = number%10;
	d2 = (number/10)%10;
	d3 = (number/100)%10;
	d4 = (number/1000)%10;
	d5 = (number/10000)%10;

	printf("The reverse number is: %d%d%d%d%d\n", d1, d2, d3, d4, d5);
}
