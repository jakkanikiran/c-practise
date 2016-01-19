#include<stdio.h>

#define MAXLINE 1000


int max;

char line[MAXLINE];
char longest[MAXLINE];

int getline(void);
void copy(void);

main(){

	int len;
	extern int max;
	extern char longest[];

	max = 0;
	while ((len = getline()) > 0 )
		if (len > max) {
			max = len;
			copy();
	}


int getline(void){
	int c, i;
	extern char line[];

	for (i = 0; i < MAXLINE-1
	   && (c=getchar()) != EOF
