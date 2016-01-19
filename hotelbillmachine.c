//-----Program to hotel bill counting machine

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int collection=0;

int main()
{
 while(1)
{
  int n;
  time_t t;
  time(&t);
 // clrscr();

  printf("\n");
  printf("---Items Menu---\n");
 // printf("Date&time:%s",ctime(&t));

  printf("1.Idli\n");
  printf("2.Wada\n");
  printf("3.Poori\n");
  printf("4.Mysore Bonda\n");
  printf("5.Dhosa\n");
  printf("6.collection\n");
  printf("7.exit\n");
  printf("----------------\n");
  printf("choose your Item\n");
  scanf("%d",&n);
  printf("----------------\n");
 // printf("\n");

  switch(n)
 {
  case 1:
         printf(" GeethaBhavan Tiffin center\n ");
         printf("Date:%s",ctime(&t));
         printf(" Idli= Rs.20\n");
         collection=collection+20;
         printf("\n");
case 2:
         printf(" GeethaBhavan Tiffin center\n ");
         printf("Date:%s",ctime(&t));
         printf(" Wada= Rs.20\n");
         collection=collection+20;
         printf("\n");
         break;
  case 3:
         printf(" GeethaBhavan Tiffin center\n ");
         printf("Date:%s",ctime(&t));
         printf(" Poori= Rs.20\n");
         collection=collection+20;
         printf("\n");
         break;
  case 4:
         printf(" GeethaBhavan Tiffin center\n ");
         printf("Date:%s",ctime(&t));
         printf(" Mysore Bonda= Rs.20\n");
         collection=collection+20;
         printf("\n");
         break;
  case 5:
         printf(" GeethaBhavan Tiffin center\n ");
         printf("Date:%s",ctime(&t));
         printf(" Dhosa= Rs.20\n");
         collection=collection+20;
         printf("\n");
         break;
  case 6:
        printf("Today Total Collection= Rs.%d\n",collection);
        break;
  default:
          //printf("exit\n");
          exit(0);

}
}
	 return 0;
}

