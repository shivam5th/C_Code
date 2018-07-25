#include<stdio.h>
int main()
{
    		int yr, ref_yr=2001, diff, lpyr, nmyr, td, day;
    		printf("Enter a year:- ");
    		scanf("%d", &yr);

    		diff=yr-ref_yr;
		lpyr=diff/4;
		nmyr=diff-lpyr;
		td=((nmyr*365)+(lpyr*366));
		day=td%7;

   	 	if (day==0)
        	printf("\nMonday\n");
   		
		else if (day==1)
        	printf("\nTuesday\n");
    		
		else if (day==2)
        	printf("\nWednesday\n");
    
		else if (day==3)
        	printf("\nThursday\n");
    
		else if (day==4)
        	printf("\nFriday\n");
    
		else if (day==5)
        	printf("\nSaturday\n");
    		
		else if (day==6)
        	printf("\nSunday\n");
 
}
