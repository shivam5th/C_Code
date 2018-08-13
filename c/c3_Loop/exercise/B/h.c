#include<stdio.h>

int main()
{
    	int n, oct[10], quo, i=0, j=-1;
    
    	printf("Enter any number ");
    	scanf("%d",&n);
    
    	quo=n;
    	
	while(quo!=0)
    	{
        	oct[i]=quo%8;
        	quo=quo/8;
        	i++;
        	j++;
    	}
    		printf("\nOctal Equilvalent Is\n\n");
    
    	for(;j>=0;j--)
    	{
        	printf("%d",oct[j]);
    	}
}
