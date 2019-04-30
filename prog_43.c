//Write a function in the program to return 1 if number is prime otherwise return 0

#include<stdio.h>

int prime()
{
int n,flag=0,i;
 printf("\n Enter number: ");
 scanf("%d",&n);
 for(i=2;i<=n/2;i++)
 {  
     if(n%i==0)
     {
       flag=1;
       break;
     }
 }
 return flag; 
}

void main()
{
 int n,flag;
 flag=prime();
 if(n==1)
  printf("\n 1 IS NOT PRIME OR NOT A COMPOSITE NUMBER\n");
 else if(flag==0)
  printf("\n PRIME number\n");
 else if(flag==1)
  printf("\n NOT PRIME number\n");
}
