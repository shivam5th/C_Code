#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fs, *ft;
	int ch;

	fs = fopen("DSC_0091.jpg", "rb");

	if(fs == NULL)
	{
		puts("Cannot open the file");
		exit(1);	
	}

	ft = fopen("DSC_0012.jpg", "wb");
	
	if(ft == NULL)
	{
		puts("Cannot open target file");	
		fclose(fs);
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
