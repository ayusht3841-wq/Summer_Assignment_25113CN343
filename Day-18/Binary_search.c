//Write a program to binary search.
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

    int target;

    printf("Enter the element to be searched: ");
    scanf("%d",&target);

    int low=0;
    int high=n-1;
    int found=0;

    while(low<=high) //Binary search works only for sorted arrays.
    {
        int mid=(low+high)/2;

        if(target==a[mid])
        {
            found=1;
            printf("Element found at %d position",mid+1);
            break;
        }

        else if(target>a[mid])
        {
            low=mid+1;
        }

        else if(target<a[mid])
        {
            high=mid-1;
        }
    }

    if(found==0)
    {
        printf("Element not found");
    }

    return 0;
}