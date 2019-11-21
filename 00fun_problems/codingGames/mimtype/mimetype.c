#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
 
 
 
char* getExtension(char FNAME[]) {
  char* s = FNAME;
  int n = strlen(s);
  char* suffix = s + n;

  //printf("%s\n%s\n", s, suffix);

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
    int N;
    scanf("%d", &N);
    // Number Q of file names to be analyzed.
    int Q;
    char dot = '.'; 
    scanf("%d", &Q);
    /* 2D array declaration*/
    char association_table[N][2];
    for (int i = 0; i < N; i++) {
	
		// file extension
		char EXT[11];
		// MIME type.
		char MT[51];
		scanf("%s%s", EXT, MT); fgetc(stdin);
		association_table[i][0] = EXT;
		association_table[i][1] = MT;
    }
    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    for (int i = 0; i < Q; i++) {
        // One file name per line.
        char FNAME[257];
        fgets(FNAME, 257, stdin);

		char* suffix = getExtension(FNAME);
		printf("suffix is %s\n", suffix);
		if (suffix != NULL) {
			int flag = 0;
			for (int i = 0; i < N; i++) {
				if (suffix == association_table[i][0]) {
					printf("yay \n");
					//printf("%c", association_table[i][1]);
					flag=1;
					break;
				}
			}
			if(flag == 0) {					//pavan helped
				printf("UNKNOWN\n");
			}
		}
		else{
		// For each of the Q filenames, display on a line the corresponding MIME type. If there is no corresponding type, then display UNKNOWN.
		printf("UNKNOWN\n");
		}
	}

    return 0;
}
