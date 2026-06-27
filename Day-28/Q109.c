// Write a program to create library management system.
#include<stdio.h>

struct Library
{
    int Book_ID;
    char Book_Name[50];       
    char Author_Name[50];
    int price;
    int Quantity;
};

int main()
{
    int n;

    printf("Enter Number of Books:");
    scanf("%d",&n);

    struct Library L[n];
    

    for(int i=0;i<n;i++)
    {
        printf("\nBook %d\n",i+1);

        printf("Enter Book ID: ");
        scanf("%d",&L[i].Book_ID);

        printf("Enter Book Name: ");
        scanf(" %[^\n]",L[i].Book_Name);

        printf("Enter Author Name: ");
        scanf(" %[^\n]",L[i].Author_Name);

        printf("Enter price: ");
        scanf("%d",&L[i].price);

        printf("Enter Quantity: ");
        scanf("%d",&L[i].Quantity);
    }

    printf("\n=====BOOK RECORD=====\n");

    for(int i=0;i<n;i++)
    {
        printf("\nBook Id: %d",L[i].Book_ID);
        printf("\nBook Name: %s",L[i].Book_Name);
        printf("\nAuthor Name: %s",L[i].Author_Name);
        printf("\nPrice: %d",L[i].price);
        printf("\nQuantity: %d",L[i].Quantity);
    }

    int searchId;
    int found=0;

    printf("\nEnter Book Id to be searched: ");
    scanf("%d",&searchId);

    for(int i=0;i<n;i++)
    {
        if(L[i].Book_ID==searchId)
        {
            printf("\nBook found!\n");
            printf("\nBook Name: %s",L[i].Book_Name);
            printf("\nAuthor Name: %s",L[i].Author_Name);
            printf("\nPrice: %d",L[i].price);
            printf("\nQuantity: %d",L[i].Quantity);
            
            found=1;
            break;
        }
    }

    if(found==0)
    {
        printf("Book not found.\n");
    }

    return 0;
}