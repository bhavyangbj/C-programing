/* A program to prepare pay slip using following data.
Da = 10% of basic, Hra = 7.50% of basic, Ma = 300,
Pf = 12.50% of basic, Gross = basic + Da + Hra + Ma, Nt = Gross – Pf. */


#include<stdio.h>
#include<conio.h>
void main()
{
 float basic,Da,Hra,Ma=300,Pf,Gross,Nt;
 printf("\n Enter basic: ");
 scanf("%f",&basic);
 Da=basic*0.1;
 Hra=basic*.075;
 Pf=basic*.125;
 Gross=basic+Da+Hra+Ma;
 Nt=Gross-Pf;
 printf("\n The Gross value: %6.2f",Gross);
 printf("\n The Net value: %6.2f",Nt);
 getch();
}
