#include <stdio.h>

int main()
{
	char suit = 3;

	switch(suit)
	{
		case 1:
			printf("Diamond\n");
		case 2:	
			printf("Spade\n");
		case 3:
			printf("Heart\n");
	}
	printf("I thought one wears a suit\n");
	
	return 0;
}
