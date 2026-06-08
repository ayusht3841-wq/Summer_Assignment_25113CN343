//Write a program to write function for Armstrong.
#include<stdio.h>

int power(int x,int n)
{
    int result=1;
    for(int i=1;i<=n;i++)
    {
        result=result*x;
    }
    
    return result;

}
int main()
{
    int n, r,sum=0,temp,temp1,count=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    temp=n;
    while(temp!=0)
    {
        count++;
        temp=temp/10;
    }

    temp1=n;
    while (temp1!=0)
    {
        r=temp1%10;
        sum=sum+power(r,count);
        temp1=temp1/10;
    }

    if(sum==n)
    {
        printf("Armstrong number");
    }
    
    else
    {
        printf("Not Armstrong number");
    }

    return 0;
} 