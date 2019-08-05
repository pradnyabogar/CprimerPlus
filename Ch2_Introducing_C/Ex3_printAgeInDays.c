//Exercise 3 - Print your age in days

#include<stdio.h>
int main(void)
{
	int age_in_yrs, age_in_days;
	
	printf("Type your age in years: ");
	scanf("%i", &age_in_yrs);		//accepts alphabets. This is a bug
	
	
	age_in_days = 365 * age_in_yrs;
	
	printf("Your age in days is %i \n",age_in_days);
	return 0;	
}
