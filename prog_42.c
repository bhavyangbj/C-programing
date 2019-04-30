//Write a program that defines a function to add first n numbers.

#include<stdio.h>
void add_numer()
{
 int n,sum;
 printf("\n Enter number : ");
 scanf("%d",&n);
 sum=(n*(n+1))/2;
 printf("\n Sum of the first %d numbers is : %d \n",n,sum);
}

void main()
{
 int n;
 add_numer();
}
