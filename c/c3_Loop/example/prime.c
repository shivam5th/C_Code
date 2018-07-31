#include<stdio.h>
int main()
{
		int num, i;
		
		printf("Enter a number to check whether the number is prime or not \n");
		scanf("%d", &num);

		i = 2;
		while(i <= num -1)
		{
			if(num % i == 0)
			{
				printf("Not a prime number");
			}
			i++;
		}
			if(i == num)
				printf("The number is prime:\n");
}
