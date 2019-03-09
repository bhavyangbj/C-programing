// A program to reverse a number.

#include<stdio.h>
#include<conio.h>
void main()
{
 int num,rev=0;
 printf("\n Enter number: ");
 scanf("%d",&num);
 while(num!=0)
 {
   rev=rev*10;
   rev=rev+num%10;
   num=num/10;
 }
 printf("reverse is: %d\n",rev);
 getch();
}
