/*Exercise 3.2 ascii_char.c -- displays char for an ascii code */

#include<stdio.h>
int main(void)
{
	int ascii_code;
	
	printf("Please enter your ASCII code: ");
	scanf("%d", &ascii_code);

	printf("Your character of the ASCII code is : %c \n", ascii_code);

	return 0;	
}
