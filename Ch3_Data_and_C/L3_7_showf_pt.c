/*showf_pt.c - displays float value in teo ways */

#include<stdio.h>
int main(void)
{
	float aboat = 32000.0;	/* system with 32-bit int */
	double abet = 2.14e9;
	long double dip = 5.32e-5;
	
	printf("%f can be writteb %e\n",aboat, aboat);
	// Next line requires C99 or later complaince
	printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
	printf("%f can be written %e\n", abet, abet);
	printf("%Lf can be written %Le\n", dip, dip);
	
	return 0;
}
