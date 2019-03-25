// A program to find out which number is even or odd from list of  numbers using array

#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i;
 clrscr();
 printf("\n How many numbers:  ");
 scanf("%d",&n);
 int a[n];
 for(i=1;i<=n;i++)
  {
    printf(" Enter number: ");
    scanf("%d",&a[i]);
  }
 
 for(i=1;i<=n;i++)
 { 
   if(a[i]%2==0)
     printf("\n %d is Even\n",a[i]);
   else
     printf("\n %d is Odd\n",a[i]);
 }
 getch();
}
