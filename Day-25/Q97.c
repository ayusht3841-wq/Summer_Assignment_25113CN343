// Write a program to Merge two sorted arrays.
#include<stdio.h>
int main()
{
    int n;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the First array elements: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int brr[n];

    printf("Enter the Second array elements: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&brr[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(brr[j]>brr[j+1])
            {
                int temp=brr[j];
                brr[j]=brr[j+1];
                brr[j+1]=temp;
            }
        }
    }

    int crr[2*n];
    int i=0;
    int j=0;
    int k=0;

    while(i<n && j<n)
    {
        if(arr[i]<brr[j])
        {
            crr[k]=arr[i];
            i++;
        }

        else
        {
            crr[k]=brr[j];
            j++;
        }
        k++;
    }

    while(i<n)
    {
        crr[k]=arr[i];
        i++;
        k++;
    }

    while(j<n)
    {
        crr[k]=brr[j];
        j++;
        k++;
    }
    
    printf("Merged sorted array: ");

    for(int i=0;i<2*n;i++)
    {
        printf("%d ",crr[i]);
    }

    return 0;
}