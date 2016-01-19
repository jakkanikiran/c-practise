#include<stdio.h>
#include<stdlib.h>



    int main()  {
	
	struct luggage
	{
	int people;
	int kgs;
	int event;
	};

	struct luggage b[22];
	int i;
	

	for(i = 0; i <=2; i++)
	{
	printf("Enter the people, event and kgs");
	scanf("%d%d%d", &b[i].people, &b[i].kgs, &b[i].event);
	}

	for(i = 0; i <= 2; i++)
	printf("%d%d%d\n", b[i].people,b[i].kgs,b[i].event);

	return 0;

	}

	
