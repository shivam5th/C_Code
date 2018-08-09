#include<stdio.h>

int main()
{
	float sp, cp, profit, loss;

	printf("Enter the selling price:\n");
	scanf("%f", &sp);
	printf("Enter the cost price\n");
	scanf("%f", &cp);

	if(sp > cp)
	{
		profit = sp - cp;	
		printf("The seller made profit: %.2f\n", profit);
	}
	else
	{
		loss = cp - sp;
		printf("The seller incurred loss : %.2f\n", loss);	
	}
	
}

