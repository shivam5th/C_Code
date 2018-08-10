#include<stdio.h>

int main()
{
        char ch;

        printf("Enter a character\n");
        scanf("%c", &ch);

	(ch>='a' && ch<='z')
     	? printf("It is lower case alphabet\n")
        : printf("Not lower case alphabet\n");
}
