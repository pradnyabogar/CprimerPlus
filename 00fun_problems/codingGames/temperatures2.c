//Coding games - Temperatures

#include<stdio.h>
int main(void)
{
	int temp;
	int n ; //no. of temperature input
	int lowest = (n== 0)? 0: 10000;
	int highest = -273;
	int i;
	
	//printf("Enter no. of temperature data ");
	scanf("%d", &n);
	if (n>0)
	{
		for (i=0; i < n; i++)
		{
			//printf("Enter temperature ");
			scanf("%d", &temp);
			if ((abs(temp) < abs(lowest))|| ((abs(temp) == abs(lowest))&& (temp > lowest)))
			{
				lowest = temp;
			}
		}
	}

	printf("The lowest temperature is %d\n", lowest);

	return 0;	
}
