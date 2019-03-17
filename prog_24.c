// A program to check whether the given number is prime or not

#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,temp=0;
    printf("\n Enter a positive integer: ");
    scanf("%d",&n);

    for(i=2;i<=n/2;i++)
    {
        // condition for nonprime number
        if(n%i == 0)
        {
            temp = 1;
            break;
        }
    }
    if (n == 1) 
      printf("1 is neither a prime nor a composite number. \n");
    else 
    {
        if (temp == 0)
          printf("%d is a prime number.\n",n);
        else
          printf("%d is not a prime number.\n",n);
    }    
    getch();
}
