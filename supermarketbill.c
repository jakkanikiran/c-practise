#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#include <string.h>
#include <unistd.h>
 
int main()
{
char choice;
int x,sugar=35,jam=20,shampoo=19,bread=50 ,eggs=50,subtotal1=0,subtotal2=0,subtotal3=0,subtotal4=0,subtotal5=0,total;
 
 
printf("WELCOME TO JAKKANI BAZZAR \n");
printf("World's biggest Departmental store\n");
printf("Enter choice\n");
printf("[1] for 1 kg sugar bag\n");
printf("[2] for Jam\n");
printf("[3] for XYZ Shampoo\n");
printf("[4] for Bread\n");
printf("[5] for 1 dozen eggs\n");
printf("[6] to quit shoping\n");
choice=getch();
 
if((choice=='6')||(choice=='8'))
exit(0);
 
if(choice=='1') {
printf("shopped:1 kg sugar bag=350 rupees\n",sugar);
printf("how many?\n",x);
scanf("%d",&x);
subtotal1=sugar*x;
printf("Sub total:sugar=%d",subtotal1);
getche();
}
 
if(choice=='2'){
printf("Shopped:Jam=250\n",jam);
printf("How many?\n",x);
scanf("%d",&x);
subtotal2=jam*x;
printf("Sub total:Jam=%d",subtotal2);
getch();
}
if(choice=='3') {
 
printf("shopped:XYZ shampoo\n",shampoo);
printf("How many?\n",x);
scanf("%d",&x);
subtotal3=shampoo*x;
printf("Sub total:shampoo=%d",subtotal3);
getch();
}
 
if(choice=='4'){
printf("Shopped:Bread\n",bread);
printf("How many?\n",x);
scanf("%d",&x);
subtotal4=bread*x;
printf("Sub total:Bread=%d",subtotal4);
 
getch();
}
if(choice=='5') {
 
printf("shopped:dozen eggs\n",shampoo);
printf("How many dozens you want?\n",x);
scanf("%d",&x);
subtotal5=eggs*x;
printf("Sub total:eggs=%d",subtotal5);
getch();
}}
