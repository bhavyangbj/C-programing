//Write a program to access elements using pointer.

#include <stdio.h>
void main()
{
    int data[5], i;
    printf(" Enter elements: \n");

    for(i=0;i<5;++i)
        scanf("%d", data + i);

    printf("\n Entered Data : ");
    for(i=0;i<5;++i)
        printf("\n %d", *(data + i));
}
