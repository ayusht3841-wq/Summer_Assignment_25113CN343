#include<stdio.h>
int main()
{
    int n,sum=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(n%i==0 && i!=n)
        {
            sum=sum+i;
        }
    }

    if(sum==n)
    {
        printf("Perfect number");
    }

    else
    {
        printf("Not a perfect number");
    }
    return 0;
}