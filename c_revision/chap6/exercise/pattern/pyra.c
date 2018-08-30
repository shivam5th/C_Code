#include <stdio.h>

int main()
{
	int i, j, k, l;

	for(i=1 ; i<=5 ; i++)
	{
		k=1;

		for(j=1 ; j<=9 ; j++)
		{
			if(j>=6-i && j<=4+i && l)
			{
				printf("%d", k);
				l= 0;
			}
			else
			{	
				printf(" ");
				l= 1;
			}
		}
		printf("\n");
			
	}
	return 0;
}
