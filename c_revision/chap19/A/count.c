#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char ch;
	int nol = 0, not = 0, nob = 0, noc = 0;

	fp = fopen("fromcpy.txt", "r");
	
	while(1)
	{
		ch = getc(fp);

		if(ch == EOF)	
			break;

		noc++;

		if(ch == ' ')
			nob++;

		if(ch == '\n')
			nol++;

		if(ch == '\t')
			not++;
	}
	fclose(fp);
	printf("\nNumber of characters: = %d\n", noc);
	printf("\nNumber of blanks: = %d\n", nob);
	printf("\nNumber of newlines: = %d\n", nol);
	printf("\nNumber of tabs: = %d\n", not);
}
