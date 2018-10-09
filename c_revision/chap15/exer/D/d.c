/*Write a program that extracts part of the given string from the
specified position. For example, if the sting is "Working with
strings is fun", then if from position 4, 4 characters are to be
extracted then the program should return string as "king".
Moreover, if the position from where the string is to be
extracted is given and the number of characters to be
extracted is 0 then the program should extract entire string
from the specified position.*/

#include<stdio.h>
#include<string.h>

int main()
{
	char s[] = "Working with strings is fun";
	char emps[200];
	int pos = 4, length = 4;

	strncpy(emps, (s + pos - 1), length);

	puts(emps);

	return 0;
}
