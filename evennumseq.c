
/* write a program to create an array with even nos sequentially */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

  int main() {

	int i=0,j=0;
	int *a;
	printf("enter the no of elements required to print\n");
	scanf("%d", &i);

	a = (int*)malloc(sizeof(int)*i);
	/* void * memset(void *ptr, intvalues, size_t num); */
     
        

	printf("printing whatever available\n");
	for(j=0; j<i; j++){
	printf("[%d]", a[j]);
	}

	for(j=0; j<i; j++) {
	a[j] = j*2;
	}
	printf("\n Even nos printing\n");
	for(j=0; j<i; j++)
	{

	printf("[%d]", a[j]);

	}
	return 0;
   }
