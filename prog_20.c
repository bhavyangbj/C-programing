// A program to find out sum of first and last digit of a given number.

#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,fd,ld,sum;
 printf("\n Enter number: ");
 scanf("%d",&n);
 ld=n%10;
 while(n>10)
 
  n=n/10;
 
 fd=n;
 sum=fd+ld;
 printf("\n Sum = %d\n",sum);
 getch();
}
