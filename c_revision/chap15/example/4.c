#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = "Rajesh";
	int len1, len2;

	len1 = xstrlen(arr);
	len2 = xstrlen("Biswajit Mahanta");
	
	printf("\nstring = %s length = %d\n", arr, len1);
	printf("\nstring = %s length = %d\n", "Biswajit Mahanta", len2);
}
xstrlen (char *s)
{
	int length = 0;

	while(*s != '\0')
	{
		length++;
		s++;
	}
	return length;
}
