#include<stdio.h>
//double rates[5] = {88.99, 100.12, 59.45, 183, 340.5};
//double locked[4] = {0.08, 0.75, 0.0725, 0.07};
//const double *pc = rates;
//double * pc;
//const int a = 5;
//pc = locked;
//int * pc = a;

void main(){
    //const double locked[4] = {0.08, 0.75, 0.0725, 0.07};
    double rates[5] = {88.99, 100.12, 59.45, 183, 340.5};
    const double * const pc = rates;
    //pc = locked;
    printf("%p \n", pc);
}