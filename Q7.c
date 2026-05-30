#include<stdio.h>
int main()
{
    int n,pro=1,r;
    printf("Enter the number: ");
    scanf("%d",&n);
    while (n!=0)
    {
        r=n%10;
        pro=pro*r;
        n=n/10;
    }
    printf("Product of digits is: %d",pro);
    return 0;
    
}