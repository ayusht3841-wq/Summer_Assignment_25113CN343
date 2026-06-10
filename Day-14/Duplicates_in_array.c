//Write a program to find duplicates in array.
#include<stdio.h>
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

    printf("Duplicates elements are:\n");

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d\n",a[i]);
                break;
            }
        }
        
    }

    return 0;
}