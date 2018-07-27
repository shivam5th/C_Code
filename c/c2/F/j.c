#include<stdio.h>
int main()
{
	int order,credit;
	printf("Enter the order[more=0,less=1] and credit [ok=1,not ok=0]\n");
	scanf("%d%d",&order,&credit);

	if(credit == 1 && order == 1)
	printf("supply his requirements\n");
	
	if(credit == 0 && order == 1)
	printf("Please Credit more money\n");

	if(credit == 1 && order == 0)
	printf("Available Stock  and Remaining balance would be shipped ASAP\n");
}  
