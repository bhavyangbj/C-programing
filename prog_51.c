//Define structure data type called time_struct containing three member’s integer hour, integer minute and integer second. Develop a program that would assign values to the individual number and display the time in the following format: 16: 40:51


#include<stdio.h>

struct time_struct
{
    int member;
    int hour;
    int minitue;
    int second;
};

void main()
{
    int i,n;
    printf("\n How many members are there ?\n ==> ");
    scanf("%d",&n);
    struct time_struct p[n];
    for(i=0;i<n;i++)
    {
        printf("\n Enter member1 no.: : ");
        scanf("%d",&p[i].member);
        printf(" Enter time: \n ");
        scanf("%d %d %d",&p[i].hour,&p[i].minitue,&p[i].second);
    }

    printf("\n Details::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
    printf("\n \t\tnumber\t\t time(hh:mm:ss)\n\n");
    for(i=0; i<n; i++)
    {
        printf("\n\t\t%d\t\t%d : %d : %d",p[i].member,p[i].hour,p[i].minitue,p[i].second);
    }
}
