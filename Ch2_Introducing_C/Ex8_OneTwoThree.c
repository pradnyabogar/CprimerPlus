//Exercise 1 - Print name in a certain pattern

#include<stdio.h>
void one_three(void);
void two(void);

int main(void)
{
	printf("Staring now...\n");
	one_three();
}
void one_three()
{
	printf("one\n");
	two();
	printf("three\n");
}

void two()
{
	printf("two\n");
}
