/*Listing 7.7 wordcnt.c count char, words, lines*/

#include<stdio.h>
#include<ctype.h>
#include <stdbool.h>
#define STOP '|'
int main(void)
{
	char c;
	char prev;
	long n_chars = 0L;
    int n_line = 0;
    int n_word = 0;
    int p_line = 0;
    bool inword = false;
	
	printf("please enter text for analysis(| to terminate)\n");
	prev = '\n';
    	
	while((c = getchar())!= STOP)
	{
		if('\n' == c)
            n_line++;
        
        if(!isspace(c) && !inword){
            inword = true;
            n_word++;
        }

        if(isspace(c) && inword){
            inword = false;
            prev = c;
        }

    if (prev != '\n')
        p_line = 1;

    printf("characters = %ld, words = %d, lines = %d, ",
            n_chars, n_word, n_line);
			printf("partial lines = %d\n", p_line);

	}

	return 0;	
}
