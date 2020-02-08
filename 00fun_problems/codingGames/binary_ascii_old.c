//binary to ascii
#include<stdio.h>

int main()
{
    char bin_num[40];
    int max_bin_digits = strlen(bin_num);
    int num_ascii_char = 1;
    int total = 0;
    
    printf("Enter your binary number\n");
    scanf("%c", bin_num);
    while( num_ascii_char < max_bin_digits/8)
    {
        for (int i = 0; i < 8; i++){
            if (isdigit(bin_num[i])){
                if ((0 == bin_num[i]) || (1 == bin_num[i]))
                    total += bin_num[i]*pow(2,i);
                }
                else{
                bin_num >> 8;
                }
            else{
            printf("Please enter a binary number");
            }
        }
        
    }
    printf("ASCII character is %c\n", total);
}