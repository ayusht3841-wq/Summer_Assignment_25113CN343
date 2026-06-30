// Write a program to create mini library system.
#include<stdio.h>

struct Library
{
    int Book_ID;
    char Book_Name[50];
    char Author_Name[50];
    int Price;
    int Quantity;
};

int main()
{
    int n;

    printf("Enter Number of Books: ");
    scanf("%d",&n);

    struct Library L[n];

    // Input
    for(int i=0;i<n;i++)
    {
        printf("\nBook %d\n",i+1);

        printf("Enter Book ID: ");
        scanf("%d",&L[i].Book_ID);

        printf("Enter Book Name: ");
        scanf(" %[^\n]",L[i].Book_Name);

        printf("Enter Author Name: ");
        scanf(" %[^\n]",L[i].Author_Name);

        printf("Enter Price: ");
        scanf("%d",&L[i].Price);

        printf("Enter Quantity: ");
        scanf("%d",&L[i].Quantity);
    }

    // Display
    printf("\n===== BOOK RECORD =====\n");

    for(int i=0;i<n;i++)
    {
        printf("\nBook ID      : %d",L[i].Book_ID);
        printf("\nBook Name    : %s",L[i].Book_Name);
        printf("\nAuthor Name  : %s",L[i].Author_Name);
        printf("\nPrice        : %d",L[i].Price);
        printf("\nQuantity     : %d\n",L[i].Quantity);
    }

    // Search
    int id;
    int found=0;

    printf("\nEnter Book ID to Search: ");
    scanf("%d",&id);

    for(int i=0;i<n;i++)
    {
        if(L[i].Book_ID==id)
        {
            printf("\nBook Found!\n");
            printf("Book Name   : %s\n",L[i].Book_Name);
            printf("Author Name : %s\n",L[i].Author_Name);
            printf("Price       : %d\n",L[i].Price);
            printf("Quantity    : %d\n",L[i].Quantity);

            found=1;
            break;
        }
    }

    if(found==0)
    {
        printf("Book not found.\n");
    }

    // Issue Book
    found=0;

    printf("\nEnter Book ID to Issue: ");
    scanf("%d",&id);

    for(int i=0;i<n;i++)
    {
        if(L[i].Book_ID==id)
        {
            if(L[i].Quantity>0)
            {
                L[i].Quantity--;
                printf("Book Issued Successfully!\n");
                printf("Remaining Quantity: %d\n",L[i].Quantity);
            }
            else
            {
                printf("Book is Out of Stock.\n");
            }

            found=1;
            break;
        }
    }

    if(found==0)
    {
        printf("Book not found.\n");
    }

    // Return Book
    found=0;

    printf("\nEnter Book ID to Return: ");
    scanf("%d",&id);

    for(int i=0;i<n;i++)
    {
        if(L[i].Book_ID==id)
        {
            L[i].Quantity++;
            printf("Book Returned Successfully!\n");
            printf("Current Quantity: %d\n",L[i].Quantity);

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