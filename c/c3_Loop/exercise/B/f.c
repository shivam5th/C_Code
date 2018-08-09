#include<stdio.h>

int main()
{
	int sticks = 21, upick, cpick;

	do
	{
		printf("\nSticks on board : %d ", sticks);
		printf("\nMake your pick between 1 to 4 : ");
		scanf("%d", &upick);

			if(upick < 1 || upick > 4)
			{
			printf("\n Invalid entry" );
			continue;
			}			

			printf("\nYou Picked %d\n I pick %d", upick, (5-upick));
			sticks = sticks - 5;

	} while(sticks > 1);

	printf("\nYou pick the last stick. You LOOSE\n" );
}	
