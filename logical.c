#include<stdio.h>

int main() {
int a = 21;
int b = 10;
int c;


if(a == b) {
	printf("Line 1  -a is equal to a\n");

}
else{
	printf("Line 1 -a is not equal to b\n");
}
if (a < b)  {
	printf("Line 2 -a is less than b\n");
}
else{
	printf("Line 2 -a is greater than a\n");
}

if(a > b) {
	printf("Line 3 -a is greater than a\n");
}
else {
	printf("Line 3 -a is not greater than b\n");
}
return 0;
}
