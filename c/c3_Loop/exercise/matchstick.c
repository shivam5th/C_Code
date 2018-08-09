#include<stdio.h>

int main()
{
	int sticks=21, remain, upick;
	
	printf("\nTotal no of sticks on game : %d", sticks);
	
	do
	{
			printf("\nUser pick sticks: %d\n I pick %d", upick,5-upick);
       			scanf("%d",&upick);
		
	} while(upick>0);
}

