/* nogood.c - program with errors */

#include<stdio.h>
int main(void)
{
	int toes, toes_twice, toes_squared;
	
	toes = 10;
	toes_twice = 2 * toes;
	toes_squared = toes * toes;
	printf("toes = %i, toes_twice = %i, toes_squared = %i\n", 
						toes, toes_twice, toes_squared);
	
	return 0;
}
