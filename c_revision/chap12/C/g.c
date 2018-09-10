#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp, *ft;
	char s[50], c;

	fp = fopen("replace.txt", "r");
	
	if(s == NULL)
	{
		putc("Cannot open the file");	
		exit(1);
	}

	ft = fopen("newafterreplaced.txt", "w");

	if(s == NULL)
	{
		putc("Cannot open the file");
		exit(2);	
	}
	while(fscanf(fp, "%s", s) != EOF)
	{
		if(strcmp(s, "a") == 0 || strcmp(s, "an") == 0 || strcmp(s, "the") == 0)
		{
			char c = ' ';
			fprintf(ft, "%s", c);
		}
		else
		{
			fprintf(ft, "%s", s);
		}
	}
}
