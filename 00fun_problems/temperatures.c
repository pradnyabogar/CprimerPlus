#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    // the number of temperatures to analyse
    printf("enter no. of temperatures \n");
    int n;
    scanf("%d", &n);
	int llimt = 10000;
	int hlimit = -273;
	int lowestTemp;
    for (int i = 0; i < n; i++) {
        // a temperature expressed as an integer ranging from -273 to 5526
        int t;
        scanf("%d", &t);
        if((t<llimit))
        {
            lowestTemp = t;
        }
    }

    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    printf("Lowest temperature is %d\n", lowestTemp);

    return 0;
}
