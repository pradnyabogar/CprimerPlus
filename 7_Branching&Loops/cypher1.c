/*Listing 7.2 cypher1.c - alters input */

#include<stdio.h>
#define SPACE ''				//thats space
int main(void)
{
	char ch;
	
	ch = getchar();
	while (ch!='\n')
	{
	    if(ch == SPACE)
			putchar(ch);		//char unchanged
	    else
			putchar(ch+1);		//change other char
		ch = getchar();
	}
	putchar(ch);				//print the newline
	
	return 0;
}
