// A  program to read no 1 to 7 and print relatively day Sunday to Saturday.

#include<stdio.h>
#include<conio.h>
void main()
{
 int Day;
 printf("\n 1.Sunday");
 printf("\n 2.Monday");
 printf("\n 3.Tuesday");
 printf("\n 4.Wednsday");
 printf("\n 5.Thursday");
 printf("\n 6.Friday");
 printf("\n 7.Saturday");
 printf("\n Select one: ");
 scanf("%d",&Day);
 switch(Day)
 {
  case 1 : printf("\n Sunday");
           break;
  case 2 : printf("\n Monday");
           break;
  case 3 : printf("\n Tuesday");
           break;
  case 4 : printf("\n Wednsday");
           break;
  case 5 : printf("\n Thursday");
           break;
  case 6 : printf("\n Friday");
           break;
  case 7 : printf("\n Saturday");
           break;
 }
 getch();
}
