//evens.c empty array assignment
#include <stdio.h>
#define SIZE 10
int main(void)
{
    int counter, evens[SIZE];

    printf("%2s%14s\n", "counter", "evens[i]");
    for(counter = 0; counter < SIZE; counter++){

        evens[counter] = 2 * counter;
        //printf("%2d\n", evens[counter]);
        printf("%2d%14d\n", counter, evens[counter]);
    }
    return 0;
}