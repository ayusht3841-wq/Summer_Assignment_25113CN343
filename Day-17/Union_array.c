//Write a program to Union of arrays.
#include<stdio.h>
int main()
{
    int n;

    printf("Enter the size of array: ");
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

    //Print unique elements of first array
    for(int i=0;i<n;i++)
    {
        int duplicate=0;
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

    //Print unique elements of second array
    for(int i=0;i<n;i++)
    {
        int duplicate=0;

        //Check in first array
        for(int j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                duplicate=1;
                break;
            }

        }

        //Check previous elements of second array

        if(duplicate==0)
        {
            for(int j=0;j<i;j++)
        {
            if(b[i]==b[j])
            {
                duplicate=1;
                break;
            }
        }
        }

        if(duplicate==0)
        {
            printf("%d ",b[i]);
        }
    }
    
    return 0;
}
    
