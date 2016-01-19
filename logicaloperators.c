#include<stdio.h>
  

int main()  {
	int a = 5;
	int b = 20;
	int c;

	if (a && b)  {
	printf("Line 1 -Condition is true \n");
}
	if(a || b)  {
	printf("Line 2 - Condition is true\n");
}
 	/* Lets change the values of a and b */
	a = 0;
	b = 10;
	if( a && b)  {
	    printf("Line 3 -condition is true\n");
}
	else {
	    printf("Line 3 -Condition is false\n");
}

	if( !(a && b) )   {
	     printf("Line 4 -Condition is true\n");

	}
}
