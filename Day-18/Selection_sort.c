//Write a program to selection sort.
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


    for(int i=0;i<n-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[minindex]>a[j])
            {
                minindex=j;
            }
        }

        int temp=a[i];
        a[i]=a[minindex];
        a[minindex]=temp;
    }

    printf("Sorted array is: ");

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}