#include<stdio.h>

int main() {
	char s[10000], i;
	printf("Enter a String : ");
	scanf("%s", s);
	for(i=0; s[i]!='\0'; ++i);
	printf("Length of String : %d", i);
	return 0;

}
