#include <stdio.h>

int main()
{
	FILE *fp;
	char ch;

	fp = fopen("fromcpy.txt", "r");

	if(fp == NULL)
	{
		puts("Cannot open the file");	
		exit(1);
	}
	while((ch = getc(fp)) != EOF);
	{
		printf("%c", ch);	
	}
		fclose(fp);
		printf("\n");

	return 0;
}
