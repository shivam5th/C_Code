#include <stdio.h>

int calculate(int, int, int, int, int);
float average(float, float, float, float, float);

int main()
{
	int a, b, c, d, e, f, sum;
	float av;

	printf("Ennter the value of a, b, c, d, e\n");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	sum = calculate(a, b, c, d, e);
	printf("Total sum is :%d\n", sum);
	
	av = average(a, b, c, d, e);
	printf("Average is : %f\n", av);

	return 0;
}
int calculate(int x, int y, int z, int m, int n)
{
	int g;

	g = x + y + z + m + n;

	return(g);
	
}
float average(float p, float q, float r, float s, float t)
{
	float v;

	v = (p + q + r + s + t)/5;

}
