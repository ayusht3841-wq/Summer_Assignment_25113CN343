// Write a program to create employee management system.
#include<stdio.h>

struct Employee
{
    int Employee_ID;
    char Employee_Name[50];
    int Salary;
    char Department[50];
};

int main()
{
    int n;

    printf("Enter Number of Employees:");
    scanf("%d",&n);

    struct Employee E[n];
    

    for(int i=0;i<n;i++)
    {
        printf("\nEmployee %d\n",i+1);

        printf("Enter Employee ID: ");
        scanf("%d",&E[i].Employee_ID);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]",E[i].Employee_Name);

        printf("Enter Salary: ");
        scanf("%d",&E[i].Salary);

        printf("Enter Department: ");
        scanf(" %[^\n]",E[i].Department);
    }

    printf("\n=====EMPLOYEE RECORD=====\n");

    for(int i=0;i<n;i++)
    {
        printf("\nEmployee Id: %d",E[i].Employee_ID);
        printf("\nEmployee Name: %s",E[i].Employee_Name);
        printf("\nSalary: %d",E[i].Salary);
        printf("\nDepartment: %s",E[i].Department);
    }

    int searchId;
    int found=0;

    printf("\nEnter Employee Id to be searched: ");
    scanf("%d",&searchId);

    for(int i=0;i<n;i++)
    {
        if(E[i].Employee_ID==searchId)
        {
            printf("\nEmployee found!\n");
            printf("Employee Name: %s\n",E[i].Employee_Name);
            printf("Salary: %d\n",E[i].Salary);
            printf("Department: %s\n",E[i].Department);

            found=1;
            break;
        }
    }

    if(found==0)
    {
        printf("Employee not found.\n");
    }

    return 0;
}