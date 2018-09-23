#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char c;

	fp = fopen("fromcpy.txt", "r");

	if(fp == NULL)
	{
		puts("Cannot open the file");	
		exit(1);
	}
	while((c = getc(fp)) != EOF)
		putchar(c);		
	fclose(fp);
	return 0;
}
