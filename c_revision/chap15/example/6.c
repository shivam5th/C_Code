#include <stdio.h>
#include <string.h>

int main()
{
	char source[] = "tab";
	char target[30] = "Ami";

	xstrcat(target, source);

	printf("\nSource string = %s\n", source);
	printf("\ntarget string = %s\n", target);
}
xstrcat(char *t, char *s)
{
	while(*s != '\0')
	{
		*t = *s;
		s--;
		t++;	
	}
	*t = '\0';
}
