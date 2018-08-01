#include<stdio.h>
int main()
{
	int r, c, sum;
	printf("Enter the values of r, c: \n");
	scanf("%d %d", &r, &c);

	for(r=1; r<=3; r++)
	{
		for(c=1; c<=2; c++)
		{
			sum = r + c;
			printf("r=%d c=%d sum=%d\n", r, c, sum);
		}
	}
}
