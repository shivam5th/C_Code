#include <stdio.h>

int main()
{
	char name[] = "Rajesh";
	char *ptr;

	ptr = name;

	while(*ptr != '\0')
	{
		printf("%c", *ptr);	
		ptr++;
	}
}

