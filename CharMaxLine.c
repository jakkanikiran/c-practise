#include <stdio.h>
#include <unistd.h>
#define MAXLINE 1000  /* maximum input line size */


int getlines(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line  */

main(){	

	int len;		/* CURRENT LINE LENGTH */
	int max; 		/* MAXIMUM LENGTH SEEN SO FAR */
	char line[MAXLINE];	/* CURRENT INPUT LINE */
	char longest[MAXLINE];	/* LONGEST LINE SAVED HERE */
	

	max = 0;
	while ((len = getlines(line, MAXLINE)) > 0)
		if (len > max){
		   max = len;
		   copy(longest, line);
		}
	if (max > 0)   /*there was a line */
		printf("%s", longest);
	return 0;
	}
/* getlines : read a line into s, return length */


int getlines(char s[], int lim){
	int c, i;
	
	for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
	   s[i] = c;
	   ++i;
	}
	s[i] = '\0';
	return i;
    }

/* copy: copy 'from' int  'to'; assume to is big enough */


void copy(char to[], char from[]) {
  int i;

  i = 0;
  while (( to[i] = from[i]) != '\0')
    ++i;
}

