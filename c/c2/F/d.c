#include<stdio.h>
int main()
{
		int hardness, ts, grade;
		float carbon;

		printf("Enter the values of hardness, tensile strength and carbon content in the steel:");
		scanf("%d %d %f", &hardness, &ts, &carbon);

		if ((hardness>50) && (carbon<0.7) && (ts>5600))
		printf("Grade 10");
		
		else if ((hardness>50) && (carbon<0.7))
		printf("Grade 9");
		
		else if ((carbon<0.7) && (ts>5600))
		printf("Grade 8");

		else if ((hardness>50) && (ts>5600))
		printf("Grade 7");

		else if ((hardness>50) || (carbon<0.7) || (ts>5600))
		printf("Grade 6");

		else
		printf("Grade 5");

}

