//fathm_ft.c -- converts 2 fathoms to feet

#include<stdio.h>
int main(void)
{
	int feet, fathoms;
				/*space to separate declaration and action section */
	fathoms = 2;
	feet = 6 * fathoms;
	printf("There is %d feet in %d fathoms!\n", feet, fathoms);
	printf("Yes, I said %d feet!\n", 6*fathoms);
	
	return 0;	
}
