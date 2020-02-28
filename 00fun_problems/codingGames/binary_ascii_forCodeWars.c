//binary to ascii
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>
#define MAX 40

char *binary_to_string(const char *binary)
{
    char bin_num[] = binary;
    char ascii_char[MAX];
    int i, j;
    int max_bin_digits;
    int num_ascii_char = 0;
    int total = 0;
    int x = 0;
    bool isValidInput = true;
    
    //printf("Enter your binary number\n");
    //fgets(bin_num, MAX, stdin);
    
    //fix this part
    max_bin_digits = strlen(bin_num) - 1;

    if ('\0' == bin_num[x])
    {
        //printf("Your ASCII character is \" \"\n");
        return "";
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
    }

    if (isValidInput)
    {
        if ((max_bin_digits % 8) != 0)
        {
            num_ascii_char = (max_bin_digits/8) + 1;
        }
        else
        {
            num_ascii_char = (max_bin_digits/8);
        }

        for (j = 1; j <= num_ascii_char; j ++)
        {
            for(i = 0; i < 8; i++)
            {
                total += bin_num[i] * pow(2,i);
            }
        ascii_char[j] = (char) total;
        }
    }
    return ascii_char;
}