#include<stdio.h>


 int main()  {
	int a, n, b, c;
printf("enter any number");
scanf("%d",&n);
a=n%10;
n=n/10;
b=n%10;
n=n/10;
c=n%10;
n=n/10;

printf("%d%d%d", a, b, c);


}
