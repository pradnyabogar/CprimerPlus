//boolean.c -- using a int instead of _Bool variable

#include<stdio.h>	

int main(void)
{
	int num = 0 ;	
	
	while (num <100)
	{
		num = num + 1;
		if (((num % 3) == 0) && ((num%5)!=0))
		{
			printf("%d fizz \n", num);
		}
		else if (((num%5)==0) && ((num%3)!=0))
		{
			printf("%d buzz \n", num);
		}
	
		else if (((num%5)==0) && ((num%3)==0))
		{
			printf("%d fizzbuzz \n", num);
		}
		else
		{
			printf("%d \n", num);
		}
	}
	printf("end \n");

	return 0;
}
