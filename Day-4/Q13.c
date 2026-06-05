#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;

    printf("Enter the number of terms: ");
    scanf("%d",&n);
    

    if(n>=1)
    {
        printf("%d",a);
    }
    if(n>=2)
    {
        printf("%d",b);
    }

    for(int i=3;i<=n;i++) // i=3 as 1st term is 0 and 2nd term is 1
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}
