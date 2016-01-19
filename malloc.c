#include<stdio.h>
#include<stdlib.h>

	 main() 
 	{	
	int *ptr,n,i;
	`printf("enter the no of elements: \n");`
	`scanf("%d",&n);`
	`ptr = (int*)malloc(n*sizeof(int));`
	`printf("enter array elemts :\n");`
	`for(i=0;i<n;i++);`
	{
	 ` scanf("%d\n",&ptr[i]);`
}	
	`for(i=0;i<n;i++)` 
        {
	 `printf(" ptr[%d] is %d\n", i, ptr[i]);`
	}
//	return 0;
}

