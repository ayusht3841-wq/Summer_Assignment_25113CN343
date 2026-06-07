//Write a program to write function to check prime.
#include<stdio.h>

int isprime(int n)
{
    if(n<=1)
    {
        return 0;// Means not prime for this code
    }

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }

    return 1;//Means prime.
}
int main()
{
    int n,prime;

    printf("Enter the number: ");
    scanf("%d",&n);

    if(isprime(n))
    {
        printf("Prime number");
    }

    else
    {
        printf("Not a prime number");
    }

    return 0;
}