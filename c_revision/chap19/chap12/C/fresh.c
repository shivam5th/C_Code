#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fs, *ft;
	char s[1000], r[1000];
	int begin, end;

	fs = fopen("fromcpy.txt", "r");
	ft = fopen("filerev.txt", "w");

	if(fs == NULL || ft == NULL)
	{
		printf("Cannot open file \n");
		exit(1);	
	}
	
	while(fscanf(fs, "%s", s) != -1)
	{
		int count = 0;
		while (s[count] != '\0')
			count++;
		end = count - 1;
		
		for (begin = 0; begin < count; begin++)
		{
                r[begin] = s[end];
                end--;
		}
		
		r[begin] = '\0';
		fputs(s, ft);
	}
		printf("\n");
	fclose(fs);
	fclose(ft);

	return 0;	
}
