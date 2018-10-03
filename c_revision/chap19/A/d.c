#include <stdio.h>

int main()
{
	FILE *fp;
	char str[80];

	fp = fopen("fromcpy.txt", "r");
	
	while(fgets(str, 80, fp) != EOF)
		fputs(str, fp);

	fclose(fp);

	return 0;
}
