#include<stdio.h>
int main()
{
		int a,b;
		printf("Enter the marks obtained in A and B respectively\n");
		scanf("%d%d",&a,&b);
		
		if((a>=55&&b>=45)||(a<55&&a>=45&&b>=55))
		printf("Your are passed\n");

		else if(a>=65&&b<=45)
		printf("You have to appear in Re-exam for subject B\n");
		else
		printf("You are failed,better luck next time\n");
} 
