#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
 
 #define ENABLE_ALL_STEP_LOGGING (1)
 
char* getExtension(char FNAME[]) {
  char* s = FNAME;
  int n = strlen(s);
  char* suffix = s + n;

#if ENABLE_ALL_STEP_LOGGING
  printf("%s\n%s\n", s, suffix);
#endif // ENABLE_ALL_STEP_LOGGING

  while (0 < n && s[--n] != '.');
  if (s[n] == '.') {
    suffix = s + n + 1;
    s[n] = '\0';
  }

  //printf("%s\n%s\n", s, suffix);
  return suffix;
}

int main()
{
    // Number of elements which make up the association table.
    int N = 2;

    int Q = 2;
    char dot = '.';
    
    printf("Enter the no. of filenames to be analysed \n");
    scanf("%d", &Q);
    printf("no. of filenames to be analysed is %d \n", Q);

    /* 2D array declaration*/
    char association_table[N][20] = {"html text/html", "png image/png"};
    for (int i = 0; i < N; i++) {
	    // file extension
		  char EXT[11];
		  // MIME type.
		  char MT[51];
		  association_table[i][0] = EXT;
		  association_table[i][1] = MT;
      //scanf("%s%s", &association_table[i][0], &association_table[i][1]); fgetc(stdin);
    }
    /*This will print the table
    printf("The table consists of \n");
    for(int i = 0; i < N; i++)
    {
      for(int j = 0; j < 2; j++)
      {
        printf("%d ", **association_table[i][j]);
      }
      printf("\n");
    }
    */

    for (int i = 0; i < Q; i++) {
      // One file name per line.
        char FNAME[257];
        fgets(FNAME, 257, stdin);
		char *suffix = getExtension(FNAME);
		printf("suffix is %s\n", suffix);

		if (suffix != NULL) {
			int flag = 0;
			for (int i = 0; i < N; i++) {
                printf("checking for value in table %d \n ", association_table[i][0]);
				if ((strcmp(suffix, association_table[i][0]))== 0) {
					printf("yay \n");
					//printf("%c", association_table[i][1]);
					flag = 1;
					break;
				}
                else {
                    printf("nay \n");
                }
	        }

	        if(flag == 0) {					//pavan helped
		        printf("UNKNOWN\n");
            }
        }   
		else {
		// For each of the Q filenames, display on a line the corresponding MIME type. If there is no corresponding type, then display UNKNOWN.
		printf("UNKNOWN\n");
		}
	}

    return 0;
}
