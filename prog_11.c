// A program to check whether the entered character is capital, small letter, digit or any special character.

#include<stdio.h>
#include<conio.h>
void main()
{
 char ch;
 printf("\n Enter the character: ");
 scanf("%c",&ch);
 if(ch>='A' && ch<='Z')
  printf("\n Entered character is Capital latter");
 else if(ch>='a' && ch<='z')
  printf("\n Entered character is Small lettet");
 else if(ch>='0' && ch<='9')
  printf("\n Entered character is Digit");
 else
  printf("\n Entered character is Special character");
 getch();
}
