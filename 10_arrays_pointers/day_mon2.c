//day_mon1.c -- prints the days for each month
#include <stdio.h>
int main(void)
{
    const int days[] = {31,28,31,30,31,30,31,31,30,31};

    int index;
    for (index = 0; index < sizeof days / sizeof days[0]; index++)
        printf("Month %d has %2d days.\n", index +1,days[index]);

    return 0;
}