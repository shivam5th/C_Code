#include <stdio.h>

int main()
{
	int i = 3;

	switch(i)
	{
		case 0:
			printf("Customers are dicey\n");
		case 1 + 0:
			printf("Market are pricey\n");
		case 4 / 2:
			printf("Investors are moody\n");
		case 8 % 5:
			printf("At least employess are good\n");
	}
	return 0;
}
