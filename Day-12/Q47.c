//Write a program to write function for Fibonacci.
#include<stdio.h>

void fab(int n)
{
    int a=0,b=1,c;

    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    fab(n);

    return 0;
}