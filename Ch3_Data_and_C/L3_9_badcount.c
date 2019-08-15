/*badcount.c - incorrect argument counts */

#include<stdio.h>
int main(void)
{
	int n = 4;
	int m = 5;
	float f = 7.0f;
	float g = 8.0f;
	
	printf("%d\n", n, m);			//Too many arguements
	printf("%d %d %d\n", n);		//Too few arguements
	printf("%d %d\n", f, g);		//wrong kind of values
	
	/*These all printf will give compiler warnings */

	return 0;	
}
