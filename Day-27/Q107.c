// Write a program to create salary management system.
#include<stdio.h>

struct Employee
{
    int Employee_ID;
    char Employee_Name[50];
    int Salary;
};

int main()
{
    int n;

    printf("Enter Number of Employees: ");
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
    }

    printf("\n===== EMPLOYEE RECORD =====\n");

    for(int i=0;i<n;i++)
    {
        printf("\nEmployee ID: %d",E[i].Employee_ID);
        printf("\nEmployee Name: %s",E[i].Employee_Name);
        printf("\nSalary: %d\n",E[i].Salary);
    }

    int searchId;
    int found = 0;

    printf("\nEnter Employee ID to search: ");
    scanf("%d",&searchId);

    for(int i=0;i<n;i++)
    {
        if(E[i].Employee_ID == searchId)
        {
            float hra = 0.20 * E[i].Salary; //hra means house rent allowance.
            float bonus = 0.10 * E[i].Salary;
            float gross = E[i].Salary + hra + bonus;

            printf("\nEmployee Found!\n");
            printf("Employee Name: %s\n",E[i].Employee_Name);
            printf("Basic Salary: %d\n",E[i].Salary);
            printf("HRA: %.2f\n",hra);
            printf("Bonus: %.2f\n",bonus);
            printf("Gross Salary: %.2f\n",gross);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Employee not found.\n");
    }

    return 0;
}