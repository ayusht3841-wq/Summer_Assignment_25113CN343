// Write a program to create mini employee management system.
#include<stdio.h>

struct Employee
{
    int Employee_ID;
    char Employee_Name[50];
    float Salary;
    char Department[50];
};

int main()
{
    int n;

    printf("Enter Number of Employees: ");
    scanf("%d",&n);

    struct Employee E[n];

    // Add Employee
    for(int i=0;i<n;i++)
    {
        printf("\nEmployee %d\n",i+1);

        printf("Enter Employee ID: ");
        scanf("%d",&E[i].Employee_ID);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]",E[i].Employee_Name);

        printf("Enter Salary: ");
        scanf("%f",&E[i].Salary);

        printf("Enter Department: ");
        scanf(" %[^\n]",E[i].Department);
    }

    // Display Employees
    printf("\n===== EMPLOYEE RECORD =====\n");

    for(int i=0;i<n;i++)
    {
        printf("\nEmployee ID   : %d",E[i].Employee_ID);
        printf("\nEmployee Name : %s",E[i].Employee_Name);
        printf("\nSalary        : %.2f",E[i].Salary);
        printf("\nDepartment    : %s\n",E[i].Department);
    }

    // Search Employee
    int searchId;
    int found = 0;

    printf("\nEnter Employee ID to Search: ");
    scanf("%d",&searchId);

    for(int i=0;i<n;i++)
    {
        if(E[i].Employee_ID==searchId)
        {
            printf("\nEmployee Found!\n");
            printf("Employee Name : %s\n",E[i].Employee_Name);
            printf("Salary        : %.2f\n",E[i].Salary);
            printf("Department    : %s\n",E[i].Department);

            found=1;
            break;
        }
    }

    if(found==0)
    {
        printf("Employee not found.\n");
    }

    // Update Salary
    found=0;

    printf("\nEnter Employee ID to Update Salary: ");
    scanf("%d",&searchId);

    for(int i=0;i<n;i++)
    {
        if(E[i].Employee_ID==searchId)
        {
            printf("Current Salary : %.2f\n",E[i].Salary);

            printf("Enter New Salary: ");
            scanf("%f",&E[i].Salary);

            printf("Salary Updated Successfully!\n");

            found=1;
            break;
        }
    }

    if(found==0)
    {
        printf("Employee not found.\n");
    }

    // Display Updated Record
    printf("\n===== UPDATED EMPLOYEE RECORD =====\n");

    for(int i=0;i<n;i++)
    {
        printf("\nEmployee ID   : %d",E[i].Employee_ID);
        printf("\nEmployee Name : %s",E[i].Employee_Name);
        printf("\nSalary        : %.2f",E[i].Salary);
        printf("\nDepartment    : %s\n",E[i].Department);
    }

    return 0;
}