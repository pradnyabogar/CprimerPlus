/* swap3.c - using pointers at a swappong function */
#include <stdio.h>
void interchange(int *u, int *v);         /* declare a function */

int main(void)
{
    int x = 5 , y = 10;
    
    printf("Originally x = %d and y = %d.\n", x, y);
    interchange(&x, &y);
    printf("After interchange x = %d and y = %d.\n", x, y);

    return 0;
}

void interchange(int *a, int *b){     /* define function */
    int temp;
    printf("Originally a = %p and b = %p.\n", &a, &b);
    temp = *a;
    *a = *b;
    *b = temp;
    printf("After interchange a = %p and b = %p.\n", &a, &b);

    //return(a);
}