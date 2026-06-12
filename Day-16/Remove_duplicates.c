//Write a program to remove duplicates from array.
#include<stdio.h>
int main()
{
    int n,duplicate; 

    printf("Enter the number: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements of array: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Array after removing duplicates: ");

    for(int i=0;i<n;i++)
    {
        duplicate=0;
        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                duplicate=1;
                break;
            }
        }

        if(duplicate==0)
        {
            printf("%d ",a[i]);
        }
    }

    return 0;
}