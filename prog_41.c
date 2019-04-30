// Write a program to convert string into upper case

#include<stdio.h>
void main()
{
 char str[50];
 int i;
 printf("\n Enter string : ");
 gets(str);
 for(i=0;str[i]!=NULL;i++)
 {
  if(str[i]>=97)
  {
    str[i]-=32;
  }
 }
 printf("\n New string :  ");
 puts(str);
}
