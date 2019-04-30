// Write a program to find maximum element from 1-Dimensional array.
#include<stdio.h>
void main()
{
 int n,a[100],max,i;
 printf("\n How many element that you want to add : ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",a[i]);
 }
 
 //assume that max=a[0]
 max=a[0];
 for(i=0;i<n;i++)
 {
   if(max<a[i])
    max=a[i];
 }
 printf("\n maximum is %d",max);
}
