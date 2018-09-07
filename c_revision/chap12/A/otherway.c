#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp;
	char s[80];

	fp = fopen("biswasong.txt", "w");

	if(fp == NULL)
	{
		puts("Cannot open file");
		exit(1);
	}
	else if(fp != NULL)
	{	
		printf("\nEnter a few lines of text:\n");
		gets(s);

		fputs(s, fp);
		fclose(fp);
	}
	else
	{
		printf("\nUnable to Create or open the biswasong.txt file\n");
	}
	return 0;
}
