// A program to generate first n number of Fibonacci series

#include<stdio.h>
#include<conio.h>
void main()
{
 int a=-1,b=1,c,i,n;
 printf("\n Enter number you want to see : ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  c=a+b;
  printf(" %d",c);
  a=b;
  b=c;
 }
 printf("\n");
 getch();
}
