#include<stdio.h>

int main()
{
	float  s1, s2, s3, s4, s5, aggree, total, percen;
	
	printf("Enter the marks of 5 subjects \n");
	scanf("%f%f%f%f%f", &s1, &s2, &s3, &s4, &s5);

	aggree = s1 + s2 + s3 + s4 + s5;
	total = 500;
	percen = aggree/total*100.00;

	printf("Agreegate score: %f\n and percentage is : %f\n", aggree, percen);	
}	
