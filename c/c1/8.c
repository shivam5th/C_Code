#include<stdio.h>
int main()
{
	int num;
	int rev_number = 0;
	printf("Enter the 5 digit number:\n");
	scanf("%d",&num);
	rev_number = rev_number * 10 + num % 10;
        num = num / 10;
	rev_number = rev_number * 10 + num % 10;
	num = num / 10;
	rev_number = rev_number * 10 + num % 10;
	num = num / 10;
	rev_number = rev_number * 10 + num % 10;
	num = num / 10;
	rev_number = rev_number * 10 + num % 10;
	num = num / 10;	
	printf("The reverse of 5 Digit number is: %d\n",rev_number);
}
