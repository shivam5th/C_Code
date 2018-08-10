#include<stdio.h>
int main()
{
        float a, b, c;
        printf("Enter all three angle value: \n");
        scanf("%f %f %f", &a, &b, &c);

        if( a + b + c == 180)
                {
                        printf("The triangle is valid \n");
                }
                else
                {
                        printf("The triangle is invalid \n");
                }
}
