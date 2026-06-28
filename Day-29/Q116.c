// Write a program to create inventory management system.
#include<stdio.h>

struct Product
{
    int Product_ID;
    char Product_Name[50];
    float Price;
    int Quantity;
};

int main()
{
    int n;

    printf("Enter Number of Products: ");
    scanf("%d",&n);

    struct Product P[n];

    for(int i=0;i<n;i++)
    {
        printf("\nProduct %d\n",i+1);

        printf("Enter Product ID: ");
        scanf("%d",&P[i].Product_ID);

        printf("Enter Product Name: ");
        scanf(" %[^\n]",P[i].Product_Name);

        printf("Enter Price: ");
        scanf("%f",&P[i].Price);

        printf("Enter Quantity: ");
        scanf("%d",&P[i].Quantity);
    }

    printf("\n===== PRODUCT RECORD =====\n");

    for(int i=0;i<n;i++)
    {
        printf("\nProduct ID   : %d",P[i].Product_ID);
        printf("\nProduct Name : %s",P[i].Product_Name);
        printf("\nPrice        : %.2f",P[i].Price);
        printf("\nQuantity     : %d\n",P[i].Quantity);
    }

    int searchId;
    int found = 0;

    printf("\nEnter Product ID to search: ");
    scanf("%d",&searchId);

    for(int i=0;i<n;i++)
    {
        if(P[i].Product_ID == searchId)
        {
            printf("\nProduct Found!\n");
            printf("Product Name : %s\n",P[i].Product_Name);
            printf("Price        : %.2f\n",P[i].Price);
            printf("Quantity     : %d\n",P[i].Quantity);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Product not found.\n");
    }

    found = 0;

    printf("\nEnter Product ID to update quantity: ");
    scanf("%d",&searchId);

    for(int i=0;i<n;i++)
    {
        if(P[i].Product_ID == searchId)
        {
            printf("Enter New Quantity: ");
            scanf("%d",&P[i].Quantity);

            printf("Quantity Updated Successfully!\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Product not found.\n");
    }

    found = 0;

    printf("\nEnter Product ID to update price: ");
    scanf("%d",&searchId);

    for(int i=0;i<n;i++)
    {
        if(P[i].Product_ID == searchId)
        {
            printf("Enter New Price: ");
            scanf("%f",&P[i].Price);

            printf("Price Updated Successfully!\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Product not found.\n");
    }

    printf("\n===== UPDATED PRODUCT RECORD =====\n");

    for(int i=0;i<n;i++)
    {
        printf("\nProduct ID   : %d",P[i].Product_ID);
        printf("\nProduct Name : %s",P[i].Product_Name);
        printf("\nPrice        : %.2f",P[i].Price);
        printf("\nQuantity     : %d\n",P[i].Quantity);
    }

    return 0;
}