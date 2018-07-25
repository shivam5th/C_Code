#include<stdio.h>
int main()
{
	int value, dig1, dig2, dig3, dig4, dig5, temp;
	printf("Enter a five digit number: \n");
	scanf("%d", &value);
	temp = value;
	dig1 = value % 10;
	value = value / 10;
	dig2 = value % 10;
	value = value / 10;
	dig3 = value % 10;
	value = value / 10;
	dig4 = value % 10;
	value = value / 10;
	dig5 = value % 10;
	value = value /10;

	dig1 = ((dig1 + 1) % 10);
	dig2 = ((dig2 + 1) % 10);
	dig3 = ((dig3 + 1) % 10);
	dig4 = ((dig4 + 1) % 10);
	dig5 = ((dig5 + 1) % 10);

	printf("The answer is : %d%d%d%d%d\n\n", dig5, dig4, dig3, dig2, dig1);
}
