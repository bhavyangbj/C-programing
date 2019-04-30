//Write a function Exchange to interchange the values of two variables, say x and y. illustrate the use of this function in a calling function.

#include<stdio.h>

void exchange(x,y)
{
 x=x+y;
 y=x-y;
 x=x-y;
 printf("\n after exchange ???");
 printf("\n x is: %d \n y is %d\n",x,y);
}

void main()
{
 int x,y;
 printf("\n Enter x and y : ");
 scanf("%d %d",&x,&y);
 printf("\n Before exchange |||");
 printf("\n x is: %d \n y is %d\n",x,y);
 exchange(x,y);
}
