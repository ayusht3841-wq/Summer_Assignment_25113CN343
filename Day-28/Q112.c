// Write a program to create contact management system.
#include<stdio.h>

struct CONTACT
{
    char Name[50];
    int Phone_Number;
    char email[50];
};

int main()
{
    int n;

    printf("Enter Number of Contacts to be added:");
    scanf("%d",&n);

    struct CONTACT C[n];
    

    for(int i=0;i<n;i++)
    {
        printf("\nContact %d\n",i+1);

        printf("Enter Name: ");
        scanf(" %[^\n]",C[i].Name);

        printf("Enter Phone Number: ");
        scanf("%d",&C[i].Phone_Number);

        printf("Enter email: ");
        scanf(" %[^\n]",C[i].email);
    }

    printf("\n=====CONTACT RECORD=====\n");

    for(int i=0;i<n;i++)
    {
        printf("\n Name: %s",C[i].Name);
        printf("\nPhone Number: %d",C[i].Phone_Number);
        printf("\nEmail: %s",C[i].email);
    }

    int searchphone;
    int found=0;

    printf("\nEnter Contact phone numberto be searched: ");
    scanf("%d",&searchphone);

    for(int i=0;i<n;i++)
    {
        if(C[i].Phone_Number==searchphone)
        {
            printf("\nContact found!\n");
            printf("\nName: %s",C[i].Name);
            printf("\nEmail: %s",C[i].email);
            
            found=1;
            break;
        }
    }

    if(found==0)
    {
        printf("Ticket not found.\n");
    }

    return 0;
}
