//A program to find 1+1/2+1/3+1/4+....+1/n.

#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i;
 float ans=0;
 clrscr();
 printf("\n Enter number: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  ans=ans+(float)1/i;
 }
 printf("\n The answer is = %f\n\n",ans);
 getch();
}
