#include <stdio.h>
#include <string.h>

int main()
{
	char source[] = "Rajesh";
	char target[20];

	strcpy(target, source);
	
	printf("\nSource string = %s\n", source);
	printf("\ntarget string = %s\n", target);
}

xstrxpy(char *t, char *s)
{
	while(*s != '\0')
	{
		*t = *s;
		s++;
		t++;	
	}
	*t = '\0';
}
