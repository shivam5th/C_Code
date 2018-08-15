#include<stdio.h>

int main()
{
	int hr;
    	for(hr = 0; hr < 24; hr++)
    	{
        	if(hr == 0)
            	printf("\n12 Midnight");
        		
		if(hr > 0 && hr < 12)
            	printf("\n%d AM", hr);
        
		if(hr == 12)
            	printf("\n%d Noon.", hr);
        
		if(hr > 12 && hr < 24)
            	printf("\n%d PM.", hr-12);
    	}
    
	return 0;
}
