//Write a program to find pair with given sum.
#include<stdio.h>
int main()
{
    int n,found=0; 

    printf("Enter the number: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements of array: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int key;

    printf("Enter the number whose sum pair is to be find: ");
    scanf("%d",&key);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==key)
            {
                printf("(%d,%d)",a[i],a[j]);
                found=1;
            }
        }
    }

    if(found==0)
    {
        printf("No pair found");
    }

    return 0;
}