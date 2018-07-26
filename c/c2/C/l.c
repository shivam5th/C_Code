#include<stdio.h>
int main()
{
	float x, y;
	printf("Enter the value for x and y : \n");
	scanf("%f %f", &x, &y);

	if((x == y) || (x == y == 0))
	{
		printf("The values are lies in x-axis, y-axis or origin \n");
	}
	else
	{
		printf("The values are not in axis \n ");
	}
}
