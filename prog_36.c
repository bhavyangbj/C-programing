// Write a program to sort given array in ascending order (Use Insertion sort, Bubble sort, Selection sort, Mergesort, Quicksort, Heapsort).
#include<stdio.h>
void main()
{
 int a[50],n;
 printf("\n how many elements you want to add : ");
 scanf("%d",&n);
 printf("\n Enter elements: ");
 for(i=0;i<n;i++)
 {
   scanf("%d",a[i]);
 }
 for(i=0;i<n;i++)
 {
  if(a[i]<max)
  {
    temp=a[i];
    a[i]=a[i-1];
    a[i-1]=temp;
  }
 }
 for(i=0;i<n;i++)
 {printf("%d",a[i]);
 }
}
