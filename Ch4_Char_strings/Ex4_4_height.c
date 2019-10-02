//Exercise 4 - Print your height in a certain pattern

#include<stdio.h>
int main(void)
{
	float inch;
	float feet;
	
	printf("Type your height in inches: ");
	scanf("%f", &inch);
	feet = inch/12;
	printf("Your height is %.3f\n", feet);

	return 0;	
}
