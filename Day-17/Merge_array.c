//Write a program to merge arrays.
#include<stdio.h>
int main()
{
    int n;

    printf("Enter size of the array: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter the First array elements: ");

    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int b[n];

    printf("Enter the Second array elements: ");

    for (int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }

    int c[2*n];

    int k=0;

    //Copy first array

    for(int i=0;i<n;i++)
    {
        c[k]=a[i];
        k++;
    }

    //Copy Second array

    for(int i=0;i<n;i++)
    {
        c[k]=b[i];
        k++;
    }
    
    printf("Array after merging arrays:\n");

    for (int i=0;i<2*n;i++)
    {
        printf("%d ",c[i]);
    }

    return 0;
}