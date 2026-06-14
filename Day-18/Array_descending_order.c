// Write a program to sort array in descending order.
#include<stdio.h>
int main()
{
    int n;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter the array elements: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("Sorted array in descending order is: ");

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}