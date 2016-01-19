#include<stdio.h>
#include<string.h>

//#include<conio.h>
int find_length;
  int main() {
//	int find_length;
	char *input = "This is a string";
        find_length(input);
	return 0;
}

void find_length(char *input){
	
	printf("%s", input);
	int length = 0;
	while(input[length]!='\0');
	  {
		length++;
		printf("i",length);
	}
}
