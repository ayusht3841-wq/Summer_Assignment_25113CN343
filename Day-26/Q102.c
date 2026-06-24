// Write a program to create voting eligibility system.
#include<stdio.h>
int main()
{
    char name[100];

    printf("Enter your name: ");
    scanf("%s",name);

    int age;

    printf("Enter your age: ");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("%s you are eligible for voting",name);
    }

    else
    {
        printf("%s you are not eligible for voting",name);
    }

    return 0;
}