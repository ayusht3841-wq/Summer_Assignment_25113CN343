//Write a program to intersection of arrays.
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

    for(int i=0;i<n;i++)
    {
        int found=0;
        int duplicate=0;

        //Check if a[i] exist in second array
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                found=1;
                break;
            }
        }

        //Check if a[i] already appears before
        for(int k=0;k<i;k++)
        {
            if(a[i]==a[k])
            {
                duplicate=1;
                break;
            }
        }

        if(found==1 && duplicate==0)
        {
            printf("%d ",a[i]);
        }
    }
    
    return 0;
}