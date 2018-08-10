#include<stdio.h>

int main()
{
        int year;
        printf("Enter the year:\n");
        scanf("%d", &year);
        if((year % 400 == 0 || year % 100 != 0) && (year % 4 == 0))
                printf("This is leap year\n");
        else
                printf("Opps, not a leap year\n");
}

