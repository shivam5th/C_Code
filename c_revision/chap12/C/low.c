#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

#define O_BINARY 00

int main()
{
	char buffer[512], source[128], target[128];
	int inhandle, outhandle, bytes;

	printf("\nEnter source file name\n");
	scanf("%s", source);
	inhandle = open(source, O_RDONLY | O_BINARY);

	if(inhandle == -1)
	{
		puts("Cannot open file");
		exit(1);	
	}

	printf("\nEnter target file name\n");
	scanf("%s", target);
	outhandle = open(target, O_CREAT | O_BINARY | O_WRONLY, S_IWRITE | S_IREAD);

	if(outhandle == -1)
	{
		puts("Cannot open file");	
		exit(2);
	}

	while(1)
	{
		bytes = read(inhandle, buffer, 512);

		if(bytes > 0)
			write(outhandle, buffer, bytes);
		else
			break;
	}
	close(inhandle);
	close(outhandle);

	return 0;
}
