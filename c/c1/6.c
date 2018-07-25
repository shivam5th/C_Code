#include<stdio.h>
#include<math.h>
int main()
{
	float length, breadth, radius, area, perimeter, circumference;
	printf("Enter the length and breadth of a rectangle:\n");
	scanf("%f%f",&length,&breadth);
	area = length*breadth;
	perimeter = 2.00*(length + breadth);
	printf("\nThe area of the rectangle is: %f", area);
	printf("\n\n\nThe perimeter of the rectangle is: %f\n\n\n", perimeter);
	printf("Enter the radius of a circle: \n");
	scanf("%f", &radius);
	area = 22.00/7.00*radius*radius;
	circumference = 2*(22.00/7.00)*radius;
	printf("The area of a circle: %f\n", area);
	printf("The circumference of a circle: %f\n", circumference);

}
