// A program to find out the Maximum and Minimum number from given n numbers

#include<stdio.h>
#include<conio.h>
void main()
{
 int n[10],gretest,num,i;
 printf("\n how many numbers you want to add : ");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
   printf("\n Enter %d number: ",i);
   scanf("%d",&n[i]);
 }

//assume n[0] is gretest
gretest=n[1];

 for(i=1;i<=num;i++)
 {
  if(n[i]>gretest)
  {
    gretest = n[i];
  }
 }
 printf("\n Gretest number of given %d numbers is %d \n\n",num,gretest);
 getch();
}
