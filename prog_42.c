//Write a program that defines a function to add first n numbers.

#include<stdio.h>
int add_numer(int n,sum)
{
 sum=n*(n+1)/2;
 return sum;
}

void main()
{
 int n,sum;
 printf("\n Enter number : ");
 scanf("%d",&n);
 sum=add_numer(n,sum);
 printf("\n Sum of the first %d numbers is : %d \n",n,sum);
}
