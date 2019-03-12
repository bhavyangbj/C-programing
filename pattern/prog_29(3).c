/*55555
  4444
  333
  22
  1    */

#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j;
// n=numbers of row
 printf("\n Enter number: ");
 scanf("%d",&n);
 for(i=n;i>=1;i--)
 { 
    for(j=1;j<=i;j++)
    {
      printf(" %d",i);
    }
 printf("\n");
 }
 getch();
} 
