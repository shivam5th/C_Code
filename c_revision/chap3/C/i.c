#include<stdio.h>

int main()
{
        float l, b, area, perim;
        
	printf("Enter the length and breadth of rectangle: \n");
        scanf("%f %f", &l, &b);

        area = (l * b);
        perim = 2 * (l + b);

        if((l * b) < 2 * (l + b))
        {
        printf("Perimeter is large \n");
        }
        else
        {
        printf("Area is biger \n");
        }
	return 0;
}
