#include<stdio.h>
int main()
{
    int a,b,LCM;

    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        LCM=a;
    }
    else
    {
        LCM=b;
    }

    while(1)
    {
        if(LCM%a==0 && LCM%b==0)
        {
            printf("\n LCM of %d and %d is: %d",a,b,LCM);
            break;
        }
        LCM++;
    }

    return 0;
}