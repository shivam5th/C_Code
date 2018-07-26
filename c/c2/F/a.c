#include<stdio.h>
int main()
{
	int year;
	printf("Enter a year to check whether it is leap year or not");
	scanf("%d", &year);

 		if((year % 4 == 0 && year % 100 != 0)||year % 400 == 0)
		{
		printf("The year is leap year");
		}
		else
		{
		printf("The year is not leap year");
		}
}
