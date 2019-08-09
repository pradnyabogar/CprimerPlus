/*Listing 3.2 print1.c -- prints 100 in decimal, octal and hex */

#include<stdio.h>
int main(void)
{
	int x = 100;
	int two = 2;
	
	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
	printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
	
	return 0;	
}
