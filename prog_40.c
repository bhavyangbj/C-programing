// Write a program to reverse string.

#include<stdio.h>
void main()
{
 char str1[50],str2[50],ch;
 int i,j,len;
 printf("\n Enter string : ");
 gets(str1);

 for(i=0;str1[i]!=NULL;i++)
   len++;

 for(i=len-1,j=0;i>=0;i--,j++)
 { 
  str2[j]=str1[i];
 }
 str2[j]=NULL;
 printf("\n New string is : ");
 puts(str2);
}
