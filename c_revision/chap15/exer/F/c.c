#include <stdio.h>
#include <string.h>

char *reverse(char *s)
{
	size_t n = strlen(s);
	
	for(size_t i = 0; i < n/2; i++) {
		char c = s[i];
		s[i] = s[n-i-1];
		s[n-i-1] = c;
	}
	return s;
}

int main(void)
{
	char s[][32] = {
		"To err is human...",
		"But to really mess things up...",
		"One needs to know C!!"
	};
	const size_t N = sizeof(s) / sizeof(*s);
	
	for(size_t i = 0; i < N; i++)
		puts(s[i]);
	
	printf("\n");
	for(size_t i = 0; i < N; i++)
		puts(reverse(s[i]));
	
	return 0;
}
