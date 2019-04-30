// Write a program to delete a character in given string.

#include<stdio.h>
void main()
{
 char str1[50],str2[50],ch;
 int i,j,flag=0;
 printf("\n Enter string : ");
 gets(str1);
 printf("\n Enter chracter to delete from string : ");
 ch=getchar();
 for(i=0,j=0;str1[i]!=NULL;i++)
 {
  if(str1[i]!=ch)
  {
   str2[j]=str1[i];
   j++;
   flag=1;
  }
 }
 str2[j]=NULL;
 if(flag==0)
  printf("\n Character is not found !!!");
 else
 {
  printf("\n New string is : ");
  puts(str2);
 }
}
