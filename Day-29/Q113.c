// Write a program to create menu-driven calculator.
#include<stdio.h>

int main()
{
    int choice = 0;
    float num1, num2;

    while(choice != 5)
    {
        printf("\n===== MENU DRIVEN CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 4)
        {
            printf("Enter first number: ");
            scanf("%f", &num1);

            printf("Enter second number: ");
            scanf("%f", &num2);
        }

        if(choice == 1)
        {
            printf("Result = %.2f\n", num1 + num2);
        }
        else if(choice == 2)
        {
            printf("Result = %.2f\n", num1 - num2);
        }
        else if(choice == 3)
        {
            printf("Result = %.2f\n", num1 * num2);
        }
        else if(choice == 4)
        {
            if(num2 != 0)
            {
                printf("Result = %.2f\n", num1 / num2);
            }
            else
            {
                printf("Division by zero is not allowed.\n");
            }
        }
        else if(choice == 5)
        {
            printf("Thank you for using the calculator!\n");
        }
        else
        {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}