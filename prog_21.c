// A program to find the sum and average of different numbers which are accepted by user as many as user wants

#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,sum=0;
 printf("\n Enter How many number you want to add: ");
 scanf("%d",&n);
 int num[n];
 for(i=1;i<=n;i++)
 {
  printf("\n Enter number: ");
  scanf("%d",&num[i]);
  sum=sum+num[i];
 }
 avg=sum/n;
 printf("\n The sum of %d numbers is %d",n,sum);
 printf("\n The avg of %d numbers is %6.2f",n,avg);
 getch();
}
