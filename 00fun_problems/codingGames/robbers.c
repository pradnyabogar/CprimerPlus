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
    printf("Enter total no. of robbers:\n");
    scanf("%d", &R);
    int V;
    double total_no_combo = 0;
    int total = 0;
    int highest = 0;
    printf("Enter total no. of vaults:\n");
    scanf("%d", &V);
    for (int i = 0; i < R; i++)
        for (int j = 0; j < V; j++) {
            int C;
            int N;
            printf("Enter no. of char and number char in password \n");
            printf("for robber %d for vault %d \n", i, j);
            scanf("%d%d", &C, &N);

            //total combination by permutations formula
            total_no_combo = ((2^N)*(5^C));
            if (highest < total_no_combo)
            {
                highest = total_no_combo;
            }
            total = total + highest;
        }

    
    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    //fprintf(stderr, "%d\n",total_no_combo );
    printf("%d\n",total);
    //printf("1\n");

    return 0;
}
