#include <stdio.h>

int main()
{
	char fname[] = "IMG_0047.JPG";
	FILE *fp;

	fp = fopen(fname, "rb");

	if(fp == NULL)
		printf("Unable to open file...\n");
	
	return 0;
}
