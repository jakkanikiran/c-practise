#include<stdio.h>


int main() {
	int a, b, temp;
//	clrscr();
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	temp = a;
	a = b;
	b = temp;
	printf("a=%d \n b=%d \n", a, b);
	return 0;	

}
