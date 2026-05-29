#include<stdio.h>
int main()
{
    int n,rev=0,r;
    printf("Enter the number to be reversed: ");
    scanf("%d",&n);
    while (n!=0)
    {
        r=n%10;
        rev=r+10*rev;
        n=n/10;
    }
    printf("Reverse is: %d",rev);
    return 0;
}