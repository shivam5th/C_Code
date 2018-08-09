#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, c, perimtr, p, x;
	float area;

	printf("Enter the 3 sides of the triangle\n");
	scanf("%d%d%d", &a, &b, &c);

	perimtr = a+b+c;
	p = perimtr/2;
	x = p*(p-a)*(p-b)*(p-c);

	printf("Area of the triangle is : %f\n", sqrt(x));

	return 0;
	
}
