// A program to compute Fahrenheit from centigrade (f=1.8*c +32)

#include<stdio.h>
#include<conio.h>
void main()
{
 float f,c;
 printf("\n Enter the Temperature in centigrade : ");
 scanf("%f",&c);
 f=1.8*c+32;
 printf("\n The Temperature in fahrenheit is: %6.2f \n",f);
 getch();
}
