// A program to interchange two numbers

#include<stdio.h>
#include<conio.h>
void main()
{
 float num1,num2,temp;
 printf("\n Enter 1st number: ");
 scanf("%f",&num1);
 printf("\n Enter 2nd number: ");
 scanf("%f",&num2);
 temp=num1;
 num1=num2;
 num2=temp;
 printf("\n After interchange two numbers\n ");
 printf("\n 1st number is: %f ",num1);
 printf("\n 2st number is: %f \n",num2);
 getch();
}
