//Exercise 3 - Print float in a certain pattern

#include<stdio.h>
int main(void)
{
	float num;

	
	printf("Type your num: ");
	scanf("%f", &num);
	
	printf("decimal part is %.2f\n", num);
	printf("expo part is %e\n", num);
	return 0;	
}
