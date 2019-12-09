#include <stdio.h>
#include <string.h>

int main() {
    int matchBack = strcmp("abc","abc");
    int noMatchBack = strcmp("ab","cdef");

    printf( "match:%d no match:%d", matchBack, noMatchBack);

    return 0;
}
