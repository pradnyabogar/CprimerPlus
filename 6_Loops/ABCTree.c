/*
ABCDE christmas tree
 * 
 */

#include <stdio.h>

int main(void)
{
	int i;
	int j;
	char ch;
	int max = 6;
	
	
	for (i=0; i<5; i++)
	{
		printf(" ");
		for ( ch= ('A' + i); i<('A' + max); ch++)
		{
			printf("%c ", ch);
		}
		printf("\n ");
	}
	
	printf("\n ");
	return 0;
}

