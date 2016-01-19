/*#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() { 
  char str[90];
  clrscr();
  printf("Enter a String");
  scanf("%[^\n]", &str);
  printf("%s", str);
  getch();
  return 0;
}
*/




#include<stdio.h>
 

  int main() {	
	char num1[255];
	int num10[255];
	int i;
	int j;


 	fscanf(stdin, "%s", num1);
	j = strlen(num1);


	for(i = 0; i < j; i++) {
	num1[i] = num10[i];
	printf("%d", num10[i]);
	}

}
