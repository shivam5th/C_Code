#include <stdio.h>

int main()
{
	int num[5], i, x, count = 0;

	for (i = 0; i <= 4; i++) {
		printf("\nEnter numbers\n");
		scanf("%d", &num[i]);
	}
	printf("Enter the number to find if it is available or not in the array\n");
	scanf("%d", &x);

	for(i = 0; i <= 4; i++) {
		if (num[i] == x) 
			count++;
	}
	if (count)
		printf("\n%d is present in the array for %d times\n", x, count);
	else
		printf("Go to Hell");
	
	return 0;
}
