#include<stdio.h>
int main()
{
	float dist, meter, feet, inches, centi;
	printf("\nEnter the distance between two places");
	scanf("%f",&dist);
	meter = 1000.00*dist;
	centi = 100.00*meter;
	inches = centi/2.54;
	feet = 12*inches;
	printf("\nThe distance in meter = %f", meter);
	printf("\nThe distance in centimeter = %f", centi);
	printf("\nThe distance in inches = %f", inches);
	printf("\nThe distance in feet = %f",feet);
}

