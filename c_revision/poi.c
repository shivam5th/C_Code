#include<stdio.h>

void main()
{
	int i=3; 
	int *j;

	j= &i;	
	printf("\nAddress of i = %p", (void*)&i);
	printf("\nAddress of i = %p", (void*)j);
	printf("\nAddress of j = %p", (void*)&j);
	printf("\nValue of j = %p", (void*)j);
	printf("\nValue of i = %d", i);
	printf("\nValue of i = %d", *(&i));
	printf("\nValue of i = %d", *j);  
}
