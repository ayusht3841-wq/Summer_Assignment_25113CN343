#include<stdio.h>
int main()
{
    int n,x,result=1;

    printf("Enter the value of x and n: ");
    scanf("%d%d",&x,&n);

    for(int i=1;i<=n;i++)
    {
        result=result*x;
    }

    printf("%d",result);

    return 0;
}