#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define TRUE 1
#define FALSE 0
int main() {
int c;
//printf("return value of ((c = getchar()) != EOF) is %d \n", ((c = getchar()) != EOF));

printf("%d\n", (30 != 30));
printf("true = %d\n", TRUE);
printf("false = %d\n", FALSE);
printf("EOF = %d\n", EOF);
return 0;
}
