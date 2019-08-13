/*Exercise 3.4 Floating conversion to int, exponenetial.c */

#include<stdio.h>
int main(void)
{
	float fp_value;
	
	printf("Please enter floating point value: ");
	scanf("%f", &fp_value);

	printf("fixed-point notation : %f \n", fp_value);
	printf("exponential notation : %e \n", fp_value);
	printf("p notation : %a \n", fp_value);

	return 0;	
}
