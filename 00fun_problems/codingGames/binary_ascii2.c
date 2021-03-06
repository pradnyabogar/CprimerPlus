//binary to ascii
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>
#define MAX 40

int main()
{
    char bin_num[MAX];
    char ascii_char[MAX];
    int i, j;
    int max_bin_digits;
    int num_ascii_char = 0;
    int total = 0;
    int x = 0;
    bool isValidInput = true;
    
    printf("Enter your binary number\n");
    fgets(bin_num, MAX, stdin);
    
    //fix this part
    max_bin_digits = strlen(bin_num) - 1;

    if ('\0' == bin_num[x])
    {
        printf("Your ASCII character is \" \"\n");
    }
    else
    {   
        while ((x < max_bin_digits) && (true == isValidInput))
        {
            if (('0' != bin_num[x]) && ('1' != bin_num[x]))
            {
                isValidInput = false;
            }
            x++; 
        }

        if(false == isValidInput)
        {
            printf("Invalid Input!\n");
        }
        else
        {
            printf("Valid Input!\n");
        }
    }

    if (isValidInput)
    {
        printf("Your binary number length is %d \n", max_bin_digits);
        if ((max_bin_digits % 8) != 0)
        {
            num_ascii_char = (max_bin_digits/8) + 1;
        }
        else
        {
            num_ascii_char = (max_bin_digits/8);
        }
        printf("No. of ASCII characters is %d.\n", num_ascii_char);

        for (j = 1; j <= num_ascii_char; j ++)
        {
            for(i = 0; i < 8; i++)
            {
                total += bin_num[i] * pow(2,i);
            }
            printf("ASCII character no. %d is %c\n", j, total);
            ascii_char[j] = (char) total;
        }
        printf("The ascii chars are %s.\n", ascii_char);
    }
}