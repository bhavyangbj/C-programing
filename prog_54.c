//Write a program to print address of variable using pointer.

#include <stdio.h>
void main()
{
  int a;
  int *pt;

  printf("\n Enter value of variable ==> ");
  scanf("%d",&a);
  pt = &a;

  printf("\n [ a ]:Value of A \t= %d", a);
  printf("\n [&a ]:Address of A \t= %u", &a);
  printf("\n [*pt]:Value of A \t= %d", *pt);
  printf("\n [&pt]:Address of pt \t= %u", &pt);
  printf("\n [pt ]:Value of pt \t= %u", pt);
}
