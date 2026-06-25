// Write a program to Create student record management system.
#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d",&n);

    struct Student s[n];

    // Add Students
    for(int i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);

        printf("Enter Roll Number: ");
        scanf("%d",&s[i].roll);

        printf("Enter Name: ");
        scanf("%s",s[i].name);

        printf("Enter Marks: ");
        scanf("%f",&s[i].marks);
    }

    // Display Students
    printf("\n===== STUDENT RECORDS =====\n");

    for(int i=0;i<n;i++)
    {
        printf("\nRoll Number: %d",s[i].roll);
        printf("\nName: %s",s[i].name);
        printf("\nMarks: %.2f\n",s[i].marks);
    }

    // Search Student
    int searchRoll;
    int found = 0;

    printf("\nEnter roll number to search: ");
    scanf("%d",&searchRoll);

    for(int i=0;i<n;i++)
    {
        if(s[i].roll == searchRoll)
        {
            printf("\nStudent Found!\n");
            printf("Name: %s\n",s[i].name);
            printf("Marks: %.2f\n",s[i].marks);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Student not found.\n");
    }

    return 0;
}