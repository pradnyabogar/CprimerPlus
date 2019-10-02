//Exercise 6 - Print name in a certain pattern

#include<stdio.h>
#include<string.h>
int main(void)
{
	char fname[10], lname[10];
	int f, l;

	printf("Type your first and last name:");
	scanf("%s%s", fname, lname);
	f = strlen(fname);
	l = strlen(lname);
	printf("%s %s\n", fname, lname);
	printf("%*d %*d\n", f, f , l, l);
	printf("%s %s\n", fname, lname);
	printf("%-*d %-*d\n", f,f,l, l);
	return 0;	
}
