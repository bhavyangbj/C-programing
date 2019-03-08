#include<stdio.h>
#include<conio.h>
void main()
{
 float num1,num2,ans;
 char opt,temp;
 printf("\n Enter the 1st number: ");
 scanf("%f",&num1);
 printf("\n Enter the 2nd number: ");
 scanf("%f",&num2);
 printf("\n options:");
 printf("\n +.Addition");
 printf("\n *.Multiplication");
 printf("\n /.Division");
 printf("\n -.Substraction\n");
 printf("\n Select Option: ");
 
 // temp variable is just for an Enter
 scanf("%c",&temp)
 scanf("%c",&opt);
 switch(opt)
 {
  case '+' : ans=num1+num2;
           break;
           
  case '*' : ans=num1*num2;
           break;
           
  case '/' : ans=num1/num2;
           break;
           
  case '-' : ans=num1-num2;
           break;
 }
 printf("\n The answer is : % f \n",ans);
 getch();
}
