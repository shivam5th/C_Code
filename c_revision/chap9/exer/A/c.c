#include <stdio.h>

int main()
{
	float a = 13.5;
	float *b, *c;
	b = &a; /* Suppose address of a is 1006*/
	c = b;
	printf("%lu %lu %lu\n", &a, b, c);
	printf("%f %f %f %f %f\n", a, *(&a), *&a, *b, *c);

	return 0;
}
