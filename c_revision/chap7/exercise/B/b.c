#include <stdio.h>

int main()
{
	int temp;
	scanf("%d", &temp);

	switch(temp)
	{
		case(temp <= 20):
			printf("Ooohhhhh! Damn cool!\n");	
		case(temp > 20 && temp <= 30):
			printf("Rain rain here again!\n");
		case(temp > 30 && temp <= 40):
			printf("Wish I am on Everest\n");
		default:
			printf("Good old nagpur weather\n");
	}
	return 0;
}
