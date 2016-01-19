#include<stdio.h>
#include<stdlib.h>


   int main() {
	int m=0,n=0;
	int i=0,j=0;
	int a[m][n];
	printf("enter the dimension of array\n");
	scanf("%d%d", &m,&n);


	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
		   a[i][j] = rand()%10;
		}
	}
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
		printf("%d",a[i][j]);
		}
		printf("\n");
	}
		return 0;
	}
