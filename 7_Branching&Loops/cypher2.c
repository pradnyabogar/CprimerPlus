/*Listing 7.3 cypher2.c - alters input, using ctype */

#include<stdio.h>
#include <ctype.h>				//for isalpha()
int main(void)
{
	char ch;
	

	while ((ch = getchar())!='\n')
	{
	    if(isalpha(ch))
			putchar(ch+1);		//change other char
	    else
			putchar(ch);		//char unchanged
	}
	putchar(ch);				//print the newline
	
	return 0;
}
