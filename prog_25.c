// A program to evaluate the series 1^2+2^2+3^2+......+n^2

#include<stdio.h>
#include<conio.h>
void main()
{
 int n,ans=0,i;
 clrscr();
 printf("\n Enter number: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  ans=ans+(i*i);
 }
 printf("\n Answer is:  %d\n",ans);
 getch();
}
