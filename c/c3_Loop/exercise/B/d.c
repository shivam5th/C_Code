/*Write a program to print all the ASCII values and their
equivalent characters using a while loop. The ASCII values
vary from 0 to 255.*/

#include <stdio.h> 
int main() 
{
	int number=0;
	
	while(number<=255)
	{
		printf("character = %c",number);
		number++;
	}
	return(0);
}

