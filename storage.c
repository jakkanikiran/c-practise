#include<stdio.h>
#include<limits.h>

int main()  {
printf("Storage size for int : %d \n", sizeof(int));
printf("Storage size for char : %d \n", sizeof(char));
printf("Storage size for long int : %d \n", sizeof(long int));
printf("Storage size for long double: %d \n", sizeof(long double));
printf("Storage size for float : %d \n", sizeof(float));
printf("Storage size for double : %d \n", sizeof(double));


printf("Storage size for naresh:%d\n", sizeof("Naresh"));
return 0;
}

