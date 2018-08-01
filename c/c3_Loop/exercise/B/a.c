/*Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 12.00 per hour for every 
hour worked above 40 hours. Assume that employees do not work for fractional part of an hour.*/

#include<stdio.h>
int main()
{
	float overtimepay;
	int hour, i=1;
	
	while(i<=10)
	{
		printf("Enter the number of hours worked: \n");
		scanf("%d", &hour);

		if(hour>=40)
		{
			overtimepay = (hour-40)*12;
			printf("\nNumbers of hours worked = %d\n Overtime Pay = %f \n", hour, overtimepay);
		}
		else
		{
			overtimepay = 0;
			printf("\nNumbers of hours worked %d is less than 40 hours.\n Hence no overtime pay\n", hour);
		}
		i++;
	}

}
