/*Write a program to print out all Armstrong numbers between
1 and 500. If sum of cubes of each digit of the number is
equal to the number itself, then the number is called an
Armstrong number.*/

#include<stdio.h>
int main()
{
   	int number=1, temp, digit1, digit2, digit3;
 
    	printf("Printing all Armstrong numbers between 1 and 500:\n\n");
 
    	while (number <= 500)
    	{
        	digit1 = number%10;
        	digit2 = (number/10)%10;
        	digit3 = (number%1000)/100;
 
        	temp = (digit1*digit1*digit1) + (digit2*digit2*digit2) + (digit3*digit3*digit3);
 
        	if(temp == number)
        	{
            		printf("\nAmstrong Number:%d", number);
        	}
		number++;
    	}
}
