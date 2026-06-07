//Write a program to write function to find factorial.
#include<stdio.h>

int fact(int n)
{
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    if(n==0)
    {
        return 1;
    }
    return factorial;
}
int main()
{
    int n,factorial;

    printf("Enter the number: ");
    scanf("%d",&n);

    factorial=fact(n);
    printf(" factorial of given number is: %d",factorial);

    return 0;
}