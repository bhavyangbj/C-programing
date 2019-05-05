//Design a structure student_record to contain name, branch and total marks obtained. Develop a program to read data for 10 students in a class and print them.

#include<stdio.h>
struct student
{
    char name[20];
    char branch[2];
    float mark;
};

void main()
{
    int i;
    struct student s[10];
    printf("\n Enter details of 10 students:\n");
    for(i=0;i<10;i++)
    {
        printf("\n Enter student name : ");
        fflush(stdin);
        gets(s[i].name);
        printf(" Branch : ");
        gets(s[i].branch);
        printf(" Obtained Mark : ");
        scanf("%f",&s[i].mark);
    }
    printf("\n Student's Details:\n\n\tBranch \t\tStudent Name \t\tObtained Mark\n\n");
    for(i=0;i<10;i++)
    {
        printf("\n\t %s\t\t %s \t\t %3.2f",s[i].branch,s[i].name,s[i].mark);
    }
}
