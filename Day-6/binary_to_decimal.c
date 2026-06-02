#include<stdio.h>
int main()
{
    int n,rem,decimal=0,place=1;

    printf("Enter the number: ");
    scanf("%d",&n);

    while(n>0)
    {
        rem=n%10;
        decimal=decimal+rem*place;
        place=place*2;
        n=n/10;
    }

    printf("Decimal=%d",decimal);
    return 0;
}