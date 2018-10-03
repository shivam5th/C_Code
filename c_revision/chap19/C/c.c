#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fs, *ft;
	char ch;

	fs = fopen("texts/appendto.txt", "r");

	if(fs == NULL)
	{
		puts("Cannot open source file");	
		exit(1);
	}
	ft = fopen("texts/accessme.txt", "a");

	if(ft == NULL)
	{
		puts("Cannot open target file");
		fclose(ft);
		exit(2);
	}
	while(1)
	{
		ch = fgetc(fs);

		if(ch == EOF)
			break;
		else	
			fputc(ch, ft);
	}

	fclose(fs);
	fclose(ft);
}
