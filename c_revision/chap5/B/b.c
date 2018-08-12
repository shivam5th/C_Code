#include<stdio.h>

int main()
{
        int num, f=1, i=1;
        printf("Enter a number:\n");
        scanf("%d",&num);

        while(i<=num)
        {
                f=f*i;
                i++;
        }
        printf("The factorial of the number is: %d \n",f);
}
