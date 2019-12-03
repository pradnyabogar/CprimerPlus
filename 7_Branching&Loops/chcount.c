/*Listing 7.36 chcount.c - use the logical AND operator */

#include<stdio.h>
#define PERIOD '.'
int main(void)
{
	char ch;
	

	while ((ch = getchar())!= PERIOD)
	{
	    if(ch != '"' && ch != '\'')
            ch++;
			
	}
	printf("There are %d non-square characters.\n", ch);
	
	return 0;
}
