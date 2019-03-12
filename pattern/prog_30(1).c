/*1
  12
  123
  1234
  12345 */
  
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
      printf(" %d",j);
    }
 printf("\n");
 }
 getch();
} 
