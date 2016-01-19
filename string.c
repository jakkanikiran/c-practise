#include<stdio.h>
main() {
//	char name[4+1];
	char name[4+1];
	name[0] = 'J';

	name[0] = 'o';
	
	name[0] = 'h';

	name[0] = 'n';

	name[0] = '\n';

	printf("The name is %s ", name);
	printf("Part of the name is %s", &name[1]);

}



