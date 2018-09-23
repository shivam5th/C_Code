#include <stdio.h>

int main()
{
	FILE *fp;
	char name[20] = "Ajay";
	int i;

	fp = fopen("fromcpy.txt", "r");

	for(i = 0; i <= 10; i++)
		fwrite(name, sizeof(name), 1, fp);
	fclose(fp);

	return 0;
}
