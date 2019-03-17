/*Read five persons height and weight and count the number of person having height
greater than 170 and weight less than 50*/

#include<stdio.h>
#include<conio.h>
void main()
{
 int i,count=0;
 float h[5],w[5];
 clrscr();
 for(i=1;i<=5;i++)
 { 
   printf("\n Enter deatils of Person %d",i);
   printf("\n height: ");
   scanf("%f",&h[i]);
   printf("\n weight: ");
   scanf("%f",&w[i]);

   if(h[i]>170 && w[i]<50)
    count=count+1;
 }
 printf("\n The number of person having height greter than 170 and weight less than 50 is \n ===> %d\n\n",count);
 getch();
}
