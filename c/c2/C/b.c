#include<stdio.h>
int main()
{
	int input, odd, even;
	printf("Enter any integer number:\n");
	scanf("%d",&input);
	if(input % 2 == 0)
	{
		printf("The number is even integer\n");
	}
	else
	{
		printf("The number is odd integer\n");
	}
}
