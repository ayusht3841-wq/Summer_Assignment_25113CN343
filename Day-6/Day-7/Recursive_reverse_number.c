#include<stdio.h>
int reverse(int n,int rev)
{
    if(n==0)
    {
        return rev;
    }

    return reverse(n/10,10*rev+n%10);

}

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    printf("Reverse=%d",reverse(n,0));

    return 0;
}