//Coding games - Temperatures

#include<stdio.h>
int main(void)
{
	int temp;
	int max = 10; //no. of temperature input
	int lowest = 10000;
	int i;
	for (i=0; i<max; i++)
	{
		printf("Enter temperature ");
		scanf("%d", &temp);
		if (abs(temp) < lowest)
		{
			lowest= temp;
		}
	}
	
	printf("The lowest temperature is %d\n", lowest);

	return 0;	
}

