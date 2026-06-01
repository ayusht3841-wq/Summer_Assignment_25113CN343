#include<stdio.h>
int main()
{
    int n,largest=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=2;i<=n;i++)
    {
        if(n%i==0)//i is a facor
    {

        int count=0;

        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }

        if(count==2)// i is prime
        {
            largest=i;
        }
    }
    }

    printf("Largest prime factor= %d",largest);
    return 0;
}