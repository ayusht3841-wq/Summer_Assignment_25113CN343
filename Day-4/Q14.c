#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;

    printf("Enter the number: ");
    scanf("%d",&n);

    if(n==1)
    {
        printf("Nth term is: %d",a);
    }

    else if (n==2)
    {
        printf("Nth term is: %d",b);
    }
    
    else
    {
        for(int i=3;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        printf("Nth term is: %d",c);
    }
    return 0;
}