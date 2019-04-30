// Write a program to replace a character in given string.

#include<stdio.h>
void main()
{
 char temp,str[50],ch1,ch2;
 int i;
 printf("\n Enter string: ");
 gets(str);
 printf("\n Enter charater to replace : ");
 ch1=getchar();
 printf("\n Enter replace charater : ");
 temp=getchar();   //temp 4 Enter character
 ch2=getchar();
 for(i=0;str[i]!=NULL;i++)
 {
  if(str[i]==ch1)
  {
    str[i]=ch2;
  }
 }
 printf("\n New string is: ");
 puts(str);
}
