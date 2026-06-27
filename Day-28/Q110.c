// Write a program to create bank account system.
#include<stdio.h>

struct BANK
{
    int Account_Number;
    char Account_Holder_Name[50];       
    float Balance;
};

int main()
{
    int n;

    printf("Enter Number of Accounts:");
    scanf("%d",&n);

    struct BANK B[n];
    

    for(int i=0;i<n;i++)
    {
        printf("\nAccount %d\n",i+1);

        printf("Enter Account Number: ");
        scanf("%d",&B[i].Account_Number);

        printf("Enter Account holder Name: ");
        scanf(" %[^\n]",B[i].Account_Holder_Name);
        
        printf("Enter Balance: ");
        scanf("%f",&B[i].Balance);
    }

    printf("\n=====ACCOUNTS RECORD=====\n");

    for(int i=0;i<n;i++)
    {
        printf("\nAccount Number: %d",B[i].Account_Number);
        printf("\nAccount Holder Name: %s",B[i].Account_Holder_Name);
        printf("\nBalance: %.2f",B[i].Balance);
    }

    int searchno;
    int found=0;

    printf("\nEnter Account Number to be searched: ");
    scanf("%d",&searchno);

    for(int i=0;i<n;i++)
    {
        if(B[i].Account_Number==searchno)
        {
            printf("\nAccount found!\n");
            printf("\nAccount Holder Name: %s",B[i].Account_Holder_Name);
            printf("\nBalance: %.2f",B[i].Balance);
            found=1;
            break;
        }
    }

    if(found==0)
    {
        printf("Account not found.\n");
    }

    int depositAcc;
    float depositAmount;

    printf("\nEnter Account Number to deposit money: ");
    scanf("%d", &depositAcc);

    found = 0;

    for(int i = 0; i < n; i++)
    {
        if(B[i].Account_Number == depositAcc)
        {
            printf("Enter Deposit Amount: ");
            scanf("%f", &depositAmount);

            B[i].Balance += depositAmount;

            printf("Deposit Successful!\n");
            printf("Updated Balance: %.2f\n", B[i].Balance);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Account not found.\n");
    }

    // Withdraw
    int withdrawAcc;
    float withdrawAmount;

    printf("\nEnter Account Number to withdraw money: ");
    scanf("%d", &withdrawAcc);

    found = 0;

    for(int i = 0; i < n; i++)
    {
        if(B[i].Account_Number == withdrawAcc)
        {
            printf("Enter Withdraw Amount: ");
            scanf("%f", &withdrawAmount);

            if(withdrawAmount <= B[i].Balance)
            {
                B[i].Balance -= withdrawAmount;

                printf("Withdrawal Successful!\n");
                printf("Remaining Balance: %.2f\n", B[i].Balance);
            }
            else
            {
                printf("Insufficient Balance!\n");
            }

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Account not found.\n");
    }

    return 0;
}                                             