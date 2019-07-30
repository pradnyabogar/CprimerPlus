#include <stdio.h>
int main (void)					/* a simple program		*/
{
	int num;					/* Define a variable called num */
	num = 1;					/* assign a value to num */
	printf("I am a simple ");	/* use of the printf() function */
	printf("computer.\n");
	printf("Value of num stored in memory is %d which is garbage value.\n, num");
	printf(" I dont't care if num = 1 \n");
								/* This is because compiler warning on line 8 of the code */
	
	static a;
	printf("Value of static 'a' with no type is %d \n", a);
								/* Compiler warning */
		
	static int b;
	printf("Value of static int 'b' is %d \n", b);
	
	static c;
	printf("Value of static 'c' with no type but with % f is %d \n", c);
								/* Compiler warning. %f was recognised even with space */
	return 0;
}	
