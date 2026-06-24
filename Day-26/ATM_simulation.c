// Write a program to create ATM simulation.
#include<stdio.h>
int main()
{
    printf("=====ATM MENU=====\n");

    printf("1.Check Balance\n");
    printf("2.Deposit Money\n");
    printf("3.Withdraw Money\n");
    printf("4.Exit\n");

    int option;

    printf("Please Enter your option: ");
    scanf("%d",&option);

    int pin=4486;
    int balance=10000;
    int amount;

    if(option==1)
    {
        printf("Enter ATM pin: ");
        scanf("%d",&pin);

        printf("Current Balance:%d",balance);
    }

    else if(option==2)
    {
        printf("Enter ATM pin: ");
        scanf("%d",&pin);

        printf("Enter amount to deposit: ");
        scanf("%d",&amount);

        if(amount>=0)
        {
            balance=balance+amount;
            printf("New balance:%d",balance);
        }
    }

    else if(option==3)
    {
        printf("Enter ATM pin: ");
        scanf("%d",&pin);

        printf("Enter amount to withdraw: ");
        scanf("%d",&amount);

        if(amount<=balance && amount>=0)
        {
            balance=balance-amount;
            printf("New balance:%d",balance);
        }

        else
        {
            printf("Insufficient balance");
        }

    }

    else if(option==4)
    {
        printf("Thank you for using ATM");
        return 0;
    }

    return 0;
}