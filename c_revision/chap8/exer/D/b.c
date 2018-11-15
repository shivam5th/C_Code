#include <stdio.h>

int main()
{
	int num[5], i, pos = 0, neg = 0, even = 0, odd = 0;

	for (i = 0; i <= 5; i++) {
		printf("\nEnter the numbers\n");
		scanf("%d", &num[i]);
	}
	
	for (i = 0; i <= 5; i++) {
		if (num[i] > 0) {
			pos++;
			if ((num[i] % 2) == 0) {
				even++;
			} else {
				odd++;
			}
		} else {
			neg++;
			if ((num[i] % 2) == 0) {
				even++;
			} else {
				odd++;
			} 
		}
	}

	printf("The no of positive integer: %d\n", pos);
	printf("The no of negative integer: %d\n", neg);
	printf("The no of odd integer: %d\n", odd);
	printf("The no of even integer: %d\n", even);
	
	return 0;

}
