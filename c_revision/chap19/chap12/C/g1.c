#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define FOUND (strcmp(word, "a") == 0 || strcmp(word, "an") == 0\
|| strcmp(word, "the") == 0 || strcmp(word, "A") == 0\
|| strcmp(word, "An") == 0 || strcmp(word, "The") == 0)

void delart(char*);

int main()

{
	delart("replace.txt");
	return 0;
}

void delart(char *file)
{
	FILE *fp, *nf;
	int i;
	char word[20];
	fp = fopen(file, "r+");
	nf = fopen("replacedd.txt", "w");
	if (fp == NULL)
	{
		puts("\nCannot open the file.\n");
		exit(1);
	}
	for (i = 0; 1; i++)
	{
		word[i] = fgetc(fp);
		if (word[i] == EOF)
			break;
		if (word[i] == ' ')
		{
			word[i] = '\0';
			if (FOUND)
			{
				strcpy(word, " ");
				fputs(word, nf);
			}
			else
			{
				fputs(word, nf);
				fputc(' ', nf);
			}
			i = -1;
		}
	}
}
