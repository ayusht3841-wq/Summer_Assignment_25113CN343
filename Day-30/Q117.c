// Write a program to create student record system using arrays and strings.
#include<stdio.h>

int main()
{
    int n;

    printf("Enter Number of Students: ");
    scanf("%d",&n);

    int roll[n];
    char name[n][50];
    int age[n];
    float marks[n];

    // Input
    for(int i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);

        printf("Enter Roll Number: ");
        scanf("%d",&roll[i]);

        printf("Enter Name: ");
        scanf(" %[^\n]",name[i]);

        printf("Enter Age: ");
        scanf("%d",&age[i]);

        printf("Enter Marks: ");
        scanf("%f",&marks[i]);
    }

    // Display
    printf("\n===== STUDENT RECORD =====\n");

    for(int i=0;i<n;i++)
    {
        printf("\nRoll No : %d",roll[i]);
        printf("\nName    : %s",name[i]);
        printf("\nAge     : %d",age[i]);
        printf("\nMarks   : %.2f\n",marks[i]);
    }

    // Search
    int searchRoll;
    int found = 0;

    printf("\nEnter Roll Number to Search: ");
    scanf("%d",&searchRoll);

    for(int i=0;i<n;i++)
    {
        if(roll[i]==searchRoll)
        {
            printf("\nStudent Found!\n");
            printf("Name  : %s\n",name[i]);
            printf("Age   : %d\n",age[i]);
            printf("Marks : %.2f\n",marks[i]);

            found = 1;
            break;
        }
    }

    if(found==0)
    {
        printf("Student not found.\n");
    }

    // Update Marks
    found = 0;

    printf("\nEnter Roll Number to Update Marks: ");
    scanf("%d",&searchRoll);

    for(int i=0;i<n;i++)
    {
        if(roll[i]==searchRoll)
        {
            printf("Enter New Marks: ");
            scanf("%f",&marks[i]);

            printf("Marks Updated Successfully!\n");

            found = 1;
            break;
        }
    }

    if(found==0)
    {
        printf("Student not found.\n");
    }

    // Average
    float sum = 0;

    for(int i=0;i<n;i++)
    {
        sum += marks[i];
    }

    printf("\nAverage Marks = %.2f\n",sum/n);

    // Topper
    int topper = 0;

    for(int i=1;i<n;i++)
    {
        if(marks[i] > marks[topper])
        {
            topper = i;
        }
    }

    printf("\n===== TOPPER =====\n");
    printf("Roll No : %d\n",roll[topper]);
    printf("Name    : %s\n",name[topper]);
    printf("Marks   : %.2f\n",marks[topper]);

    return 0;
}