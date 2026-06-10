//Write a program to second largest element.
#include<stdio.h>
#include<limits.h>
int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter the array elements: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int max=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }

    int smax=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(smax<a[i] && a[i]!=max)
        {
            smax=a[i];
        }
    }

    printf("Second largest element is: %d",smax);

    return 0;
}