#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define EndOfWord word[i] == ' ' || word[i] == ',' \
|| word[i] == '\n' || word[i] == '.'

int main(int argc, char *argv[])
{
	FILE *fp, *temp;
	int i, j;
	char word[10], ch;
	
	if (argc != 4) {
		puts("Wrong number of arguements\n.");
		printf("Write like this : ");
		printf("\"change\" \"old_word\"");
		printf("\"new_word\" \"file_name\"\n");
		exit(1);
	}
	fp = fopen(argv[3], "r");
	temp = fopen("temp.txt", "w");
	
	if (fp == NULL) {
		perror("Error : ");
		exit(1);
	}
	for (i = 0; (word[i] = fgetc(fp)) != EOF; i++)
	{
		if (EndOfWord) {
			ch = word[i];
			word[i] = '\0';
			if (!strcmp(argv[1], word))
				fputs(argv[2], temp);
			else
				fputs(word, temp);
			fputc(ch, temp);
			i = -1;
		}
	}
	fclose(fp);
	fclose(temp);
	
	remove(argv[3]);
	
	rename("temp.txt", argv[3]);
	return 0;
}

