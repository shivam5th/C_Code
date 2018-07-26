#include<stdio.h>
int main()
{
	int days;
	float fine;
	printf("No of days late: \n");
	scanf("%d", &days);

	if(days <= 30)
	{
	if(days <= 5)
	fine = 0.50 * days;
	else if ((days > 5) && (days <= 10))
	fine = 1.00 * days;
	else if((days > 10) && (days <= 30))
	fine = 5.00 * days;
	printf("You have to pay Rs %f \n",fine);
	}
	else
	printf("The membership is cancelled. \n");
}
