#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter the number whose factorial is to be found: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}