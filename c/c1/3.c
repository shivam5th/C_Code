#include<stdio.h>
int main()
{
	float m1, m2, m3, m4, m5, avg;
	printf("\nEnter the marks of subject1\n");
	scanf("%f",&m1);
	printf("\nEnter the mark of subject2\n");
	scanf("%f",&m2);
	printf("\nEnter the mark of subject3\n");
	scanf("%f",&m3);
	printf("\nEnter the mark of subject4\n");
	scanf("%f",&m4);
	printf("\nEnter the mark of subject5\n");
	scanf("%f",&m5);
	avg=(m1+m2+m3+m4+m5)/5.00;
	printf("\n\nThe average is: %f\n\n",avg);
}
