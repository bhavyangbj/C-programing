// A program to read marks of a student from keyboard whether the student is pass or fail(using if else)

#include<stdio.h>
#include<conio.h>
void main()
{
 float mark;
 printf("\n Enter the mark: ");
 scanf("%f",&mark);
 if(mark>35)
 printf("\n Student is Pass.\n");
 else
 printf("\n Student is Fail. \n");
 getch();
}
