/*Pattern:    ABCDE
              ABCD
              ABC
              AB
              A     */
              
#include<stdio.h>
//#include<conio.h>
void main()
{
 int i,j;
 int ch;
 clrscr();
 printf("\n Enter alphabet number: ");
 //A=1,B=2,....Z=26
 scanf("%d",&ch);
 for(i=ch;i>=1;i--)
 {
  for(j=1;j<=i;j++)
  {
   printf(" %c",'A'-1 + j);
  }
  printf("\n");
 }
 getch();
}
