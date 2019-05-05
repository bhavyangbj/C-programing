//Write a C program to print the address of character and the character of string using pointer.

#include<stdio.h>
void main()
{
    char str[50], *ptr;
    int i;
    printf("\n Enter string : ");
    gets(str);
    ptr = str;
    i=0;

    while(*ptr != NULL)
    {
        printf("\n Address of %c : %u",str[i], ptr);
        ptr++,i++;
    }
}
