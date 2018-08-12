#include<stdio.h>

int main()
{
	float overtimepay;
	int hour, i= 1;
	
	while(i <= 10)
	{
                printf("Enter the number of hours worked: \n");
                scanf("%d", &hour);

                if(hour>=40)
                {
                        overtimepay = (hour-40)*12;
                        printf("\nNumbers of hours worked = %d\n Overtime Pay = %.2f \n", hour, overtimepay);
                }
                else
                {
                        overtimepay = 0;
                        printf("\nNumbers of hours worked %d is less than 40 hours.\n Hence no overtime pay\n", hour);
                }
                i++;
        }
	return 0;
}
