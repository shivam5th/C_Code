#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fp;

	fp = open("fromcpy.txt", O_RDONLY);

	if(fp == -1)
		puts("Cannot open a file\n");
	else
		close(fp);
	return 0;
}
