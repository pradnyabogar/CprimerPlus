//Exercise 1 - Print name in a certain pattern

#include<stdio.h>
void smile(void);

int main(void)
{
	int i, j, n;
	n= 3;
	
	for (j = 0; j < 3; j++)
	{
		for (i = n; i > 0; i--)
		{
			smile();
		}
		printf("\n");
		n--;
	}
return 0;
}
void smile()
{
	printf("Smile!");
}
