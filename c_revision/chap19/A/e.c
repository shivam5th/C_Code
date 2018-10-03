#include <stdio.h>

int main()
{
	char ch;
	FILE *fp;
	
	fp =  fopen("fromcpy.txt", "r");

	while((ch = getc(fp)) != EOF)
		printf("%c", ch);

	fclose(fp);
	return 0;
}
