// Write a C program to find that the accepted number is Negative, or Positive or Zero.

#include<stdio.h>
void main()
{
 int n;
 printf("\n Enter number : ");
 scanf(" %d ",&n);
 if(n>0)
  printf("\n Entered Number is positive.");
 else if(n<0)
  printf("\n Entered Number is negative.");
 else
  printf("\n Entered NUmber is Zero.");
}
