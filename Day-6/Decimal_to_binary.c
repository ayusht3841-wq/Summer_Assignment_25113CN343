#include<stdio.h>
int main()
{
    int n,binary=0,rem,place=1;

    printf("Enter the number: ");
    scanf("%d",&n);

    while(n>0)
    {
        rem=n%2;
        binary=binary+rem*place;
        place=place*10;
        n=n/2;
    }

    printf("Binary=%d",binary);

    return 0;
}