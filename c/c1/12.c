#include<stdio.h>
int main()
{
	float sp, profit, cp, costitem;
	printf("Enter the selling price of 15 article :\n");
	scanf("%f", &sp);
	printf("Enter the profit for selling 15 article :\n");
	scanf("%f", &profit);
	cp = sp - profit;
	costitem = cp / 15;
	printf("Cost price for single article: %f\n",costitem);
}
