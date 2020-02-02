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
    int n;
    int h = 0;
    int d = 0;
    int d1 = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int v;
        
        scanf("%d", &v);
        if (v > h){
            h = v;
        }
        else {
            d1 = v - h;
            if (d1 < d ){
                d = d1;
            }
        }
    }
    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    //printf("answer d = %d\n", d);
    printf("%d\n", d);
    return 0;
}