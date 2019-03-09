 // A program to input an integer number and check the last digit of number is even or odd.
 
#include<stdio.h>
#include<conio.h>
void main()
{
 int num,rem;
 printf("\n Enter the number: ");
 scanf("%d",&num);
 rem=num%10;
 if(rem%2==0)
   printf("\n The last Digit of Entered number is Even");
 else
   printf("\n The last Digit of Entered number is Odd");
 getch();
}
