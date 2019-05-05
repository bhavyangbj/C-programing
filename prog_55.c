//Write a C program to swap the two values using pointers.

#include<stdio.h>
void main()
{
    int x, y, *a, *b;
    printf(" Enter the value of x and y : \n");
    scanf("%d %d", &x, &y);
    printf("\n Before Swapping\n x = %d\n y = %d\n",x,y);
    a = &x;
    b = &y;

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    printf("\n After Swapping\n x = %d\n y = %d\n",x,y);
}
