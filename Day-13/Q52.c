//Write a program to count even and odd elements.
#include<stdio.h>
int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter the elements: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int count_even=0;
    int count_odd=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            count_even++;
        }

        if(a[i]%2!=0)
        {
            count_odd++;
        }
    }

    printf("Even count of elements: %d\n",count_even);
    printf("Odd count of elements: %d",count_odd);

    return 0;
}