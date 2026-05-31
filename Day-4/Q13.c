#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;

    printf("Enter the number of terms: ");
    scanf("%d",&n);

    printf("%d ",a);
    printf("%d ",b);

    for(int i=3;i<=n;i++) // i=3 as 1st term is 0 and 2nd term is 1
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}