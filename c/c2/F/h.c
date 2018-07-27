#include<stdio.h>
int main()
	{
		float h;
		printf("Enter the time taken by the worker in hour");
		scanf("%f", &h);
		if(h >= 2 && h <= 3)
			printf("The worker is highly efficient");
		else if(h >= 3 && h <= 4)
			printf("The worker is need to improve speed.\n");
		else if(h >= 4 && h <= 5)
			printf("The worker is given training to improve the speed \n");
		else if(h > 5);
			printf("Worker has to leave the company\n");
	}
