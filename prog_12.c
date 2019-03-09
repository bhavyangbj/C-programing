/* A program to read marks from keyboard and your program should display equivalent grade according to following table(if else ladder)
Marks Grade
100 - 80 Distinction
79 - 60 First Class
59 - 40 Second Class
< 40 Fail */

#include<stdio.h>
#include<conio.h>
void main()
{
 float mark;
 printf("\n Enter mark: ");
 scanf("%f",&mark);
 if(mark>=80 && mark<=100)
  printf("\n Distinction");
 else if(mark>=60 && mark<80)
  printf("\n First Class");
 else if(mark>=40 && mark<60)
  printf("\n Second class");
 else if(mark<40)
  printf("\n Fail");
 else
  printf("\n Enter valid mark");
 getch();
}
