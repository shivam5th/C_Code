#include <stdio.h>

void main()
{
	int fp;
	fp = fopen("IMG_0047.JPG", "r");

	if(fp == -1)
		puts("Cannot open file\n");
	else
		close(fp);
}
