#include <stdio.h>

int main()
{
        int number;
        
	printf("\n Enter any number to find the absolute value for: \n");
        scanf("\n %d", &number);

        if(number < 0)
        {
                number = (-1) * number;
                printf("\n Absolute value is = %d\n", number);
        }
        if (number > 0)
        {
                printf("\n Absolute value is = %d\n", number);
        }
	return 0;
}

