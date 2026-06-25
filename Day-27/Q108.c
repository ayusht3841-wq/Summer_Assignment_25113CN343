// Write a program to create marksheet generation system.
#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    float Physics_marks;
    float Chemistry_marks;
    float Maths_marks;
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

        printf("Enter Physics Marks: ");
        scanf("%f",&s[i].Physics_marks);

        printf("Enter Chemistry Marks: ");
        scanf("%f",&s[i].Chemistry_marks);

        printf("Enter Maths Marks: ");
        scanf("%f",&s[i].Maths_marks);
    }

    // Display Students
    printf("\n===== STUDENT RECORDS =====\n");

    for(int i=0;i<n;i++)
    {
        printf("\nRoll Number: %d",s[i].roll);
        printf("\nName: %s",s[i].name);
        printf("\nPhysics Marks: %.2f\n",s[i].Physics_marks);
        printf("\nChemistry Marks: %.2f\n",s[i].Chemistry_marks);
        printf("\nMaths Marks: %.2f\n",s[i].Maths_marks);

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
            printf("\nPhysics Marks: %.2f\n",s[i].Physics_marks);
            printf("\nChemistry Marks: %.2f\n",s[i].Chemistry_marks);
            printf("\nMaths Marks: %.2f\n",s[i].Maths_marks);


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