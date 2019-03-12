/*1
  22
  333
  4444
  55555 */
  
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j;
// n=numbers of rows
 printf("\n Enter number: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 { 
    for(j=1;j<=i;j++)
    {
      printf(" %d",i);
    }
 printf("\n");
 }
 getch();
} 
