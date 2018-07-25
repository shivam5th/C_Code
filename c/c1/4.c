#include<stdio.h>
int main()
{
	float farhen, centigrade;
	printf("\nEnter the temperature in Farhenheight:\n");
	scanf("%f",&farhen);
	centigrade = (farhen - 32)*5.00/9.00;
	printf("\nThe temperature in centigrade:%f\n",centigrade);

}

