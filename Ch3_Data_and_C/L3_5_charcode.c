/*Listing 3.5 charcode.c -Display code number for a character */

#include<stdio.h>
int main(void)
{
	char ch;
	
	printf("Please enter a character.\n");
	scanf("%c", &ch);						/* User inputs a character */
	printf("The code for %c is %d.\n", ch, ch);

	return 0;	
}
