#include <stdio.h>

int main() 
{
	int rw, c, spc;
	int no= 4;
	
	for (rw=1; rw<=no; rw++) 
	{
		for(spc=no; spc>=rw; spc--) 
		{
			printf(" ");
		}
			for (c=1; c<=rw; c++) 
			{
				printf("%2d",c);
			}
				printf("\n");
	}
	return 0;
}
