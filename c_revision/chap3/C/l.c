#include<stdio.h>

int main()
{
        float x, y;
        
	printf("Enter the value for x and y : \n");
        scanf("%f %f", &x, &y);

        if((x>0) && (y>0))
        		
		printf("The values are lies in x-axis, y-axis.\n"); 
        else
        {
                if((x==0) && (y==0))
			printf("The values are in origin \n ");
		else
		{	
			printf("The values are not in axis\n");	
		}
        }
	return 0;
}

