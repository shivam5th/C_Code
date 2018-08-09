#include<stdio.h>
 
int main()
{
  	int c, d, temp;
 
   	printf("Enter the value of c and d\n");
   	scanf("%d%d", &c, &d);
 
   	temp = c;
   	c = d;
   	d = temp;
 
   	printf("After Interchange\n%d\n%d\n",c,d);
 
   	return 0;
}
