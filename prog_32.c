// A C program to read and store the roll no and marks of 20 students using array. 

#include<stdio.h>
#include<conio.h>
void main()
{
 int roll[20],i;
 float mark[20];
 
 for(i=1;i<=20;i++)
 {
  printf("\n Enter Roll No.: ");
  scanf("%d",&roll[i]);
  printf(" Enter mark: ");
  scanf("%f",&mark[i]);
 }
 
 printf("\n\t\t  Roll No.  \t\t  Mark  ");
 
  for(i=1;i<=20;i++)
    printf("\n\t\t  %d  \t\t  %f  ",roll[i],mark[i]);
 getch();
}
