#include<stdio.h>

int main()
{
	int x, inch;
	float bmi, weight, y, meter, height;

	printf("Enter the weight of the person\n");
	scanf("%f", &weight);
	printf("Enter the height of the person in feet and inch\n");
	scanf("%d %f", &x, &y);
	
	y = inch/12.0;
	meter = x + y;
	height = meter/3.28;
	bmi = weight/meter*meter;

	if(bmi<15)
		printf("Starvation\n");
	else if(bmi>=15.1 && bmi<=17.5)
		printf("Anorexic\n");		
	else if(bmi>=17.6 && bmi<=18.5)
		printf("Underweight\n");		
	else if(bmi>=18.6 && bmi<=24.9)
		printf("Ideal\n");
	else if(bmi>=25 && bmi<=29.9)
		printf("Overweight\n");
	else if(bmi>=30 && bmi<=39.9)
		printf("Obese\n");
	else
		printf("Morbidly Obese\n");
		
}
