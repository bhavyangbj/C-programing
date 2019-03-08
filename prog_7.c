// A program to find out distance travelled by the equation d = ut + at^2

#include<stdio.h>
#include<conio.h>
void main()
{
 float d,u,t,a;
 printf("\n Enter the Velocity: ");
 scanf("%f",&u);
 printf("\n Enter the Time: ");
 scanf("%f",&t);
 printf("\n Enter the Acceleration: ");
 scanf("%f",&a);
 d=u*t+a*t*t;
 printf("\n The distance travelled is: %6.2f \n",d);
 getch();
}
