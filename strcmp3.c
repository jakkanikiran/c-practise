#include<stdio.h>
#include<string.h>


   int main() {

	char a[2],b[6];
	int c;
	printf("enter the a value" );
	scanf("%s",&a);
	printf("enter the b value" );
	scanf("%s",&b);
	c=strcmp(a,b);
	if(c==0)
	printf("two strings are same");
	else
	printf("two strings are different");
	return 0;


}

