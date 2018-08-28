#include <stdio.h>

int main()
{
	int row, col, space, n;
	char x = 'A';

	for(row=1 ; row<=7 ; row++)
	{
		x= 'A';
		for(col= 7  ; col>=row ; col--)
		{
			printf("%c", x);
			x++;
		}
		for(space = 2 ; space <= 2*row-1; space++)
		{
			printf(" ");
		}
		if(row == 1)
		{
			x= x-2;
			for(col=n ; col>row ; col--)
			{
				printf("%c", x);
				x--;	
			}	
		}
		else
		{
			x--;
			for(col=n ; col >= row ; col--)
			{
				printf("%c", x);
				x--;
			}
			printf("\n");
		}
	}
}

