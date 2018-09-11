#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fs, *ft;
	char ch;

	fs = fopen("replace.txt", "r");

	if(fs == NULL)
	{
		puts("Cannot open file");
		exit(1);	
	}
	while(1)
	{
		if(ch == EOF)
			break;
		
		fprintf(fs, "%c", ch);

	}
	fclose(fs);
	
	return 0;
}
