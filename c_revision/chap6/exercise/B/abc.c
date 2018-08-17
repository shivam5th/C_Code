#include<stdio.h>

int main()
{
	int rows=4, i, j, number= 1, space;
	
	for(i=1; i<=rows; i++)
	{
		for(space=1; space<=rows-i; space++)
			printf("  ");
		
		for(j=1; j <= i; ++j)
		{
			printf("%5d", number);
			++number;

		}
		printf("\n");
    }
    return 0;
}
