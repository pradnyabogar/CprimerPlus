/*Listing 4.17 skips2.c -- skips over first two integers of input */

#include<stdio.h>
int main(void)
{
	int n;
	
	printf("Please enter 3 integers:\n");
	scanf("%*d %*d %d", &n);
	printf("The last integer was %d\n", n);
	
	return 0;	
}
