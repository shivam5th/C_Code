#include <stdio.h>

int main()
{
	int i, j, k, c;
	
	for(i=0 ; i<5 ; i++)
	{
        	c=1;
        	
		for(k=0 ; k<5-i ; k++)
		{
			printf(" ");
		}
        	
		for(j=0 ; j<=i ; j++)
		{
            		printf(" %d", c);
            		c= (c*(i-j)/(j+1));
        	}
        	
		printf("\n");
	}
	return 0;
}
