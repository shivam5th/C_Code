#include<stdio.h>

int main()
{

	int p,r,n,q,a,i,j,product;
	float amt=1;
	
	for(i=0;i<10;i++)
	{
     		amt=1;
     		printf("enter the values of p,r,n and q: "); 
     		scanf("%d%d%d%d",&p,&r,&n,&q);
     		
		product=n*q;
     
		for(j=1;j<=product;j++)
     		{
           		amt = amt * ( 1 +(float) r / q );
      		}
     			amt= p *amt;
     			printf("%f",amt);
	}
}
