//A program to find simple interest

#include<stdio.h>
#include<conio.h>
void main()
{
 float i,p,r,n;
 printf("\n Enter the Principal amount: ");
 scanf("%f",&p);
 printf("\n Enter the Rate of interest: ");
 scanf("%f",&r);
 printf("\n Enter the Number of years: ");
 scanf("%f",&n);
 i=p*r*n/100;
 printf("\n The Simple interest is: %f \n",i);
 getch();
}
