#include<stdio.h>
int main()
{
    int n1,n2,GCD;
    printf("Enter the first number: ");
    scanf("%d",&n1);

    printf("Enter the second number: ");
    scanf("%d",&n2);

    for(int i=1;i<=n1 && i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            GCD=i;
        }
    }
    printf("GCD of two numbers is: %d",GCD);

    return 0;
}