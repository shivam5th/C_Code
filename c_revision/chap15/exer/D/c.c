/*Write a program that converts all lowercase characters in a
given string to its equivalent uppercase character.*/

#include <stdio.h>
void String_Upper(char []);

int main()
{
	char str[100];
	
	printf("\nPlease Enter a string to convert it into Uppercase\n");
	scanf("%s", str);

	String_Upper(str);

	printf("\nUpper Case String is = %s\n", str);

	return 0;
}

void String_Upper(char string[])
{
	int i = 0;

	while (string[i] != '\0')
	{
    		if (string[i] >= 'a' && string[i] <= 'z') {
			string[i] = string[i] - 32;
		}
	i++;
	}
}
