#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int boxn = 0;
    int d = 0;
    int total = 0;
    printf("Enter no. of grains : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        
        boxn = pow(2, i);
        total = total + boxn;
        if (total < n){
            d = n - total;
        }
        else {
            break;
        }
        printf("\ni is %d\n", i+1);
        printf("boxi is %d\n", boxn);
        printf("total is %d\n", total);
        printf("d is %d\n", d);
    }
    printf("left over grains is %d\n", d);

}