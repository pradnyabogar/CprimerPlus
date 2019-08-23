/*Listing 4.4 pizza.c -- use defined constants in a pizza context*/

#include <stdio.h>
#define PI 3.14159
int main(void)
{
	float area, circum, radius;
	
	printf("'What's the radius of your pizza?\n");
	scanf("%f", &radius);
	area = PI * radius * radius;
	circum = 2.0 * PI * radius;
	printf("Your basic pizza parameters are as follows:\n");
	printf("circumference = %1.2f, area = %1.2f\n", circum, area);
	return 0;
}
