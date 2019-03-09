// A program to read three numbers from keyboard and find out maximum out of these three. (nested if else)

#include<stdio.h>
#include<conio.h>
void main()
{
 float num1,num2,num3;
 printf("\n Enter three numbers: ");
 scanf("%f %f %f",&num1,&num2,&num3);
 if(num1>num2)
 {
  if(num1>num3)
   printf("\n %f is gretest of three numbers",num1);
  else
   printf("\n %f is gretest of three numbers",num3);
 }
 else
 {
  if(num2>=num3)
   printf("\n %f is gretest of three numbers",num2);
  else
   printf("\n %f is gretest of three numbers",num3);
 }
 getch();
}
