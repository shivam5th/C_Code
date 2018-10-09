/*Write a program that converts a string like "124" to an integer 124*/

#include <stdio.h>
#include <string.h>

int main()
{
	const char *str = "124";
	int x;

	sscanf(str, "%d", &x);
	printf("\nThe convereted string: %d\n", x);

	return 0;
}
