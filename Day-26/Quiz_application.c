// Write a program to create quiz application.
#include<stdio.h>
int main()
{
    int option;
    int score=0;

    printf("===WELCOME TO QUIZ===\n");
    printf("Q1.What is the capital of India?\n1.Mumbai\n2.Delhi\n3.Chennai\n4.Kolkata\n");
    printf("Enter your option:");
    scanf("%d",&option);

    if(option==2)
    {
        printf("correct\n");
        score++;
    }

    else
    {
        printf("Wrong\n");
    }

    printf("Q2.Who developed C?\n1.Dennis Ritchie\n2.James Gosling\n3.Guido van Rossum\n4.Bjarne Stroustrup\n");
    printf("Enter your option:");
    scanf("%d",&option);

    if(option==3)
    {
        printf("Correct\n");
        score++;
    }

    else
    {
        printf("Wrong\n");
    }

    printf("Q3.77+23=?\n1.45\n2.89\n3.100\n4.121\n");
    printf("Enter your option:");
    scanf("%d",&option);

    if(option==3)
    {
        printf("Correct\n");
        score++;
    }

    else
    {
        printf("Wrong\n");
    }

    printf("Q4.Which planet is known as the Red Planet?\n1.Earth\n2.Mars\n3.Jupiter\n4.Venus\n");
    printf("Enter your option:");
    scanf("%d",&option);

    if(option==2)
    {
        printf("correct\n");
        score++;
    }

    else
    {
        printf("Wrong\n");
    }

    printf("Q5.How many days are there in a leap year?\n1.364\n2.365\n3.366\n4.367\n");
    printf("Enter your option:");
    scanf("%d",&option);

    if(option==3)
    {
        printf("correct\n");
        score++;
    }

    else
    {
        printf("Wrong\n");
    }

    printf("\nYour score is:%d",score);

    if(score==5)
    {
        printf("Excellent");
    }

    else if(score==4)
    {
        printf("Very good");
    }

    else if(score==3)
    {
        printf("Good");
    }

    else
    {
        printf("Better Luck next time");
    }

    return 0;
}