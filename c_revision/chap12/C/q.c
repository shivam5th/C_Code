#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char str[80];
	int words = 0, flwords = 0, i;

	fp = fopen("TRIAL.TXT", "r");

	if(fp == NULL)
	{
		puts("Cannot open the file\n");	
		exit(1);
	}

	while((fgets(str, 79, fp)) != NULL)
	{
		for(i = 1; str[i] != '\0'; i++)
		{
			if(str[i] == '.' || (str[i] == '\n' && str[i - 1] != '.') || str[i] == ',' || (str[i] == '' && str[i - 1] != ',' && str[i -1] != '.'))

			word++;

			if(i < 74)
			{
				if(str[i] == ' ' && (str[i + 5] == ' ' || str[i + 5] == '\n' || str[i + 5] == '.' || str[i + 5] == ','))
					flwords++;
				
				if(i == 1 && (str[4] == ' ' || str[4] == ',' || str[4] == '.') && (str[1] != ' '))
			}

		}
	}
}
