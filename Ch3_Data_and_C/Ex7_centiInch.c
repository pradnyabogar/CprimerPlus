/*Exercise 3.5 request age in seconds*/

#include<stdio.h>
int main(void)
{
	int age;
	long double age_in_sec;
	
	printf("Please enter your age in years: ");
	scanf("%d", &age);
	age_in_sec = 3.156e7 * age;
	printf("Your age in seconds is %Le \n", age_in_sec);

	return 0;
}
