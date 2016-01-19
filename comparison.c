#include<stdio.h>

int main() {
int a,b,c,d;
printf("Enter any number to a,b,c");
scanf("%d%d%d,&a,&b,&c,&d");
if(a>b && a>c && a>d)
printf(" a is big");
else if (b>c && b>d)
printf("b is big");
else if (c>d)
printf("C is big");
else 
printf("D is big");
}
