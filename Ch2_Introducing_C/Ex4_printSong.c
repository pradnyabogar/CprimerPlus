//Exercise 1 - Print name in a certain pattern

#include<stdio.h>
void jolly(void);
void deny(void);

int main(void)
{
	int i;
	
	for (i = 0; i < 3; i++)
	{
		jolly();
	}
	deny();	
}
void jolly()
{
	printf("For he's a jolly good fellow\n");
}

void deny()
{
	printf("which nobody can deny\n");
}
