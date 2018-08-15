#include<stdio.h>

int main()
{
	char another = 'y';
	int num;
	for(; another == 'y';)
	{
		printf("Enter a number\n");
		scanf("%d", &num);
		printf("Square of %d is %d\n", num, num*num);
		printf("Want to enter another number y/n\n");
		fflush(stdin);
		scanf(" %c", &another);
	}
	return 0;
}
