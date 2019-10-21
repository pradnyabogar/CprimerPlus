//Exercise 1 - Print name in a certain pattern

#include<stdio.h>
int main(void)
{
	char fname[10], lname[10];

	//fname = Gustav;
	//lname = Mahler;
	
	//printf("Type your first and last name:");
	//scanf("%s %s", fname, lname);
	fname[0] = 'a';
	fname[1] = 0;
	lname[0] = 'b';
	lname[1] = 0;
	//you can use strlen to find if whitespace was considered
	printf("%s %s\n", fname, lname);
	printf("%s \n%s\n", fname, lname);
	printf("%s ", fname);
	printf("%s\n",lname);

	return 0;	
}
