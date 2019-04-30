/*Write a program to find a character from given string.*/
#include<stdio.h>
void main()
{
 char str[50],ch;
 int flag=0,i;
 printf("\n Enter string: ");
 gets(str);
 printf("\n Enter character to find : ");
 scanf("%c",&ch);
 for(i=0;str[i]!=NULL;i++)
 { 
    if(str[i]==ch)
    {
      flag=1;
      printf("\n character %c is located at %d position.  \n",ch,i+1);
    }
 }
 if(flag==0)
   printf("\n character is not found ");
}
