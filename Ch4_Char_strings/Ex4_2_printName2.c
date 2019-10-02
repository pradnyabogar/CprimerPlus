//Exercise 2 - Print name in a certain pattern

#include<stdio.h>
int main(void)
{
	char fname[20];
	int n, m;
	
	printf("Type your first name:");
	scanf("%s", fname);
	
	printf("\"%s\" \n", fname);
	printf("%20s \n", fname);
	printf("%-20s \n", fname);
	n = sizeof(fname);
	m = n+ 3;
	printf("%*s \n", m, fname);
	return 0;	
}
