#include <stdio.h>
#include <malloc.h>
#include <string.h>
#define LINE 6

void search_replace(char **str, char *old, char *news)
{
	int i, j, k, m, c;
	j = k = m = i = c = 0;
	char ans[10][100], *p;
	
	for (i = 0; i <= LINE - 1; i++) {
		m = 0;
		c = 0;
		
		for (j = 0; str[i][j] != '\0';) {
			if (str[i][c] == old[k]) {
				k++;
				c++;
				if (old[k] == '\0') {
					for (k = 0; news[k] != '\0'; k++, m++)
						ans[i][m] = news[k];
					j = c;
					k = 0;
				}
			} else {
				ans[i][m] = str[i][j];
				m++;
				j++;
				c = j;
				k = 0;
			}
		}
		ans[i][m] = '\0';
		j = k = m = 0;
	}
	for (i = 0; i <= LINE - 1; i++)	{
		p = (char*)malloc(strlen(ans[i]) + 1);
		strcpy(p, ans[i]);
		str[i] = p;
	}
}
int main()
{
	char *str[] = {
		"We will teach you how to...",
		"Move a mountain",
		"Level a building",
		"Erase the past",
		"Make a million",
		"...all through C!"
	};
	char str1[10], str2[10];
	puts("Enter the word you want to replace.");
	scanf("%s", str1);
	puts("Enter the word you want to put.");
	scanf("%s", str2);
	
	search_replace(str, str1, str2);
	for (int i = 0; i <= LINE - 1; i++)
		puts(str[i]);
	return 0;
}
