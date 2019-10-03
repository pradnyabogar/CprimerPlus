/*5.3 golf.c -- golf tournament score card */


#include<stdio.h>

int main()
{
	const double SCALE = 0.333;
	int jane, tarzan, cheeta;
	cheeta = tarzan = jane = 68;
	printf("		   cheeta   tarzan   jane\n");
	printf("First round score %4d %8d %8d\n",cheeta, tarzan, jane);
	
	return 0;	
}
