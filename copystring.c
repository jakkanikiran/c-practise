#include<stdio.h>
#include<string.h>


int main(){
  char s1[100], s2[200];
  int i;


  printf("\n Enter the string :");
  gets(s1);

  i = 0;
  while (s1[i] != '\0') {
    	 s2[i] = s1[i];
	i++;
  }

	s2[i] = '\0';
	printf("\n copied string is %s", s2);

	return (0);
}
