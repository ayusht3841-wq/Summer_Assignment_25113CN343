#include<stdio.h>
int main()
{
    int n,temp,r,sum=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    temp=n; // We did this because after performing n/10 operation multiple times n would be finally equal to zero. And we would not able to check whether the no. is armstron or not. 
    
    
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }

    if(sum==n)
    {
        printf("Armstrong number");
    }

    else
    {
        printf("Not an armstrong number");
    }

    return 0;

}