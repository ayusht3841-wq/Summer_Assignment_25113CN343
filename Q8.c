#include<stdio.h>
int main()
{
    int n,rev=0,r,original;
    printf("Enter the number: ");
    scanf("%d",&n);
    original=n;
    while (n!=0)
    {
        r=n%10;
        rev=r+10*rev;
        n=n/10;
    }
    if(original==rev)
    {
        printf("%d is a palindrome\n",original);
    }
    else
    {
        printf("%d is not a palindrome",original);
    }
    return 0;
    
}