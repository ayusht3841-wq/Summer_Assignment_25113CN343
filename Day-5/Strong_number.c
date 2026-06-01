#include<stdio.h>

int fact(int n)
{
    int factorial=1;

    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}

int main()
{
    int n,temp,r,sum=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    temp=n;

    while(temp!=0)
    {
        r=temp%10; //Here r is to find digit of the given number.
        sum=sum+fact(r);
        temp=temp/10;
    }

    if(sum==n)
    {
        printf("Strong number");
    }

    else
    {
        printf("Not a strong number");
    }

    return 0;
}