/*FInd low temperatures */

#include<stdio.h>
int main(void)
{
	const int FREEZING = 0;
	float temp;
	int colddays = 0;
	int alldays = 0;
	
	printf("Enter list of daily temperatures\n");
	printf("Use CElsius and enter q to quit\n");
	while (scanf("%f", &temp)==1)
	{
		alldays++;
		if(temp < FREEZING)
			colddays++;
	}
	if (alldays!=0)
		printf("%d days total: %.1f%% were below freezing.\n", alldays, 100*(float)colddays / alldays);
		
		if(alldays == 0)
			printf("No data entered!\n");
	return 0;	
}
