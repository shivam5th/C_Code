#include<stdio.h>

void calc(int, int, int, float*, float*);

int main()
{
	float av, pr;
	int a, b, c;

	printf("Enter the marks of the student in three subjects out of 100 :");
	scanf("%d%d%d", &a, &b, &c);

	calc(a, b, c, &av, &pr);

	printf("\n\nAverage of the marks : %.2f\n\nPercentage of the student : %.2f\n", av, pr);
	
	return 0;
}
void calc(int a, int b, int c, float *av, float *pr)
{
	int sum = a + b + c;
	*av = sum / 3;
	*pr = ((sum / 300.) * 100.);
}
