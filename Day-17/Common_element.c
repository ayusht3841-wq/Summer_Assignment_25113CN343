//Write a program to find common elements.
#include<stdio.h>
int main()
{
    int n;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter the elements of the first array: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int b[n];

    printf("Enter the elements of second array: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }

    printf("Common elements are:\n");

    for(int i=0;i<n;i++)
    {
        int found=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                found=1;
                break;
            }
        }

        if(found==1)
        {
            printf("%d ",a[i]);
        }
    }

    return 0;
}