/*Exercise 3.6 measure water mass in quarts*/

#include<stdio.h>
int main(void)
{
	long double massMolecule;
	double massQuarts;
	
	printf("Please enter water mass in quarts: ");
	scanf("%lf", &massQuarts);
	massMolecule = 980 * massQuarts/3e-23;
	printf("Your water has %Le molecules \n", massMolecule);

	return 0;
}
