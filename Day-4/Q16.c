#include<stdio.h>
int main()
{
    int n,temp,r,sum;

    printf("Armstrong between number 1 and 1000 are:\n");

    for(n=1;n<=1000;n++)
    {
        temp=n;
        sum=0;

        while(temp!=0)
        {
            r=temp%10;
            sum=sum+r*r*r;
            temp=temp/10;
        }

        if(sum==n)
        {
            printf("%d ",n);
        }
    }
    return 0;

}