#include<stdio.h>
int main() {
int i=0;
char arr[]={'a','b', 'c','\0','d', 'e','f'};
//char*str="srikrishna";
//printf("%s\n", char*str);

printf("arr string is : %s\n", arr);
for(i=0; i<7; i++)
printf("character at index[%d] is %c \n", i, arr[i]);
return 0;

}
