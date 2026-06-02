#include<stdio.h>
int main()
{
    int n,count=0,rem;

    printf("Enter a number: ");
    scanf("%d",&n);

    while(n>0)
    {
        rem=n%2;

        if(rem==1)
        {
            count++;
        }

        n=n/2;
    }

    printf("Number of set bits=%d",count);
    
    return 0;
}