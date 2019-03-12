/*  *****
    ****
    ***
    **
    *   */
    
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j;
// n=numbers of rows
 printf("\n Enter number: ");
 scanf("%d",&n);
 for(i=n;i>=1;i--)
 { 
    for(j=1;j<=i;j++)
    {
      printf(" *");
    }
 printf("\n");
 }
 getch();
} 
