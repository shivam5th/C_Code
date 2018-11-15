#include <stdio.h>

int main()
{
	int array[26], i;

	for(i = 0; i <= 25; i++) {
		array[i] = 'A' + 1;
		printf("%d %c\n", array[i], array[i]);	
	}
	return 0;
}
