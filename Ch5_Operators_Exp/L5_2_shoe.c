/*5.2 shoes.c -- converts a shoe size to inches */

#include<stdio.h>
#include<string.h>				// for strlen() prototype
# define ADJUST 7.31			

int main()
{
	const double SCALE = 0.333;
	double shoe, foot;
	
	shoe = 3.0;
	printf("Shoe size (men's)    foot length\n");
	while (shoe < 18.5)
	{
		foot = SCALE * shoe + ADJUST;
		printf("%10.1f %15.2f inches\n",shoe, foot);
		shoe = shoe + 1.0;
	}
	printf("If shoe fits, wear it.\n");
	
	return 0;	
}
