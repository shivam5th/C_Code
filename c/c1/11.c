#include<stdio.h>
int main()
{
	int amount, hundred, fifty, ten, amountremain;
	printf("Enter the amount in hundred: \n");
	scanf("%d",&amount);
	hundred = amount / 100;
	printf("Required Rs. 100 denomeration: %d\n",hundred);
	fifty = (amount % 100) / 50;
	printf("Required Rs. 50 denomeration: %d\n", fifty);
	ten = (((amount % 100) % 50) / 10);
	printf("Required Rs. 10 denomeration: %d\n", ten);
	amountremain = (((amount % 100) % 50) % 10);
	printf("Remaining denomeration: %d\n", amountremain);
}
