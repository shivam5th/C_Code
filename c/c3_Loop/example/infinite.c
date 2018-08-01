#include<stdio.h>
int main()
{
	char another;
	int num;
	do
	{
		printf("Enter a number: \n");
		scanf("%d",&num);
		printf("Square of the %d is %d\n", num, num*num);
		printf("Enter another number y/n \n");
		scanf("%c",&another);
	}while(another == 'y');
}
