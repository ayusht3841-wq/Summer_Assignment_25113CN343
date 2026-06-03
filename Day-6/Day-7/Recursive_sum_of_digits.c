#include<stdio.h>
int sod(int n)
{
    if(n<10)
    {
        return n;
    }

    return (n%10)+sod(n/10);
}

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    printf("sum of digits=%d",sod(n));

    return 0;
}