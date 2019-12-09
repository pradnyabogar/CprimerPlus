// // Random incomplete example // //

/* improper logic */
//odds.c nonvalid array assignment
#include <stdio.h>
#define SIZE 5
int main(void)
{
    int oxen[SIZE] = {5, 3, 2, 8};
    int yaks[SIZE];

    yaks[SIZE] = oxen[SIZE];      

    //printf("%2s%14s%14s\n", "counter", "oxen[i]", "yaks[i]");
    for(int counter = 0; counter < SIZE; counter++){

        //printf("%2d\n", yaks[counter]);
        printf("%2d\n", oxen[counter]);
        //printf("%2d%14d%14d\n", counter, oxen[counter], yaks[counter]);
    }
    return 0;
}