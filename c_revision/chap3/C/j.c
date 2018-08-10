#include<stdio.h>

int main()
{
        float x1, x2, x3, y1, y2, y3;
        
	printf("Enter the value of x1 and y1: \n\n");
        scanf("%f %f", &x1, &y1);

        printf("Enter the value of x2 and y2: \n\n");
        scanf("%f %f", &x2, &y2);

        printf("Enter the value of x3 and y3: \n\n");
        scanf("%f %f", &x3, &y3);

        if((x1 == y1) && (x2 == y2) && (x3 == y3))
                {
                printf("The points falls on straight line \n");
                }
                else
                {
                printf("The points donot falls on straight line \n");
                }
		return 0;
}
