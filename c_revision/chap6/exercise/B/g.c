#include<stdio.h>

int main()
{
	float i, x, y;

	for(y=1 ; y<=6 ; y++)
	{
		for(x=5.5 ; x <=12.5 ; x=x+0.5)
		{
		i=2 + (y + (0.5*x));
		printf("%.2f\t%.2f\t%.2f\n",i, y, x);
		}
	}
	return 0;
}
