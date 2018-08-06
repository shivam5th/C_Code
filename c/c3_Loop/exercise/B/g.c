#include<stdio.h>
int main()
{
   int num,total,p=0,n=0,z=0;
   
   printf("How many numbers do you want to enter ? ");
   scanf("%d",&total);
   
   while(total>0)
   {
   	scanf("%d",&num);
   	if(num>0)
       	p++;
   	
	if(num<0)
       	n++;
   	
	if(num==0)
       	z++;
       	total--;
   }
   printf("\nYou Entered:\n%d Positive Numbers\n%d Negative Numbers\n%d Zeros\n",p,n,z);
}
