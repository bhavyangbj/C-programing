// A program to calculate average and total of 5 students for 3 subjects (use nested for loops)

#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j;
 float sub[3],total[5],avg[5],sum=0;
 clrscr();
 for(i=1;i<=5;i++)
 {
   printf("\n Enter marks of Student %d \n",i);
   for(j=1;j<=3;j++)
   {
     printf(" Enter  mark: ");
     scanf("%f",&sub[j]);
     sum=sum+sub[j];
   }
 }
 total[i]=sum;
 avg[i]=total[i]/15;
 printf("\n Total of 5 students: %f",total[i]);
 printf("\n Average of 5 students: %f\n\n",avg[i]);
 getch();
}
