#include<stdio.h>

int main() {
	int age;
	printf("Enter the age");
	scanf("%d",&age);

	if(age>=1 && age<=18)
	printf("A minor\n");

	else if (age>=19 && age <=40)
	printf(" A major\n");

	else if(age >=41 && age <=120)
	printf("An Adult\n"\n);

	else
	printf("Invalid age entered\n");
}
