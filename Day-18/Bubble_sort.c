//Write a program to Bubble sort.
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


    for(int i=0;i<n-1;i++) //n-1 passes are needed.
    {
        for(int j=0;j<n-1-i;j++) //n-1-i as largest element fixed at the end.
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("Sorted array is: ");

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}