//Exercise 1 - Print name in a certain pattern

#include<stdio.h>
int main(void)
{
	char fname[10], lname[10];

	
	printf("Type your first and last name:");
	scanf("%s%s", fname, lname);
	
	printf("%s %s\n", lname, fname);

	return 0;	
}
