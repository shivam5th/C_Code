#include<stdio.h>
#include<math.h>
#define PI 3.141592

int main()
{
	int x, y, z;
	float a;
	double b = x/y;
	double result;
	
	z= x*x + y*y;
        a= sqrt(z);
        b= x/y;

	result = atan(b);
	result =(result*180)/ PI;

	printf("Enter the coordinates of Cartesian: \n");
	scanf("%d %d", &x, &y);

	printf("\nInverse of tan(%.2f) = %.2f in degrees", b, result);
	
	return 0;
}
