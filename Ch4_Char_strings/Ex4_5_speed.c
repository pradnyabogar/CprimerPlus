//Exercise 5 - Print download speed in a certain pattern

#include<stdio.h>
int main(void)
{
	float speed;
	float fileSize, dTime;
	
	printf("Type your download speed: ");
	scanf("%f", &speed);
	printf("Type your file size: ");
	scanf("%f", &fileSize);
	dTime = fileSize/speed;
	printf("At download speed of %.2f Mbps, a file of %.2f Mb\n", speed, fileSize);
	printf("downloads in %.2f seconds\n", dTime);
	return 0;	
}
