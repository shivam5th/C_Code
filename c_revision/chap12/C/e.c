#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fs, *ft;
	char ch;

	fs = fopen("accessme.txt", "r");
	
	if(fs == NULL)
	{
		puts("Cannot open the file");	
		exit(1);
	}
	ft = fopen("smallcapital.txt", "w");

	if(ft == NULL)
	{
		puts("Cannot open the target file");
		fclose(ft);	
		exit(2);	
	}
	
	while(1)
	{
		ch = fgetc(fs);
		
		if(ch == EOF)
			break;
		
		if(ch >= 97 && ch <= 122)
			ch = ch - 32;
		fputc(ch,ft);
	}
	printf("File copied successfully");

	fclose(fs);
	fclose(ft);

	return 0;
}
