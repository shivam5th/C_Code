#include<stdio.h>
int main()
{
	 int num, i;

	 printf("Enter the number \n");
	 scanf("%d", &num);

	 i = 2;
	 while(i<=num-1)
	 {
	 	if(num % i == 0)
		{
			printf("The number is not prime \n");
			break;
		}
	 	i++;
	 }
		if(i == num)
			printf("prime number \n");

}
