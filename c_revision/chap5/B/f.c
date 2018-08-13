#include<stdio.h>

int main( )
{
	int x, y, n = 21;

	printf ("The Total Amount Of Matchsticks is 21");
	
	while(n > 1)
	{
		printf ("\nEnter Your Choice : ");
		
		scanf ("%d", &x);
		
		if((1 <= x) && (x <= 4))
		{
			n = n - x;
			printf ("\nThe user chose %d, the matchsticks left %d", x, n);
		}
		else
		{
			printf ("\nWrong Entry");
			break;
		}
			y = 5 - x;
			n = n - y;
			
			printf ("\nThe computer chose %d, the matchsticks left %d", y, n);
	}
		if(n == 1)
			printf ("\nLast Match Stick Left, You Lose");
}
