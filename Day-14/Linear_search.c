//Write a program to linear search.
#include<stdio.h>
int main()
{
    int n,flag=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter the array elements: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

     int key;

    printf("Enter the Element to search: ");
    scanf("%d",&key);


    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("Element found at Position: %d",i+1);
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        printf("Element not found");
    }

    return 0;
}