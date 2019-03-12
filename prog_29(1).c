/*  *
    ** 
    ***
    ****   */
    
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j;
// n=number of rows
 printf("\n Enter number: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 { 
    for(j=1;j<=i;j++)
    {
      printf(" *");
    }
 printf("\n");
 }
 getch();
} 
