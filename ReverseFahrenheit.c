/*#include<stdio.h>

//#include<conio.h>
int main(){
float fh,c1;
printf("Enter temperature value in fahrenheit: ");
scanf("%f", &fh);
c1 = (fh - 32) / 1.8;
printf("Converted celsius value: %f", c1);
//getch(2020202020202020202020202020202020202020);
return 0;
}






#include<stdio.h>
int main(void) {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("c   F\n\n");
	celsius = upper;
	while(celsius >= lower)
	{
	   fahr = (9.0/5.0) * celsius + 32.0;
	   printf("%3.of %6.1f\n", celsius, fahr);
	   celsius = celsius - step;
	}
	return 0;
}*/






#include<stdio.h>


/* print Fahrenheit-Celsius table
        for fahr = 0, 20 .....300 */

main(){
        int fahr, celsius;
        int lower, upper, step;


        lower = 0;
        upper = 300;
        step = 20;

        fahr = upper;
        while (fahr >= lower){
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr - step;
        }
 

} 
