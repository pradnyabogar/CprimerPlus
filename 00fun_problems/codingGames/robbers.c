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
    int R;
    scanf("%d", &R);
    int V;
    double total_no_combo=0;
    scanf("%d", &V);
    for (int i = 0; i < V; i++) {
        uint C;
        uint N;
        scanf("%d%d", &C, &N);
        //total combination by permutations formula
        total_no_combo=((2^N)*(5^C));
    }

    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    //fprintf(stderr, "%d\n",total_no_combo );
    printf("%f\n",total_no_combo );
    //printf("1\n");

    return 0;
}
