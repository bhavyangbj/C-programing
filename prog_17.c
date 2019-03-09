// A program to find factorial of a given number.

#include<stdio.h>
#include<conio.h>
void main()
{
 int i,f=1,num;
 printf("\n Enter the number: ");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
   f=f*i;
 
 printf("\n Factorial of Entered number is %d\n",f);
 getch();
}
