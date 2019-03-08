//A program to find area of triangle

#include<stdio.h>
#include<conio.h>
void main()
{
 float h,b,ans;
 printf("\n Enter the Height of triangle: ");
 scanf("%f",&h);
 printf("\n Enter the Base of triangle: ");
 scanf("%f",&b);
 ans=h*b*0.5;
 printf("\n The area of Triangle is: %f\n",ans);
 getch();
}
