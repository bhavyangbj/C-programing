// A program to evaluate the series sum=1-x+x^2/2!-x^3/3!+x^4/4!......x^n/n!

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int x,n,i,j,fact,prod;
 float temp,ans1=0,ans2=0,ans;
 clrscr();
 printf("\n Enter x: ");
 scanf("%d",&x);
 printf("\n Enter n: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 { 
   fact=1,prod=1;
   for(j=1;j<=i;j++)
   {
     prod=prod*x;
   }
   for(j=1;j<=i;j++)
   {
     fact=fact*j;
   }

   temp=(float)prod/fact;
   
   if(i%2==0)
    ans1=ans1+temp;
   else
    ans2=ans2-temp;
    ans=ans1+ans2;
 }
 printf("\n Answer is %6.2f\n\n",ans);
 getch();
}
