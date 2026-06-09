//write a program to input and display array.
#include<stdio.h>
int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    int arr[n];
    printf("Element of first array: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}