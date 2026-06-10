//Write a program to Frequency of an element.
#include<stdio.h>
int main()
{
    int n,count=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter the array elements: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int key;

    printf("Enter the element whose frequency is to be found: ");
    scanf("%d",&key);

    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            count++;
        }
    }

    if(count==0)
    {
        printf("Element not found");
    }
    
    else
    {
    printf("Frequency of the element is: %d",count);
    }
    
    return 0;
}