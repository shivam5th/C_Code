#include<stdio.h>
int main()
{
                int a, b, c, d, e, f, g, i, j;
                printf("Enter five digit number \n");
                scanf("%d",&a);

                b = a % 10;
                c = a / 10;
                d = c % 10;
                e = c / 10;
                f = e % 10;
                g = e / 10;
                i = g % 10;
                j = g / 10;

                printf("\nThe reverse number is %d%d%d%d%d", b, d, f, i, j);
                printf("\nThe original and reverse number is not equal\n\n");
}
