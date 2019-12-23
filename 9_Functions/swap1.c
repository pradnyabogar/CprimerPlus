/* swap.c - first attempt at a swappong function */
#include <stdio.h>
int interchange(int u, int v);         /* declare a function */

int main(void)
{
    int x = 5 , y = 10;
    
    printf("Originally x = %d and y = %d.\n", x, y);
    x = interchange(x, y);
    printf("After interchange x = %d and y = %d.\n", x, y);

    return 0;
}

int interchange(int a, int b){     /* define function */
    int temp;
    printf("Originally a = %d and b = %d.\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After interchange a = %d and b = %d.\n", a, b);

    return(a);
}