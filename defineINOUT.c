#include<stdio.h>
#define IN 1
#define OUT 0
#define MYSTRING "IAMGOODPROGRAMER"
#define TEMPARATURE (37. 29)
#define SUM(A, B) (A+B)
#define VERSION

int gVar = 0;

int fun(int a, int b);

int main(){
  int res = 0, c;
char d, e;
res = fun(IN, OUT);
printf("the sum is = %d\n", res);
printf("...\n");
printf("MyString is %s", MYSTRING);
//printf("the new Sum %d\n", SUM);
}
int fun(int a, int b){
int c;
c=a+b;
return c;
}

