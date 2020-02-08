//binary to ascii
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char bin_num[40];
    int i;
    int max_bin_digits;
    //int num_ascii_char = 1;
    //int total = 0;
    
    printf("Enter your binary number\n");
    scanf("%c", bin_num);
    max_bin_digits = strlen(bin_num);
    printf("your binary number length is %d \n", max_bin_digits);
    for(i = 1; i <= max_bin_digits; i++){
        if ('\0' == bin_num[i]) {
            printf("Your ASCII character is \" \"\n");
        }
        else if((isalnum(bin_num[i])) && (bin_num[i] != (0 || 1))
            ||(!isalnum(bin_num[i]))){
            printf("This is not binary number \n");
        }
    }
}