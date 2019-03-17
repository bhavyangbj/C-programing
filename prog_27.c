// A program to find 1+1/2!+1/3!+1/4!+.....+1/n!.

#include<stdio.h>
#include<conio.h>
void main()
{
int i,f,n,j;
float ans=0;
clrscr();
printf("\n Enter the number: ");
scanf("%d",&n);
  for(i=1;i<=n;i++)
  { f=1;
    for(j=1;j<=i;j++)
    { 
      f=f*j;
      printf("\n f is: %d \n",f);
    }
    ans=ans+1.0/f;
  }
 printf("\n Answer is: %f\n",ans);
 getch();
}
