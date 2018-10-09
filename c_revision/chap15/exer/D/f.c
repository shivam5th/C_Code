/*Write a program that replaces two or more consecutive blanks
in a string by a single blank*/

#include <stdio.h>
#include <string.h>

int main()
{
	char source[1000], target[1000];
	int x = 0, y = 0, len;

	printf("\nEnter a string with more than one space after a word\n");
	scanf("%[^\n]s", source);

	while (source[x] != '\0') {
		if (!(source[x] == ' ' && source[x+1] == ' ')) {
			target[y] = source[x];
			y++;
		}
		x++;
	}
	
	target[y] = '\0';

	printf("Text after removing blanks\n%s\n", target);

	return 0;
}
