//Write a program to write function for perfect number.
#include<stdio.h>

int perfect(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0 && i!=n)
        {
            sum=sum+i;
        }
    }

    if(sum==n)
        {
            return 1;
        }

    return 0;
}
int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    if(perfect(n))
    {
        printf("Perfect number");
    }

    else
    {
        printf("Not a perfect number");
    }

    return 0;
}