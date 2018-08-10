#include<stdio.h>
int main()
{
        int ram, shyam, ajay;
        printf("Enter the age of Ram, Shyam and Ajay: \n");
        scanf("%d %d %d", &ram, &shyam, &ajay);

        if(ram < shyam)
        {
                if(ram < ajay)
                printf("Ram is younger. \n");

                else
                printf("Ajay is younger. \n");
        }
        else
        {
                if(shyam < ajay)
                printf("Shyam is younger. \n");

                else
                printf("Ajay is younger. \n");
        }
}
