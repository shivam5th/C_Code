#include<stdio.h>

int main()
{
	float distance, meter, feet, inches, centi;

	printf("Enter the distance between two cities in km:\n");
	scanf("%f", &distance);
	
	meter= distance*1000;
	feet= meter/0.3048;
	inches= feet*12;
	centi= inches*2.54;

	printf("\nThe distance in meter:%f\n", meter);
	printf("\nThe distance in feet:%f\n", feet);
	printf("\nThe distance in inches:%f\n", inches);
	printf("\nThe distance in centimeter:%f\n", centi);
}
