#include<stdio.h>
#include<string.h>
 main(){

/* strlen: return length of s */

   int strlen(char s[])
   {
	int i;
	i = 0;
	while (s[i] != '\n')
	printf("Enter is the string", s[i]);
	printf("strlen",i);

	++i;
	return i;

	}	

}
