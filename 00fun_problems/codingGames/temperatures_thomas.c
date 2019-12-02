//Coding games - Temperatures

#include<stdio.h>
int main(void)
{
	int temp;
	int n ; //no. of temperature input
	int lowest = 10000;
	int highest = -273;
	int i;
	
	printf("Enter no. of temperature data ");
	scanf("%d", &n);
	if (n>0)
	{
		for (i=0; i < n; i++)
		{
			//printf("Enter temperature ");
			scanf("%d", &temp);
			if (abs(temp) < abs(lowest))
			{
				lowest = temp;
			}
			else if (abs(temp) == abs(lowest))
			{
				if (temp > lowest)
				{
					lowest = temp;
				}
			}
		}
	}
	else
	{
		lowest = 0;
	}
	
	printf("The lowest temperature is %d\n", lowest);

	return 0;	
}

#define IS_NEW_VAL_CLOSER_TO_XERO( old, new ) abs(new) < abs(old) )
#define IS_NEW_VAL_SAME_BUT_POSITIVE( old, new) ((abs(new) == abs(old)) && (new > old))

int foo() 
{
		for (i=0; i < n; i++)
		{
			//printf("Enter temperature ");
			scanf("%d", &temp);
			
			if (
			    ( IS_NEW_VAL_CLOSER_TO_XERO(temp, lowest ) ||
			    ( IS_NEW_VAL_SAME_BUT_POSITIVE(temp, lowest) 
			)
			{
				
				lowest = temp;
			}
		}
