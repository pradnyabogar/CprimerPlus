/*Listing 4.15 input.c -- when to use & */

#include<stdio.h>
int main(void)
{
	int age; 				//variable
	float assests; 			//variable
	char pet[30]; 			//string
	
	printf("Enter your age, assests and favorite pet.\n");
	scanf("%d %f", &age, &assests); 			// use the & here
	scanf("%s", pet);
	printf("%d $%.2f %s\n", age, assests, pet);
	
	return 0;	
}
