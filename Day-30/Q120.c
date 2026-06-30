// Write a program to develop complete mini project using arrays, strings and functions.
#include<stdio.h>

void addStudent(int roll[], char name[][50], int age[], float marks[], int n)
{
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
}

void displayStudent(int roll[], char name[][50], int age[], float marks[], int n)
{
    printf("\n===== STUDENT RECORD =====\n");

    for(int i=0;i<n;i++)
    {
        printf("\nRoll No : %d",roll[i]);
        printf("\nName    : %s",name[i]);
        printf("\nAge     : %d",age[i]);
        printf("\nMarks   : %.2f\n",marks[i]);
    }
}

void searchStudent(int roll[], char name[][50], int age[], float marks[], int n)
{
    int searchRoll;
    int found=0;

    printf("Enter Roll Number to Search: ");
    scanf("%d",&searchRoll);

    for(int i=0;i<n;i++)
    {
        if(roll[i]==searchRoll)
        {
            printf("\nStudent Found!\n");
            printf("Roll No : %d\n",roll[i]);
            printf("Name    : %s\n",name[i]);
            printf("Age     : %d\n",age[i]);
            printf("Marks   : %.2f\n",marks[i]);

            found=1;
            break;
        }
    }

    if(found==0)
    {
        printf("Student not found.\n");
    }
}

void topper(int roll[], char name[][50], float marks[], int n)
{
    int top=0;

    for(int i=1;i<n;i++)
    {
        if(marks[i]>marks[top])
        {
            top=i;
        }
    }

    printf("\n===== TOPPER =====\n");
    printf("Roll No : %d\n",roll[top]);
    printf("Name    : %s\n",name[top]);
    printf("Marks   : %.2f\n",marks[top]);
}

void average(float marks[], int n)
{
    float sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=marks[i];
    }

    printf("Average Marks = %.2f\n",sum/n);
}

int main()
{
    int n;

    printf("Enter Number of Students: ");
    scanf("%d",&n);

    int roll[n];
    char name[n][50];
    int age[n];
    float marks[n];

    int choice=0;
    int entered=0;

    while(choice!=6)
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Students\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Find Topper\n");
        printf("5. Calculate Average\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        if(choice==1)
        {
            addStudent(roll,name,age,marks,n);
            entered=1;
        }

        else if(choice>=2 && choice<=5 && entered==0)
        {
            printf("Please Add Students First!\n");
        }

        else if(choice==2)
        {
            displayStudent(roll,name,age,marks,n);
        }

        else if(choice==3)
        {
            searchStudent(roll,name,age,marks,n);
        }

        else if(choice==4)
        {
            topper(roll,name,marks,n);
        }

        else if(choice==5)
        {
            average(marks,n);
        }

        else if(choice==6)
        {
            printf("Thank You!\n");
        }

        else
        {
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}