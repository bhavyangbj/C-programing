/* A program to print following patterns:  AAAAA
                                           BBBB
                                           CCC
                                           DD
                                           E      */
                                           
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j;
 int ch;
 clrscr();
 printf("\n Enter alphabet number: ");
 // A=1,B=2,.....,Z=26
 scanf("%d",&ch);
 for(i=1;i<=ch;i++)
 {
  for(j=ch;j>=i;j--)
  {
   printf(" %c",'A'-1 + i);
  }
  printf("\n");
 }
 getch();
}
